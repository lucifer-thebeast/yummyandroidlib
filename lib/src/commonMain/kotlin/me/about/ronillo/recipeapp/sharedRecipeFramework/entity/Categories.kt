package me.about.ronillo.recipeapp.sharedRecipeFramework.entity

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import me.about.ronillo.recipeapp.sharedRecipeFramework.Parcelable

@Serializable
data class CategoryList (
    @SerialName("browse-categories")
    val browseCategories: List<BrowseCategory>? = null,

    @SerialName("shopping-categories")
    val shoppingCategories: List<ShoppingCategory>? = null
) : Parcelable

@Serializable
data class BrowseCategory (
    val promoted: Boolean? = null,

    @SerialName("tracking-id")
    val trackingID: String? = null,

    val display: BrowseCategoryDisplay? = null,
    val content: CategoryContent? = null,
    val type: String? = null
) : Parcelable

@Serializable
class CategoryContent()

@Serializable
data class BrowseCategoryDisplay (
    val displayName: String? = null,
    val iconImage: String? = null,
    val categoryImage: String? = null,
    val tag: String? = null,
    val backgroundImage: String? = null,
    val categoryTopics: List<CategoryTopic>? = null
) : Parcelable

@Serializable
data class CategoryTopic (
    val promoted: Boolean? = null,

    @SerialName("tracking-id")
    val trackingID: String? = null,

    val display: CategoryTopicDisplay? = null,
    val content: CategoryContent? = null,
    val type: String? = null
) : Parcelable

@Serializable
data class CategoryTopicDisplay (
    val displayName: String? = null,
    val iconImage: String? = null,
    val tag: String? = null,
    val backgroundImage: String? = null
) : Parcelable

@Serializable
data class ShoppingCategory (
    val promoted: Boolean? = null,

    @SerialName("tracking-id")
    val trackingID: String? = null,

    val display: ShoppingCategoryDisplay? = null,
    val content: CategoryContent? = null,
    val type: String? = null
) : Parcelable

@Serializable
data class ShoppingCategoryDisplay (
    val displayName: String? = null,
    val categoryImage: String? = null,
    val tag: String? = null
) : Parcelable
