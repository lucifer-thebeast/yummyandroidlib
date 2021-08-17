package me.about.ronillo.recipeapp.sharedRecipeFramework.usecase

import kotlinx.serialization.decodeFromString
import kotlinx.serialization.json.Json
import me.about.ronillo.recipeapp.sharedRecipeFramework.entity.CategoryList
import me.about.ronillo.recipeapp.sharedRecipeFramework.network.Api

class GetCategoryListCommand : Command {

    private var api: Api
    private var timeout: Long

    constructor(api: Api) : this(api, 6000)

    constructor(api: Api, timeout: Long) {
        this.api = api
        this.timeout = timeout
    }

    /** Retrieves a list of categories */
    @Throws(Exception::class)
    suspend fun getCategories(): CategoryList {
        val url = "https://yummly2.p.rapidapi.com/categories/list"
        val jsonString = api.get(url, timeout)
        val json = Json {
            ignoreUnknownKeys = true
            isLenient = true
            prettyPrint = true
        }
        return json.decodeFromString(jsonString)
    }
}
