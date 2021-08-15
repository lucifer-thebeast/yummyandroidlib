package me.about.ronillo.recipeapp.sharedRecipeFramework.usecase

import kotlinx.serialization.decodeFromString
import kotlinx.serialization.json.Json
import me.about.ronillo.recipeapp.sharedRecipeFramework.entity.Recipes
import me.about.ronillo.recipeapp.sharedRecipeFramework.network.Api

class GetRecipeListCommand {

    private val api: Api = Api()

    @Throws(Exception::class)
    suspend fun getRecipes(pageStart: Int): Recipes {
        val jsonString = api.getRecipes(pageStart)
        val json = Json {
            ignoreUnknownKeys = true
            isLenient = true
            prettyPrint = true
        }
        return json.decodeFromString(jsonString)
    }
}