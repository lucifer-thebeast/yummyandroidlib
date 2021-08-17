package me.about.ronillo.recipeapp.sharedRecipeFramework.entity

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import me.about.ronillo.recipeapp.sharedRecipeFramework.Parcelable

@Serializable
data class Recipes(
    @SerialName("feed")
    val feed: List<Feed> = listOf()
) : Parcelable

@Serializable
data class Feed(
    @SerialName("content")
    val content: Content = Content(),
    @SerialName("display")
    val display: DisplayX = DisplayX(),
    val recipeType: List<String> = listOf(),
    val type: String = ""
) : Parcelable

@Serializable
data class SeoX(
    @SerialName("firebase")
    val firebase: FirebaseX = FirebaseX(),
    @SerialName("spotlightSearch")
    val spotlightSearch: SpotlightSearchX = SpotlightSearchX(),
    @SerialName("web")
    val web: WebX = WebX()
) :Parcelable

@Serializable
data class Content(
    @SerialName("description")
    val description: Description? = null,
    @SerialName("details")
    val details: Details = Details(),
    @SerialName("ingredientLines")
    val ingredientLines: List<IngredientLineX> = listOf(),
    @SerialName("nutrition")
    val nutrition: Nutrition = Nutrition(),
    @SerialName("videos")
    val videos: Videos = Videos(),
) : Parcelable

@Serializable
data class DisplayX(
    @SerialName("displayName")
    val displayName: String = "",
    @SerialName("flag")
    val flag: String = "",
    @SerialName("images")
    val images: List<String> = listOf(),
) : Parcelable

@Serializable
data class Seo(
    @SerialName("firebase")
    val firebase: Firebase = Firebase(),
    @SerialName("spotlightSearch")
    val spotlightSearch: SpotlightSearch = SpotlightSearch(),
    @SerialName("web")
    val web: Web = Web()
) :Parcelable

@Serializable
data class Description(
    @SerialName("mobileSectionName")
    val mobileSectionName: String = "",
    @SerialName("shortText")
    val shortText: String? = null,
    @SerialName("text")
    val text: String = ""
) : Parcelable

@Serializable
data class Details(
    @SerialName("brand")
    val brand: String? = null,
    @SerialName("directionsUrl")
    val directionsUrl: String = "",
    @SerialName("displayName")
    val displayName: String = "",
    @SerialName("globalId")
    val globalId: String = "",
    @SerialName("id")
    val id: String = "",
    @SerialName("images")
    val images: List<Image> = listOf(),
    @SerialName("keywords")
    val keywords: List<String> = listOf(),
    @SerialName("name")
    val name: String = "",
    @SerialName("numberOfServings")
    val numberOfServings: Float = 0f,
    @SerialName("recipeId")
    val recipeId: String = "",
    @SerialName("totalTime")
    val totalTime: String = "",
) : Parcelable

@Serializable
data class GuidedVariation(
    @SerialName("actions")
    val actions: List<Action> = listOf(),
    @SerialName("applianceUnitTypeCode")
    val applianceUnitTypeCode: String = "",
    @SerialName("connected")
    val connected: Boolean = false,
    @SerialName("default")
    val default: Boolean = false,
    @SerialName("id")
    val id: String = "",
) : Parcelable

@Serializable
data class IngredientLineX(
    @SerialName("category")
    val category: String = "",
    @SerialName("wholeLine")
    val wholeLine: String = ""
) : Parcelable

@Serializable
data class MoreContent(
    @SerialName("mobileSectionName")
    val mobileSectionName: String = "",
    @SerialName("queryParams")
    val queryParams: QueryParams = QueryParams()
) : Parcelable

@Serializable
data class Nutrition(
    @SerialName("mobileSectionName")
    val mobileSectionName: String = "",
    @SerialName("nutritionEstimates")
    val nutritionEstimates: List<NutritionEstimate> = listOf()
) : Parcelable

@Serializable
data class RelatedContent(
    @SerialName("mobileSectionName")
    val mobileSectionName: String = "",
    @SerialName("queryParams")
    val queryParams: QueryParamsX = QueryParamsX()
) : Parcelable

