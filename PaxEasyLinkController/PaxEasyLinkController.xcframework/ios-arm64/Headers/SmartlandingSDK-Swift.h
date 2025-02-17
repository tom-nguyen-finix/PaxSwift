// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef SMARTLANDINGSDK_SWIFT_H
#define SMARTLANDINGSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="SmartlandingSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSString;

SWIFT_CLASS("_TtC15SmartlandingSDK7AppInfo")
@interface AppInfo : NSObject
@property (nonatomic, copy) NSString * _Nonnull appId;
@property (nonatomic, copy) NSString * _Nonnull name;
@property (nonatomic, copy) NSString * _Nonnull version;
@property (nonatomic) int32_t installTimeInSecond;
- (nonnull instancetype)initWithAppId:(NSString * _Nonnull)appId name:(NSString * _Nonnull)name version:(NSString * _Nonnull)version installTimeInSecond:(int32_t)installTimeInSecond OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(int32_t, CommType, closed) {
  CommTypeSL_COMM_LAN = 0x01,
  CommTypeSL_COMM_WIFI = 0x02,
  CommTypeSL_COMM_MODEM = 0x03,
  CommTypeSL_COMM_GPRS_OR_CDMA = 0x04,
  CommTypeSL_COMM_SERIAL_POR = 0x05,
};


SWIFT_CLASS("_TtC15SmartlandingSDK13Communication")
@interface Communication : NSObject
- (nonnull instancetype)initWithType:(enum CommType)type timeout:(int32_t)timeout OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithTypeVal:(int32_t)typeVal timeout:(int32_t)timeout OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, DevInfoType, closed) {
  DevInfoTypeFACTORY = 0,
  DevInfoTypeMODEL = 1,
  DevInfoTypeSERIAL_NO = 2,
  DevInfoTypeOS_TYPE = 3,
  DevInfoTypeOS_VERSION = 4,
  DevInfoTypeHARDWARE_INFO = 5,
  DevInfoTypeNO_SUPPORT = 6,
};


SWIFT_PROTOCOL("_TtP15SmartlandingSDK16DownloadCallback_")
@protocol DownloadCallback
- (void)onDownloadingWithName:(NSString * _Nullable)name totalSize:(int32_t)totalSize downloadedSize:(int32_t)downloadedSize code:(int32_t)code message:(NSString * _Nullable)message;
@end


SWIFT_CLASS("_TtC15SmartlandingSDK10Downloader")
@interface Downloader : NSObject
- (nonnull instancetype)initWithDownloadCallback:(id <DownloadCallback> _Nonnull)downloadCallback retryMax:(int32_t)retryMax OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class Server;
enum LogLevel : int32_t;

SWIFT_CLASS("_TtC15SmartlandingSDK9InitParam")
@interface InitParam : NSObject
- (nonnull instancetype)initWithTid:(NSString * _Nonnull)tid server:(Server * _Nonnull)server comm:(Communication * _Nonnull)comm downloader:(Downloader * _Nonnull)downloader logLevel:(enum LogLevel)logLevel maxTaskSize:(int32_t)maxTaskSize maxTcpReqSize:(int32_t)maxTcpReqSize OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(int32_t, InstallType, closed) {
  InstallTypeUNKNOWN = -1,
  InstallTypeAIP = 1,
  InstallTypeAUP = 2,
  InstallTypeAPP_FILES = 3,
  InstallTypeOS = 4,
  InstallTypeOPT = 5,
  InstallTypeFWP = 6,
  InstallTypeUS_PUK = 7,
  InstallTypeUA_PUK = 8,
  InstallTypeFRONT = 9,
  InstallTypeBASE_DRIVER = 10,
  InstallTypePUBLIC_FILES = 11,
  InstallTypeTM = 12,
};

typedef SWIFT_ENUM(int32_t, LogLevel, closed) {
  LogLevelSL_LOG_TRACE = 0x00,
  LogLevelSL_LOG_DEBUG = 0x01,
  LogLevelSL_LOG_INFO = 0x02,
  LogLevelSL_LOG_WARN = 0x03,
  LogLevelSL_LOG_ERROR = 0x04,
  LogLevelSL_LOG_OF = 0x05,
};


SWIFT_CLASS("_TtC15SmartlandingSDK6Server")
@interface Server : NSObject
- (nonnull instancetype)initWithHostname:(NSString * _Nonnull)hostname port:(int32_t)port OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP15SmartlandingSDK20SmartlandingCallback_")
@protocol SmartlandingCallback
- (int32_t)onInstallWithType:(enum InstallType)type filePath:(NSString * _Nonnull)filePath appId:(NSString * _Nonnull)appId SWIFT_WARN_UNUSED_RESULT;
- (int32_t)onUninstallWithType:(enum InstallType)type appId:(NSString * _Nonnull)appId SWIFT_WARN_UNUSED_RESULT;
- (int32_t)onRkiWithIp:(NSString * _Nonnull)ip port:(int32_t)port SWIFT_WARN_UNUSED_RESULT;
- (NSArray<AppInfo *> * _Nonnull)getInstalledApps SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getDeviceInfoWithDevInfoType:(enum DevInfoType)devInfoType SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC15SmartlandingSDK15SmartlandingSdk")
@interface SmartlandingSdk : NSObject
+ (SmartlandingSdk * _Nonnull)getInstance:(id <SmartlandingCallback> _Nonnull)smartlandingCallback SWIFT_WARN_UNUSED_RESULT;
/// Description: Init the SDK, must be fist called when using the SDK
/// Notice:      “SL_Init” is usually called only once, unless the parameters change
/// @param param parameters for initialization
/// @return      0: success
/// -1: fail can call SmartlandingSdk#getErrorCode and SmartlandingSdk#getErrorMessage to get error info
- (void)initSdkWithAppDataPath:(NSString * _Nonnull)appDataPath param:(InitParam * _Nonnull)param SWIFT_METHOD_FAMILY(none);
- (NSString * _Nonnull)getSdkVersion SWIFT_WARN_UNUSED_RESULT;
/// call smartlanding sync task
/// @return ret
/// 0: no task
/// 1: has uninstall task
/// 2: has rki task
/// 3: has install task and downloading files (multithread)
/// 4: has install task and downloading files (multithread) or sync completed(single thread)
/// 5: local task exist, do SmartlandingSdk#ProcessTask first
/// -1: fail, can call SmartlandingSdk#getErrorCode and SmartlandingSdk#getErrorMessage to get error info
/// -99: need tid
/// -100: lock
- (int32_t)syncTask SWIFT_WARN_UNUSED_RESULT;
/// @return ret
/// 0: no task
/// 1: is downloading and wait for download complete
/// 2: download not completed, do SL_Sync first
/// 3: process success and report success
/// 4: process fail and report success
/// -1: fail
- (int32_t)processTask SWIFT_WARN_UNUSED_RESULT;
- (int32_t)getErrorCode SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getErrorMessage SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
