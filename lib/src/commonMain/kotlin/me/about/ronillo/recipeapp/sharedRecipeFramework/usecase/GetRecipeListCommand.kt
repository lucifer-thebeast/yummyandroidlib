package me.about.ronillo.recipeapp.sharedRecipeFramework.usecase

import kotlinx.serialization.decodeFromString
import kotlinx.serialization.json.Json
import me.about.ronillo.recipeapp.sharedRecipeFramework.entity.Recipes
import me.about.ronillo.recipeapp.sharedRecipeFramework.network.Api

class GetRecipeListCommand {

    private var api: Api
    private var timeout: Long

    constructor(api: Api) : this(api, 6000)

    constructor(api: Api, timeout: Long) {
        this.api = api
        this.timeout = timeout
    }

    @Throws(Exception::class)
    suspend fun getRecipes(pageStart: Int): Recipes {
        val url = "https://yummly2.p.rapidapi.com/feeds/list?start=page_start&limit=18&tag=list.recipe.popular"
            .replace("page_start", pageStart.toString())
        val jsonString = api.get(url, timeout)
        val json = Json {
            ignoreUnknownKeys = true
            isLenient = true
            prettyPrint = true
        }
        return json.decodeFromString(jsonString)
    }
}