@Serializable
data class RelatedProducts(
    @SerialName("mobileSectionName")
    val mobileSectionName: String = "",
    @SerialName("queryParams")
    val queryParams: QueryParamsXX = QueryParamsXX()
) : Parcelable

@Serializable
data class Reviews(
    @SerialName("averageRating")
    val averageRating: Double = 0.0,
    @SerialName("mobileSectionName")
    val mobileSectionName: String = "",
    @SerialName("sortBy")
    val sortBy: String = "",
    @SerialName("totalReviewCount")
    val totalReviewCount: Float = 0f
) : Parcelable

@Serializable
data class Tags(
    @SerialName("course")
    val course: List<Course> = listOf(),
    @SerialName("cuisine")
    val cuisine: List<Cuisine> = listOf(),
    @SerialName("difficulty")
    val difficulty: List<Difficulty> = listOf(),
    @SerialName("dish")
    val dish: List<Dish> = listOf(),
    @SerialName("nutrition")
    val nutrition: List<NutritionX> = listOf(),
    @SerialName("technique")
    val technique: List<Technique> = listOf()
) : Parcelable

@Serializable
data class TagsAds(
    @SerialName("adtag")
    val adtag: List<Adtag> = listOf()
) : Parcelable

@Serializable
data class Videos(
    @SerialName("createTime")
    val createTime: String = "",
    @SerialName("originalVideoUrl")
    val originalVideoUrl: String = "",
    @SerialName("snapshotUrl")
    val snapshotUrl: String = "",
    @SerialName("videoDetails")
    val videoDetails: VideoDetails = VideoDetails(),
    @SerialName("videoUrls")
    val videoUrls: VideoUrlsX = VideoUrlsX()
) : Parcelable

@Serializable
data class Yums(
    @SerialName("count")
    val count: Float = 0f,
    @SerialName("this-user")
    val thisUser: String = ""
) : Parcelable

@Serializable
data class Attribution(
    @SerialName("html")
    val html: String = "",
    @SerialName("logo")
    val logo: String = "",
    @SerialName("text")
    val text: String = "",
    @SerialName("url")
    val url: String = ""
) : Parcelable

@Serializable
data class Image(
    @SerialName("hostedLargeUrl")
    val hostedLargeUrl: String = "",
    @SerialName("resizableImageHeight")
    val resizableImageHeight: Float = 0f,
    @SerialName("resizableImageUrl")
    val resizableImageUrl: String = "",
    @SerialName("resizableImageWidth")
    val resizableImageWidth: Float = 0f
) : Parcelable

@Serializable
data class Action(
    @SerialName("name")
    val name: String = "",
    @SerialName("stepGroups")
    val stepGroups: List<StepGroup> = listOf()
) : Parcelable

@Serializable
data class StepGroup(
    @SerialName("steps")
    val steps: List<Step> = listOf()
) : Parcelable

@Serializable
data class Step(
    @SerialName("displayText")
    val displayText: String = "",
    @SerialName("equipment")
    val equipment: List<Equipment> = listOf(),
    @SerialName("imageUrl")
    val imageUrl: String = "",
    @SerialName("ingredientLines")
    val ingredientLines: List<IngredientLine> = listOf(),
    @SerialName("prerequisiteEvents")
    val prerequisiteEvents: List<PrerequisiteEvent> = listOf(),
    @SerialName("timers")
    val timers: List<Timer> = listOf(),
    @SerialName("tip")
    val tip: String = "",
    @SerialName("video")
    val video: Video = Video()
) : Parcelable

@Serializable
data class Equipment(
    @SerialName("id")
    val id: String = "",
    @SerialName("name")
    val name: String = ""
) : Parcelable

@Serializable
data class IngredientLine(
    @SerialName("amount")
    val amount: Amount = Amount(),
    @SerialName("category")
    val category: String = "",
    @SerialName("ingredient")
    val ingredient: String = "",
    @SerialName("ingredientId")
    val ingredientId: String = "",
    @SerialName("remainder")
    val remainder: String = "",
    @SerialName("sortOrder")
    val sortOrder: Float = 0f
) : Parcelable

