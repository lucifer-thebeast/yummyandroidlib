package me.about.ronillo.recipeapp.sharedRecipeFramework.network

import io.ktor.client.*
import io.ktor.client.features.*
import io.ktor.client.request.*
import io.ktor.client.statement.*

class Api(private var rapidApiKey: String) {

    private val httpClient = HttpClient {

        install(HttpTimeout)
    }

    @Throws(Exception::class)
    suspend fun get(url: String): String {
        val response = httpClient.get<HttpResponse>(url) {
            headers {
                append("x-rapidapi-key", rapidApiKey)
                append("x-rapidapi-host", "yummly2.p.rapidapi.com")
            }
            timeout {
                requestTimeoutMillis = 5000
            }
        }
        return response.readText()
    }
}
