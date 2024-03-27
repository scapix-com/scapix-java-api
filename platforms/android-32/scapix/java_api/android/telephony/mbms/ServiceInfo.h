// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_SERVICEINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_SERVICEINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::mbms { class ServiceInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::mbms::ServiceInfo>
{
	static constexpr fixed_string class_name = "android/telephony/mbms/ServiceInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_SERVICEINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_SERVICEINFO)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_SERVICEINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::mbms::ServiceInfo : public jni::object_base<"android/telephony/mbms/ServiceInfo",
	java::lang::Object>
{
public:

	jni::ref<java::lang::CharSequence> getNameForLocale(jni::ref<java::util::Locale> locale) { return call_method<"getNameForLocale", jni::ref<java::lang::CharSequence>>(locale); }
	jni::ref<java::util::Set> getNamedContentLocales() { return call_method<"getNamedContentLocales", jni::ref<java::util::Set>>(); }
	jni::ref<java::lang::String> getServiceClassName() { return call_method<"getServiceClassName", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::List> getLocales() { return call_method<"getLocales", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::String> getServiceId() { return call_method<"getServiceId", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::Date> getSessionStartTime() { return call_method<"getSessionStartTime", jni::ref<java::util::Date>>(); }
	jni::ref<java::util::Date> getSessionEndTime() { return call_method<"getSessionEndTime", jni::ref<java::util::Date>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	ServiceInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_SERVICEINFO