@Serializable
data class PrerequisiteEvent(
    @SerialName("mappingNotificationId")
    val mappingNotificationId: String = "",
    @SerialName("message")
    val message: String = "",
    @SerialName("priority")
    val priority: String = "",
    @SerialName("type")
    val type: String = ""
) : Parcelable

@Serializable
data class Timer(
    @SerialName("durationSeconds")
    val durationSeconds: Float = 0f,
    @SerialName("finishMessage")
    val finishMessage: String = "",
    @SerialName("id")
    val id: String = "",
    @SerialName("mappingNotificationId")
    val mappingNotificationId: String = "",
    @SerialName("maxRepeat")
    val maxRepeat: Float = 0f,
    @SerialName("priority")
    val priority: String = "",
    @SerialName("repeatable")
    val repeatable: Boolean = false,
    @SerialName("timerName")
    val timerName: String = ""
) : Parcelable

@Serializable
data class Video(
    @SerialName("createTime")
    val createTime: String = "",
    @SerialName("hasAudio")
    val hasAudio: Boolean = false,
    @SerialName("originalVideoUrl")
    val originalVideoUrl: String = "",
    @SerialName("snapshotUrl")
    val snapshotUrl: String = "",
    @SerialName("videoTypeCode")
    val videoTypeCode: String = "",
    @SerialName("videoUrls")
    val videoUrls: VideoUrls = VideoUrls()
) : Parcelable

@Serializable
data class Amount(
    @SerialName("imperial")
    val imperial: Imperial = Imperial(),
    @SerialName("metric")
    val metric: Metric = Metric()
) : Parcelable

@Serializable
data class Imperial(
    @SerialName("quantity")
    val quantity: Float = 0f,
    @SerialName("unit")
    val unit: Unit = Unit()
) : Parcelable

@Serializable
data class Metric(
    @SerialName("quantity")
    val quantity: Float = 0f,
    @SerialName("unit")
    val unit: UnitX = UnitX()
) : Parcelable

@Serializable
data class Unit(
    @SerialName("abbreviation")
    val abbreviation: String = "",
    @SerialName("decimal")
    val decimal: Boolean = false,
    @SerialName("id")
    val id: String = "",
    @SerialName("kind")
    val kind: String = "",
    @SerialName("name")
    val name: String = "",
    @SerialName("plural")
    val plural: String = "",
    @SerialName("round?")
    val round: Boolean = false
) : Parcelable

@Serializable
data class UnitX(
    @SerialName("abbreviation")
    val abbreviation: String = "",
    @SerialName("decimal")
    val decimal: Boolean = false,
    @SerialName("id")
    val id: String = "",
    @SerialName("kind")
    val kind: String = "",
    @SerialName("name")
    val name: String = "",
    @SerialName("plural")
    val plural: String = "",
    @SerialName("round?")
    val round: Boolean = false
) : Parcelable

@Serializable
data class VideoUrls(
    @SerialName("android")
    val android: String = "",
    @SerialName("ios")
    val ios: String = ""
) : Parcelable

@Serializable
data class AmountX(
    @SerialName("imperial")
    val imperial: ImperialX = ImperialX(),
    @SerialName("metric")
    val metric: MetricX = MetricX()
) : Parcelable

@Serializable
data class RelatedRecipeSearchTerm(
    @SerialName("allowedIngredient")
    val allowedIngredient: String = ""
) : Parcelable

@Serializable
data class ImperialX(
    @SerialName("quantity")
    val quantity: Float? = null,
    @SerialName("unit")
    val unit: UnitXX = UnitXX()
) : Parcelable

@Serializable
data class MetricX(
    @SerialName("quantity")
    val quantity: Float? = null,
    @SerialName("unit")
    val unit: UnitXXX = UnitXXX()
) : Parcelable

