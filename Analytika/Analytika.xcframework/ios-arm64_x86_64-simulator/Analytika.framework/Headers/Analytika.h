#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class AnalytikaAnalytikaProvider, AnalytikaConfiguration, AnalytikaPlatformDependency, AnalytikaAnalytika, AnalytikaApiConfiguration, AnalytikaLogLevel, AnalytikaStorageConfiguration, AnalytikaConfigurationBuilderCompanion, AnalytikaConfigurationBuilder, AnalytikaEventsPayload, AnalytikaKotlinThrowable, AnalytikaKotlinEnumCompanion, AnalytikaKotlinEnum<E>, AnalytikaKotlinArray<T>, AnalytikaLoggerWrapperCompanion, AnalytikaAnalytikaLogger, AnalytikaLoggerWrapper, AnalytikaAnalytikaEvent, AnalytikaSession, AnalytikaKotlinPair<__covariant A, __covariant B>, AnalytikaDeviceConfigurationCompanion, AnalytikaDeviceConfiguration, AnalytikaEventsPayloadCompanion, AnalytikaUserProperties, AnalytikaEventsWithSameSessionAndUserProperties, AnalytikaNodeJsConfigurationCompanion, AnalytikaNodeJsConfiguration, AnalytikaProperty, AnalytikaServiceConfigurationCompanion, AnalytikaServiceConfiguration, AnalytikaSessionCompanion, AnalytikaUserPropertiesCompanion, AnalytikaEventBatcherCompanion, AnalytikaValidationResultFailure, AnalytikaPlatformName, AnalytikaPropertyKeys, AnalytikaPropertyKeysAPPLICATION, AnalytikaPropertyKeysAPPLICATIONSYSTEM, AnalytikaPropertyKeysCOMMON, AnalytikaPropertyKeysNodeJsService, AnalytikaPropertyKeysSERVICE, AnalytikaSdkType, AnalytikaSystemConfigurationTypes, AnalytikaValidationResult, AnalytikaValidator, AnalytikaValidationResultFailureCompanion, AnalytikaValidationResultSuccess, AnalytikaValidatorCompanion, AnalytikaValidatorFactory, AnalytikaScheduleConfiguration, AnalytikaFireEventJob, NSURLSessionTask, NSURLSessionTaskMetrics, AnalytikaAnalytikaKtorObserverFeature, AnalytikaAnalytikaKtorObserverConfig, AnalytikaKtor_client_coreHttpClient, AnalytikaKtor_utilsAttributeKey<T>, AnalytikaAnalytikaKtorObserver, AnalytikaAnalytikaKtorFeatureDependency, AnalytikaKtor_client_coreHttpResponse, AnalytikaKtor_client_coreHttpRequestBuilder, AnalytikaSessionRecoveryStrategy, AnalytikaKotlinx_serialization_jsonJson, AnalytikaKtor_client_coreHttpClientConfig<T>, AnalytikaKtor_client_coreHttpClientEngineConfig, AnalytikaKtor_eventsEvents, AnalytikaKtor_client_coreHttpReceivePipeline, AnalytikaKtor_client_coreHttpRequestPipeline, AnalytikaKtor_client_coreHttpResponsePipeline, AnalytikaKtor_client_coreHttpSendPipeline, AnalytikaKtor_client_coreHttpClientCall, AnalytikaKtor_utilsGMTDate, AnalytikaKtor_httpHttpStatusCode, AnalytikaKtor_httpHttpProtocolVersion, AnalytikaKtor_httpHeadersBuilder, AnalytikaKtor_client_coreHttpRequestBuilderCompanion, AnalytikaKtor_client_coreHttpRequestData, AnalytikaKtor_httpURLBuilder, AnalytikaKtor_utilsTypeInfo, AnalytikaKtor_httpHttpMethod, AnalytikaKotlinx_serialization_coreSerializersModule, AnalytikaKotlinx_serialization_jsonJsonDefault, AnalytikaKotlinx_serialization_jsonJsonElement, AnalytikaKotlinx_serialization_jsonJsonConfiguration, AnalytikaJobschedulerJobInfo, AnalytikaKotlinx_serialization_coreSerialKind, AnalytikaKotlinNothing, AnalytikaKotlinException, AnalytikaKotlinRuntimeException, AnalytikaKotlinIllegalStateException, AnalytikaKtor_client_coreHttpResponseData, AnalytikaKotlinx_coroutines_coreCoroutineDispatcher, AnalytikaKtor_client_coreProxyConfig, AnalytikaKtor_eventsEventDefinition<T>, AnalytikaKtor_utilsPipelinePhase, AnalytikaKtor_utilsPipeline<TSubject, TContext>, AnalytikaKtor_client_coreHttpReceivePipelinePhases, AnalytikaKotlinUnit, AnalytikaKtor_client_coreHttpRequestPipelinePhases, AnalytikaKtor_client_coreHttpResponsePipelinePhases, AnalytikaKtor_client_coreHttpResponseContainer, AnalytikaKtor_client_coreHttpSendPipelinePhases, AnalytikaKtor_client_coreHttpClientCallCompanion, AnalytikaKtor_ioMemory, AnalytikaKtor_ioChunkBuffer, AnalytikaKtor_ioBuffer, AnalytikaKotlinByteArray, AnalytikaKtor_ioByteReadPacket, AnalytikaKtor_utilsGMTDateCompanion, AnalytikaKtor_utilsWeekDay, AnalytikaKtor_utilsMonth, AnalytikaKtor_httpHttpStatusCodeCompanion, AnalytikaKtor_httpHttpProtocolVersionCompanion, AnalytikaKtor_utilsStringValuesBuilderImpl, AnalytikaKtor_httpUrl, AnalytikaKtor_httpOutgoingContent, AnalytikaKtor_httpURLProtocol, AnalytikaKtor_httpURLBuilderCompanion, AnalytikaKotlinCancellationException, AnalytikaKtor_httpHttpMethodCompanion, AnalytikaKotlinx_serialization_jsonJsonElementCompanion, AnalytikaJobschedulerJobInfoCompanion, AnalytikaJobschedulerRequiredNetworkType, AnalytikaKotlinAbstractCoroutineContextElement, AnalytikaKotlinx_coroutines_coreCoroutineDispatcherKey, AnalytikaKtor_ioMemoryCompanion, AnalytikaKtor_ioBufferCompanion, AnalytikaKtor_ioChunkBufferCompanion, AnalytikaKotlinByteIterator, AnalytikaKtor_ioInputCompanion, AnalytikaKtor_ioInput, AnalytikaKtor_ioByteReadPacketCompanion, AnalytikaKtor_utilsWeekDayCompanion, AnalytikaKtor_utilsMonthCompanion, AnalytikaKtor_httpUrlCompanion, AnalytikaKtor_httpContentType, AnalytikaKtor_httpURLProtocolCompanion, AnalytikaKotlinKTypeProjection, AnalytikaJobschedulerRequiredNetworkTypeCompanion, AnalytikaKotlinAbstractCoroutineContextKey<B, E>, AnalytikaKtor_httpHeaderValueParam, AnalytikaKtor_httpHeaderValueWithParametersCompanion, AnalytikaKtor_httpHeaderValueWithParameters, AnalytikaKtor_httpContentTypeCompanion, AnalytikaKotlinKVariance, AnalytikaKotlinKTypeProjectionCompanion;

@protocol AnalytikaCareemAnalyticsTracker, AnalytikaAnalytikaApi, AnalytikaLogger, AnalytikaTimeProvider, AnalytikaEventSchedulerFactory, AnalytikaSystemConfiguration, AnalytikaSessionHandler, AnalytikaKotlinComparable, AnalytikaAnalytikaEventsMapper, AnalytikaSystemConfigurationMapper, AnalytikaKotlinx_serialization_coreKSerializer, AnalytikaKotlinx_coroutines_coreFlow, AnalytikaDevicePropertyRepository, AnalytikaEventRepository, AnalytikaSessionRepository, AnalytikaActionScheduler, AnalytikaSchedulersProvider, AnalytikaEventScheduler, AnalytikaReaktiveScheduler, AnalytikaSessionRefreshNotifierListener, AnalytikaEventValidator, AnalytikaPlatformValidator, AnalytikaReaktiveCompletable, AnalytikaJob, AnalytikaAnalytika_domainNetworkRepository, AnalytikaJobFactory, AnalytikaJobschedulerLogger, AnalytikaPlatformInterceptor, AnalytikaPlatformInterceptorFactory, AnalytikaUrlSessionInterceptor, AnalytikaKtorResponseHandler, AnalytikaKtor_client_coreHttpClientPlugin, AnalytikaRecoveryStrategy, AnalytikaJobschedulerJobScheduler, AnalytikaKotlinIterator, AnalytikaKotlinx_serialization_coreEncoder, AnalytikaKotlinx_serialization_coreSerialDescriptor, AnalytikaKotlinx_serialization_coreSerializationStrategy, AnalytikaKotlinx_serialization_coreDecoder, AnalytikaKotlinx_serialization_coreDeserializationStrategy, AnalytikaKotlinx_coroutines_coreFlowCollector, AnalytikaReaktiveSchedulerExecutor, AnalytikaReaktiveObserver, AnalytikaReaktiveSource, AnalytikaKotlinCoroutineContext, AnalytikaKotlinx_coroutines_coreCoroutineScope, AnalytikaKtor_ioCloseable, AnalytikaKtor_client_coreHttpClientEngine, AnalytikaKtor_client_coreHttpClientEngineCapability, AnalytikaKtor_utilsAttributes, AnalytikaKtor_httpHeaders, AnalytikaKtor_httpHttpMessage, AnalytikaKtor_ioByteReadChannel, AnalytikaKtor_httpHttpMessageBuilder, AnalytikaKotlinx_coroutines_coreJob, AnalytikaKotlinx_serialization_coreSerialFormat, AnalytikaKotlinx_serialization_coreStringFormat, AnalytikaKotlinx_serialization_coreCompositeEncoder, AnalytikaKotlinAnnotation, AnalytikaKotlinx_serialization_coreCompositeDecoder, AnalytikaReaktiveDisposable, AnalytikaKotlinCoroutineContextElement, AnalytikaKotlinCoroutineContextKey, AnalytikaKotlinx_coroutines_coreDisposableHandle, AnalytikaKotlinSuspendFunction2, AnalytikaKotlinMapEntry, AnalytikaKtor_utilsStringValues, AnalytikaKtor_client_coreHttpRequest, AnalytikaKtor_ioReadSession, AnalytikaKotlinSuspendFunction1, AnalytikaKotlinAppendable, AnalytikaKtor_utilsStringValuesBuilder, AnalytikaKtor_httpParameters, AnalytikaKtor_httpParametersBuilder, AnalytikaKotlinKClass, AnalytikaKotlinKType, AnalytikaKotlinx_coroutines_coreChildHandle, AnalytikaKotlinx_coroutines_coreChildJob, AnalytikaKotlinSequence, AnalytikaKotlinx_coroutines_coreSelectClause0, AnalytikaKotlinx_serialization_coreSerializersModuleCollector, AnalytikaKotlinx_serialization_jsonJsonNamingStrategy, AnalytikaKotlinContinuation, AnalytikaKotlinContinuationInterceptor, AnalytikaKotlinx_coroutines_coreRunnable, AnalytikaKotlinFunction, AnalytikaKtor_ioObjectPool, AnalytikaKotlinKDeclarationContainer, AnalytikaKotlinKAnnotatedElement, AnalytikaKotlinKClassifier, AnalytikaKotlinx_coroutines_coreParentJob, AnalytikaKotlinx_coroutines_coreSelectInstance, AnalytikaKotlinx_coroutines_coreSelectClause;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface AnalytikaBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface AnalytikaBase (AnalytikaBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface AnalytikaMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface AnalytikaMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorAnalytikaKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface AnalytikaNumber : NSNumber
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
@end

__attribute__((swift_name("KotlinByte")))
@interface AnalytikaByte : AnalytikaNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface AnalytikaUByte : AnalytikaNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface AnalytikaShort : AnalytikaNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface AnalytikaUShort : AnalytikaNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface AnalytikaInt : AnalytikaNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface AnalytikaUInt : AnalytikaNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface AnalytikaLong : AnalytikaNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface AnalytikaULong : AnalytikaNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface AnalytikaFloat : AnalytikaNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface AnalytikaDouble : AnalytikaNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface AnalytikaBoolean : AnalytikaNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("CareemAnalyticsTracker")))
@protocol AnalytikaCareemAnalyticsTracker
@required
- (BOOL)fireEventEventName:(NSString *)eventName eventProperties:(NSDictionary<NSString *, id> *)eventProperties eventDestination:(NSString * _Nullable)eventDestination __attribute__((swift_name("fireEvent(eventName:eventProperties:eventDestination:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Analytika")))
@interface AnalytikaAnalytika : AnalytikaBase <AnalytikaCareemAnalyticsTracker>
- (void)clearDeviceProperties __attribute__((swift_name("clearDeviceProperties()")));

/**
 * This will clear all user Properties in
 * [com.careem.analytika.core.service.SessionService.currentSession]
 * except userId which can be cleared with [Analytika.removeUserId]
 *
 */
- (void)clearUserProperties __attribute__((swift_name("clearUserProperties()")));

/**
 * These methods are used to give IOS freedom to not pass some of the argument
 * and using the default value declared here
 */
- (BOOL)fireEventEventName:(NSString *)eventName __attribute__((swift_name("fireEvent(eventName:)")));
- (BOOL)fireEventEventName:(NSString *)eventName eventProperties:(NSDictionary<NSString *, id> *)eventProperties __attribute__((swift_name("fireEvent(eventName:eventProperties:)")));

/**
 * Store and send event to [eventDestination]
 * If [eventDestination] is not provided, then it will default to [Configuration.eventSource]
 * that was set during Analytika configuration
 *
 * Values sent in [eventProperties] preferably be of type String, Boolean, and Numbers (Float, Double, Int, Long)
 * All values will be converted to string
 * If other types are passed, their toString values will be set
 *
 * @param eventName
 * @param eventProperties
 * @param eventDestination
 * @return true if event attributes are valid
 */
- (BOOL)fireEventEventName:(NSString *)eventName eventProperties:(NSDictionary<NSString *, id> *)eventProperties eventDestination:(NSString * _Nullable)eventDestination __attribute__((swift_name("fireEvent(eventName:eventProperties:eventDestination:)")));
- (void)removeDevicePropertyName:(NSString *)name __attribute__((swift_name("removeDeviceProperty(_:)")));
- (void)removeUserId __attribute__((swift_name("removeUserId()")));
- (void)removeUserPropertyName:(NSString *)name __attribute__((swift_name("removeUserProperty(name:)")));
- (void)setDevicePropertyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("setDeviceProperty(_:value:)")));
- (void)setEventSourceEventSource:(NSString *)eventSource __attribute__((swift_name("setEventSource(eventSource:)")));
- (void)setMaxEventCacheBufferTimeBufferTime:(int64_t)bufferTime __attribute__((swift_name("setMaxEventCacheBufferTime(bufferTime:)")));
- (void)setMaxEventCacheSizePoolSize:(int32_t)poolSize __attribute__((swift_name("setMaxEventCacheSize(poolSize:)")));
- (BOOL)setUserIdUserId:(NSString *)userId __attribute__((swift_name("setUserId(userId:)")));
- (BOOL)setUserPropertyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("setUserProperty(name:value:)")));
@end


