package me.about.ronillo.recipeapp.sharedRecipeFramework.network

import io.ktor.client.*
import io.ktor.client.features.*
import io.ktor.client.request.*
import io.ktor.client.statement.*
import me.about.ronillo.recipeapp.BuildKonfig

class Api {

    private val rapidApiKey: String = BuildKonfig.rapidApiKey

    val httpClient = HttpClient {

        install(HttpTimeout)
    }

    @Throws(Exception::class)
    suspend fun getRecipes(pageStart: Int): String {
        val response = httpClient.get<HttpResponse>(
            "https://yummly2.p.rapidapi.com/feeds/list?start=page_start&limit=18&tag=list.recipe.popular"
                .replace("page_start", pageStart.toString())
        ) {
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