@Serializable
data class UnitXX(
    @SerialName("abbreviation")
    val abbreviation: String = "",
    @SerialName("decimal")
    val decimal: Boolean = false,
    @SerialName("id")
    val id: String = "",
    @SerialName("kind")
    val kind: String = "",
    @SerialName("name")
    val name: String = "",
    @SerialName("plural")
    val plural: String = "",
    @SerialName("pluralAbbreviation")
    val pluralAbbreviation: String = ""
) : Parcelable

@Serializable
data class UnitXXX(
    @SerialName("abbreviation")
    val abbreviation: String = "",
    @SerialName("decimal")
    val decimal: Boolean = false,
    @SerialName("id")
    val id: String = "",
    @SerialName("kind")
    val kind: String = "",
    @SerialName("name")
    val name: String = "",
    @SerialName("plural")
    val plural: String = "",
    @SerialName("pluralAbbreviation")
    val pluralAbbreviation: String = ""
) : Parcelable

@Serializable
data class QueryParams(
    @SerialName("apiFeedType")
    val apiFeedType: String = "",
    @SerialName("authorId")
    val authorId: String = "",
    @SerialName("id")
    val id: String = "",
    @SerialName("start")
    val start: Float = 0f
) : Parcelable

@Serializable
data class NutritionEstimate(
    @SerialName("attribute")
    val attribute: String = "",
    @SerialName("display")
    val display: Display = Display(),
    @SerialName("unit")
    val unit: UnitXXXX = UnitXXXX(),
) : Parcelable

@Serializable
data class Display(
    @SerialName("percentDailyValue")
    val percentDailyValue: String? = null,
    @SerialName("unit")
    val unit: String? = null,
    @SerialName("value")
    val value: String? = null
) : Parcelable

@Serializable
data class UnitXXXX(
    @SerialName("name")
    val name: String = ""
) : Parcelable

@Serializable
data class QueryParamsX(
    @SerialName("apiFeedType")
    val apiFeedType: String = "",
    @SerialName("id")
    val id: String = "",
    @SerialName("start")
    val start: Float = 0f
) : Parcelable

@Serializable
data class QueryParamsXX(
    @SerialName("apiFeedType")
    val apiFeedType: String = "",
    @SerialName("id")
    val id: String = "",
    @SerialName("relatedContentType")
    val relatedContentType: String = "",
    @SerialName("start")
    val start: Float = 0f
) : Parcelable

@Serializable
data class Course(
    @SerialName("display-name")
    val displayName: String = "",
    @SerialName("tag-url")
    val tagUrl: String = ""
) : Parcelable

@Serializable
data class Cuisine(
    @SerialName("display-name")
    val displayName: String = "",
    @SerialName("tag-url")
    val tagUrl: String = ""
) : Parcelable

@Serializable
data class Difficulty(
    @SerialName("display-name")
    val displayName: String = "",
    @SerialName("tag-url")
    val tagUrl: String = ""
) : Parcelable

@Serializable
data class Dish(
    @SerialName("display-name")
    val displayName: String = "",
    @SerialName("tag-url")
    val tagUrl: String = ""
) : Parcelable

@Serializable
data class NutritionX(
    @SerialName("display-name")
    val displayName: String = "",
    @SerialName("tag-url")
    val tagUrl: String = ""
) : Parcelable

@Serializable
data class Technique(
    @SerialName("display-name")
    val displayName: String = "",
    @SerialName("tag-url")
    val tagUrl: String = ""
) : Parcelable

@Serializable
data class Adtag(
    @SerialName("display-name")
    val displayName: String = "",
    @SerialName("tag-url")
    val tagUrl: String = ""
) : Parcelable

@Serializable
data class VideoDetails(
    @SerialName("android")
    val android: List<Android> = listOf(),
    @SerialName("ios")
    val ios: List<Io> = listOf()
) : Parcelable

@Serializable
data class VideoUrlsX(
    @SerialName("android")
    val android: String = "",
    @SerialName("ios")
    val ios: String = ""
) : Parcelable

@Serializable
data class Android(
    @SerialName("hasAudio")
    val hasAudio: Boolean = false,
    @SerialName("videoTypeCode")
    val videoTypeCode: String = "",
    @SerialName("videoUrl")
    val videoUrl: String = ""
) : Parcelable

