#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MYFStepGroup, MYFAction, MYFAdtag, MYFImperial, MYFMetric, MYFAmount, MYFImperialX, MYFMetricX, MYFAmountX, MYFAndroid, MYFAttribution, MYFDescription, MYFDetails, MYFIngredientLineX, MYFNutrition, MYFVideos, MYFContent, MYFCourse, MYFCuisine, MYFImage, MYFDifficulty, MYFDish, MYFDisplay, MYFDisplayX, MYFEquipment, MYFFeed, MYFFirebase, MYFFirebaseX, MYFSnapshot, MYFFloatroVideo, MYFGuidedVariation, MYFUnit, MYFUnitXX, MYFIngredientLine, MYFIo, MYFLinkTag, MYFMetaTags, MYFUnitX, MYFUnitXXX, MYFQueryParams, MYFMoreContent, MYFNutritionEstimate, MYFUnitXXXX, MYFNutritionX, MYFPrerequisiteEvent, MYFProfile, MYFQueryParamsX, MYFQueryParamsXX, MYFRecipes, MYFRelatedContent, MYFRelatedProducts, MYFRelatedRecipeSearchTerm, MYFReviews, MYFSpotlightSearch, MYFWeb, MYFSeo, MYFSpotlightSearchX, MYFWebX, MYFSeoX, MYFSource, MYFTimer, MYFVideo, MYFStep, MYFTechnique, MYFTags, MYFTagsAds, MYFVideoUrls, MYFVideoDetails, MYFVideoUrlsX, MYFYums, MYFApi, MYFKotlinThrowable, MYFKotlinArray<T>, MYFKotlinx_serialization_coreSerializersModule, MYFKotlinx_serialization_coreSerialKind, MYFKotlinNothing;

