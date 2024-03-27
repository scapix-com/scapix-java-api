// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_UTIL_TIMEUTILS_FWD
#define SCAPIX_JAVA_API_ANDROID_UTIL_TIMEUTILS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::util { class TimeUtils; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::util::TimeUtils>
{
	static constexpr fixed_string class_name = "android/util/TimeUtils";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_TIMEUTILS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_UTIL_TIMEUTILS)
#define SCAPIX_JAVA_API_ANDROID_UTIL_TIMEUTILS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/TimeZone.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::util::TimeUtils : public jni::object_base<"android/util/TimeUtils",
	java::lang::Object>
{
public:

	static jni::ref<java::util::TimeZone> getTimeZone(jint offset, jboolean dst, jlong when, jni::ref<java::lang::String> p4) { return call_static_method<"getTimeZone", jni::ref<java::util::TimeZone>>(offset, dst, when, p4); }
	static jni::ref<java::util::List> getTimeZoneIdsForCountryCode(jni::ref<java::lang::String> countryCode) { return call_static_method<"getTimeZoneIdsForCountryCode", jni::ref<java::util::List>>(countryCode); }
	static jni::ref<java::lang::String> getTimeZoneDatabaseVersion() { return call_static_method<"getTimeZoneDatabaseVersion", jni::ref<java::lang::String>>(); }

protected:

	TimeUtils(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_TIMEUTILS