@Serializable
data class Io(
    @SerialName("hasAudio")
    val hasAudio: Boolean = false,
    @SerialName("videoTypeCode")
    val videoTypeCode: String = "",
    @SerialName("videoUrl")
    val videoUrl: String = ""
) : Parcelable

@Serializable
data class Profile(
    @SerialName("description")
    val description: String? = null,
    @SerialName("displayName")
    val displayName: String = "",
    @SerialName("pageUrl")
    val pageUrl: String = "",
    @SerialName("pictureUrl")
    val pictureUrl: String = "",
    @SerialName("profileName")
    val profileName: String = "",
    @SerialName("profileUrl")
    val profileUrl: String = "",
    @SerialName("siteUrl")
    val siteUrl: String = "",
    @SerialName("type")
    val type: String = ""
) : Parcelable

@Serializable
data class Source(
    @SerialName("eyebrowText")
    val eyebrowText: String? = null,
    @SerialName("introVideo")
    val introVideo: FloatroVideo = FloatroVideo(),
    @SerialName("marketingCopy")
    val marketingCopy: String? = null,
    @SerialName("marketingImage")
    val marketingImage: String? = null,
    @SerialName("proSource")
    val proSource: String? = null,
    @SerialName("sourceDisplayName")
    val sourceDisplayName: String = "",
    @SerialName("sourceFaviconUrl")
    val sourceFaviconUrl: String? = null,
    @SerialName("sourceHttpOk")
    val sourceHttpOk: Boolean = false,
    @SerialName("sourceHttpsOk")
    val sourceHttpsOk: Boolean = false,
    @SerialName("sourceInFrame")
    val sourceInFrame: Boolean = false,
    @SerialName("sourcePageUrl")
    val sourcePageUrl: String = "",
    @SerialName("sourceRecipeUrl")
    val sourceRecipeUrl: String = "",
    @SerialName("sourceSiteUrl")
    val sourceSiteUrl: String = ""
) : Parcelable

@Serializable
data class FloatroVideo(
    @SerialName("dashUrl")
    val dashUrl: String? = null,
    @SerialName("originalUrl")
    val originalUrl: String? = null,
    @SerialName("snapshot")
    val snapshot: Snapshot = Snapshot()
) : Parcelable

@Serializable
data class Snapshot(
    @SerialName("original")
    val original: String? = null
) : Parcelable

@Serializable
data class Firebase(
    @SerialName("appUrl")
    val appUrl: String = "",
    @SerialName("description")
    val description: String = "",
    @SerialName("name")
    val name: String = "",
    @SerialName("noindex")
    val noindex: Boolean = false,
    @SerialName("webUrl")
    val webUrl: String = ""
) : Parcelable

@Serializable
data class SpotlightSearch(
    @SerialName("keywords")
    val keywords: List<String> = listOf(),
    @SerialName("noindex")
    val noindex: Boolean = false
) : Parcelable

@Serializable
data class Web(
    @SerialName("canonical-term")
    val canonicalTerm: String = "",
    @SerialName("image-url")
    val imageUrl: String = "",
    @SerialName("link-tags")
    val linkTags: List<LinkTag> = listOf(),
    @SerialName("meta-tags")
    val metaTags: MetaTags = MetaTags(),
    @SerialName("noindex")
    val noindex: Boolean = false
) : Parcelable

@Serializable
data class LinkTag(
    @SerialName("href")
    val href: String = "",
    @SerialName("hreflang")
    val hreflang: String = "",
    @SerialName("rel")
    val rel: String = ""
) : Parcelable

@Serializable
data class MetaTags(
    @SerialName("description")
    val description: String = "",
    @SerialName("title")
    val title: String = ""
) : Parcelable

@Serializable
data class FirebaseX(
    @SerialName("noindex")
    val noindex: Boolean = false
) : Parcelable

@Serializable
data class SpotlightSearchX(
    @SerialName("noindex")
    val noindex: Boolean = false
) : Parcelable

@Serializable
data class WebX(
    @SerialName("noindex")
    val noindex: Boolean = false
) : Parcelable