@protocol MYFParcelable, MYFKotlinx_serialization_coreKSerializer, MYFKotlinx_serialization_coreEncoder, MYFKotlinx_serialization_coreSerialDescriptor, MYFKotlinx_serialization_coreSerializationStrategy, MYFKotlinx_serialization_coreDecoder, MYFKotlinx_serialization_coreDeserializationStrategy, MYFKotlinIterator, MYFKotlinx_serialization_coreCompositeEncoder, MYFKotlinAnnotation, MYFKotlinx_serialization_coreCompositeDecoder, MYFKotlinx_serialization_coreSerializersModuleCollector, MYFKotlinKClass, MYFKotlinKDeclarationContainer, MYFKotlinKAnnotatedElement, MYFKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface MYFBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface MYFBase (MYFBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface MYFMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MYFMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorMYFKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface MYFNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface MYFByte : MYFNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface MYFUByte : MYFNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface MYFShort : MYFNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface MYFUShort : MYFNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface MYFInt : MYFNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface MYFUInt : MYFNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface MYFLong : MYFNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface MYFULong : MYFNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface MYFFloat : MYFNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface MYFDouble : MYFNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface MYFBoolean : MYFNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("Parcelable")))
@protocol MYFParcelable
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface MYFPlatform : MYFBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Api")))
@interface MYFApi : MYFBase
- (instancetype)initWithRapidApiKey:(NSString *)rapidApiKey __attribute__((swift_name("init(rapidApiKey:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUrl:(NSString *)url timeout:(int64_t)timeout completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(url:timeout:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Action")))
@interface MYFAction : MYFBase <MYFParcelable>
- (instancetype)initWithName:(NSString *)name stepGroups:(NSArray<MYFStepGroup *> *)stepGroups __attribute__((swift_name("init(name:stepGroups:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<MYFStepGroup *> *)component2 __attribute__((swift_name("component2()")));
- (MYFAction *)doCopyName:(NSString *)name stepGroups:(NSArray<MYFStepGroup *> *)stepGroups __attribute__((swift_name("doCopy(name:stepGroups:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<MYFStepGroup *> *stepGroups __attribute__((swift_name("stepGroups")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Action.Companion")))
@interface MYFActionCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Adtag")))
@interface MYFAdtag : MYFBase <MYFParcelable>
- (instancetype)initWithDisplayName:(NSString *)displayName tagUrl:(NSString *)tagUrl __attribute__((swift_name("init(displayName:tagUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MYFAdtag *)doCopyDisplayName:(NSString *)displayName tagUrl:(NSString *)tagUrl __attribute__((swift_name("doCopy(displayName:tagUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString *tagUrl __attribute__((swift_name("tagUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Adtag.Companion")))
@interface MYFAdtagCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Amount")))
@interface MYFAmount : MYFBase <MYFParcelable>
- (instancetype)initWithImperial:(MYFImperial *)imperial metric:(MYFMetric *)metric __attribute__((swift_name("init(imperial:metric:)"))) __attribute__((objc_designated_initializer));
- (MYFImperial *)component1 __attribute__((swift_name("component1()")));
- (MYFMetric *)component2 __attribute__((swift_name("component2()")));
- (MYFAmount *)doCopyImperial:(MYFImperial *)imperial metric:(MYFMetric *)metric __attribute__((swift_name("doCopy(imperial:metric:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MYFImperial *imperial __attribute__((swift_name("imperial")));
@property (readonly) MYFMetric *metric __attribute__((swift_name("metric")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Amount.Companion")))
@interface MYFAmountCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmountX")))
@interface MYFAmountX : MYFBase <MYFParcelable>
- (instancetype)initWithImperial:(MYFImperialX *)imperial metric:(MYFMetricX *)metric __attribute__((swift_name("init(imperial:metric:)"))) __attribute__((objc_designated_initializer));
- (MYFImperialX *)component1 __attribute__((swift_name("component1()")));
- (MYFMetricX *)component2 __attribute__((swift_name("component2()")));
- (MYFAmountX *)doCopyImperial:(MYFImperialX *)imperial metric:(MYFMetricX *)metric __attribute__((swift_name("doCopy(imperial:metric:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MYFImperialX *imperial __attribute__((swift_name("imperial")));
@property (readonly) MYFMetricX *metric __attribute__((swift_name("metric")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmountX.Companion")))
@interface MYFAmountXCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Android")))
@interface MYFAndroid : MYFBase <MYFParcelable>
- (instancetype)initWithHasAudio:(BOOL)hasAudio videoTypeCode:(NSString *)videoTypeCode videoUrl:(NSString *)videoUrl __attribute__((swift_name("init(hasAudio:videoTypeCode:videoUrl:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (MYFAndroid *)doCopyHasAudio:(BOOL)hasAudio videoTypeCode:(NSString *)videoTypeCode videoUrl:(NSString *)videoUrl __attribute__((swift_name("doCopy(hasAudio:videoTypeCode:videoUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL hasAudio __attribute__((swift_name("hasAudio")));
@property (readonly) NSString *videoTypeCode __attribute__((swift_name("videoTypeCode")));
@property (readonly) NSString *videoUrl __attribute__((swift_name("videoUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Android.Companion")))
@interface MYFAndroidCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attribution")))
@interface MYFAttribution : MYFBase <MYFParcelable>
- (instancetype)initWithHtml:(NSString *)html logo:(NSString *)logo text:(NSString *)text url:(NSString *)url __attribute__((swift_name("init(html:logo:text:url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (MYFAttribution *)doCopyHtml:(NSString *)html logo:(NSString *)logo text:(NSString *)text url:(NSString *)url __attribute__((swift_name("doCopy(html:logo:text:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *html __attribute__((swift_name("html")));
@property (readonly) NSString *logo __attribute__((swift_name("logo")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attribution.Companion")))
@interface MYFAttributionCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Content")))
@interface MYFContent : MYFBase <MYFParcelable>
- (instancetype)initWithDescription:(MYFDescription * _Nullable)description details:(MYFDetails *)details ingredientLines:(NSArray<MYFIngredientLineX *> *)ingredientLines nutrition:(MYFNutrition *)nutrition videos:(MYFVideos *)videos __attribute__((swift_name("init(description:details:ingredientLines:nutrition:videos:)"))) __attribute__((objc_designated_initializer));
- (MYFDescription * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MYFDetails *)component2 __attribute__((swift_name("component2()")));
- (NSArray<MYFIngredientLineX *> *)component3 __attribute__((swift_name("component3()")));
- (MYFNutrition *)component4 __attribute__((swift_name("component4()")));
- (MYFVideos *)component5 __attribute__((swift_name("component5()")));
- (MYFContent *)doCopyDescription:(MYFDescription * _Nullable)description details:(MYFDetails *)details ingredientLines:(NSArray<MYFIngredientLineX *> *)ingredientLines nutrition:(MYFNutrition *)nutrition videos:(MYFVideos *)videos __attribute__((swift_name("doCopy(description:details:ingredientLines:nutrition:videos:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MYFDescription * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) MYFDetails *details __attribute__((swift_name("details")));
@property (readonly) NSArray<MYFIngredientLineX *> *ingredientLines __attribute__((swift_name("ingredientLines")));
@property (readonly) MYFNutrition *nutrition __attribute__((swift_name("nutrition")));
@property (readonly) MYFVideos *videos __attribute__((swift_name("videos")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Content.Companion")))
@interface MYFContentCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Course")))
@interface MYFCourse : MYFBase <MYFParcelable>
- (instancetype)initWithDisplayName:(NSString *)displayName tagUrl:(NSString *)tagUrl __attribute__((swift_name("init(displayName:tagUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MYFCourse *)doCopyDisplayName:(NSString *)displayName tagUrl:(NSString *)tagUrl __attribute__((swift_name("doCopy(displayName:tagUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString *tagUrl __attribute__((swift_name("tagUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Course.Companion")))
@interface MYFCourseCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Cuisine")))
@interface MYFCuisine : MYFBase <MYFParcelable>
- (instancetype)initWithDisplayName:(NSString *)displayName tagUrl:(NSString *)tagUrl __attribute__((swift_name("init(displayName:tagUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MYFCuisine *)doCopyDisplayName:(NSString *)displayName tagUrl:(NSString *)tagUrl __attribute__((swift_name("doCopy(displayName:tagUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString *tagUrl __attribute__((swift_name("tagUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Cuisine.Companion")))
@interface MYFCuisineCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Description")))
@interface MYFDescription : MYFBase <MYFParcelable>
- (instancetype)initWithMobileSectionName:(NSString *)mobileSectionName shortText:(NSString * _Nullable)shortText text:(NSString *)text __attribute__((swift_name("init(mobileSectionName:shortText:text:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (MYFDescription *)doCopyMobileSectionName:(NSString *)mobileSectionName shortText:(NSString * _Nullable)shortText text:(NSString *)text __attribute__((swift_name("doCopy(mobileSectionName:shortText:text:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *mobileSectionName __attribute__((swift_name("mobileSectionName")));
@property (readonly) NSString * _Nullable shortText __attribute__((swift_name("shortText")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Description.Companion")))
@interface MYFDescriptionCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Details")))
@interface MYFDetails : MYFBase <MYFParcelable>
- (instancetype)initWithBrand:(NSString * _Nullable)brand directionsUrl:(NSString *)directionsUrl displayName:(NSString *)displayName globalId:(NSString *)globalId id:(NSString *)id images:(NSArray<MYFImage *> *)images keywords:(NSArray<NSString *> *)keywords name:(NSString *)name numberOfServings:(float)numberOfServings recipeId:(NSString *)recipeId totalTime:(NSString *)totalTime __attribute__((swift_name("init(brand:directionsUrl:displayName:globalId:id:images:keywords:name:numberOfServings:recipeId:totalTime:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component11 __attribute__((swift_name("component11()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSArray<MYFImage *> *)component6 __attribute__((swift_name("component6()")));
- (NSArray<NSString *> *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (float)component9 __attribute__((swift_name("component9()")));
- (MYFDetails *)doCopyBrand:(NSString * _Nullable)brand directionsUrl:(NSString *)directionsUrl displayName:(NSString *)displayName globalId:(NSString *)globalId id:(NSString *)id images:(NSArray<MYFImage *> *)images keywords:(NSArray<NSString *> *)keywords name:(NSString *)name numberOfServings:(float)numberOfServings recipeId:(NSString *)recipeId totalTime:(NSString *)totalTime __attribute__((swift_name("doCopy(brand:directionsUrl:displayName:globalId:id:images:keywords:name:numberOfServings:recipeId:totalTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable brand __attribute__((swift_name("brand")));
@property (readonly) NSString *directionsUrl __attribute__((swift_name("directionsUrl")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString *globalId __attribute__((swift_name("globalId")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSArray<MYFImage *> *images __attribute__((swift_name("images")));
@property (readonly) NSArray<NSString *> *keywords __attribute__((swift_name("keywords")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) float numberOfServings __attribute__((swift_name("numberOfServings")));
@property (readonly) NSString *recipeId __attribute__((swift_name("recipeId")));
@property (readonly) NSString *totalTime __attribute__((swift_name("totalTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Details.Companion")))
@interface MYFDetailsCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Difficulty")))
@interface MYFDifficulty : MYFBase <MYFParcelable>
- (instancetype)initWithDisplayName:(NSString *)displayName tagUrl:(NSString *)tagUrl __attribute__((swift_name("init(displayName:tagUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MYFDifficulty *)doCopyDisplayName:(NSString *)displayName tagUrl:(NSString *)tagUrl __attribute__((swift_name("doCopy(displayName:tagUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString *tagUrl __attribute__((swift_name("tagUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Difficulty.Companion")))
@interface MYFDifficultyCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dish")))
@interface MYFDish : MYFBase <MYFParcelable>
- (instancetype)initWithDisplayName:(NSString *)displayName tagUrl:(NSString *)tagUrl __attribute__((swift_name("init(displayName:tagUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MYFDish *)doCopyDisplayName:(NSString *)displayName tagUrl:(NSString *)tagUrl __attribute__((swift_name("doCopy(displayName:tagUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString *tagUrl __attribute__((swift_name("tagUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dish.Companion")))
@interface MYFDishCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Display")))
@interface MYFDisplay : MYFBase <MYFParcelable>
- (instancetype)initWithPercentDailyValue:(NSString * _Nullable)percentDailyValue unit:(NSString * _Nullable)unit value:(NSString * _Nullable)value __attribute__((swift_name("init(percentDailyValue:unit:value:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MYFDisplay *)doCopyPercentDailyValue:(NSString * _Nullable)percentDailyValue unit:(NSString * _Nullable)unit value:(NSString * _Nullable)value __attribute__((swift_name("doCopy(percentDailyValue:unit:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable percentDailyValue __attribute__((swift_name("percentDailyValue")));
@property (readonly) NSString * _Nullable unit __attribute__((swift_name("unit")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Display.Companion")))
@interface MYFDisplayCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisplayX")))
@interface MYFDisplayX : MYFBase <MYFParcelable>
- (instancetype)initWithDisplayName:(NSString *)displayName flag:(NSString *)flag images:(NSArray<NSString *> *)images __attribute__((swift_name("init(displayName:flag:images:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSArray<NSString *> *)component3 __attribute__((swift_name("component3()")));
- (MYFDisplayX *)doCopyDisplayName:(NSString *)displayName flag:(NSString *)flag images:(NSArray<NSString *> *)images __attribute__((swift_name("doCopy(displayName:flag:images:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString *flag __attribute__((swift_name("flag")));
@property (readonly) NSArray<NSString *> *images __attribute__((swift_name("images")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisplayX.Companion")))
@interface MYFDisplayXCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Equipment")))
@interface MYFEquipment : MYFBase <MYFParcelable>
- (instancetype)initWithId:(NSString *)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MYFEquipment *)doCopyId:(NSString *)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Equipment.Companion")))
@interface MYFEquipmentCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Feed")))
@interface MYFFeed : MYFBase <MYFParcelable>
- (instancetype)initWithContent:(MYFContent *)content display:(MYFDisplayX *)display recipeType:(NSArray<NSString *> *)recipeType type:(NSString *)type __attribute__((swift_name("init(content:display:recipeType:type:)"))) __attribute__((objc_designated_initializer));
- (MYFContent *)component1 __attribute__((swift_name("component1()")));
- (MYFDisplayX *)component2 __attribute__((swift_name("component2()")));
- (NSArray<NSString *> *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (MYFFeed *)doCopyContent:(MYFContent *)content display:(MYFDisplayX *)display recipeType:(NSArray<NSString *> *)recipeType type:(NSString *)type __attribute__((swift_name("doCopy(content:display:recipeType:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MYFContent *content __attribute__((swift_name("content")));
@property (readonly) MYFDisplayX *display __attribute__((swift_name("display")));
@property (readonly) NSArray<NSString *> *recipeType __attribute__((swift_name("recipeType")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Feed.Companion")))
@interface MYFFeedCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase")))
@interface MYFFirebase : MYFBase <MYFParcelable>
- (instancetype)initWithAppUrl:(NSString *)appUrl description:(NSString *)description name:(NSString *)name noindex:(BOOL)noindex webUrl:(NSString *)webUrl __attribute__((swift_name("init(appUrl:description:name:noindex:webUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (MYFFirebase *)doCopyAppUrl:(NSString *)appUrl description:(NSString *)description name:(NSString *)name noindex:(BOOL)noindex webUrl:(NSString *)webUrl __attribute__((swift_name("doCopy(appUrl:description:name:noindex:webUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *appUrl __attribute__((swift_name("appUrl")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) BOOL noindex __attribute__((swift_name("noindex")));
@property (readonly) NSString *webUrl __attribute__((swift_name("webUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase.Companion")))
@interface MYFFirebaseCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirebaseX")))
@interface MYFFirebaseX : MYFBase <MYFParcelable>
- (instancetype)initWithNoindex:(BOOL)noindex __attribute__((swift_name("init(noindex:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (MYFFirebaseX *)doCopyNoindex:(BOOL)noindex __attribute__((swift_name("doCopy(noindex:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL noindex __attribute__((swift_name("noindex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirebaseX.Companion")))
@interface MYFFirebaseXCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloatroVideo")))
@interface MYFFloatroVideo : MYFBase <MYFParcelable>
- (instancetype)initWithDashUrl:(NSString * _Nullable)dashUrl originalUrl:(NSString * _Nullable)originalUrl snapshot:(MYFSnapshot *)snapshot __attribute__((swift_name("init(dashUrl:originalUrl:snapshot:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MYFSnapshot *)component3 __attribute__((swift_name("component3()")));
- (MYFFloatroVideo *)doCopyDashUrl:(NSString * _Nullable)dashUrl originalUrl:(NSString * _Nullable)originalUrl snapshot:(MYFSnapshot *)snapshot __attribute__((swift_name("doCopy(dashUrl:originalUrl:snapshot:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable dashUrl __attribute__((swift_name("dashUrl")));
@property (readonly) NSString * _Nullable originalUrl __attribute__((swift_name("originalUrl")));
@property (readonly) MYFSnapshot *snapshot __attribute__((swift_name("snapshot")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloatroVideo.Companion")))
@interface MYFFloatroVideoCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GuidedVariation")))
@interface MYFGuidedVariation : MYFBase <MYFParcelable>
- (instancetype)initWithActions:(NSArray<MYFAction *> *)actions applianceUnitTypeCode:(NSString *)applianceUnitTypeCode connected:(BOOL)connected default:(BOOL)default_ id:(NSString *)id __attribute__((swift_name("init(actions:applianceUnitTypeCode:connected:default:id:)"))) __attribute__((objc_designated_initializer));
- (NSArray<MYFAction *> *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (MYFGuidedVariation *)doCopyActions:(NSArray<MYFAction *> *)actions applianceUnitTypeCode:(NSString *)applianceUnitTypeCode connected:(BOOL)connected default:(BOOL)default_ id:(NSString *)id __attribute__((swift_name("doCopy(actions:applianceUnitTypeCode:connected:default:id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MYFAction *> *actions __attribute__((swift_name("actions")));
@property (readonly) NSString *applianceUnitTypeCode __attribute__((swift_name("applianceUnitTypeCode")));
@property (readonly) BOOL connected __attribute__((swift_name("connected")));
@property (readonly, getter=default) BOOL default_ __attribute__((swift_name("default_")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GuidedVariation.Companion")))
@interface MYFGuidedVariationCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Image")))
@interface MYFImage : MYFBase <MYFParcelable>
- (instancetype)initWithHostedLargeUrl:(NSString *)hostedLargeUrl resizableImageHeight:(float)resizableImageHeight resizableImageUrl:(NSString *)resizableImageUrl resizableImageWidth:(float)resizableImageWidth __attribute__((swift_name("init(hostedLargeUrl:resizableImageHeight:resizableImageUrl:resizableImageWidth:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (float)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (float)component4 __attribute__((swift_name("component4()")));
- (MYFImage *)doCopyHostedLargeUrl:(NSString *)hostedLargeUrl resizableImageHeight:(float)resizableImageHeight resizableImageUrl:(NSString *)resizableImageUrl resizableImageWidth:(float)resizableImageWidth __attribute__((swift_name("doCopy(hostedLargeUrl:resizableImageHeight:resizableImageUrl:resizableImageWidth:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *hostedLargeUrl __attribute__((swift_name("hostedLargeUrl")));
@property (readonly) float resizableImageHeight __attribute__((swift_name("resizableImageHeight")));
@property (readonly) NSString *resizableImageUrl __attribute__((swift_name("resizableImageUrl")));
@property (readonly) float resizableImageWidth __attribute__((swift_name("resizableImageWidth")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Image.Companion")))
@interface MYFImageCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Imperial")))
@interface MYFImperial : MYFBase <MYFParcelable>
- (instancetype)initWithQuantity:(float)quantity unit:(MYFUnit *)unit __attribute__((swift_name("init(quantity:unit:)"))) __attribute__((objc_designated_initializer));
- (float)component1 __attribute__((swift_name("component1()")));
- (MYFUnit *)component2 __attribute__((swift_name("component2()")));
- (MYFImperial *)doCopyQuantity:(float)quantity unit:(MYFUnit *)unit __attribute__((swift_name("doCopy(quantity:unit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float quantity __attribute__((swift_name("quantity")));
@property (readonly) MYFUnit *unit __attribute__((swift_name("unit")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Imperial.Companion")))
@interface MYFImperialCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImperialX")))
@interface MYFImperialX : MYFBase <MYFParcelable>
- (instancetype)initWithQuantity:(MYFFloat * _Nullable)quantity unit:(MYFUnitXX *)unit __attribute__((swift_name("init(quantity:unit:)"))) __attribute__((objc_designated_initializer));
- (MYFFloat * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MYFUnitXX *)component2 __attribute__((swift_name("component2()")));
- (MYFImperialX *)doCopyQuantity:(MYFFloat * _Nullable)quantity unit:(MYFUnitXX *)unit __attribute__((swift_name("doCopy(quantity:unit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MYFFloat * _Nullable quantity __attribute__((swift_name("quantity")));
@property (readonly) MYFUnitXX *unit __attribute__((swift_name("unit")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImperialX.Companion")))
@interface MYFImperialXCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngredientLine")))
@interface MYFIngredientLine : MYFBase <MYFParcelable>
- (instancetype)initWithAmount:(MYFAmount *)amount category:(NSString *)category ingredient:(NSString *)ingredient ingredientId:(NSString *)ingredientId remainder:(NSString *)remainder sortOrder:(float)sortOrder __attribute__((swift_name("init(amount:category:ingredient:ingredientId:remainder:sortOrder:)"))) __attribute__((objc_designated_initializer));
- (MYFAmount *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (float)component6 __attribute__((swift_name("component6()")));
- (MYFIngredientLine *)doCopyAmount:(MYFAmount *)amount category:(NSString *)category ingredient:(NSString *)ingredient ingredientId:(NSString *)ingredientId remainder:(NSString *)remainder sortOrder:(float)sortOrder __attribute__((swift_name("doCopy(amount:category:ingredient:ingredientId:remainder:sortOrder:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MYFAmount *amount __attribute__((swift_name("amount")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *ingredient __attribute__((swift_name("ingredient")));
@property (readonly) NSString *ingredientId __attribute__((swift_name("ingredientId")));
@property (readonly) NSString *remainder __attribute__((swift_name("remainder")));
@property (readonly) float sortOrder __attribute__((swift_name("sortOrder")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngredientLine.Companion")))
@interface MYFIngredientLineCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngredientLineX")))
@interface MYFIngredientLineX : MYFBase <MYFParcelable>
- (instancetype)initWithCategory:(NSString *)category wholeLine:(NSString *)wholeLine __attribute__((swift_name("init(category:wholeLine:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MYFIngredientLineX *)doCopyCategory:(NSString *)category wholeLine:(NSString *)wholeLine __attribute__((swift_name("doCopy(category:wholeLine:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *wholeLine __attribute__((swift_name("wholeLine")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngredientLineX.Companion")))
@interface MYFIngredientLineXCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Io")))
@interface MYFIo : MYFBase <MYFParcelable>
- (instancetype)initWithHasAudio:(BOOL)hasAudio videoTypeCode:(NSString *)videoTypeCode videoUrl:(NSString *)videoUrl __attribute__((swift_name("init(hasAudio:videoTypeCode:videoUrl:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (MYFIo *)doCopyHasAudio:(BOOL)hasAudio videoTypeCode:(NSString *)videoTypeCode videoUrl:(NSString *)videoUrl __attribute__((swift_name("doCopy(hasAudio:videoTypeCode:videoUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL hasAudio __attribute__((swift_name("hasAudio")));
@property (readonly) NSString *videoTypeCode __attribute__((swift_name("videoTypeCode")));
@property (readonly) NSString *videoUrl __attribute__((swift_name("videoUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Io.Companion")))
@interface MYFIoCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkTag")))
@interface MYFLinkTag : MYFBase <MYFParcelable>
- (instancetype)initWithHref:(NSString *)href hreflang:(NSString *)hreflang rel:(NSString *)rel __attribute__((swift_name("init(href:hreflang:rel:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (MYFLinkTag *)doCopyHref:(NSString *)href hreflang:(NSString *)hreflang rel:(NSString *)rel __attribute__((swift_name("doCopy(href:hreflang:rel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *href __attribute__((swift_name("href")));
@property (readonly) NSString *hreflang __attribute__((swift_name("hreflang")));
@property (readonly) NSString *rel __attribute__((swift_name("rel")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkTag.Companion")))
@interface MYFLinkTagCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MetaTags")))
@interface MYFMetaTags : MYFBase <MYFParcelable>
- (instancetype)initWithDescription:(NSString *)description title:(NSString *)title __attribute__((swift_name("init(description:title:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MYFMetaTags *)doCopyDescription:(NSString *)description title:(NSString *)title __attribute__((swift_name("doCopy(description:title:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MetaTags.Companion")))
@interface MYFMetaTagsCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Metric")))
@interface MYFMetric : MYFBase <MYFParcelable>
- (instancetype)initWithQuantity:(float)quantity unit:(MYFUnitX *)unit __attribute__((swift_name("init(quantity:unit:)"))) __attribute__((objc_designated_initializer));
- (float)component1 __attribute__((swift_name("component1()")));
- (MYFUnitX *)component2 __attribute__((swift_name("component2()")));
- (MYFMetric *)doCopyQuantity:(float)quantity unit:(MYFUnitX *)unit __attribute__((swift_name("doCopy(quantity:unit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float quantity __attribute__((swift_name("quantity")));
@property (readonly) MYFUnitX *unit __attribute__((swift_name("unit")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Metric.Companion")))
@interface MYFMetricCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MetricX")))
@interface MYFMetricX : MYFBase <MYFParcelable>
- (instancetype)initWithQuantity:(MYFFloat * _Nullable)quantity unit:(MYFUnitXXX *)unit __attribute__((swift_name("init(quantity:unit:)"))) __attribute__((objc_designated_initializer));
- (MYFFloat * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MYFUnitXXX *)component2 __attribute__((swift_name("component2()")));
- (MYFMetricX *)doCopyQuantity:(MYFFloat * _Nullable)quantity unit:(MYFUnitXXX *)unit __attribute__((swift_name("doCopy(quantity:unit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MYFFloat * _Nullable quantity __attribute__((swift_name("quantity")));
@property (readonly) MYFUnitXXX *unit __attribute__((swift_name("unit")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MetricX.Companion")))
@interface MYFMetricXCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoreContent")))
@interface MYFMoreContent : MYFBase <MYFParcelable>
- (instancetype)initWithMobileSectionName:(NSString *)mobileSectionName queryParams:(MYFQueryParams *)queryParams __attribute__((swift_name("init(mobileSectionName:queryParams:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MYFQueryParams *)component2 __attribute__((swift_name("component2()")));
- (MYFMoreContent *)doCopyMobileSectionName:(NSString *)mobileSectionName queryParams:(MYFQueryParams *)queryParams __attribute__((swift_name("doCopy(mobileSectionName:queryParams:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *mobileSectionName __attribute__((swift_name("mobileSectionName")));
@property (readonly) MYFQueryParams *queryParams __attribute__((swift_name("queryParams")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoreContent.Companion")))
@interface MYFMoreContentCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Nutrition")))
@interface MYFNutrition : MYFBase <MYFParcelable>
- (instancetype)initWithMobileSectionName:(NSString *)mobileSectionName nutritionEstimates:(NSArray<MYFNutritionEstimate *> *)nutritionEstimates __attribute__((swift_name("init(mobileSectionName:nutritionEstimates:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<MYFNutritionEstimate *> *)component2 __attribute__((swift_name("component2()")));
- (MYFNutrition *)doCopyMobileSectionName:(NSString *)mobileSectionName nutritionEstimates:(NSArray<MYFNutritionEstimate *> *)nutritionEstimates __attribute__((swift_name("doCopy(mobileSectionName:nutritionEstimates:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *mobileSectionName __attribute__((swift_name("mobileSectionName")));
@property (readonly) NSArray<MYFNutritionEstimate *> *nutritionEstimates __attribute__((swift_name("nutritionEstimates")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Nutrition.Companion")))
@interface MYFNutritionCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NutritionEstimate")))
@interface MYFNutritionEstimate : MYFBase <MYFParcelable>
- (instancetype)initWithAttribute:(NSString *)attribute display:(MYFDisplay *)display unit:(MYFUnitXXXX *)unit __attribute__((swift_name("init(attribute:display:unit:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MYFDisplay *)component2 __attribute__((swift_name("component2()")));
- (MYFUnitXXXX *)component3 __attribute__((swift_name("component3()")));
- (MYFNutritionEstimate *)doCopyAttribute:(NSString *)attribute display:(MYFDisplay *)display unit:(MYFUnitXXXX *)unit __attribute__((swift_name("doCopy(attribute:display:unit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *attribute __attribute__((swift_name("attribute")));
@property (readonly) MYFDisplay *display __attribute__((swift_name("display")));
@property (readonly) MYFUnitXXXX *unit __attribute__((swift_name("unit")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NutritionEstimate.Companion")))
@interface MYFNutritionEstimateCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NutritionX")))
@interface MYFNutritionX : MYFBase <MYFParcelable>
- (instancetype)initWithDisplayName:(NSString *)displayName tagUrl:(NSString *)tagUrl __attribute__((swift_name("init(displayName:tagUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MYFNutritionX *)doCopyDisplayName:(NSString *)displayName tagUrl:(NSString *)tagUrl __attribute__((swift_name("doCopy(displayName:tagUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString *tagUrl __attribute__((swift_name("tagUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NutritionX.Companion")))
@interface MYFNutritionXCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrerequisiteEvent")))
@interface MYFPrerequisiteEvent : MYFBase <MYFParcelable>
- (instancetype)initWithMappingNotificationId:(NSString *)mappingNotificationId message:(NSString *)message priority:(NSString *)priority type:(NSString *)type __attribute__((swift_name("init(mappingNotificationId:message:priority:type:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (MYFPrerequisiteEvent *)doCopyMappingNotificationId:(NSString *)mappingNotificationId message:(NSString *)message priority:(NSString *)priority type:(NSString *)type __attribute__((swift_name("doCopy(mappingNotificationId:message:priority:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *mappingNotificationId __attribute__((swift_name("mappingNotificationId")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *priority __attribute__((swift_name("priority")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrerequisiteEvent.Companion")))
@interface MYFPrerequisiteEventCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Profile")))
@interface MYFProfile : MYFBase <MYFParcelable>
- (instancetype)initWithDescription:(NSString * _Nullable)description displayName:(NSString *)displayName pageUrl:(NSString *)pageUrl pictureUrl:(NSString *)pictureUrl profileName:(NSString *)profileName profileUrl:(NSString *)profileUrl siteUrl:(NSString *)siteUrl type:(NSString *)type __attribute__((swift_name("init(description:displayName:pageUrl:pictureUrl:profileName:profileUrl:siteUrl:type:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (MYFProfile *)doCopyDescription:(NSString * _Nullable)description displayName:(NSString *)displayName pageUrl:(NSString *)pageUrl pictureUrl:(NSString *)pictureUrl profileName:(NSString *)profileName profileUrl:(NSString *)profileUrl siteUrl:(NSString *)siteUrl type:(NSString *)type __attribute__((swift_name("doCopy(description:displayName:pageUrl:pictureUrl:profileName:profileUrl:siteUrl:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString *pageUrl __attribute__((swift_name("pageUrl")));
@property (readonly) NSString *pictureUrl __attribute__((swift_name("pictureUrl")));
@property (readonly) NSString *profileName __attribute__((swift_name("profileName")));
@property (readonly) NSString *profileUrl __attribute__((swift_name("profileUrl")));
@property (readonly) NSString *siteUrl __attribute__((swift_name("siteUrl")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Profile.Companion")))
@interface MYFProfileCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QueryParams")))
@interface MYFQueryParams : MYFBase <MYFParcelable>
- (instancetype)initWithApiFeedType:(NSString *)apiFeedType authorId:(NSString *)authorId id:(NSString *)id start:(float)start __attribute__((swift_name("init(apiFeedType:authorId:id:start:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (float)component4 __attribute__((swift_name("component4()")));
- (MYFQueryParams *)doCopyApiFeedType:(NSString *)apiFeedType authorId:(NSString *)authorId id:(NSString *)id start:(float)start __attribute__((swift_name("doCopy(apiFeedType:authorId:id:start:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *apiFeedType __attribute__((swift_name("apiFeedType")));
@property (readonly) NSString *authorId __attribute__((swift_name("authorId")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) float start __attribute__((swift_name("start")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QueryParams.Companion")))
@interface MYFQueryParamsCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QueryParamsX")))
@interface MYFQueryParamsX : MYFBase <MYFParcelable>
- (instancetype)initWithApiFeedType:(NSString *)apiFeedType id:(NSString *)id start:(float)start __attribute__((swift_name("init(apiFeedType:id:start:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (float)component3 __attribute__((swift_name("component3()")));
- (MYFQueryParamsX *)doCopyApiFeedType:(NSString *)apiFeedType id:(NSString *)id start:(float)start __attribute__((swift_name("doCopy(apiFeedType:id:start:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *apiFeedType __attribute__((swift_name("apiFeedType")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) float start __attribute__((swift_name("start")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QueryParamsX.Companion")))
@interface MYFQueryParamsXCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QueryParamsXX")))
@interface MYFQueryParamsXX : MYFBase <MYFParcelable>
- (instancetype)initWithApiFeedType:(NSString *)apiFeedType id:(NSString *)id relatedContentType:(NSString *)relatedContentType start:(float)start __attribute__((swift_name("init(apiFeedType:id:relatedContentType:start:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (float)component4 __attribute__((swift_name("component4()")));
- (MYFQueryParamsXX *)doCopyApiFeedType:(NSString *)apiFeedType id:(NSString *)id relatedContentType:(NSString *)relatedContentType start:(float)start __attribute__((swift_name("doCopy(apiFeedType:id:relatedContentType:start:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *apiFeedType __attribute__((swift_name("apiFeedType")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *relatedContentType __attribute__((swift_name("relatedContentType")));
@property (readonly) float start __attribute__((swift_name("start")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QueryParamsXX.Companion")))
@interface MYFQueryParamsXXCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Recipes")))
@interface MYFRecipes : MYFBase <MYFParcelable>
- (instancetype)initWithFeed:(NSArray<MYFFeed *> *)feed __attribute__((swift_name("init(feed:)"))) __attribute__((objc_designated_initializer));
- (NSArray<MYFFeed *> *)component1 __attribute__((swift_name("component1()")));
- (MYFRecipes *)doCopyFeed:(NSArray<MYFFeed *> *)feed __attribute__((swift_name("doCopy(feed:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MYFFeed *> *feed __attribute__((swift_name("feed")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Recipes.Companion")))
@interface MYFRecipesCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelatedContent")))
@interface MYFRelatedContent : MYFBase <MYFParcelable>
- (instancetype)initWithMobileSectionName:(NSString *)mobileSectionName queryParams:(MYFQueryParamsX *)queryParams __attribute__((swift_name("init(mobileSectionName:queryParams:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MYFQueryParamsX *)component2 __attribute__((swift_name("component2()")));
- (MYFRelatedContent *)doCopyMobileSectionName:(NSString *)mobileSectionName queryParams:(MYFQueryParamsX *)queryParams __attribute__((swift_name("doCopy(mobileSectionName:queryParams:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *mobileSectionName __attribute__((swift_name("mobileSectionName")));
@property (readonly) MYFQueryParamsX *queryParams __attribute__((swift_name("queryParams")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelatedContent.Companion")))
@interface MYFRelatedContentCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelatedProducts")))
@interface MYFRelatedProducts : MYFBase <MYFParcelable>
- (instancetype)initWithMobileSectionName:(NSString *)mobileSectionName queryParams:(MYFQueryParamsXX *)queryParams __attribute__((swift_name("init(mobileSectionName:queryParams:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MYFQueryParamsXX *)component2 __attribute__((swift_name("component2()")));
- (MYFRelatedProducts *)doCopyMobileSectionName:(NSString *)mobileSectionName queryParams:(MYFQueryParamsXX *)queryParams __attribute__((swift_name("doCopy(mobileSectionName:queryParams:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *mobileSectionName __attribute__((swift_name("mobileSectionName")));
@property (readonly) MYFQueryParamsXX *queryParams __attribute__((swift_name("queryParams")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelatedProducts.Companion")))
@interface MYFRelatedProductsCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelatedRecipeSearchTerm")))
@interface MYFRelatedRecipeSearchTerm : MYFBase <MYFParcelable>
- (instancetype)initWithAllowedIngredient:(NSString *)allowedIngredient __attribute__((swift_name("init(allowedIngredient:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MYFRelatedRecipeSearchTerm *)doCopyAllowedIngredient:(NSString *)allowedIngredient __attribute__((swift_name("doCopy(allowedIngredient:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *allowedIngredient __attribute__((swift_name("allowedIngredient")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelatedRecipeSearchTerm.Companion")))
@interface MYFRelatedRecipeSearchTermCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Reviews")))
@interface MYFReviews : MYFBase <MYFParcelable>
- (instancetype)initWithAverageRating:(double)averageRating mobileSectionName:(NSString *)mobileSectionName sortBy:(NSString *)sortBy totalReviewCount:(float)totalReviewCount __attribute__((swift_name("init(averageRating:mobileSectionName:sortBy:totalReviewCount:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (float)component4 __attribute__((swift_name("component4()")));
- (MYFReviews *)doCopyAverageRating:(double)averageRating mobileSectionName:(NSString *)mobileSectionName sortBy:(NSString *)sortBy totalReviewCount:(float)totalReviewCount __attribute__((swift_name("doCopy(averageRating:mobileSectionName:sortBy:totalReviewCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double averageRating __attribute__((swift_name("averageRating")));
@property (readonly) NSString *mobileSectionName __attribute__((swift_name("mobileSectionName")));
@property (readonly) NSString *sortBy __attribute__((swift_name("sortBy")));
@property (readonly) float totalReviewCount __attribute__((swift_name("totalReviewCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Reviews.Companion")))
@interface MYFReviewsCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Seo")))
@interface MYFSeo : MYFBase <MYFParcelable>
- (instancetype)initWithFirebase:(MYFFirebase *)firebase spotlightSearch:(MYFSpotlightSearch *)spotlightSearch web:(MYFWeb *)web __attribute__((swift_name("init(firebase:spotlightSearch:web:)"))) __attribute__((objc_designated_initializer));
- (MYFFirebase *)component1 __attribute__((swift_name("component1()")));
- (MYFSpotlightSearch *)component2 __attribute__((swift_name("component2()")));
- (MYFWeb *)component3 __attribute__((swift_name("component3()")));
- (MYFSeo *)doCopyFirebase:(MYFFirebase *)firebase spotlightSearch:(MYFSpotlightSearch *)spotlightSearch web:(MYFWeb *)web __attribute__((swift_name("doCopy(firebase:spotlightSearch:web:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MYFFirebase *firebase __attribute__((swift_name("firebase")));
@property (readonly) MYFSpotlightSearch *spotlightSearch __attribute__((swift_name("spotlightSearch")));
@property (readonly) MYFWeb *web __attribute__((swift_name("web")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Seo.Companion")))
@interface MYFSeoCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SeoX")))
@interface MYFSeoX : MYFBase <MYFParcelable>
- (instancetype)initWithFirebase:(MYFFirebaseX *)firebase spotlightSearch:(MYFSpotlightSearchX *)spotlightSearch web:(MYFWebX *)web __attribute__((swift_name("init(firebase:spotlightSearch:web:)"))) __attribute__((objc_designated_initializer));
- (MYFFirebaseX *)component1 __attribute__((swift_name("component1()")));
- (MYFSpotlightSearchX *)component2 __attribute__((swift_name("component2()")));
- (MYFWebX *)component3 __attribute__((swift_name("component3()")));
- (MYFSeoX *)doCopyFirebase:(MYFFirebaseX *)firebase spotlightSearch:(MYFSpotlightSearchX *)spotlightSearch web:(MYFWebX *)web __attribute__((swift_name("doCopy(firebase:spotlightSearch:web:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MYFFirebaseX *firebase __attribute__((swift_name("firebase")));
@property (readonly) MYFSpotlightSearchX *spotlightSearch __attribute__((swift_name("spotlightSearch")));
@property (readonly) MYFWebX *web __attribute__((swift_name("web")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SeoX.Companion")))
@interface MYFSeoXCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Snapshot")))
@interface MYFSnapshot : MYFBase <MYFParcelable>
- (instancetype)initWithOriginal:(NSString * _Nullable)original __attribute__((swift_name("init(original:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MYFSnapshot *)doCopyOriginal:(NSString * _Nullable)original __attribute__((swift_name("doCopy(original:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable original __attribute__((swift_name("original")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Snapshot.Companion")))
@interface MYFSnapshotCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Source")))
@interface MYFSource : MYFBase <MYFParcelable>
- (instancetype)initWithEyebrowText:(NSString * _Nullable)eyebrowText introVideo:(MYFFloatroVideo *)introVideo marketingCopy:(NSString * _Nullable)marketingCopy marketingImage:(NSString * _Nullable)marketingImage proSource:(NSString * _Nullable)proSource sourceDisplayName:(NSString *)sourceDisplayName sourceFaviconUrl:(NSString * _Nullable)sourceFaviconUrl sourceHttpOk:(BOOL)sourceHttpOk sourceHttpsOk:(BOOL)sourceHttpsOk sourceInFrame:(BOOL)sourceInFrame sourcePageUrl:(NSString *)sourcePageUrl sourceRecipeUrl:(NSString *)sourceRecipeUrl sourceSiteUrl:(NSString *)sourceSiteUrl __attribute__((swift_name("init(eyebrowText:introVideo:marketingCopy:marketingImage:proSource:sourceDisplayName:sourceFaviconUrl:sourceHttpOk:sourceHttpsOk:sourceInFrame:sourcePageUrl:sourceRecipeUrl:sourceSiteUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (BOOL)component10 __attribute__((swift_name("component10()")));
- (NSString *)component11 __attribute__((swift_name("component11()")));
- (NSString *)component12 __attribute__((swift_name("component12()")));
- (NSString *)component13 __attribute__((swift_name("component13()")));
- (MYFFloatroVideo *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (BOOL)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (MYFSource *)doCopyEyebrowText:(NSString * _Nullable)eyebrowText introVideo:(MYFFloatroVideo *)introVideo marketingCopy:(NSString * _Nullable)marketingCopy marketingImage:(NSString * _Nullable)marketingImage proSource:(NSString * _Nullable)proSource sourceDisplayName:(NSString *)sourceDisplayName sourceFaviconUrl:(NSString * _Nullable)sourceFaviconUrl sourceHttpOk:(BOOL)sourceHttpOk sourceHttpsOk:(BOOL)sourceHttpsOk sourceInFrame:(BOOL)sourceInFrame sourcePageUrl:(NSString *)sourcePageUrl sourceRecipeUrl:(NSString *)sourceRecipeUrl sourceSiteUrl:(NSString *)sourceSiteUrl __attribute__((swift_name("doCopy(eyebrowText:introVideo:marketingCopy:marketingImage:proSource:sourceDisplayName:sourceFaviconUrl:sourceHttpOk:sourceHttpsOk:sourceInFrame:sourcePageUrl:sourceRecipeUrl:sourceSiteUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable eyebrowText __attribute__((swift_name("eyebrowText")));
@property (readonly) MYFFloatroVideo *introVideo __attribute__((swift_name("introVideo")));
@property (readonly) NSString * _Nullable marketingCopy __attribute__((swift_name("marketingCopy")));
@property (readonly) NSString * _Nullable marketingImage __attribute__((swift_name("marketingImage")));
@property (readonly) NSString * _Nullable proSource __attribute__((swift_name("proSource")));
@property (readonly) NSString *sourceDisplayName __attribute__((swift_name("sourceDisplayName")));
@property (readonly) NSString * _Nullable sourceFaviconUrl __attribute__((swift_name("sourceFaviconUrl")));
@property (readonly) BOOL sourceHttpOk __attribute__((swift_name("sourceHttpOk")));
@property (readonly) BOOL sourceHttpsOk __attribute__((swift_name("sourceHttpsOk")));
@property (readonly) BOOL sourceInFrame __attribute__((swift_name("sourceInFrame")));
@property (readonly) NSString *sourcePageUrl __attribute__((swift_name("sourcePageUrl")));
@property (readonly) NSString *sourceRecipeUrl __attribute__((swift_name("sourceRecipeUrl")));
@property (readonly) NSString *sourceSiteUrl __attribute__((swift_name("sourceSiteUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Source.Companion")))
@interface MYFSourceCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpotlightSearch")))
@interface MYFSpotlightSearch : MYFBase <MYFParcelable>
- (instancetype)initWithKeywords:(NSArray<NSString *> *)keywords noindex:(BOOL)noindex __attribute__((swift_name("init(keywords:noindex:)"))) __attribute__((objc_designated_initializer));
- (NSArray<NSString *> *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (MYFSpotlightSearch *)doCopyKeywords:(NSArray<NSString *> *)keywords noindex:(BOOL)noindex __attribute__((swift_name("doCopy(keywords:noindex:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *keywords __attribute__((swift_name("keywords")));
@property (readonly) BOOL noindex __attribute__((swift_name("noindex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpotlightSearch.Companion")))
@interface MYFSpotlightSearchCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpotlightSearchX")))
@interface MYFSpotlightSearchX : MYFBase <MYFParcelable>
- (instancetype)initWithNoindex:(BOOL)noindex __attribute__((swift_name("init(noindex:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (MYFSpotlightSearchX *)doCopyNoindex:(BOOL)noindex __attribute__((swift_name("doCopy(noindex:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL noindex __attribute__((swift_name("noindex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpotlightSearchX.Companion")))
@interface MYFSpotlightSearchXCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Step")))
@interface MYFStep : MYFBase <MYFParcelable>
- (instancetype)initWithDisplayText:(NSString *)displayText equipment:(NSArray<MYFEquipment *> *)equipment imageUrl:(NSString *)imageUrl ingredientLines:(NSArray<MYFIngredientLine *> *)ingredientLines prerequisiteEvents:(NSArray<MYFPrerequisiteEvent *> *)prerequisiteEvents timers:(NSArray<MYFTimer *> *)timers tip:(NSString *)tip video:(MYFVideo *)video __attribute__((swift_name("init(displayText:equipment:imageUrl:ingredientLines:prerequisiteEvents:timers:tip:video:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<MYFEquipment *> *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSArray<MYFIngredientLine *> *)component4 __attribute__((swift_name("component4()")));
- (NSArray<MYFPrerequisiteEvent *> *)component5 __attribute__((swift_name("component5()")));
- (NSArray<MYFTimer *> *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (MYFVideo *)component8 __attribute__((swift_name("component8()")));
- (MYFStep *)doCopyDisplayText:(NSString *)displayText equipment:(NSArray<MYFEquipment *> *)equipment imageUrl:(NSString *)imageUrl ingredientLines:(NSArray<MYFIngredientLine *> *)ingredientLines prerequisiteEvents:(NSArray<MYFPrerequisiteEvent *> *)prerequisiteEvents timers:(NSArray<MYFTimer *> *)timers tip:(NSString *)tip video:(MYFVideo *)video __attribute__((swift_name("doCopy(displayText:equipment:imageUrl:ingredientLines:prerequisiteEvents:timers:tip:video:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *displayText __attribute__((swift_name("displayText")));
@property (readonly) NSArray<MYFEquipment *> *equipment __attribute__((swift_name("equipment")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSArray<MYFIngredientLine *> *ingredientLines __attribute__((swift_name("ingredientLines")));
@property (readonly) NSArray<MYFPrerequisiteEvent *> *prerequisiteEvents __attribute__((swift_name("prerequisiteEvents")));
@property (readonly) NSArray<MYFTimer *> *timers __attribute__((swift_name("timers")));
@property (readonly) NSString *tip __attribute__((swift_name("tip")));
@property (readonly) MYFVideo *video __attribute__((swift_name("video")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Step.Companion")))
@interface MYFStepCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StepGroup")))
@interface MYFStepGroup : MYFBase <MYFParcelable>
- (instancetype)initWithSteps:(NSArray<MYFStep *> *)steps __attribute__((swift_name("init(steps:)"))) __attribute__((objc_designated_initializer));
- (NSArray<MYFStep *> *)component1 __attribute__((swift_name("component1()")));
- (MYFStepGroup *)doCopySteps:(NSArray<MYFStep *> *)steps __attribute__((swift_name("doCopy(steps:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MYFStep *> *steps __attribute__((swift_name("steps")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StepGroup.Companion")))
@interface MYFStepGroupCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tags")))
@interface MYFTags : MYFBase <MYFParcelable>
- (instancetype)initWithCourse:(NSArray<MYFCourse *> *)course cuisine:(NSArray<MYFCuisine *> *)cuisine difficulty:(NSArray<MYFDifficulty *> *)difficulty dish:(NSArray<MYFDish *> *)dish nutrition:(NSArray<MYFNutritionX *> *)nutrition technique:(NSArray<MYFTechnique *> *)technique __attribute__((swift_name("init(course:cuisine:difficulty:dish:nutrition:technique:)"))) __attribute__((objc_designated_initializer));
- (NSArray<MYFCourse *> *)component1 __attribute__((swift_name("component1()")));
- (NSArray<MYFCuisine *> *)component2 __attribute__((swift_name("component2()")));
- (NSArray<MYFDifficulty *> *)component3 __attribute__((swift_name("component3()")));
- (NSArray<MYFDish *> *)component4 __attribute__((swift_name("component4()")));
- (NSArray<MYFNutritionX *> *)component5 __attribute__((swift_name("component5()")));
- (NSArray<MYFTechnique *> *)component6 __attribute__((swift_name("component6()")));
- (MYFTags *)doCopyCourse:(NSArray<MYFCourse *> *)course cuisine:(NSArray<MYFCuisine *> *)cuisine difficulty:(NSArray<MYFDifficulty *> *)difficulty dish:(NSArray<MYFDish *> *)dish nutrition:(NSArray<MYFNutritionX *> *)nutrition technique:(NSArray<MYFTechnique *> *)technique __attribute__((swift_name("doCopy(course:cuisine:difficulty:dish:nutrition:technique:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MYFCourse *> *course __attribute__((swift_name("course")));
@property (readonly) NSArray<MYFCuisine *> *cuisine __attribute__((swift_name("cuisine")));
@property (readonly) NSArray<MYFDifficulty *> *difficulty __attribute__((swift_name("difficulty")));
@property (readonly) NSArray<MYFDish *> *dish __attribute__((swift_name("dish")));
@property (readonly) NSArray<MYFNutritionX *> *nutrition __attribute__((swift_name("nutrition")));
@property (readonly) NSArray<MYFTechnique *> *technique __attribute__((swift_name("technique")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tags.Companion")))
@interface MYFTagsCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagsAds")))
@interface MYFTagsAds : MYFBase <MYFParcelable>
- (instancetype)initWithAdtag:(NSArray<MYFAdtag *> *)adtag __attribute__((swift_name("init(adtag:)"))) __attribute__((objc_designated_initializer));
- (NSArray<MYFAdtag *> *)component1 __attribute__((swift_name("component1()")));
- (MYFTagsAds *)doCopyAdtag:(NSArray<MYFAdtag *> *)adtag __attribute__((swift_name("doCopy(adtag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MYFAdtag *> *adtag __attribute__((swift_name("adtag")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagsAds.Companion")))
@interface MYFTagsAdsCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Technique")))
@interface MYFTechnique : MYFBase <MYFParcelable>
- (instancetype)initWithDisplayName:(NSString *)displayName tagUrl:(NSString *)tagUrl __attribute__((swift_name("init(displayName:tagUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MYFTechnique *)doCopyDisplayName:(NSString *)displayName tagUrl:(NSString *)tagUrl __attribute__((swift_name("doCopy(displayName:tagUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString *tagUrl __attribute__((swift_name("tagUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Technique.Companion")))
@interface MYFTechniqueCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Timer")))
@interface MYFTimer : MYFBase <MYFParcelable>
- (instancetype)initWithDurationSeconds:(float)durationSeconds finishMessage:(NSString *)finishMessage id:(NSString *)id mappingNotificationId:(NSString *)mappingNotificationId maxRepeat:(float)maxRepeat priority:(NSString *)priority repeatable:(BOOL)repeatable timerName:(NSString *)timerName __attribute__((swift_name("init(durationSeconds:finishMessage:id:mappingNotificationId:maxRepeat:priority:repeatable:timerName:)"))) __attribute__((objc_designated_initializer));
- (float)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (float)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (MYFTimer *)doCopyDurationSeconds:(float)durationSeconds finishMessage:(NSString *)finishMessage id:(NSString *)id mappingNotificationId:(NSString *)mappingNotificationId maxRepeat:(float)maxRepeat priority:(NSString *)priority repeatable:(BOOL)repeatable timerName:(NSString *)timerName __attribute__((swift_name("doCopy(durationSeconds:finishMessage:id:mappingNotificationId:maxRepeat:priority:repeatable:timerName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float durationSeconds __attribute__((swift_name("durationSeconds")));
@property (readonly) NSString *finishMessage __attribute__((swift_name("finishMessage")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *mappingNotificationId __attribute__((swift_name("mappingNotificationId")));
@property (readonly) float maxRepeat __attribute__((swift_name("maxRepeat")));
@property (readonly) NSString *priority __attribute__((swift_name("priority")));
@property (readonly) BOOL repeatable __attribute__((swift_name("repeatable")));
@property (readonly) NSString *timerName __attribute__((swift_name("timerName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Timer.Companion")))
@interface MYFTimerCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Unit")))
@interface MYFUnit : MYFBase <MYFParcelable>
- (instancetype)initWithAbbreviation:(NSString *)abbreviation decimal:(BOOL)decimal id:(NSString *)id kind:(NSString *)kind name:(NSString *)name plural:(NSString *)plural round:(BOOL)round __attribute__((swift_name("init(abbreviation:decimal:id:kind:name:plural:round:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (MYFUnit *)doCopyAbbreviation:(NSString *)abbreviation decimal:(BOOL)decimal id:(NSString *)id kind:(NSString *)kind name:(NSString *)name plural:(NSString *)plural round:(BOOL)round __attribute__((swift_name("doCopy(abbreviation:decimal:id:kind:name:plural:round:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *abbreviation __attribute__((swift_name("abbreviation")));
@property (readonly) BOOL decimal __attribute__((swift_name("decimal")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *plural __attribute__((swift_name("plural")));
@property (readonly) BOOL round __attribute__((swift_name("round")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Unit.Companion")))
@interface MYFUnitCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnitX")))
@interface MYFUnitX : MYFBase <MYFParcelable>
- (instancetype)initWithAbbreviation:(NSString *)abbreviation decimal:(BOOL)decimal id:(NSString *)id kind:(NSString *)kind name:(NSString *)name plural:(NSString *)plural round:(BOOL)round __attribute__((swift_name("init(abbreviation:decimal:id:kind:name:plural:round:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (MYFUnitX *)doCopyAbbreviation:(NSString *)abbreviation decimal:(BOOL)decimal id:(NSString *)id kind:(NSString *)kind name:(NSString *)name plural:(NSString *)plural round:(BOOL)round __attribute__((swift_name("doCopy(abbreviation:decimal:id:kind:name:plural:round:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *abbreviation __attribute__((swift_name("abbreviation")));
@property (readonly) BOOL decimal __attribute__((swift_name("decimal")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *plural __attribute__((swift_name("plural")));
@property (readonly) BOOL round __attribute__((swift_name("round")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnitX.Companion")))
@interface MYFUnitXCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnitXX")))
@interface MYFUnitXX : MYFBase <MYFParcelable>
- (instancetype)initWithAbbreviation:(NSString *)abbreviation decimal:(BOOL)decimal id:(NSString *)id kind:(NSString *)kind name:(NSString *)name plural:(NSString *)plural pluralAbbreviation:(NSString *)pluralAbbreviation __attribute__((swift_name("init(abbreviation:decimal:id:kind:name:plural:pluralAbbreviation:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (MYFUnitXX *)doCopyAbbreviation:(NSString *)abbreviation decimal:(BOOL)decimal id:(NSString *)id kind:(NSString *)kind name:(NSString *)name plural:(NSString *)plural pluralAbbreviation:(NSString *)pluralAbbreviation __attribute__((swift_name("doCopy(abbreviation:decimal:id:kind:name:plural:pluralAbbreviation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *abbreviation __attribute__((swift_name("abbreviation")));
@property (readonly) BOOL decimal __attribute__((swift_name("decimal")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *plural __attribute__((swift_name("plural")));
@property (readonly) NSString *pluralAbbreviation __attribute__((swift_name("pluralAbbreviation")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnitXX.Companion")))
@interface MYFUnitXXCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnitXXX")))
@interface MYFUnitXXX : MYFBase <MYFParcelable>
- (instancetype)initWithAbbreviation:(NSString *)abbreviation decimal:(BOOL)decimal id:(NSString *)id kind:(NSString *)kind name:(NSString *)name plural:(NSString *)plural pluralAbbreviation:(NSString *)pluralAbbreviation __attribute__((swift_name("init(abbreviation:decimal:id:kind:name:plural:pluralAbbreviation:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (MYFUnitXXX *)doCopyAbbreviation:(NSString *)abbreviation decimal:(BOOL)decimal id:(NSString *)id kind:(NSString *)kind name:(NSString *)name plural:(NSString *)plural pluralAbbreviation:(NSString *)pluralAbbreviation __attribute__((swift_name("doCopy(abbreviation:decimal:id:kind:name:plural:pluralAbbreviation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *abbreviation __attribute__((swift_name("abbreviation")));
@property (readonly) BOOL decimal __attribute__((swift_name("decimal")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *plural __attribute__((swift_name("plural")));
@property (readonly) NSString *pluralAbbreviation __attribute__((swift_name("pluralAbbreviation")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnitXXX.Companion")))
@interface MYFUnitXXXCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnitXXXX")))
@interface MYFUnitXXXX : MYFBase <MYFParcelable>
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MYFUnitXXXX *)doCopyName:(NSString *)name __attribute__((swift_name("doCopy(name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnitXXXX.Companion")))
@interface MYFUnitXXXXCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Video")))
@interface MYFVideo : MYFBase <MYFParcelable>
- (instancetype)initWithCreateTime:(NSString *)createTime hasAudio:(BOOL)hasAudio originalVideoUrl:(NSString *)originalVideoUrl snapshotUrl:(NSString *)snapshotUrl videoTypeCode:(NSString *)videoTypeCode videoUrls:(MYFVideoUrls *)videoUrls __attribute__((swift_name("init(createTime:hasAudio:originalVideoUrl:snapshotUrl:videoTypeCode:videoUrls:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (MYFVideoUrls *)component6 __attribute__((swift_name("component6()")));
- (MYFVideo *)doCopyCreateTime:(NSString *)createTime hasAudio:(BOOL)hasAudio originalVideoUrl:(NSString *)originalVideoUrl snapshotUrl:(NSString *)snapshotUrl videoTypeCode:(NSString *)videoTypeCode videoUrls:(MYFVideoUrls *)videoUrls __attribute__((swift_name("doCopy(createTime:hasAudio:originalVideoUrl:snapshotUrl:videoTypeCode:videoUrls:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *createTime __attribute__((swift_name("createTime")));
@property (readonly) BOOL hasAudio __attribute__((swift_name("hasAudio")));
@property (readonly) NSString *originalVideoUrl __attribute__((swift_name("originalVideoUrl")));
@property (readonly) NSString *snapshotUrl __attribute__((swift_name("snapshotUrl")));
@property (readonly) NSString *videoTypeCode __attribute__((swift_name("videoTypeCode")));
@property (readonly) MYFVideoUrls *videoUrls __attribute__((swift_name("videoUrls")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Video.Companion")))
@interface MYFVideoCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoDetails")))
@interface MYFVideoDetails : MYFBase <MYFParcelable>
- (instancetype)initWithAndroid:(NSArray<MYFAndroid *> *)android ios:(NSArray<MYFIo *> *)ios __attribute__((swift_name("init(android:ios:)"))) __attribute__((objc_designated_initializer));
- (NSArray<MYFAndroid *> *)component1 __attribute__((swift_name("component1()")));
- (NSArray<MYFIo *> *)component2 __attribute__((swift_name("component2()")));
- (MYFVideoDetails *)doCopyAndroid:(NSArray<MYFAndroid *> *)android ios:(NSArray<MYFIo *> *)ios __attribute__((swift_name("doCopy(android:ios:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MYFAndroid *> *android __attribute__((swift_name("android")));
@property (readonly) NSArray<MYFIo *> *ios __attribute__((swift_name("ios")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoDetails.Companion")))
@interface MYFVideoDetailsCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoUrls")))
@interface MYFVideoUrls : MYFBase <MYFParcelable>
- (instancetype)initWithAndroid:(NSString *)android ios:(NSString *)ios __attribute__((swift_name("init(android:ios:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MYFVideoUrls *)doCopyAndroid:(NSString *)android ios:(NSString *)ios __attribute__((swift_name("doCopy(android:ios:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *android __attribute__((swift_name("android")));
@property (readonly) NSString *ios __attribute__((swift_name("ios")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoUrls.Companion")))
@interface MYFVideoUrlsCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoUrlsX")))
@interface MYFVideoUrlsX : MYFBase <MYFParcelable>
- (instancetype)initWithAndroid:(NSString *)android ios:(NSString *)ios __attribute__((swift_name("init(android:ios:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MYFVideoUrlsX *)doCopyAndroid:(NSString *)android ios:(NSString *)ios __attribute__((swift_name("doCopy(android:ios:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *android __attribute__((swift_name("android")));
@property (readonly) NSString *ios __attribute__((swift_name("ios")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoUrlsX.Companion")))
@interface MYFVideoUrlsXCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Videos")))
@interface MYFVideos : MYFBase <MYFParcelable>
- (instancetype)initWithCreateTime:(NSString *)createTime originalVideoUrl:(NSString *)originalVideoUrl snapshotUrl:(NSString *)snapshotUrl videoDetails:(MYFVideoDetails *)videoDetails videoUrls:(MYFVideoUrlsX *)videoUrls __attribute__((swift_name("init(createTime:originalVideoUrl:snapshotUrl:videoDetails:videoUrls:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (MYFVideoDetails *)component4 __attribute__((swift_name("component4()")));
- (MYFVideoUrlsX *)component5 __attribute__((swift_name("component5()")));
- (MYFVideos *)doCopyCreateTime:(NSString *)createTime originalVideoUrl:(NSString *)originalVideoUrl snapshotUrl:(NSString *)snapshotUrl videoDetails:(MYFVideoDetails *)videoDetails videoUrls:(MYFVideoUrlsX *)videoUrls __attribute__((swift_name("doCopy(createTime:originalVideoUrl:snapshotUrl:videoDetails:videoUrls:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *createTime __attribute__((swift_name("createTime")));
@property (readonly) NSString *originalVideoUrl __attribute__((swift_name("originalVideoUrl")));
@property (readonly) NSString *snapshotUrl __attribute__((swift_name("snapshotUrl")));
@property (readonly) MYFVideoDetails *videoDetails __attribute__((swift_name("videoDetails")));
@property (readonly) MYFVideoUrlsX *videoUrls __attribute__((swift_name("videoUrls")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Videos.Companion")))
@interface MYFVideosCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Web")))
@interface MYFWeb : MYFBase <MYFParcelable>
- (instancetype)initWithCanonicalTerm:(NSString *)canonicalTerm imageUrl:(NSString *)imageUrl linkTags:(NSArray<MYFLinkTag *> *)linkTags metaTags:(MYFMetaTags *)metaTags noindex:(BOOL)noindex __attribute__((swift_name("init(canonicalTerm:imageUrl:linkTags:metaTags:noindex:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSArray<MYFLinkTag *> *)component3 __attribute__((swift_name("component3()")));
- (MYFMetaTags *)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (MYFWeb *)doCopyCanonicalTerm:(NSString *)canonicalTerm imageUrl:(NSString *)imageUrl linkTags:(NSArray<MYFLinkTag *> *)linkTags metaTags:(MYFMetaTags *)metaTags noindex:(BOOL)noindex __attribute__((swift_name("doCopy(canonicalTerm:imageUrl:linkTags:metaTags:noindex:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *canonicalTerm __attribute__((swift_name("canonicalTerm")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSArray<MYFLinkTag *> *linkTags __attribute__((swift_name("linkTags")));
@property (readonly) MYFMetaTags *metaTags __attribute__((swift_name("metaTags")));
@property (readonly) BOOL noindex __attribute__((swift_name("noindex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Web.Companion")))
@interface MYFWebCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebX")))
@interface MYFWebX : MYFBase <MYFParcelable>
- (instancetype)initWithNoindex:(BOOL)noindex __attribute__((swift_name("init(noindex:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (MYFWebX *)doCopyNoindex:(BOOL)noindex __attribute__((swift_name("doCopy(noindex:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL noindex __attribute__((swift_name("noindex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebX.Companion")))
@interface MYFWebXCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Yums")))
@interface MYFYums : MYFBase <MYFParcelable>
- (instancetype)initWithCount:(float)count thisUser:(NSString *)thisUser __attribute__((swift_name("init(count:thisUser:)"))) __attribute__((objc_designated_initializer));
- (float)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MYFYums *)doCopyCount:(float)count thisUser:(NSString *)thisUser __attribute__((swift_name("doCopy(count:thisUser:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float count __attribute__((swift_name("count")));
@property (readonly) NSString *thisUser __attribute__((swift_name("thisUser")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Yums.Companion")))
@interface MYFYumsCompanion : MYFBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetRecipeListCommand")))
@interface MYFGetRecipeListCommand : MYFBase
- (instancetype)initWithApi:(MYFApi *)api __attribute__((swift_name("init(api:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithApi:(MYFApi *)api timeout:(int64_t)timeout __attribute__((swift_name("init(api:timeout:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRecipesPageStart:(int32_t)pageStart completionHandler:(void (^)(MYFRecipes * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRecipes(pageStart:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface MYFKotlinThrowable : MYFBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MYFKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MYFKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (MYFKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MYFKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface MYFKotlinException : MYFKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MYFKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MYFKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol MYFKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<MYFKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MYFKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol MYFKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MYFKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<MYFKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol MYFKotlinx_serialization_coreKSerializer <MYFKotlinx_serialization_coreSerializationStrategy, MYFKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MYFKotlinArray<T> : MYFBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MYFInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MYFKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol MYFKotlinx_serialization_coreEncoder
@required
- (id<MYFKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<MYFKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<MYFKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<MYFKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MYFKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) MYFKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol MYFKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<MYFKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<MYFKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<MYFKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) MYFKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol MYFKotlinx_serialization_coreDecoder
@required
- (id<MYFKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<MYFKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (MYFKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MYFKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MYFKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) MYFKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol MYFKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol MYFKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MYFKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MYFKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MYFKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) MYFKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface MYFKotlinx_serialization_coreSerializersModule : MYFBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<MYFKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<MYFKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<MYFKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MYFKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<MYFKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MYFKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<MYFKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MYFKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol MYFKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface MYFKotlinx_serialization_coreSerialKind : MYFBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol MYFKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MYFKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MYFKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MYFKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MYFKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) MYFKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MYFKotlinNothing : MYFBase
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MYFKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<MYFKotlinKClass>)kClass provider:(id<MYFKotlinx_serialization_coreKSerializer> (^)(NSArray<id<MYFKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MYFKotlinKClass>)kClass serializer:(id<MYFKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MYFKotlinKClass>)baseClass actualClass:(id<MYFKotlinKClass>)actualClass actualSerializer:(id<MYFKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MYFKotlinKClass>)baseClass defaultSerializerProvider:(id<MYFKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MYFKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MYFKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol MYFKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol MYFKotlinKClass <MYFKotlinKDeclarationContainer, MYFKotlinKAnnotatedElement, MYFKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