/**
 * This unused class is needed to due to a bug in Kotlin Native:
 * https://github.com/JetBrains/kotlin-native/issues/3062
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalytikaPlaceholder")))
@interface AnalytikaAnalytikaPlaceholder : AnalytikaBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalytikaProvider")))
@interface AnalytikaAnalytikaProvider : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)analytikaProvider __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaAnalytikaProvider *shared __attribute__((swift_name("shared")));

/**
 * Configure analytika settings, you can't change them ones you configured
 */
- (void)configureConfiguration:(AnalytikaConfiguration *)configuration platformDependency:(AnalytikaPlatformDependency *)platformDependency __attribute__((swift_name("configure(configuration:platformDependency:)")));
- (AnalytikaAnalytika *)getInstance __attribute__((swift_name("getInstance()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiConfiguration")))
@interface AnalytikaApiConfiguration : AnalytikaBase
- (instancetype)initWithEventSource:(NSString *)eventSource apiToken:(NSString *)apiToken overrideAnalytikaApi:(id<AnalytikaAnalytikaApi> _Nullable)overrideAnalytikaApi overrideBaseUrl:(NSString * _Nullable)overrideBaseUrl enableModernEndpoint:(BOOL)enableModernEndpoint __attribute__((swift_name("init(eventSource:apiToken:overrideAnalytikaApi:overrideBaseUrl:enableModernEndpoint:)"))) __attribute__((objc_designated_initializer));
- (AnalytikaApiConfiguration *)doCopyEventSource:(NSString *)eventSource apiToken:(NSString *)apiToken overrideAnalytikaApi:(id<AnalytikaAnalytikaApi> _Nullable)overrideAnalytikaApi overrideBaseUrl:(NSString * _Nullable)overrideBaseUrl enableModernEndpoint:(BOOL)enableModernEndpoint __attribute__((swift_name("doCopy(eventSource:apiToken:overrideAnalytikaApi:overrideBaseUrl:enableModernEndpoint:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *apiToken __attribute__((swift_name("apiToken")));
@property (readonly) BOOL enableModernEndpoint __attribute__((swift_name("enableModernEndpoint")));
@property (readonly) NSString *eventSource __attribute__((swift_name("eventSource")));
@property (readonly) id<AnalytikaAnalytikaApi> _Nullable overrideAnalytikaApi __attribute__((swift_name("overrideAnalytikaApi")));
@property (readonly) NSString * _Nullable overrideBaseUrl __attribute__((swift_name("overrideBaseUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Configuration")))
@interface AnalytikaConfiguration : AnalytikaBase
- (AnalytikaConfiguration *)doCopyMaxEventCacheSize:(int32_t)maxEventCacheSize maxEventCacheBufferTime:(int64_t)maxEventCacheBufferTime apiConfiguration:(AnalytikaApiConfiguration *)apiConfiguration logger:(id<AnalytikaLogger>)logger logLevel:(AnalytikaLogLevel *)logLevel timeProvider:(id<AnalytikaTimeProvider>)timeProvider storageConfiguration:(AnalytikaStorageConfiguration *)storageConfiguration maxRetryCount:(int32_t)maxRetryCount initialRetryDelayTime:(int64_t)initialRetryDelayTime eventSchedulerFactory:(id<AnalytikaEventSchedulerFactory>)eventSchedulerFactory truncateAttributes:(BOOL)truncateAttributes __attribute__((swift_name("doCopy(maxEventCacheSize:maxEventCacheBufferTime:apiConfiguration:logger:logLevel:timeProvider:storageConfiguration:maxRetryCount:initialRetryDelayTime:eventSchedulerFactory:truncateAttributes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AnalytikaApiConfiguration *apiConfiguration __attribute__((swift_name("apiConfiguration")));
@property (readonly) id<AnalytikaEventSchedulerFactory> eventSchedulerFactory __attribute__((swift_name("eventSchedulerFactory")));
@property (readonly) int64_t initialRetryDelayTime __attribute__((swift_name("initialRetryDelayTime")));
@property (readonly) AnalytikaLogLevel *logLevel __attribute__((swift_name("logLevel")));
@property (readonly) id<AnalytikaLogger> logger __attribute__((swift_name("logger")));
@property (readonly) int64_t maxEventCacheBufferTime __attribute__((swift_name("maxEventCacheBufferTime")));
@property (readonly) int32_t maxEventCacheSize __attribute__((swift_name("maxEventCacheSize")));
@property (readonly) int32_t maxRetryCount __attribute__((swift_name("maxRetryCount")));
@property (readonly) AnalytikaStorageConfiguration *storageConfiguration __attribute__((swift_name("storageConfiguration")));
@property (readonly) id<AnalytikaTimeProvider> timeProvider __attribute__((swift_name("timeProvider")));
@property (readonly) BOOL truncateAttributes __attribute__((swift_name("truncateAttributes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigurationBuilder")))
@interface AnalytikaConfigurationBuilder : AnalytikaBase
- (instancetype)initWithApiToken:(NSString *)apiToken eventSource:(NSString *)eventSource __attribute__((swift_name("init(apiToken:eventSource:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnalytikaConfigurationBuilderCompanion *companion __attribute__((swift_name("companion")));
- (AnalytikaConfiguration *)build __attribute__((swift_name("build()")));
- (AnalytikaConfigurationBuilder *)setAnalytikaApiAnalytikaApi:(id<AnalytikaAnalytikaApi>)analytikaApi __attribute__((swift_name("setAnalytikaApi(analytikaApi:)"))) __attribute__((deprecated("Use setOverrideAnalytikaApi() instead")));
- (AnalytikaConfigurationBuilder *)setAnalytikaBaseUrlUrl:(NSString *)url __attribute__((swift_name("setAnalytikaBaseUrl(url:)"))) __attribute__((deprecated("Use setOverrideBaseUrl() instead")));
- (AnalytikaConfigurationBuilder *)setEnableModernEndpointEnableModernEndpoint:(BOOL)enableModernEndpoint __attribute__((swift_name("setEnableModernEndpoint(enableModernEndpoint:)")));
- (AnalytikaConfigurationBuilder *)setEventSchedulerFactoryCustomEventSchedulerFactory:(id<AnalytikaEventSchedulerFactory>)customEventSchedulerFactory __attribute__((swift_name("setEventSchedulerFactory(customEventSchedulerFactory:)")));
- (AnalytikaConfigurationBuilder *)setLogLevelLogLevel:(AnalytikaLogLevel *)logLevel __attribute__((swift_name("setLogLevel(logLevel:)")));
- (AnalytikaConfigurationBuilder *)setLoggerLogger:(id<AnalytikaLogger>)logger __attribute__((swift_name("setLogger(logger:)")));
- (AnalytikaConfigurationBuilder *)setMaxEventCacheBufferTimeBufferTime:(int64_t)bufferTime __attribute__((swift_name("setMaxEventCacheBufferTime(bufferTime:)")));
- (AnalytikaConfigurationBuilder *)setMaxEventCacheSizePoolSize:(int32_t)poolSize __attribute__((swift_name("setMaxEventCacheSize(poolSize:)")));
- (AnalytikaConfigurationBuilder *)setOverrideAnalytikaApiAnalytikaApi:(id<AnalytikaAnalytikaApi>)analytikaApi __attribute__((swift_name("setOverrideAnalytikaApi(analytikaApi:)")));
- (AnalytikaConfigurationBuilder *)setOverrideBaseUrlUrl:(NSString *)url __attribute__((swift_name("setOverrideBaseUrl(url:)")));
- (AnalytikaConfigurationBuilder *)setSchedulerInitialRetryDelayTimeInitialRetryDelayTime:(int64_t)initialRetryDelayTime __attribute__((swift_name("setSchedulerInitialRetryDelayTime(initialRetryDelayTime:)")));
- (AnalytikaConfigurationBuilder *)setSchedulerMaxRetryCountMaxRetryCount:(int32_t)maxRetryCount __attribute__((swift_name("setSchedulerMaxRetryCount(maxRetryCount:)")));
- (AnalytikaConfigurationBuilder *)setStorageConfigurationStorageConfiguration:(AnalytikaStorageConfiguration *)storageConfiguration __attribute__((swift_name("setStorageConfiguration(storageConfiguration:)")));
- (AnalytikaConfigurationBuilder *)setTimeProviderTimeProvider:(id<AnalytikaTimeProvider>)timeProvider __attribute__((swift_name("setTimeProvider(timeProvider:)")));
- (AnalytikaConfigurationBuilder *)setTruncateAttributesTruncateAttributes:(BOOL)truncateAttributes __attribute__((swift_name("setTruncateAttributes(truncateAttributes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigurationBuilder.Companion")))
@interface AnalytikaConfigurationBuilderCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaConfigurationBuilderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int64_t DEFAULT_EVENT_SCHEDULE_DELAY __attribute__((swift_name("DEFAULT_EVENT_SCHEDULE_DELAY")));
@property (readonly) int32_t DEFAULT_MAX_EVENT_COUNT __attribute__((swift_name("DEFAULT_MAX_EVENT_COUNT")));
@end

__attribute__((swift_name("PlatformConfiguration")))
@protocol AnalytikaPlatformConfiguration
@required
- (NSString *)uuid __attribute__((swift_name("uuid()")));
@property (readonly) id<AnalytikaSystemConfiguration> systemConfiguration __attribute__((swift_name("systemConfiguration")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformDependency")))
@interface AnalytikaPlatformDependency : AnalytikaBase
- (instancetype)initWithSessionHandler:(id<AnalytikaSessionHandler> _Nullable)sessionHandler __attribute__((swift_name("init(sessionHandler:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("AnalytikaApi")))
@protocol AnalytikaAnalytikaApi
@required
- (void)fireEventsEventsPayload:(AnalytikaEventsPayload *)eventsPayload callback:(void (^)(AnalytikaKotlinThrowable * _Nullable))callback __attribute__((swift_name("fireEvents(eventsPayload:callback:)")));
@end

__attribute__((swift_name("Logger")))
@protocol AnalytikaLogger
@required
- (void)debugMessage:(NSString *)message __attribute__((swift_name("debug(message:)")));
- (void)errorMessage:(NSString *)message __attribute__((swift_name("error(message:)")));
- (void)errorMessage:(NSString *)message throwable:(AnalytikaKotlinThrowable *)throwable __attribute__((swift_name("error(message:throwable:)")));
- (void)infoMessage:(NSString *)message __attribute__((swift_name("info(message:)")));
- (NSString *)tag __attribute__((swift_name("tag()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalytikaLogger")))
@interface AnalytikaAnalytikaLogger : AnalytikaBase <AnalytikaLogger>
- (instancetype)initWithDelegate:(id<AnalytikaLogger>)delegate __attribute__((swift_name("init(delegate:)"))) __attribute__((objc_designated_initializer));
- (void)debugMessage:(NSString *)message __attribute__((swift_name("debug(message:)")));
- (void)errorMessage:(NSString *)message __attribute__((swift_name("error(message:)")));
- (void)errorMessage:(NSString *)message throwable:(AnalytikaKotlinThrowable *)throwable __attribute__((swift_name("error(message:throwable:)")));
- (void)infoMessage:(NSString *)message __attribute__((swift_name("info(message:)")));
- (NSString *)tag __attribute__((swift_name("tag()")));
@property AnalytikaLogLevel *logLevel __attribute__((swift_name("logLevel")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol AnalytikaKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface AnalytikaKotlinEnum<E> : AnalytikaBase <AnalytikaKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnalytikaKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end


/**
 * The log level that can be set from consumer to avoid spam
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogLevel")))
@interface AnalytikaLogLevel : AnalytikaKotlinEnum<AnalytikaLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The log level that can be set from consumer to avoid spam
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AnalytikaLogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) AnalytikaLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) AnalytikaLogLevel *error __attribute__((swift_name("error")));
+ (AnalytikaKotlinArray<AnalytikaLogLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AnalytikaLogLevel *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoggerWrapper")))
@interface AnalytikaLoggerWrapper : AnalytikaBase
@property (class, readonly, getter=companion) AnalytikaLoggerWrapperCompanion *companion __attribute__((swift_name("companion")));
@property AnalytikaAnalytikaLogger *logger __attribute__((swift_name("logger")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoggerWrapper.Companion")))
@interface AnalytikaLoggerWrapperCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaLoggerWrapperCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnalytikaLoggerWrapper *instance __attribute__((swift_name("instance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StdOutLogger")))
@interface AnalytikaStdOutLogger : AnalytikaBase <AnalytikaLogger>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)debugMessage:(NSString *)message __attribute__((swift_name("debug(message:)")));
- (void)errorMessage:(NSString *)message __attribute__((swift_name("error(message:)")));
- (void)errorMessage:(NSString *)message throwable:(AnalytikaKotlinThrowable *)throwable __attribute__((swift_name("error(message:throwable:)")));
- (void)infoMessage:(NSString *)message __attribute__((swift_name("info(message:)")));
- (NSString *)tag __attribute__((swift_name("tag()")));
@end

__attribute__((swift_name("AnalytikaEventsMapper")))
@protocol AnalytikaAnalytikaEventsMapper
@required
- (AnalytikaEventsPayload *)toEventsPayloadEvents:(NSArray<AnalytikaAnalytikaEvent *> *)events session:(AnalytikaSession *)session deviceProperties:(NSArray<AnalytikaKotlinPair<NSString *, NSString *> *> *)deviceProperties __attribute__((swift_name("toEventsPayload(events:session:deviceProperties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalytikaEventsMapperImpl")))
@interface AnalytikaAnalytikaEventsMapperImpl : AnalytikaBase <AnalytikaAnalytikaEventsMapper>
- (instancetype)initWithSystemConfigurationMapper:(id<AnalytikaSystemConfigurationMapper>)systemConfigurationMapper __attribute__((swift_name("init(systemConfigurationMapper:)"))) __attribute__((objc_designated_initializer));
- (AnalytikaEventsPayload *)toEventsPayloadEvents:(NSArray<AnalytikaAnalytikaEvent *> *)events session:(AnalytikaSession *)session deviceProperties:(NSArray<AnalytikaKotlinPair<NSString *, NSString *> *> *)deviceProperties __attribute__((swift_name("toEventsPayload(events:session:deviceProperties:)")));
@end

__attribute__((swift_name("SystemConfigurationMapper")))
@protocol AnalytikaSystemConfigurationMapper
@required
- (NSDictionary<NSString *, id> *)toFlattenMapSystemConfiguration:(id<AnalytikaSystemConfiguration>)systemConfiguration __attribute__((swift_name("toFlattenMap(systemConfiguration:)")));
@end


/**
 * This class is used to communicate data to SafeQueue Worker but not for api communication
 * TODO look for more optimization using protobuf
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalytikaEvent")))
@interface AnalytikaAnalytikaEvent : AnalytikaBase
- (instancetype)initWithTimestamp:(int64_t)timestamp eventDestination:(NSString *)eventDestination eventName:(NSString *)eventName eventProperties:(NSDictionary<NSString *, id> *)eventProperties __attribute__((swift_name("init(timestamp:eventDestination:eventName:eventProperties:)"))) __attribute__((objc_designated_initializer));

/**
 * This class is used to communicate data to SafeQueue Worker but not for api communication
 * TODO look for more optimization using protobuf
 */
- (AnalytikaAnalytikaEvent *)doCopyTimestamp:(int64_t)timestamp eventDestination:(NSString *)eventDestination eventName:(NSString *)eventName eventProperties:(NSDictionary<NSString *, id> *)eventProperties __attribute__((swift_name("doCopy(timestamp:eventDestination:eventName:eventProperties:)")));

/**
 * This class is used to communicate data to SafeQueue Worker but not for api communication
 * TODO look for more optimization using protobuf
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * This class is used to communicate data to SafeQueue Worker but not for api communication
 * TODO look for more optimization using protobuf
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * This class is used to communicate data to SafeQueue Worker but not for api communication
 * TODO look for more optimization using protobuf
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *eventDestination __attribute__((swift_name("eventDestination")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *eventProperties __attribute__((swift_name("eventProperties")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((swift_name("SystemConfiguration")))
@protocol AnalytikaSystemConfiguration
@required

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="analytikaSdkType")
*/
@property (readonly) NSString *analytikaSdkType __attribute__((swift_name("analytikaSdkType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="analytikaVersion")
*/
@property (readonly) NSString *analytikaVersion __attribute__((swift_name("analytikaVersion")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end


/**
 * Mobile device configuration which are extracted differently per Mobile OS
 *
 * @property deviceModel
 * @property deviceManufacturer
 * @property architecture
 * @property osName
 * @property carrier
 * @property deviceId - Unique device id
 * @property osVersion - Version of the OS
 * @property osBuild - Build number of the OS
 * @property packageId - Package name of the application
 * @property appBuild - Build number of the application
 * @property appVersion - Version of the application
 * @property appName - Name of the application
 * @property analytikaVersion - Version of the analytika library
 * @property analytikaSdkType - Android, iOS
 * @property platformSchemaVersion - Schema version of the platform on Osiris
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceConfiguration")))
@interface AnalytikaDeviceConfiguration : AnalytikaBase <AnalytikaSystemConfiguration>
- (instancetype)initWithDeviceModel:(NSString *)deviceModel deviceManufacturer:(NSString *)deviceManufacturer architecture:(NSString *)architecture osName:(NSString *)osName carrier:(NSString *)carrier countryCode:(NSString *)countryCode deviceId:(NSString *)deviceId osVersion:(NSString *)osVersion osMajorVersion:(NSString *)osMajorVersion osBuild:(NSString *)osBuild packageId:(NSString *)packageId appBuild:(NSString *)appBuild appVersion:(NSString *)appVersion appName:(NSString *)appName analytikaVersion:(NSString *)analytikaVersion analytikaSdkType:(NSString *)analytikaSdkType platformSchemaVersion:(NSString *)platformSchemaVersion __attribute__((swift_name("init(deviceModel:deviceManufacturer:architecture:osName:carrier:countryCode:deviceId:osVersion:osMajorVersion:osBuild:packageId:appBuild:appVersion:appName:analytikaVersion:analytikaSdkType:platformSchemaVersion:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnalytikaDeviceConfigurationCompanion *companion __attribute__((swift_name("companion")));

/**
 * Mobile device configuration which are extracted differently per Mobile OS
 *
 * @property deviceModel
 * @property deviceManufacturer
 * @property architecture
 * @property osName
 * @property carrier
 * @property deviceId - Unique device id
 * @property osVersion - Version of the OS
 * @property osBuild - Build number of the OS
 * @property packageId - Package name of the application
 * @property appBuild - Build number of the application
 * @property appVersion - Version of the application
 * @property appName - Name of the application
 * @property analytikaVersion - Version of the analytika library
 * @property analytikaSdkType - Android, iOS
 * @property platformSchemaVersion - Schema version of the platform on Osiris
 */
- (AnalytikaDeviceConfiguration *)doCopyDeviceModel:(NSString *)deviceModel deviceManufacturer:(NSString *)deviceManufacturer architecture:(NSString *)architecture osName:(NSString *)osName carrier:(NSString *)carrier countryCode:(NSString *)countryCode deviceId:(NSString *)deviceId osVersion:(NSString *)osVersion osMajorVersion:(NSString *)osMajorVersion osBuild:(NSString *)osBuild packageId:(NSString *)packageId appBuild:(NSString *)appBuild appVersion:(NSString *)appVersion appName:(NSString *)appName analytikaVersion:(NSString *)analytikaVersion analytikaSdkType:(NSString *)analytikaSdkType platformSchemaVersion:(NSString *)platformSchemaVersion __attribute__((swift_name("doCopy(deviceModel:deviceManufacturer:architecture:osName:carrier:countryCode:deviceId:osVersion:osMajorVersion:osBuild:packageId:appBuild:appVersion:appName:analytikaVersion:analytikaSdkType:platformSchemaVersion:)")));

/**
 * Mobile device configuration which are extracted differently per Mobile OS
 *
 * @property deviceModel
 * @property deviceManufacturer
 * @property architecture
 * @property osName
 * @property carrier
 * @property deviceId - Unique device id
 * @property osVersion - Version of the OS
 * @property osBuild - Build number of the OS
 * @property packageId - Package name of the application
 * @property appBuild - Build number of the application
 * @property appVersion - Version of the application
 * @property appName - Name of the application
 * @property analytikaVersion - Version of the analytika library
 * @property analytikaSdkType - Android, iOS
 * @property platformSchemaVersion - Schema version of the platform on Osiris
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Mobile device configuration which are extracted differently per Mobile OS
 *
 * @property deviceModel
 * @property deviceManufacturer
 * @property architecture
 * @property osName
 * @property carrier
 * @property deviceId - Unique device id
 * @property osVersion - Version of the OS
 * @property osBuild - Build number of the OS
 * @property packageId - Package name of the application
 * @property appBuild - Build number of the application
 * @property appVersion - Version of the application
 * @property appName - Name of the application
 * @property analytikaVersion - Version of the analytika library
 * @property analytikaSdkType - Android, iOS
 * @property platformSchemaVersion - Schema version of the platform on Osiris
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Mobile device configuration which are extracted differently per Mobile OS
 *
 * @property deviceModel
 * @property deviceManufacturer
 * @property architecture
 * @property osName
 * @property carrier
 * @property deviceId - Unique device id
 * @property osVersion - Version of the OS
 * @property osBuild - Build number of the OS
 * @property packageId - Package name of the application
 * @property appBuild - Build number of the application
 * @property appVersion - Version of the application
 * @property appName - Name of the application
 * @property analytikaVersion - Version of the analytika library
 * @property analytikaSdkType - Android, iOS
 * @property platformSchemaVersion - Schema version of the platform on Osiris
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="analytikaSdkType")
*/
@property (readonly) NSString *analytikaSdkType __attribute__((swift_name("analytikaSdkType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="analytikaVersion")
*/
@property (readonly) NSString *analytikaVersion __attribute__((swift_name("analytikaVersion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="appBuild")
*/
@property (readonly) NSString *appBuild __attribute__((swift_name("appBuild")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="appName")
*/
@property (readonly) NSString *appName __attribute__((swift_name("appName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="appVersion")
*/
@property (readonly) NSString *appVersion __attribute__((swift_name("appVersion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="architecture")
*/
@property (readonly) NSString *architecture __attribute__((swift_name("architecture")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="carrier")
*/
@property (readonly) NSString *carrier __attribute__((swift_name("carrier")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="countryCode")
*/
@property (readonly) NSString *countryCode __attribute__((swift_name("countryCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="deviceId")
*/
@property (readonly) NSString *deviceId __attribute__((swift_name("deviceId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="deviceManufacturer")
*/
@property (readonly) NSString *deviceManufacturer __attribute__((swift_name("deviceManufacturer")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="deviceModel")
*/
@property (readonly) NSString *deviceModel __attribute__((swift_name("deviceModel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="osBuild")
*/
@property (readonly) NSString *osBuild __attribute__((swift_name("osBuild")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="osMajorVersion")
*/
@property (readonly) NSString *osMajorVersion __attribute__((swift_name("osMajorVersion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="osName")
*/
@property (readonly) NSString *osName __attribute__((swift_name("osName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="osVersion")
*/
@property (readonly) NSString *osVersion __attribute__((swift_name("osVersion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="packageId")
*/
@property (readonly) NSString *packageId __attribute__((swift_name("packageId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="platform_schema_version")
*/
@property (readonly) NSString *platformSchemaVersion __attribute__((swift_name("platformSchemaVersion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="system_configuration_type")
*/
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end


/**
 * Mobile device configuration which are extracted differently per Mobile OS
 *
 * @property deviceModel
 * @property deviceManufacturer
 * @property architecture
 * @property osName
 * @property carrier
 * @property deviceId - Unique device id
 * @property osVersion - Version of the OS
 * @property osBuild - Build number of the OS
 * @property packageId - Package name of the application
 * @property appBuild - Build number of the application
 * @property appVersion - Version of the application
 * @property appName - Name of the application
 * @property analytikaVersion - Version of the analytika library
 * @property analytikaSdkType - Android, iOS
 * @property platformSchemaVersion - Schema version of the platform on Osiris
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceConfiguration.Companion")))
@interface AnalytikaDeviceConfigurationCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Mobile device configuration which are extracted differently per Mobile OS
 *
 * @property deviceModel
 * @property deviceManufacturer
 * @property architecture
 * @property osName
 * @property carrier
 * @property deviceId - Unique device id
 * @property osVersion - Version of the OS
 * @property osBuild - Build number of the OS
 * @property packageId - Package name of the application
 * @property appBuild - Build number of the application
 * @property appVersion - Version of the application
 * @property appName - Name of the application
 * @property analytikaVersion - Version of the analytika library
 * @property analytikaSdkType - Android, iOS
 * @property platformSchemaVersion - Schema version of the platform on Osiris
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaDeviceConfigurationCompanion *shared __attribute__((swift_name("shared")));

/**
 * Mobile device configuration which are extracted differently per Mobile OS
 *
 * @property deviceModel
 * @property deviceManufacturer
 * @property architecture
 * @property osName
 * @property carrier
 * @property deviceId - Unique device id
 * @property osVersion - Version of the OS
 * @property osBuild - Build number of the OS
 * @property packageId - Package name of the application
 * @property appBuild - Build number of the application
 * @property appVersion - Version of the application
 * @property appName - Name of the application
 * @property analytikaVersion - Version of the analytika library
 * @property analytikaSdkType - Android, iOS
 * @property platformSchemaVersion - Schema version of the platform on Osiris
 */
- (id<AnalytikaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventsPayload")))
@interface AnalytikaEventsPayload : AnalytikaBase
- (instancetype)initWithSessionAttributes:(NSDictionary<NSString *, id> *)sessionAttributes events:(NSArray<NSDictionary<NSString *, id> *> *)events __attribute__((swift_name("init(sessionAttributes:events:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnalytikaEventsPayloadCompanion *companion __attribute__((swift_name("companion")));
- (AnalytikaEventsPayload *)doCopySessionAttributes:(NSDictionary<NSString *, id> *)sessionAttributes events:(NSArray<NSDictionary<NSString *, id> *> *)events __attribute__((swift_name("doCopy(sessionAttributes:events:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="events")
*/
@property (readonly) NSArray<NSDictionary<NSString *, id> *> *events __attribute__((swift_name("events")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sessionAttributes")
*/
@property (readonly) NSDictionary<NSString *, id> *sessionAttributes __attribute__((swift_name("sessionAttributes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventsPayload.Companion")))
@interface AnalytikaEventsPayloadCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaEventsPayloadCompanion *shared __attribute__((swift_name("shared")));
- (id<AnalytikaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventsWithSameSessionAndUserProperties")))
@interface AnalytikaEventsWithSameSessionAndUserProperties : AnalytikaBase
- (instancetype)initWithEvents:(NSArray<AnalytikaAnalytikaEvent *> *)events session:(AnalytikaSession *)session userProperties:(AnalytikaUserProperties *)userProperties __attribute__((swift_name("init(events:session:userProperties:)"))) __attribute__((objc_designated_initializer));
- (AnalytikaEventsWithSameSessionAndUserProperties *)doCopyEvents:(NSArray<AnalytikaAnalytikaEvent *> *)events session:(AnalytikaSession *)session userProperties:(AnalytikaUserProperties *)userProperties __attribute__((swift_name("doCopy(events:session:userProperties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<AnalytikaAnalytikaEvent *> *events __attribute__((swift_name("events")));
@property (readonly) AnalytikaSession *session __attribute__((swift_name("session")));
@property (readonly) AnalytikaUserProperties *userProperties __attribute__((swift_name("userProperties")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeJsConfiguration")))
@interface AnalytikaNodeJsConfiguration : AnalytikaBase <AnalytikaSystemConfiguration>
- (instancetype)initWithApplicationName:(NSString *)applicationName environment:(NSString *)environment hostname:(NSString *)hostname ip:(NSString *)ip pid:(int32_t)pid analytikaVersion:(NSString *)analytikaVersion __attribute__((swift_name("init(applicationName:environment:hostname:ip:pid:analytikaVersion:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnalytikaNodeJsConfigurationCompanion *companion __attribute__((swift_name("companion")));
- (AnalytikaNodeJsConfiguration *)doCopyApplicationName:(NSString *)applicationName environment:(NSString *)environment hostname:(NSString *)hostname ip:(NSString *)ip pid:(int32_t)pid analytikaVersion:(NSString *)analytikaVersion __attribute__((swift_name("doCopy(applicationName:environment:hostname:ip:pid:analytikaVersion:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="analytikaSdkType")
*/
@property (readonly) NSString *analytikaSdkType __attribute__((swift_name("analytikaSdkType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="analytikaVersion")
*/
@property (readonly) NSString *analytikaVersion __attribute__((swift_name("analytikaVersion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="application_name")
*/
@property (readonly) NSString *applicationName __attribute__((swift_name("applicationName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="environment")
*/
@property (readonly) NSString *environment __attribute__((swift_name("environment")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hostname")
*/
@property (readonly) NSString *hostname __attribute__((swift_name("hostname")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ip_address")
*/
@property (readonly) NSString *ip __attribute__((swift_name("ip")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pid")
*/
@property (readonly) int32_t pid __attribute__((swift_name("pid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="system_configuration_type")
*/
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeJsConfiguration.Companion")))
@interface AnalytikaNodeJsConfigurationCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaNodeJsConfigurationCompanion *shared __attribute__((swift_name("shared")));
- (id<AnalytikaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Property")))
@interface AnalytikaProperty : AnalytikaBase
- (instancetype)initWithKey:(NSString *)key value:(NSString * _Nullable)value reserved:(BOOL)reserved __attribute__((swift_name("init(key:value:reserved:)"))) __attribute__((objc_designated_initializer));
- (AnalytikaProperty *)doCopyKey:(NSString *)key value:(NSString * _Nullable)value reserved:(BOOL)reserved __attribute__((swift_name("doCopy(key:value:reserved:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *key __attribute__((swift_name("key")));

/**
 * Indicate that this property is reserved and should skip reserved words validation
 */
@property (readonly) BOOL reserved __attribute__((swift_name("reserved")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * Service configurations which are extracted differently per OS
 *
 * @property analytikaVersion
 * @property analytikaSdkType
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceConfiguration")))
@interface AnalytikaServiceConfiguration : AnalytikaBase <AnalytikaSystemConfiguration>
- (instancetype)initWithServiceName:(NSString *)serviceName version:(NSString *)version instanceID:(NSString *)instanceID analytikaVersion:(NSString *)analytikaVersion __attribute__((swift_name("init(serviceName:version:instanceID:analytikaVersion:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnalytikaServiceConfigurationCompanion *companion __attribute__((swift_name("companion")));

/**
 * Service configurations which are extracted differently per OS
 *
 * @property analytikaVersion
 * @property analytikaSdkType
 */
- (AnalytikaServiceConfiguration *)doCopyServiceName:(NSString *)serviceName version:(NSString *)version instanceID:(NSString *)instanceID analytikaVersion:(NSString *)analytikaVersion __attribute__((swift_name("doCopy(serviceName:version:instanceID:analytikaVersion:)")));

/**
 * Service configurations which are extracted differently per OS
 *
 * @property analytikaVersion
 * @property analytikaSdkType
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Service configurations which are extracted differently per OS
 *
 * @property analytikaVersion
 * @property analytikaSdkType
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Service configurations which are extracted differently per OS
 *
 * @property analytikaVersion
 * @property analytikaSdkType
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="analytikaSdkType")
*/
@property (readonly) NSString *analytikaSdkType __attribute__((swift_name("analytikaSdkType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="analytikaVersion")
*/
@property (readonly) NSString *analytikaVersion __attribute__((swift_name("analytikaVersion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="service_instance_id")
*/
@property (readonly) NSString *instanceID __attribute__((swift_name("instanceID")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="service_name")
*/
@property (readonly) NSString *serviceName __attribute__((swift_name("serviceName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="system_configuration_type")
*/
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="service_version")
*/
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end


/**
 * Service configurations which are extracted differently per OS
 *
 * @property analytikaVersion
 * @property analytikaSdkType
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceConfiguration.Companion")))
@interface AnalytikaServiceConfigurationCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Service configurations which are extracted differently per OS
 *
 * @property analytikaVersion
 * @property analytikaSdkType
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaServiceConfigurationCompanion *shared __attribute__((swift_name("shared")));

/**
 * Service configurations which are extracted differently per OS
 *
 * @property analytikaVersion
 * @property analytikaSdkType
 */
- (id<AnalytikaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * A presentation model of Session
 *
 * @property sessionId Random uuid
 * @property userProperties Custom User Session properties
 * @property systemConfiguration Device and App specific configurations
 * @property startTimeMillis Session start time
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Session")))
@interface AnalytikaSession : AnalytikaBase
- (instancetype)initWithSessionId:(NSString *)sessionId userProperties:(NSDictionary<NSString *, id> *)userProperties systemConfiguration:(id<AnalytikaSystemConfiguration>)systemConfiguration startTimeMillis:(int64_t)startTimeMillis __attribute__((swift_name("init(sessionId:userProperties:systemConfiguration:startTimeMillis:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnalytikaSessionCompanion *companion __attribute__((swift_name("companion")));

/**
 * A presentation model of Session
 *
 * @property sessionId Random uuid
 * @property userProperties Custom User Session properties
 * @property systemConfiguration Device and App specific configurations
 * @property startTimeMillis Session start time
 */
- (AnalytikaSession *)doCopySessionId:(NSString *)sessionId userProperties:(NSDictionary<NSString *, id> *)userProperties systemConfiguration:(id<AnalytikaSystemConfiguration>)systemConfiguration startTimeMillis:(int64_t)startTimeMillis __attribute__((swift_name("doCopy(sessionId:userProperties:systemConfiguration:startTimeMillis:)")));

/**
 * A presentation model of Session
 *
 * @property sessionId Random uuid
 * @property userProperties Custom User Session properties
 * @property systemConfiguration Device and App specific configurations
 * @property startTimeMillis Session start time
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * A presentation model of Session
 *
 * @property sessionId Random uuid
 * @property userProperties Custom User Session properties
 * @property systemConfiguration Device and App specific configurations
 * @property startTimeMillis Session start time
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * A presentation model of Session
 *
 * @property sessionId Random uuid
 * @property userProperties Custom User Session properties
 * @property systemConfiguration Device and App specific configurations
 * @property startTimeMillis Session start time
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) int64_t startTimeMillis __attribute__((swift_name("startTimeMillis")));
@property (readonly) id<AnalytikaSystemConfiguration> systemConfiguration __attribute__((swift_name("systemConfiguration")));
@property (readonly) NSDictionary<NSString *, id> *userProperties __attribute__((swift_name("userProperties")));
@end


/**
 * A presentation model of Session
 *
 * @property sessionId Random uuid
 * @property userProperties Custom User Session properties
 * @property systemConfiguration Device and App specific configurations
 * @property startTimeMillis Session start time
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Session.Companion")))
@interface AnalytikaSessionCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * A presentation model of Session
 *
 * @property sessionId Random uuid
 * @property userProperties Custom User Session properties
 * @property systemConfiguration Device and App specific configurations
 * @property startTimeMillis Session start time
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaSessionCompanion *shared __attribute__((swift_name("shared")));

/**
 * A presentation model of Session
 *
 * @property sessionId Random uuid
 * @property userProperties Custom User Session properties
 * @property systemConfiguration Device and App specific configurations
 * @property startTimeMillis Session start time
 */
- (id<AnalytikaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserProperties")))
@interface AnalytikaUserProperties : AnalytikaBase
- (instancetype)initWithId:(int64_t)id properties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("init(id:properties:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnalytikaUserPropertiesCompanion *companion __attribute__((swift_name("companion")));
- (AnalytikaUserProperties *)doCopyId:(int64_t)id properties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("doCopy(id:properties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSDictionary<NSString *, id> *properties __attribute__((swift_name("properties")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserProperties.Companion")))
@interface AnalytikaUserPropertiesCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaUserPropertiesCompanion *shared __attribute__((swift_name("shared")));
- (id<AnalytikaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("RecoveryService")))
@protocol AnalytikaRecoveryService
@required

/**
 * Check if we have events in DB and fire them before starting
 * to add new events with the new session
 */
- (void)recover __attribute__((swift_name("recover()")));
@end

__attribute__((swift_name("RecoveryStrategy")))
@protocol AnalytikaRecoveryStrategy
@required
- (void)recover __attribute__((swift_name("recover()")));
@end

__attribute__((swift_name("DevicePropertyRepository")))
@protocol AnalytikaDevicePropertyRepository
@required
- (void)addPropertyName:(NSString *)propertyName propertyValue:(NSString *)propertyValue __attribute__((swift_name("add(propertyName:propertyValue:)")));
- (id<AnalytikaKotlinx_coroutines_coreFlow>)getDevicePropertiesFlow __attribute__((swift_name("getDevicePropertiesFlow()")));
- (void)removeAll __attribute__((swift_name("removeAll()")));
- (void)removePropertyPropertyName:(NSString *)propertyName __attribute__((swift_name("removeProperty(propertyName:)")));
@end


/**
 * Interface for handling event cache which could be db or file or whatever
 */
__attribute__((swift_name("EventRepository")))
@protocol AnalytikaEventRepository
@required
- (void)deleteAllEvents __attribute__((swift_name("deleteAllEvents()")));
- (void)deleteAllEventsWithSessionAndUserPropertiesSessionId:(NSString *)sessionId userPropertiesId:(int64_t)userPropertiesId __attribute__((swift_name("deleteAllEventsWithSessionAndUserProperties(sessionId:userPropertiesId:)")));
- (int32_t)getCount __attribute__((swift_name("getCount()")));
- (NSArray<AnalytikaAnalytikaEvent *> *)loadEvents __attribute__((swift_name("loadEvents()")));
- (NSArray<AnalytikaEventsWithSameSessionAndUserProperties *> *)loadEventsWithSessionSessionId:(NSString *)sessionId __attribute__((swift_name("loadEventsWithSession(sessionId:)")));
- (BOOL)storeEventEvent:(AnalytikaAnalytikaEvent *)event __attribute__((swift_name("storeEvent(event:)")));
@end

__attribute__((swift_name("RepositoryProvider")))
@protocol AnalytikaRepositoryProvider
@required
- (id<AnalytikaDevicePropertyRepository>)devicePropertyRepository __attribute__((swift_name("devicePropertyRepository()")));
- (id<AnalytikaEventRepository>)eventRepository __attribute__((swift_name("eventRepository()")));
- (id<AnalytikaSessionRepository>)sessionRepository __attribute__((swift_name("sessionRepository()")));
@end

__attribute__((swift_name("SessionRepository")))
@protocol AnalytikaSessionRepository
@required

/**
 * Delete all sessions with excluded session id list
 *
 * @param excludeSessionIds list of session Ids that should keep stored
 */
- (void)deleteAllSessionsExcludeSessionIds:(NSArray<NSString *> *)excludeSessionIds __attribute__((swift_name("deleteAllSessions(excludeSessionIds:)")));

/**
 * Deletes Session in Repository using [sessionId]
 *
 * @param sessionId
 */
- (void)deleteSessionByIdSessionId:(NSString *)sessionId __attribute__((swift_name("deleteSessionById(sessionId:)")));

/**
 * Get All Available sessions stored
 *
 * @return all Available sessions stored
 */
- (NSArray<AnalytikaSession *> *)getAllSessions __attribute__((swift_name("getAllSessions()")));
- (AnalytikaUserProperties * _Nullable)getLatestUserProperties __attribute__((swift_name("getLatestUserProperties()")));

/**
 * Get session by [Session.sessionId]
 *
 * @param sessionId id to be look up with
 * @return [Session] with matching [sessionId]
 */
- (AnalytikaSession * _Nullable)getSessionByIdSessionId:(NSString *)sessionId __attribute__((swift_name("getSessionById(sessionId:)")));

/**
 * Returns a sorted list of sessions with max size of [limit]
 *
 * List is sorted in descending order based on [Session.startTimeMillis]
 *
 * @param limit limit of number of sessions to be returned
 * @return a sorted list of sessions with max size of @param limit
 */
- (NSArray<AnalytikaSession *> *)getSessionsLimitedLimit:(int64_t)limit __attribute__((swift_name("getSessionsLimited(limit:)")));

/**
 * Inserts [session] or if [session] is already
 *
 * @param session
 */
- (void)insertOrUpdateSessionSession:(AnalytikaSession *)session __attribute__((swift_name("insertOrUpdateSession(session:)")));
@end

__attribute__((swift_name("ActionScheduler")))
@protocol AnalytikaActionScheduler
@required
- (BOOL)isScheduled __attribute__((swift_name("isScheduled()")));
- (void)scheduleDelayMillis:(int64_t)delayMillis action:(void (^)(void))action __attribute__((swift_name("schedule(delayMillis:action:)")));
- (void)stop __attribute__((swift_name("stop()")));
@end


/**
 * This class is used for any Action (function) to be post delayed
 * It should NOT be singleton, each class should have it's own Scheduler
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActionSchedulerImpl")))
@interface AnalytikaActionSchedulerImpl : AnalytikaBase <AnalytikaActionScheduler>
- (instancetype)initWithSchedulersProvider:(id<AnalytikaSchedulersProvider>)schedulersProvider __attribute__((swift_name("init(schedulersProvider:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isScheduled __attribute__((swift_name("isScheduled()")));
- (void)scheduleDelayMillis:(int64_t)delayMillis action:(void (^)(void))action __attribute__((swift_name("schedule(delayMillis:action:)")));
- (void)stop __attribute__((swift_name("stop()")));
@end


/**
 * A scheduler class that can be implemented by client
 * To use this, client side need to implement the scheduleEvents method to schedule all fired event
 * in a way they liked
 */
__attribute__((swift_name("EventScheduler")))
@protocol AnalytikaEventScheduler
@required
- (void)scheduleEventsEvents:(NSArray<AnalytikaAnalytikaEvent *> *)events session:(AnalytikaSession *)session __attribute__((swift_name("scheduleEvents(events:session:)")));
@end


/**
 * A factory class that can be implemented by client
 * To use this, client side need to implement both this factory and also [EventScheduler] interface
 * to schedule the fired event in a way they liked
 */
__attribute__((swift_name("EventSchedulerFactory")))
@protocol AnalytikaEventSchedulerFactory
@required
- (id<AnalytikaEventScheduler>)createEventScheduler __attribute__((swift_name("createEventScheduler()")));
@end

__attribute__((swift_name("SchedulersProvider")))
@protocol AnalytikaSchedulersProvider
@required
- (id<AnalytikaReaktiveScheduler>)computation __attribute__((swift_name("computation()")));
- (id<AnalytikaReaktiveScheduler>)single __attribute__((swift_name("single()")));
@end

__attribute__((swift_name("EventBatcher")))
@interface AnalytikaEventBatcher : AnalytikaBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) AnalytikaEventBatcherCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSArray<AnalytikaAnalytikaEvent *> *> *)batchEventsEvents:(NSArray<AnalytikaAnalytikaEvent *> *)events divider:(int32_t)divider __attribute__((swift_name("batchEvents(events:divider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventBatcher.Companion")))
@interface AnalytikaEventBatcherCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaEventBatcherCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("EventService")))
@protocol AnalytikaEventService
@required
- (BOOL)fireEventEventName:(NSString *)eventName eventProperties:(NSDictionary<NSString *, id> *)eventProperties eventDestination_:(NSString * _Nullable)eventDestination __attribute__((swift_name("fireEvent(eventName:eventProperties:eventDestination_:)")));
- (void)flushEventsSession:(AnalytikaSession *)session __attribute__((swift_name("flushEvents(session:)")));
- (BOOL)reportFireEventValidationFailureEvent:(AnalytikaAnalytikaEvent *)event failure:(AnalytikaValidationResultFailure *)failure __attribute__((swift_name("reportFireEventValidationFailure(event:failure:)")));
- (void)scheduleEvents __attribute__((swift_name("scheduleEvents()")));
@property NSString *eventSource __attribute__((swift_name("eventSource")));
@property int64_t maxEventCacheBufferTime __attribute__((swift_name("maxEventCacheBufferTime")));
@property int32_t maxEventCacheSize __attribute__((swift_name("maxEventCacheSize")));
@end

__attribute__((swift_name("PropertyService")))
@protocol AnalytikaPropertyService
@required
- (BOOL)addPropertyProperty:(AnalytikaProperty *)property __attribute__((swift_name("addProperty(property:)")));
- (void)clearUserProperties __attribute__((swift_name("clearUserProperties()")));
- (BOOL)isValidPropertyProperty:(AnalytikaProperty *)property __attribute__((swift_name("isValidProperty(property:)")));
- (void)removeUserId __attribute__((swift_name("removeUserId()")));
- (void)removeUserPropertyName:(NSString *)name __attribute__((swift_name("removeUserProperty(name:)")));
- (BOOL)savePropertyProperty:(AnalytikaProperty *)property __attribute__((swift_name("saveProperty(property:)")));
- (BOOL)setUserIdUserId:(NSString *)userId __attribute__((swift_name("setUserId(userId:)")));
@end

__attribute__((swift_name("SessionService")))
@protocol AnalytikaSessionService
@required
- (void)clearUserPropertiesExcludedUserProperties:(NSArray<NSString *> *)excludedUserProperties __attribute__((swift_name("clearUserProperties(excludedUserProperties:)")));
- (void)deleteAllSessionsNotInExcludedSessionIds:(NSArray<NSString *> *)excludedSessionIds __attribute__((swift_name("deleteAllSessionsNotIn(excludedSessionIds:)")));
- (void)deleteSessionLastSession:(AnalytikaSession *)lastSession __attribute__((swift_name("deleteSession(lastSession:)")));
- (NSArray<AnalytikaSession *> *)getAllSessionsSync __attribute__((swift_name("getAllSessionsSync()")));
- (void)removeUserPropertyKey:(NSString *)key __attribute__((swift_name("removeUserProperty(key:)")));
- (void)updateCurrentSessionPropertiesProperty:(AnalytikaProperty *)property __attribute__((swift_name("updateCurrentSessionProperties(property:)")));
- (void)updateUserPropertyProperty:(AnalytikaProperty *)property __attribute__((swift_name("updateUserProperty(property:)")));
@property AnalytikaSession *currentSession __attribute__((swift_name("currentSession")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformName")))
@interface AnalytikaPlatformName : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)platformName __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaPlatformName *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ANDROID __attribute__((swift_name("ANDROID")));
@property (readonly) NSString *IOS __attribute__((swift_name("IOS")));
@property (readonly) NSString *JS __attribute__((swift_name("JS")));
@property (readonly) NSString *JVM __attribute__((swift_name("JVM")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PropertyKeys")))
@interface AnalytikaPropertyKeys : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)propertyKeys __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaPropertyKeys *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PropertyKeys.APPLICATION")))
@interface AnalytikaPropertyKeysAPPLICATION : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)aPPLICATION __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaPropertyKeysAPPLICATION *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *APP_BUILD __attribute__((swift_name("APP_BUILD")));
@property (readonly) NSString *APP_NAME __attribute__((swift_name("APP_NAME")));
@property (readonly) NSString *APP_VERSION __attribute__((swift_name("APP_VERSION")));
@property (readonly) NSString *PACKAGE_ID __attribute__((swift_name("PACKAGE_ID")));
@property (readonly) NSString *PLATFORM_SCHEMA_VERSION __attribute__((swift_name("PLATFORM_SCHEMA_VERSION")));
@property (readonly) NSString *USER_ID __attribute__((swift_name("USER_ID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PropertyKeys.APPLICATIONSYSTEM")))
@interface AnalytikaPropertyKeysAPPLICATIONSYSTEM : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sYSTEM __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaPropertyKeysAPPLICATIONSYSTEM *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ARCHITECTURE __attribute__((swift_name("ARCHITECTURE")));
@property (readonly) NSString *CARRIER __attribute__((swift_name("CARRIER")));
@property (readonly) NSString *CONNECTION_TYPE __attribute__((swift_name("CONNECTION_TYPE")));
@property (readonly) NSString *COUNTRY_CODE __attribute__((swift_name("COUNTRY_CODE")));
@property (readonly) NSString *DEVICE_ID __attribute__((swift_name("DEVICE_ID")));
@property (readonly) NSString *DEVICE_MANUFACTURER __attribute__((swift_name("DEVICE_MANUFACTURER")));
@property (readonly) NSString *DEVICE_MODEL __attribute__((swift_name("DEVICE_MODEL")));
@property (readonly) NSString *MEM_USAGE_MB __attribute__((swift_name("MEM_USAGE_MB")));
@property (readonly) NSString *OS_BUILD __attribute__((swift_name("OS_BUILD")));
@property (readonly) NSString *OS_MAJOR_VERSION __attribute__((swift_name("OS_MAJOR_VERSION")));
@property (readonly) NSString *OS_NAME __attribute__((swift_name("OS_NAME")));
@property (readonly) NSString *OS_VERSION __attribute__((swift_name("OS_VERSION")));
@property (readonly) NSString *RUNTIME __attribute__((swift_name("RUNTIME")));
@property (readonly) NSString *TIME_SINCE_LOAD __attribute__((swift_name("TIME_SINCE_LOAD")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PropertyKeys.COMMON")))
@interface AnalytikaPropertyKeysCOMMON : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cOMMON __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaPropertyKeysCOMMON *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ANALYTIKA_SDK_TYPE __attribute__((swift_name("ANALYTIKA_SDK_TYPE")));
@property (readonly) NSString *ANALYTIKA_VERSION __attribute__((swift_name("ANALYTIKA_VERSION")));
@property (readonly) NSString *EVENT_COUNTER __attribute__((swift_name("EVENT_COUNTER")));
@property (readonly) NSString *EVENT_DESTINATION __attribute__((swift_name("EVENT_DESTINATION")));
@property (readonly) NSString *EVENT_NAME __attribute__((swift_name("EVENT_NAME")));
@property (readonly) NSString *EVENT_SOURCE __attribute__((swift_name("EVENT_SOURCE")));
@property (readonly) NSString *SESSION_UUID __attribute__((swift_name("SESSION_UUID")));
@property (readonly) NSString *SYSTEM_CONFIGURATION_TYPE __attribute__((swift_name("SYSTEM_CONFIGURATION_TYPE")));
@property (readonly) NSString *TIMESTAMP __attribute__((swift_name("TIMESTAMP")));
@property (readonly) NSString *TIMESTAMP_SINCE_SESSION_START __attribute__((swift_name("TIMESTAMP_SINCE_SESSION_START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PropertyKeys.NodeJsService")))
@interface AnalytikaPropertyKeysNodeJsService : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nodeJsService __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaPropertyKeysNodeJsService *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *APPLICATION_NAME __attribute__((swift_name("APPLICATION_NAME")));
@property (readonly) NSString *ENVIRONMENT __attribute__((swift_name("ENVIRONMENT")));
@property (readonly) NSString *HOSTNAME __attribute__((swift_name("HOSTNAME")));
@property (readonly) NSString *IP_ADDRESS __attribute__((swift_name("IP_ADDRESS")));
@property (readonly) NSString *PID __attribute__((swift_name("PID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PropertyKeys.SERVICE")))
@interface AnalytikaPropertyKeysSERVICE : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sERVICE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaPropertyKeysSERVICE *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *INSTANCE_ID __attribute__((swift_name("INSTANCE_ID")));
@property (readonly) NSString *SERVICE_NAME __attribute__((swift_name("SERVICE_NAME")));
@property (readonly) NSString *VERSION __attribute__((swift_name("VERSION")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkType")))
@interface AnalytikaSdkType : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sdkType __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaSdkType *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ANDROID __attribute__((swift_name("ANDROID")));
@property (readonly) NSString *IOS __attribute__((swift_name("IOS")));
@property (readonly) NSString *JVM __attribute__((swift_name("JVM")));
@property (readonly) NSString *NODEJS __attribute__((swift_name("NODEJS")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SystemConfigurationTypes")))
@interface AnalytikaSystemConfigurationTypes : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)systemConfigurationTypes __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaSystemConfigurationTypes *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *DEFAULT_CONFIGURATION __attribute__((swift_name("DEFAULT_CONFIGURATION")));
@property (readonly) NSString *DEVICE_CONFIGURATION __attribute__((swift_name("DEVICE_CONFIGURATION")));
@property (readonly) NSString *NODE_JS_CONFIGURATION __attribute__((swift_name("NODE_JS_CONFIGURATION")));
@property (readonly) NSString *SERVICE_CONFIGURATION __attribute__((swift_name("SERVICE_CONFIGURATION")));
@end


/**
 * Implement this interface to support custom session handling.
 */
__attribute__((swift_name("SessionHandler")))
@protocol AnalytikaSessionHandler
@required
- (NSString *)getSessionId __attribute__((swift_name("getSessionId()")));

/**
 * Configures custom session refresh schedule. Each time a new session must be started,
 * [trigger] must be called by the implementation.
 */
- (void)scheduleSessionRefreshTrigger:(void (^)(NSString *))trigger __attribute__((swift_name("scheduleSessionRefresh(trigger:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionRefreshNotifier")))
@interface AnalytikaSessionRefreshNotifier : AnalytikaBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)removeListener __attribute__((swift_name("removeListener()")));
- (void)setListenerListener:(id<AnalytikaSessionRefreshNotifierListener>)listener __attribute__((swift_name("setListener(listener:)")));
- (void)triggerRefreshSessionId:(NSString *)sessionId __attribute__((swift_name("triggerRefresh(sessionId:)")));
@end

__attribute__((swift_name("SessionRefreshNotifierListener")))
@protocol AnalytikaSessionRefreshNotifierListener
@required
- (void)refreshSessionId:(NSString *)sessionId __attribute__((swift_name("refresh(sessionId:)")));
@end

__attribute__((swift_name("TimeProvider")))
@protocol AnalytikaTimeProvider
@required
- (int64_t)getCurrentTimeInMillis __attribute__((swift_name("getCurrentTimeInMillis()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultTimeProvider")))
@interface AnalytikaDefaultTimeProvider : AnalytikaBase <AnalytikaTimeProvider>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int64_t)getCurrentTimeInMillis __attribute__((swift_name("getCurrentTimeInMillis()")));
@end


/**
 * A validator to validate the fired event
 */
__attribute__((swift_name("EventValidator")))
@protocol AnalytikaEventValidator
@required

/**
 * Check validity of an [AnalytikaEvent]
 * return ValidationResult.Failure or ValidationResult.Success
 */
- (AnalytikaValidationResult *)checkEventValidityEvent:(AnalytikaAnalytikaEvent *)event __attribute__((swift_name("checkEventValidity(event:)")));

/**
 * Process attributes of event properties if needed
 */
- (NSDictionary<NSString *, id> *)processEventAttributeAttributes:(NSDictionary<NSString *, id> *)attributes __attribute__((swift_name("processEventAttribute(attributes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventValidatorImpl")))
@interface AnalytikaEventValidatorImpl : AnalytikaBase <AnalytikaEventValidator>
- (instancetype)initWithValidator:(AnalytikaValidator *)validator truncateAttributes:(BOOL)truncateAttributes __attribute__((swift_name("init(validator:truncateAttributes:)"))) __attribute__((objc_designated_initializer));
- (AnalytikaValidationResult *)checkEventValidityEvent:(AnalytikaAnalytikaEvent *)event __attribute__((swift_name("checkEventValidity(event:)")));
- (NSDictionary<NSString *, id> *)processEventAttributeAttributes:(NSDictionary<NSString *, id> *)attributes __attribute__((swift_name("processEventAttribute(attributes:)")));
@end


/**
 * Platform specific validator provider
 */
__attribute__((swift_name("PlatformValidator")))
@protocol AnalytikaPlatformValidator
@required

/**
 * Get list of reserved names that is specific to target platform
 *
 * @return List of reserved names to be validated
 */
- (NSArray<NSString *> *)getReservedNames __attribute__((swift_name("getReservedNames()")));
@end

__attribute__((swift_name("ValidationResult")))
@interface AnalytikaValidationResult : AnalytikaBase
@end

__attribute__((swift_name("ValidationResult.Failure")))
@interface AnalytikaValidationResultFailure : AnalytikaValidationResult
- (instancetype)initWithKey:(NSString *)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnalytikaValidationResultFailureCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t failureCode __attribute__((swift_name("failureCode")));
@property (readonly) NSString *failureMessage __attribute__((swift_name("failureMessage")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValidationResult.FailureCompanion")))
@interface AnalytikaValidationResultFailureCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaValidationResultFailureCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t FAILURE_CODE_INVALID_STRING __attribute__((swift_name("FAILURE_CODE_INVALID_STRING")));
@property (readonly) NSString *FAILURE_CODE_INVALID_STRING_MESSAGE __attribute__((swift_name("FAILURE_CODE_INVALID_STRING_MESSAGE")));
@property (readonly) int32_t FAILURE_CODE_NULL_KEY __attribute__((swift_name("FAILURE_CODE_NULL_KEY")));
@property (readonly) NSString *FAILURE_CODE_NULL_KEY_MESSAGE __attribute__((swift_name("FAILURE_CODE_NULL_KEY_MESSAGE")));
@property (readonly) int32_t FAILURE_CODE_RESERVED_KEY __attribute__((swift_name("FAILURE_CODE_RESERVED_KEY")));
@property (readonly) NSString *FAILURE_CODE_RESERVED_KEY_MESSAGE __attribute__((swift_name("FAILURE_CODE_RESERVED_KEY_MESSAGE")));
@property (readonly) int32_t FAILURE_CODE_VALUE_CONTAINS_XML_TAGS __attribute__((swift_name("FAILURE_CODE_VALUE_CONTAINS_XML_TAGS")));
@property (readonly) NSString *FAILURE_CODE_VALUE_CONTAINS_XML_TAGS_MESSAGE __attribute__((swift_name("FAILURE_CODE_VALUE_CONTAINS_XML_TAGS_MESSAGE")));
@property (readonly) int32_t FAILURE_CODE_VALUE_SIZE_EXCEEDED __attribute__((swift_name("FAILURE_CODE_VALUE_SIZE_EXCEEDED")));
@property (readonly) NSString *FAILURE_CODE_VALUE_SIZE_EXCEEDED_MESSAGE __attribute__((swift_name("FAILURE_CODE_VALUE_SIZE_EXCEEDED_MESSAGE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValidationResult.FailureInvalidString")))
@interface AnalytikaValidationResultFailureInvalidString : AnalytikaValidationResultFailure
- (instancetype)initWithKey:(NSString *)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t failureCode __attribute__((swift_name("failureCode")));
@property (readonly) NSString *failureMessage __attribute__((swift_name("failureMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValidationResult.FailureNullKey")))
@interface AnalytikaValidationResultFailureNullKey : AnalytikaValidationResultFailure
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(NSString *)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) int32_t failureCode __attribute__((swift_name("failureCode")));
@property (readonly) NSString *failureMessage __attribute__((swift_name("failureMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValidationResult.FailureReservedKey")))
@interface AnalytikaValidationResultFailureReservedKey : AnalytikaValidationResultFailure
- (instancetype)initWithKey:(NSString *)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t failureCode __attribute__((swift_name("failureCode")));
@property (readonly) NSString *failureMessage __attribute__((swift_name("failureMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValidationResult.FailureSizeExceeded")))
@interface AnalytikaValidationResultFailureSizeExceeded : AnalytikaValidationResultFailure
- (instancetype)initWithKey:(NSString *)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t failureCode __attribute__((swift_name("failureCode")));
@property (readonly) NSString *failureMessage __attribute__((swift_name("failureMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValidationResult.FailureXMLString")))
@interface AnalytikaValidationResultFailureXMLString : AnalytikaValidationResultFailure
- (instancetype)initWithKey:(NSString *)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t failureCode __attribute__((swift_name("failureCode")));
@property (readonly) NSString *failureMessage __attribute__((swift_name("failureMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValidationResult.Success")))
@interface AnalytikaValidationResultSuccess : AnalytikaValidationResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaValidationResultSuccess *shared __attribute__((swift_name("shared")));
@end


/**
 * Helper class to check validity of strings passed to events
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Validator")))
@interface AnalytikaValidator : AnalytikaBase
- (instancetype)initWithPlatformValidator:(id<AnalytikaPlatformValidator>)platformValidator __attribute__((swift_name("init(platformValidator:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnalytikaValidatorCompanion *companion __attribute__((swift_name("companion")));
- (AnalytikaValidationResult *)checkEventValueValidityKey:(NSString *)key value:(NSString * _Nullable)value __attribute__((swift_name("checkEventValueValidity(key:value:)")));
- (AnalytikaValidationResult *)checkKeywordValidityKey:(NSString *)key __attribute__((swift_name("checkKeywordValidity(key:)")));
- (AnalytikaValidationResult *)checkSizeValidityKey:(NSString *)key value:(NSString * _Nullable)value __attribute__((swift_name("checkSizeValidity(key:value:)")));
- (AnalytikaValidationResult *)checkStringValidityKey:(NSString * _Nullable)key allowNull:(BOOL)allowNull __attribute__((swift_name("checkStringValidity(key:allowNull:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Validator.Companion")))
@interface AnalytikaValidatorCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaValidatorCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValidatorFactory")))
@interface AnalytikaValidatorFactory : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)validatorFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaValidatorFactory *shared __attribute__((swift_name("shared")));
- (AnalytikaValidator *)createPlatformValidator:(id<AnalytikaPlatformValidator>)platformValidator __attribute__((swift_name("create(platformValidator:)")));
@end

__attribute__((swift_name("Job")))
@protocol AnalytikaJob
@required
- (id<AnalytikaReaktiveCompletable>)doJob __attribute__((swift_name("doJob()")));
- (int64_t)getExponentialRetryDelayInMillis __attribute__((swift_name("getExponentialRetryDelayInMillis()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FireEventJob")))
@interface AnalytikaFireEventJob : AnalytikaBase <AnalytikaJob>
- (instancetype)initWithNetworkRepository:(id<AnalytikaAnalytika_domainNetworkRepository>)networkRepository events:(NSArray<AnalytikaAnalytikaEvent *> *)events session:(AnalytikaSession *)session scheduleConfiguration:(AnalytikaScheduleConfiguration *)scheduleConfiguration __attribute__((swift_name("init(networkRepository:events:session:scheduleConfiguration:)"))) __attribute__((objc_designated_initializer));
- (id<AnalytikaReaktiveCompletable>)doJob __attribute__((swift_name("doJob()")));
- (int64_t)getExponentialRetryDelayInMillis __attribute__((swift_name("getExponentialRetryDelayInMillis()")));
@end

__attribute__((swift_name("JobFactory")))
@protocol AnalytikaJobFactory
@required
- (AnalytikaFireEventJob *)createFireEventJobEvents:(NSArray<AnalytikaAnalytikaEvent *> *)events session:(AnalytikaSession *)session scheduleConfiguration:(AnalytikaScheduleConfiguration *)scheduleConfiguration __attribute__((swift_name("createFireEventJob(events:session:scheduleConfiguration:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobFactoryImpl")))
@interface AnalytikaJobFactoryImpl : AnalytikaBase <AnalytikaJobFactory>
- (instancetype)initWithNetworkRepository:(id<AnalytikaAnalytika_domainNetworkRepository>)networkRepository __attribute__((swift_name("init(networkRepository:)"))) __attribute__((objc_designated_initializer));
- (AnalytikaFireEventJob *)createFireEventJobEvents:(NSArray<AnalytikaAnalytikaEvent *> *)events session:(AnalytikaSession *)session scheduleConfiguration:(AnalytikaScheduleConfiguration *)scheduleConfiguration __attribute__((swift_name("createFireEventJob(events:session:scheduleConfiguration:)")));
@end


/**
 * A simple job queue that handle the job and execute them asynchronously
 * Note: this is not fail-safe, after max retry count reached, it will simple dropped
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobQueue")))
@interface AnalytikaJobQueue : AnalytikaBase <AnalytikaEventScheduler>
- (instancetype)initWithJobFactory:(id<AnalytikaJobFactory>)jobFactory schedulersProvider:(id<AnalytikaSchedulersProvider>)schedulersProvider scheduleConfiguration:(AnalytikaScheduleConfiguration *)scheduleConfiguration __attribute__((swift_name("init(jobFactory:schedulersProvider:scheduleConfiguration:)"))) __attribute__((objc_designated_initializer));
- (void)scheduleEventsEvents:(NSArray<AnalytikaAnalytikaEvent *> *)events session:(AnalytikaSession *)session __attribute__((swift_name("scheduleEvents(events:session:)")));
@end


/**
 * A factory class to create build-in simple job queue. All fired event will be scheduling to send
 * to this simple queue and keep retried until reach max retry count and then failed.
 *
 * This is the default option unless specified otherwise
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobQueueFactory")))
@interface AnalytikaJobQueueFactory : AnalytikaBase <AnalytikaEventSchedulerFactory>

/**
 * A factory class to create build-in simple job queue. All fired event will be scheduling to send
 * to this simple queue and keep retried until reach max retry count and then failed.
 *
 * This is the default option unless specified otherwise
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A factory class to create build-in simple job queue. All fired event will be scheduling to send
 * to this simple queue and keep retried until reach max retry count and then failed.
 *
 * This is the default option unless specified otherwise
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<AnalytikaEventScheduler>)createEventScheduler __attribute__((swift_name("createEventScheduler()")));
@end

__attribute__((swift_name("JobschedulerLogger")))
@protocol AnalytikaJobschedulerLogger
@required
- (void)errorMessage:(NSString * _Nullable)message throwable_:(AnalytikaKotlinThrowable * _Nullable)throwable __attribute__((swift_name("error(message:throwable_:)")));
- (void)infoMessage:(NSString *)message __attribute__((swift_name("info(message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobSchedulerLogger")))
@interface AnalytikaJobSchedulerLogger : AnalytikaBase <AnalytikaJobschedulerLogger>
- (instancetype)initWithLogger:(id<AnalytikaLogger>)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
- (void)errorMessage:(NSString * _Nullable)message throwable_:(AnalytikaKotlinThrowable * _Nullable)throwable __attribute__((swift_name("error(message:throwable_:)")));
- (void)infoMessage:(NSString *)message __attribute__((swift_name("info(message:)")));
@property (readonly) id<AnalytikaLogger> logger __attribute__((swift_name("logger")));
@end


/**
 * This is an abstraction for all Interceptors
 *
 * Interceptors could be for OkHttp clients, URLSession for iOS, Ktor client features, or anything
 * else in the future
 */
__attribute__((swift_name("PlatformInterceptor")))
@protocol AnalytikaPlatformInterceptor
@required
@end


/**
 * Building block for an interceptor
 *
 * To add a new interceptor for a network client provider
 * Make sure you implement [PlatformInterceptor] for it and provide a factory by implementing
 * [PlatformInterceptorFactory]
 *
 */
__attribute__((swift_name("PlatformInterceptorFactory")))
@protocol AnalytikaPlatformInterceptorFactory
@required

/**
 * Creates a [PlatformInterceptor] for network client based on the type of the Interceptor
 *
 * @param clientIdentifier identifier for the network client
 *
 * Returns a [PlatformInterceptor] of type [T]
 */
- (id<AnalytikaPlatformInterceptor>)createClientIdentifier:(NSString *)clientIdentifier __attribute__((swift_name("create(clientIdentifier:)")));
@end

__attribute__((swift_name("UrlSessionInterceptor")))
@protocol AnalytikaUrlSessionInterceptor <AnalytikaPlatformInterceptor>
@required

/**
 * This should be the final callback that holds all required info
 */
- (void)onUrlResponseTask:(NSURLSessionTask *)task metrics:(NSURLSessionTaskMetrics * _Nullable)metrics __attribute__((swift_name("onUrlResponse(task:metrics:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UrlSessionPlatformInterceptorFactory")))
@interface AnalytikaUrlSessionPlatformInterceptorFactory : AnalytikaBase <AnalytikaPlatformInterceptorFactory>
- (instancetype)initWithCareemAnalyticsTracker:(id<AnalytikaCareemAnalyticsTracker>)careemAnalyticsTracker __attribute__((swift_name("init(careemAnalyticsTracker:)"))) __attribute__((objc_designated_initializer));
- (id<AnalytikaUrlSessionInterceptor>)createClientIdentifier:(NSString *)clientIdentifier __attribute__((swift_name("create(clientIdentifier:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalytikaKtorFeatureDependency")))
@interface AnalytikaAnalytikaKtorFeatureDependency : AnalytikaBase <AnalytikaPlatformInterceptor>
- (instancetype)initWithFeature:(AnalytikaAnalytikaKtorObserverFeature *)feature config:(void (^)(AnalytikaAnalytikaKtorObserverConfig *))config __attribute__((swift_name("init(feature:config:)"))) __attribute__((objc_designated_initializer));
@property (readonly) void (^config)(AnalytikaAnalytikaKtorObserverConfig *) __attribute__((swift_name("config")));
@property (readonly) AnalytikaAnalytikaKtorObserverFeature *feature __attribute__((swift_name("feature")));
@end


/**
 * Observe response feature.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalytikaKtorObserver")))
@interface AnalytikaAnalytikaKtorObserver : AnalytikaBase
- (instancetype)initWithKtorResponseHandler:(id<AnalytikaKtorResponseHandler>)ktorResponseHandler __attribute__((swift_name("init(ktorResponseHandler:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnalytikaAnalytikaKtorObserverFeature *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalytikaKtorObserver.Config")))
@interface AnalytikaAnalytikaKtorObserverConfig : AnalytikaBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property id<AnalytikaKtorResponseHandler> ktorResponseHandler __attribute__((swift_name("ktorResponseHandler")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol AnalytikaKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(AnalytikaKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) AnalytikaKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalytikaKtorObserver.Feature")))
@interface AnalytikaAnalytikaKtorObserverFeature : AnalytikaBase <AnalytikaKtor_client_coreHttpClientPlugin>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)feature __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaAnalytikaKtorObserverFeature *shared __attribute__((swift_name("shared")));
- (void)installPlugin:(AnalytikaAnalytikaKtorObserver *)plugin scope:(AnalytikaKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (AnalytikaAnalytikaKtorObserver *)prepareBlock:(void (^)(AnalytikaAnalytikaKtorObserverConfig *))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) AnalytikaKtor_utilsAttributeKey<AnalytikaAnalytikaKtorObserver *> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorPlatformInterceptorFactory")))
@interface AnalytikaKtorPlatformInterceptorFactory : AnalytikaBase <AnalytikaPlatformInterceptorFactory>
- (instancetype)initWithCareemAnalyticsTracker:(id<AnalytikaCareemAnalyticsTracker>)careemAnalyticsTracker __attribute__((swift_name("init(careemAnalyticsTracker:)"))) __attribute__((objc_designated_initializer));
- (AnalytikaAnalytikaKtorFeatureDependency *)createClientIdentifier:(NSString *)clientIdentifier __attribute__((swift_name("create(clientIdentifier:)")));
@end

__attribute__((swift_name("KtorResponseHandler")))
@protocol AnalytikaKtorResponseHandler
@required
- (void)handleKtorHttpResponseResponse:(AnalytikaKtor_client_coreHttpResponse *)response cause:(AnalytikaKotlinThrowable * _Nullable)cause __attribute__((swift_name("handleKtorHttpResponse(response:cause:)")));
- (void)handleKtorRequestExceptionContext:(AnalytikaKtor_client_coreHttpRequestBuilder *)context cause:(AnalytikaKotlinThrowable *)cause __attribute__((swift_name("handleKtorRequestException(context:cause:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoRecoveryStrategy")))
@interface AnalytikaNoRecoveryStrategy : AnalytikaBase <AnalytikaRecoveryStrategy>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)recover __attribute__((swift_name("recover()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionRecoveryStrategy")))
@interface AnalytikaSessionRecoveryStrategy : AnalytikaKotlinEnum<AnalytikaSessionRecoveryStrategy *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AnalytikaSessionRecoveryStrategy *dbStrategy __attribute__((swift_name("dbStrategy")));
@property (class, readonly) AnalytikaSessionRecoveryStrategy *noStrategy __attribute__((swift_name("noStrategy")));
+ (AnalytikaKotlinArray<AnalytikaSessionRecoveryStrategy *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AnalytikaSessionRecoveryStrategy *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StorageConfiguration")))
@interface AnalytikaStorageConfiguration : AnalytikaKotlinEnum<AnalytikaStorageConfiguration *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AnalytikaStorageConfiguration *disk __attribute__((swift_name("disk")));
@property (class, readonly) AnalytikaStorageConfiguration *memory __attribute__((swift_name("memory")));
+ (AnalytikaKotlinArray<AnalytikaStorageConfiguration *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AnalytikaStorageConfiguration *> *entries __attribute__((swift_name("entries")));
@end


/**
 * A factory class to create build-in job scheduler. All fired event will be scheduling to send to
 * this job scheduler and keep retried until reach max retry count, then it will stored in storage
 * depends on [StorageConfiguration] and retry when service is restarted and recovered.
 * So it's fail-safe in general.
 *
 * NOTE: for Android platform, this job scheduler only run on Android version 5.0 or above (API level 21+),
 * if running below this version, it will switch back to use [JobQueueFactory]
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobSchedulerFactory")))
@interface AnalytikaJobSchedulerFactory : AnalytikaBase <AnalytikaEventSchedulerFactory>

/**
 * A factory class to create build-in job scheduler. All fired event will be scheduling to send to
 * this job scheduler and keep retried until reach max retry count, then it will stored in storage
 * depends on [StorageConfiguration] and retry when service is restarted and recovered.
 * So it's fail-safe in general.
 *
 * NOTE: for Android platform, this job scheduler only run on Android version 5.0 or above (API level 21+),
 * if running below this version, it will switch back to use [JobQueueFactory]
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A factory class to create build-in job scheduler. All fired event will be scheduling to send to
 * this job scheduler and keep retried until reach max retry count, then it will stored in storage
 * depends on [StorageConfiguration] and retry when service is restarted and recovered.
 * So it's fail-safe in general.
 *
 * NOTE: for Android platform, this job scheduler only run on Android version 5.0 or above (API level 21+),
 * if running below this version, it will switch back to use [JobQueueFactory]
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<AnalytikaEventScheduler>)createEventScheduler __attribute__((swift_name("createEventScheduler()")));
@end


/**
 * This is an interactor class to schedule events by [JobScheduler]
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobSchedulerInteractor")))
@interface AnalytikaJobSchedulerInteractor : AnalytikaBase <AnalytikaEventScheduler>
- (instancetype)initWithJson:(AnalytikaKotlinx_serialization_jsonJson *)json timeProvider:(id<AnalytikaTimeProvider>)timeProvider jobScheduler:(id<AnalytikaJobschedulerJobScheduler>)jobScheduler scheduleConfiguration:(AnalytikaScheduleConfiguration *)scheduleConfiguration __attribute__((swift_name("init(json:timeProvider:jobScheduler:scheduleConfiguration:)"))) __attribute__((objc_designated_initializer));
- (void)scheduleEventsEvents:(NSArray<AnalytikaAnalytikaEvent *> *)events session:(AnalytikaSession *)session __attribute__((swift_name("scheduleEvents(events:session:)")));
@end


/**
 * Configuration of scheduler
 * Scheduler type, retry count and initial retry delay time can be passed by constructor
 * TODO: add check on maxRetryCount and initialRetryDelayTime to check valid input (not too high or too low)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleConfiguration")))
@interface AnalytikaScheduleConfiguration : AnalytikaBase
- (instancetype)initWithMaxRetryCount:(int32_t)maxRetryCount initialRetryDelayTime:(int64_t)initialRetryDelayTime __attribute__((swift_name("init(maxRetryCount:initialRetryDelayTime:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformValidatorImpl")))
@interface AnalytikaPlatformValidatorImpl : AnalytikaBase <AnalytikaPlatformValidator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSArray<NSString *> *)getReservedNames __attribute__((swift_name("getReservedNames()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface AnalytikaKtor_client_coreHttpClientConfig<T> : AnalytikaBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AnalytikaKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(AnalytikaKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<AnalytikaKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(AnalytikaKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(AnalytikaKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

@interface AnalytikaKtor_client_coreHttpClientConfig (Extensions)

/**
 * Configure and install [AnalytikaKtorObserver] in [HttpClient].
 */
- (void)AnalytikaKtorObserverBlock:(void (^)(AnalytikaAnalytikaKtorObserverConfig *))block __attribute__((swift_name("AnalytikaKtorObserver(block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActualKt")))
@interface AnalytikaActualKt : AnalytikaBase
+ (NSString *)generateUuid __attribute__((swift_name("generateUuid()")));
+ (int64_t)getSystemTimeInMillis __attribute__((swift_name("getSystemTimeInMillis()")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface AnalytikaKotlinThrowable : AnalytikaBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AnalytikaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AnalytikaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (AnalytikaKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AnalytikaKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface AnalytikaKotlinEnumCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface AnalytikaKotlinArray<T> : AnalytikaBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(AnalytikaInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<AnalytikaKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface AnalytikaKotlinPair<__covariant A, __covariant B> : AnalytikaBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (AnalytikaKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol AnalytikaKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<AnalytikaKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<AnalytikaKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol AnalytikaKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<AnalytikaKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<AnalytikaKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol AnalytikaKotlinx_serialization_coreKSerializer <AnalytikaKotlinx_serialization_coreSerializationStrategy, AnalytikaKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol AnalytikaKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<AnalytikaKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("ReaktiveScheduler")))
@protocol AnalytikaReaktiveScheduler
@required
- (void)destroy __attribute__((swift_name("destroy()")));
- (id<AnalytikaReaktiveSchedulerExecutor>)doNewExecutor __attribute__((swift_name("doNewExecutor()")));
@end

__attribute__((swift_name("ReaktiveSource")))
@protocol AnalytikaReaktiveSource
@required
- (void)subscribeObserver:(id<AnalytikaReaktiveObserver>)observer __attribute__((swift_name("subscribe(observer:)")));
@end

__attribute__((swift_name("ReaktiveCompletable")))
@protocol AnalytikaReaktiveCompletable <AnalytikaReaktiveSource>
@required
@end

__attribute__((swift_name("Analytika_domainNetworkRepository")))
@protocol AnalytikaAnalytika_domainNetworkRepository
@required
- (id<AnalytikaReaktiveCompletable>)fireEventsAnalytikaEvents:(NSArray<AnalytikaAnalytikaEvent *> *)analytikaEvents session:(AnalytikaSession *)session __attribute__((swift_name("fireEvents(analytikaEvents:session:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol AnalytikaKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<AnalytikaKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol AnalytikaKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface AnalytikaKtor_client_coreHttpClient : AnalytikaBase <AnalytikaKotlinx_coroutines_coreCoroutineScope, AnalytikaKtor_ioCloseable>
- (instancetype)initWithEngine:(id<AnalytikaKtor_client_coreHttpClientEngine>)engine userConfig:(AnalytikaKtor_client_coreHttpClientConfig<AnalytikaKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (AnalytikaKtor_client_coreHttpClient *)configBlock:(void (^)(AnalytikaKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<AnalytikaKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<AnalytikaKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<AnalytikaKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<AnalytikaKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) AnalytikaKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) AnalytikaKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) AnalytikaKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) AnalytikaKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) AnalytikaKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) AnalytikaKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface AnalytikaKtor_utilsAttributeKey<T> : AnalytikaBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol AnalytikaKtor_httpHttpMessage
@required
@property (readonly) id<AnalytikaKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface AnalytikaKtor_client_coreHttpResponse : AnalytikaBase <AnalytikaKtor_httpHttpMessage, AnalytikaKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AnalytikaKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<AnalytikaKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) AnalytikaKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) AnalytikaKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) AnalytikaKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol AnalytikaKtor_httpHttpMessageBuilder
@required
@property (readonly) AnalytikaKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface AnalytikaKtor_client_coreHttpRequestBuilder : AnalytikaBase <AnalytikaKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) AnalytikaKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (AnalytikaKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<AnalytikaKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<AnalytikaKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<AnalytikaKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (AnalytikaKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(AnalytikaKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (AnalytikaKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(AnalytikaKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(AnalytikaKtor_httpURLBuilder *, AnalytikaKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<AnalytikaKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property AnalytikaKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<AnalytikaKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) AnalytikaKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property AnalytikaKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) AnalytikaKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol AnalytikaKotlinx_serialization_coreSerialFormat
@required
@property (readonly) AnalytikaKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol AnalytikaKotlinx_serialization_coreStringFormat <AnalytikaKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<AnalytikaKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<AnalytikaKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface AnalytikaKotlinx_serialization_jsonJson : AnalytikaBase <AnalytikaKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) AnalytikaKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<AnalytikaKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(AnalytikaKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<AnalytikaKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (AnalytikaKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<AnalytikaKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<AnalytikaKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (AnalytikaKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) AnalytikaKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) AnalytikaKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("JobschedulerJobScheduler")))
@protocol AnalytikaJobschedulerJobScheduler
@required
- (void)scheduleJobInfo:(AnalytikaJobschedulerJobInfo *)jobInfo __attribute__((swift_name("schedule(jobInfo:)")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol AnalytikaKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol AnalytikaKotlinx_serialization_coreEncoder
@required
- (id<AnalytikaKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<AnalytikaKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<AnalytikaKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<AnalytikaKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<AnalytikaKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) AnalytikaKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol AnalytikaKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<AnalytikaKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<AnalytikaKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) AnalytikaKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol AnalytikaKotlinx_serialization_coreDecoder
@required
- (id<AnalytikaKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<AnalytikaKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (AnalytikaKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<AnalytikaKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<AnalytikaKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) AnalytikaKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinException")))
@interface AnalytikaKotlinException : AnalytikaKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AnalytikaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AnalytikaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface AnalytikaKotlinRuntimeException : AnalytikaKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AnalytikaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AnalytikaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface AnalytikaKotlinIllegalStateException : AnalytikaKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AnalytikaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AnalytikaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface AnalytikaKotlinCancellationException : AnalytikaKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AnalytikaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AnalytikaKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol AnalytikaKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("ReaktiveDisposable")))
@protocol AnalytikaReaktiveDisposable
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@property (readonly) BOOL isDisposed __attribute__((swift_name("isDisposed")));
@end

__attribute__((swift_name("ReaktiveSchedulerExecutor")))
@protocol AnalytikaReaktiveSchedulerExecutor <AnalytikaReaktiveDisposable>
@required
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)submitDelayMillis:(int64_t)delayMillis task:(void (^)(void))task __attribute__((swift_name("submit(delayMillis:task:)")));
- (void)submitRepeatingStartDelayMillis:(int64_t)startDelayMillis periodMillis:(int64_t)periodMillis task:(void (^)(void))task __attribute__((swift_name("submitRepeating(startDelayMillis:periodMillis:task:)")));
@end

__attribute__((swift_name("ReaktiveObserver")))
@protocol AnalytikaReaktiveObserver
@required
- (void)onSubscribeDisposable:(id<AnalytikaReaktiveDisposable>)disposable __attribute__((swift_name("onSubscribe(disposable:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol AnalytikaKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<AnalytikaKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<AnalytikaKotlinCoroutineContextElement> _Nullable)getKey:(id<AnalytikaKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<AnalytikaKotlinCoroutineContext>)minusKeyKey:(id<AnalytikaKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<AnalytikaKotlinCoroutineContext>)plusContext:(id<AnalytikaKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol AnalytikaKtor_client_coreHttpClientEngine <AnalytikaKotlinx_coroutines_coreCoroutineScope, AnalytikaKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(AnalytikaKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(AnalytikaKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(AnalytikaKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) AnalytikaKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) AnalytikaKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<AnalytikaKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface AnalytikaKtor_client_coreHttpClientEngineConfig : AnalytikaBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property AnalytikaKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((deprecated("The [threadsCount] property is deprecated. The [Dispatchers.IO] is used by default.")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol AnalytikaKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol AnalytikaKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(AnalytikaKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(AnalytikaKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(AnalytikaKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(AnalytikaKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(AnalytikaKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(AnalytikaKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(AnalytikaKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(AnalytikaKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<AnalytikaKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface AnalytikaKtor_eventsEvents : AnalytikaBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(AnalytikaKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<AnalytikaKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(AnalytikaKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(AnalytikaKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface AnalytikaKtor_utilsPipeline<TSubject, TContext> : AnalytikaBase
- (instancetype)initWithPhases:(AnalytikaKotlinArray<AnalytikaKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(AnalytikaKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AnalytikaKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(AnalytikaKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(AnalytikaKtor_utilsPipelinePhase *)reference phase:(AnalytikaKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(AnalytikaKtor_utilsPipelinePhase *)reference phase:(AnalytikaKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(AnalytikaKtor_utilsPipelinePhase *)phase block:(id<AnalytikaKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<AnalytikaKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(AnalytikaKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(AnalytikaKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(AnalytikaKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(AnalytikaKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<AnalytikaKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<AnalytikaKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface AnalytikaKtor_client_coreHttpReceivePipeline : AnalytikaKtor_utilsPipeline<AnalytikaKtor_client_coreHttpResponse *, AnalytikaKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(AnalytikaKotlinArray<AnalytikaKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(AnalytikaKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AnalytikaKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnalytikaKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface AnalytikaKtor_client_coreHttpRequestPipeline : AnalytikaKtor_utilsPipeline<id, AnalytikaKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(AnalytikaKotlinArray<AnalytikaKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(AnalytikaKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AnalytikaKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnalytikaKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface AnalytikaKtor_client_coreHttpResponsePipeline : AnalytikaKtor_utilsPipeline<AnalytikaKtor_client_coreHttpResponseContainer *, AnalytikaKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(AnalytikaKotlinArray<AnalytikaKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(AnalytikaKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AnalytikaKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnalytikaKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface AnalytikaKtor_client_coreHttpSendPipeline : AnalytikaKtor_utilsPipeline<id, AnalytikaKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(AnalytikaKotlinArray<AnalytikaKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(AnalytikaKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AnalytikaKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnalytikaKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol AnalytikaKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<AnalytikaKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol AnalytikaKtor_httpHeaders <AnalytikaKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface AnalytikaKtor_client_coreHttpClientCall : AnalytikaBase <AnalytikaKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(AnalytikaKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(AnalytikaKtor_client_coreHttpClient *)client requestData:(AnalytikaKtor_client_coreHttpRequestData *)requestData responseData:(AnalytikaKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnalytikaKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(AnalytikaKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(AnalytikaKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<AnalytikaKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<AnalytikaKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) AnalytikaKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<AnalytikaKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<AnalytikaKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property AnalytikaKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol AnalytikaKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause:(AnalytikaKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(AnalytikaLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(AnalytikaKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(AnalytikaLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(AnalytikaKtor_ioChunkBuffer *)dst completionHandler:(void (^)(AnalytikaInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(AnalytikaKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(AnalytikaKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(AnalytikaInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(AnalytikaInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(AnalytikaInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(AnalytikaBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(AnalytikaByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(AnalytikaDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(AnalytikaFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(AnalytikaKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(AnalytikaKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(AnalytikaInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(AnalytikaLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(AnalytikaKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(AnalytikaKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<AnalytikaKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(AnalytikaShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<AnalytikaKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<AnalytikaKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(AnalytikaBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) AnalytikaKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface AnalytikaKtor_utilsGMTDate : AnalytikaBase <AnalytikaKotlinComparable>
@property (class, readonly, getter=companion) AnalytikaKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(AnalytikaKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (AnalytikaKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(AnalytikaKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(AnalytikaKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) AnalytikaKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) AnalytikaKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface AnalytikaKtor_httpHttpStatusCode : AnalytikaBase <AnalytikaKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnalytikaKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(AnalytikaKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (AnalytikaKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (AnalytikaKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface AnalytikaKtor_httpHttpProtocolVersion : AnalytikaBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnalytikaKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (AnalytikaKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol AnalytikaKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<AnalytikaKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<AnalytikaKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<AnalytikaKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<AnalytikaKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface AnalytikaKtor_utilsStringValuesBuilderImpl : AnalytikaBase <AnalytikaKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<AnalytikaKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<AnalytikaKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<AnalytikaKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<AnalytikaKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) AnalytikaMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface AnalytikaKtor_httpHeadersBuilder : AnalytikaKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<AnalytikaKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface AnalytikaKtor_client_coreHttpRequestBuilderCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface AnalytikaKtor_client_coreHttpRequestData : AnalytikaBase
- (instancetype)initWithUrl:(AnalytikaKtor_httpUrl *)url method:(AnalytikaKtor_httpHttpMethod *)method headers:(id<AnalytikaKtor_httpHeaders>)headers body:(AnalytikaKtor_httpOutgoingContent *)body executionContext:(id<AnalytikaKotlinx_coroutines_coreJob>)executionContext attributes:(id<AnalytikaKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<AnalytikaKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<AnalytikaKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) AnalytikaKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<AnalytikaKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<AnalytikaKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) AnalytikaKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) AnalytikaKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface AnalytikaKtor_httpURLBuilder : AnalytikaBase
- (instancetype)initWithProtocol:(AnalytikaKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<AnalytikaKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnalytikaKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (AnalytikaKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<AnalytikaKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<AnalytikaKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property AnalytikaKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface AnalytikaKtor_utilsTypeInfo : AnalytikaBase
- (instancetype)initWithType:(id<AnalytikaKotlinKClass>)type reifiedType:(id<AnalytikaKotlinKType>)reifiedType kotlinType:(id<AnalytikaKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (AnalytikaKtor_utilsTypeInfo *)doCopyType:(id<AnalytikaKotlinKClass>)type reifiedType:(id<AnalytikaKotlinKType>)reifiedType kotlinType:(id<AnalytikaKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<AnalytikaKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<AnalytikaKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<AnalytikaKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol AnalytikaKotlinCoroutineContextElement <AnalytikaKotlinCoroutineContext>
@required
@property (readonly) id<AnalytikaKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol AnalytikaKotlinx_coroutines_coreJob <AnalytikaKotlinCoroutineContextElement>
@required
- (id<AnalytikaKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<AnalytikaKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause_:(AnalytikaKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
- (AnalytikaKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<AnalytikaKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(AnalytikaKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<AnalytikaKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(AnalytikaKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<AnalytikaKotlinx_coroutines_coreJob>)plusOther:(id<AnalytikaKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<AnalytikaKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<AnalytikaKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<AnalytikaKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface AnalytikaKtor_httpHttpMethod : AnalytikaBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnalytikaKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (AnalytikaKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface AnalytikaKotlinx_serialization_coreSerializersModule : AnalytikaBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<AnalytikaKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AnalytikaKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<AnalytikaKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<AnalytikaKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AnalytikaKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<AnalytikaKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AnalytikaKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<AnalytikaKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface AnalytikaKotlinx_serialization_jsonJsonDefault : AnalytikaKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface AnalytikaKotlinx_serialization_jsonJsonElement : AnalytikaBase
@property (class, readonly, getter=companion) AnalytikaKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface AnalytikaKotlinx_serialization_jsonJsonConfiguration : AnalytikaBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowTrailingComma __attribute__((swift_name("allowTrailingComma")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL decodeEnumsCaseInsensitive __attribute__((swift_name("decodeEnumsCaseInsensitive")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<AnalytikaKotlinx_serialization_jsonJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end


/**
 * Info related to a single job. Those information may be serialized and persisted
 * In order to re-create the job in the future.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobschedulerJobInfo")))
@interface AnalytikaJobschedulerJobInfo : AnalytikaBase
@property (class, readonly, getter=companion) AnalytikaJobschedulerJobInfoCompanion *companion __attribute__((swift_name("companion")));

/**
 * Info related to a single job. Those information may be serialized and persisted
 * In order to re-create the job in the future.
 */
- (AnalytikaJobschedulerJobInfo *)doCopyType:(NSString *)type uuid:(NSString *)uuid createTime:(int64_t)createTime override:(BOOL)override includeExecutingJob:(BOOL)includeExecutingJob delay:(AnalytikaLong * _Nullable)delay deadline:(AnalytikaLong * _Nullable)deadline requiredNetworkType:(AnalytikaJobschedulerRequiredNetworkType *)requiredNetworkType isPersisted:(BOOL)isPersisted params:(NSDictionary<NSString *, NSString *> *)params maxRun:(int32_t)maxRun retries:(int32_t)retries runCount:(int32_t)runCount requireCharging:(BOOL)requireCharging currentRepetition:(int32_t)currentRepetition __attribute__((swift_name("doCopy(type:uuid:createTime:override:includeExecutingJob:delay:deadline:requiredNetworkType:isPersisted:params:maxRun:retries:runCount:requireCharging:currentRepetition:)")));

/**
 * Info related to a single job. Those information may be serialized and persisted
 * In order to re-create the job in the future.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Info related to a single job. Those information may be serialized and persisted
 * In order to re-create the job in the future.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Info related to a single job. Those information may be serialized and persisted
 * In order to re-create the job in the future.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol AnalytikaKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<AnalytikaKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AnalytikaKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AnalytikaKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) AnalytikaKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol AnalytikaKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface AnalytikaKotlinx_serialization_coreSerialKind : AnalytikaBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol AnalytikaKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<AnalytikaKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AnalytikaKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AnalytikaKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) AnalytikaKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface AnalytikaKotlinNothing : AnalytikaBase
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol AnalytikaKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface AnalytikaKtor_client_coreHttpResponseData : AnalytikaBase
- (instancetype)initWithStatusCode:(AnalytikaKtor_httpHttpStatusCode *)statusCode requestTime:(AnalytikaKtor_utilsGMTDate *)requestTime headers:(id<AnalytikaKtor_httpHeaders>)headers version:(AnalytikaKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<AnalytikaKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<AnalytikaKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<AnalytikaKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) AnalytikaKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) AnalytikaKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) AnalytikaKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface AnalytikaKotlinAbstractCoroutineContextElement : AnalytikaBase <AnalytikaKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<AnalytikaKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<AnalytikaKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol AnalytikaKotlinContinuationInterceptor <AnalytikaKotlinCoroutineContextElement>
@required
- (id<AnalytikaKotlinContinuation>)interceptContinuationContinuation:(id<AnalytikaKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<AnalytikaKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface AnalytikaKotlinx_coroutines_coreCoroutineDispatcher : AnalytikaKotlinAbstractCoroutineContextElement <AnalytikaKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<AnalytikaKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnalytikaKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<AnalytikaKotlinCoroutineContext>)context block:(id<AnalytikaKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<AnalytikaKotlinCoroutineContext>)context block:(id<AnalytikaKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<AnalytikaKotlinContinuation>)interceptContinuationContinuation:(id<AnalytikaKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<AnalytikaKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (AnalytikaKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (AnalytikaKotlinx_coroutines_coreCoroutineDispatcher *)plusOther_:(AnalytikaKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<AnalytikaKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface AnalytikaKtor_client_coreProxyConfig : AnalytikaBase
- (instancetype)initWithUrl:(AnalytikaKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AnalytikaKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface AnalytikaKtor_eventsEventDefinition<T> : AnalytikaBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol AnalytikaKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface AnalytikaKtor_utilsPipelinePhase : AnalytikaBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol AnalytikaKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol AnalytikaKotlinSuspendFunction2 <AnalytikaKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface AnalytikaKtor_client_coreHttpReceivePipelinePhases : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) AnalytikaKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) AnalytikaKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) AnalytikaKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface AnalytikaKotlinUnit : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface AnalytikaKtor_client_coreHttpRequestPipelinePhases : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) AnalytikaKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) AnalytikaKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) AnalytikaKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) AnalytikaKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) AnalytikaKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface AnalytikaKtor_client_coreHttpResponsePipelinePhases : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) AnalytikaKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) AnalytikaKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) AnalytikaKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) AnalytikaKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) AnalytikaKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface AnalytikaKtor_client_coreHttpResponseContainer : AnalytikaBase
- (instancetype)initWithExpectedType:(AnalytikaKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (AnalytikaKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(AnalytikaKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AnalytikaKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface AnalytikaKtor_client_coreHttpSendPipelinePhases : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) AnalytikaKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) AnalytikaKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) AnalytikaKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) AnalytikaKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) AnalytikaKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol AnalytikaKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface AnalytikaKtor_client_coreHttpClientCallCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnalytikaKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol AnalytikaKtor_client_coreHttpRequest <AnalytikaKtor_httpHttpMessage, AnalytikaKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<AnalytikaKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) AnalytikaKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) AnalytikaKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) AnalytikaKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) AnalytikaKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface AnalytikaKtor_ioMemory : AnalytikaBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnalytikaKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(AnalytikaKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(AnalytikaKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (AnalytikaKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (AnalytikaKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface AnalytikaKtor_ioBuffer : AnalytikaBase
- (instancetype)initWithMemory:(AnalytikaKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
@property (class, readonly, getter=companion) AnalytikaKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (AnalytikaKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(AnalytikaKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) AnalytikaKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface AnalytikaKtor_ioChunkBuffer : AnalytikaKtor_ioBuffer
- (instancetype)initWithMemory:(AnalytikaKtor_ioMemory *)memory origin:(AnalytikaKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<AnalytikaKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
- (instancetype)initWithMemory:(AnalytikaKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnalytikaKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (AnalytikaKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (AnalytikaKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<AnalytikaKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) AnalytikaKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) AnalytikaKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface AnalytikaKotlinByteArray : AnalytikaBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(AnalytikaByte *(^)(AnalytikaInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (AnalytikaKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface AnalytikaKtor_ioInput : AnalytikaBase <AnalytikaKtor_ioCloseable>
- (instancetype)initWithHead:(AnalytikaKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<AnalytikaKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
@property (class, readonly, getter=companion) AnalytikaKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (AnalytikaKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(AnalytikaKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int32_t)peekToBuffer:(AnalytikaKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int64_t)peekToDestination:(AnalytikaKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<AnalytikaKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<AnalytikaKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<AnalytikaKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface AnalytikaKtor_ioByteReadPacket : AnalytikaKtor_ioInput
- (instancetype)initWithHead:(AnalytikaKtor_ioChunkBuffer *)head pool:(id<AnalytikaKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(AnalytikaKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<AnalytikaKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnalytikaKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (AnalytikaKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (AnalytikaKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(AnalytikaKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol AnalytikaKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (AnalytikaKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol AnalytikaKotlinSuspendFunction1 <AnalytikaKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol AnalytikaKotlinAppendable
@required
- (id<AnalytikaKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<AnalytikaKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<AnalytikaKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface AnalytikaKtor_utilsGMTDateCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnalytikaKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface AnalytikaKtor_utilsWeekDay : AnalytikaKotlinEnum<AnalytikaKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnalytikaKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) AnalytikaKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) AnalytikaKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) AnalytikaKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) AnalytikaKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) AnalytikaKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) AnalytikaKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) AnalytikaKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (AnalytikaKotlinArray<AnalytikaKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface AnalytikaKtor_utilsMonth : AnalytikaKotlinEnum<AnalytikaKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnalytikaKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) AnalytikaKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) AnalytikaKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) AnalytikaKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) AnalytikaKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) AnalytikaKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) AnalytikaKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) AnalytikaKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) AnalytikaKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) AnalytikaKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) AnalytikaKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) AnalytikaKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) AnalytikaKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (AnalytikaKotlinArray<AnalytikaKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface AnalytikaKtor_httpHttpStatusCodeCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (AnalytikaKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<AnalytikaKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface AnalytikaKtor_httpHttpProtocolVersionCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (AnalytikaKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (AnalytikaKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) AnalytikaKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) AnalytikaKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) AnalytikaKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) AnalytikaKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) AnalytikaKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface AnalytikaKtor_httpUrl : AnalytikaBase
@property (class, readonly, getter=companion) AnalytikaKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<AnalytikaKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) AnalytikaKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface AnalytikaKtor_httpOutgoingContent : AnalytikaBase
- (id _Nullable)getPropertyKey:(AnalytikaKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(AnalytikaKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<AnalytikaKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) AnalytikaLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) AnalytikaKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<AnalytikaKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) AnalytikaKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface AnalytikaKtor_httpURLProtocol : AnalytikaBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnalytikaKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (AnalytikaKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol AnalytikaKtor_httpParameters <AnalytikaKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface AnalytikaKtor_httpURLBuilderCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol AnalytikaKtor_httpParametersBuilder <AnalytikaKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol AnalytikaKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol AnalytikaKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol AnalytikaKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol AnalytikaKotlinKClass <AnalytikaKotlinKDeclarationContainer, AnalytikaKotlinKAnnotatedElement, AnalytikaKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol AnalytikaKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<AnalytikaKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<AnalytikaKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol AnalytikaKotlinx_coroutines_coreChildHandle <AnalytikaKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(AnalytikaKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<AnalytikaKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol AnalytikaKotlinx_coroutines_coreChildJob <AnalytikaKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<AnalytikaKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol AnalytikaKotlinSequence
@required
- (id<AnalytikaKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol AnalytikaKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) AnalytikaKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<AnalytikaKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(AnalytikaKotlinThrowable *) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<AnalytikaKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol AnalytikaKotlinx_coroutines_coreSelectClause0 <AnalytikaKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface AnalytikaKtor_httpHttpMethodCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (AnalytikaKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<AnalytikaKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) AnalytikaKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) AnalytikaKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) AnalytikaKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) AnalytikaKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) AnalytikaKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) AnalytikaKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) AnalytikaKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol AnalytikaKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<AnalytikaKotlinKClass>)kClass provider:(id<AnalytikaKotlinx_serialization_coreKSerializer> (^)(NSArray<id<AnalytikaKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<AnalytikaKotlinKClass>)kClass serializer:(id<AnalytikaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<AnalytikaKotlinKClass>)baseClass actualClass:(id<AnalytikaKotlinKClass>)actualClass actualSerializer:(id<AnalytikaKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<AnalytikaKotlinKClass>)baseClass defaultDeserializerProvider:(id<AnalytikaKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<AnalytikaKotlinKClass>)baseClass defaultDeserializerProvider:(id<AnalytikaKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<AnalytikaKotlinKClass>)baseClass defaultSerializerProvider:(id<AnalytikaKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface AnalytikaKotlinx_serialization_jsonJsonElementCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<AnalytikaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNamingStrategy")))
@protocol AnalytikaKotlinx_serialization_jsonJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<AnalytikaKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end


/**
 * Info related to a single job. Those information may be serialized and persisted
 * In order to re-create the job in the future.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobschedulerJobInfo.Companion")))
@interface AnalytikaJobschedulerJobInfoCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Info related to a single job. Those information may be serialized and persisted
 * In order to re-create the job in the future.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaJobschedulerJobInfoCompanion *shared __attribute__((swift_name("shared")));

/**
 * Info related to a single job. Those information may be serialized and persisted
 * In order to re-create the job in the future.
 */
- (id<AnalytikaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Type of connectivity required for the job to run
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobschedulerRequiredNetworkType")))
@interface AnalytikaJobschedulerRequiredNetworkType : AnalytikaKotlinEnum<AnalytikaJobschedulerRequiredNetworkType *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Type of connectivity required for the job to run
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnalytikaJobschedulerRequiredNetworkTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) AnalytikaJobschedulerRequiredNetworkType *notRequired __attribute__((swift_name("notRequired")));
@property (class, readonly) AnalytikaJobschedulerRequiredNetworkType *cellularOrWifi __attribute__((swift_name("cellularOrWifi")));
@property (class, readonly) AnalytikaJobschedulerRequiredNetworkType *wifi __attribute__((swift_name("wifi")));
+ (AnalytikaKotlinArray<AnalytikaJobschedulerRequiredNetworkType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AnalytikaJobschedulerRequiredNetworkType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol AnalytikaKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<AnalytikaKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface AnalytikaKotlinAbstractCoroutineContextKey<B, E> : AnalytikaBase <AnalytikaKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<AnalytikaKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<AnalytikaKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface AnalytikaKotlinx_coroutines_coreCoroutineDispatcherKey : AnalytikaKotlinAbstractCoroutineContextKey<id<AnalytikaKotlinContinuationInterceptor>, AnalytikaKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<AnalytikaKotlinCoroutineContextKey>)baseKey safeCast:(id<AnalytikaKotlinCoroutineContextElement> _Nullable (^)(id<AnalytikaKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol AnalytikaKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface AnalytikaKtor_ioMemoryCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnalytikaKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface AnalytikaKtor_ioBufferCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnalytikaKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol AnalytikaKtor_ioObjectPool <AnalytikaKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface AnalytikaKtor_ioChunkBufferCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnalytikaKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<AnalytikaKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<AnalytikaKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface AnalytikaKotlinByteIterator : AnalytikaBase <AnalytikaKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AnalytikaByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface AnalytikaKtor_ioInputCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface AnalytikaKtor_ioByteReadPacketCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AnalytikaKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface AnalytikaKtor_utilsWeekDayCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (AnalytikaKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (AnalytikaKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface AnalytikaKtor_utilsMonthCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (AnalytikaKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (AnalytikaKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface AnalytikaKtor_httpUrlCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface AnalytikaKtor_httpHeaderValueWithParameters : AnalytikaBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<AnalytikaKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnalytikaKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<AnalytikaKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface AnalytikaKtor_httpContentType : AnalytikaKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<AnalytikaKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<AnalytikaKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AnalytikaKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(AnalytikaKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (AnalytikaKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (AnalytikaKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface AnalytikaKtor_httpURLProtocolCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (AnalytikaKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) AnalytikaKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) AnalytikaKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) AnalytikaKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) AnalytikaKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) AnalytikaKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, AnalytikaKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface AnalytikaKotlinKTypeProjection : AnalytikaBase
- (instancetype)initWithVariance:(AnalytikaKotlinKVariance * _Nullable)variance type:(id<AnalytikaKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AnalytikaKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (AnalytikaKotlinKTypeProjection *)doCopyVariance:(AnalytikaKotlinKVariance * _Nullable)variance type:(id<AnalytikaKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<AnalytikaKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) AnalytikaKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol AnalytikaKotlinx_coroutines_coreParentJob <AnalytikaKotlinx_coroutines_coreJob>
@required
- (AnalytikaKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol AnalytikaKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<AnalytikaKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<AnalytikaKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobschedulerRequiredNetworkType.Companion")))
@interface AnalytikaJobschedulerRequiredNetworkTypeCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaJobschedulerRequiredNetworkTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<AnalytikaKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<AnalytikaKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(AnalytikaKotlinArray<id<AnalytikaKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface AnalytikaKtor_httpHeaderValueParam : AnalytikaBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (AnalytikaKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface AnalytikaKtor_httpHeaderValueWithParametersCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<AnalytikaKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface AnalytikaKtor_httpContentTypeCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (AnalytikaKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) AnalytikaKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface AnalytikaKotlinKVariance : AnalytikaKotlinEnum<AnalytikaKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AnalytikaKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) AnalytikaKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) AnalytikaKotlinKVariance *out __attribute__((swift_name("out")));
+ (AnalytikaKotlinArray<AnalytikaKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AnalytikaKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface AnalytikaKotlinKTypeProjectionCompanion : AnalytikaBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AnalytikaKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (AnalytikaKotlinKTypeProjection *)contravariantType:(id<AnalytikaKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (AnalytikaKotlinKTypeProjection *)covariantType:(id<AnalytikaKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (AnalytikaKotlinKTypeProjection *)invariantType:(id<AnalytikaKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) AnalytikaKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
