// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_AVAILABLENETWORKINFO_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_AVAILABLENETWORKINFO_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class AvailableNetworkInfo_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::AvailableNetworkInfo_Builder>
{
	static constexpr fixed_string class_name = "android/telephony/AvailableNetworkInfo$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_AVAILABLENETWORKINFO_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_AVAILABLENETWORKINFO_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_AVAILABLENETWORKINFO_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/telephony/AvailableNetworkInfo.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::AvailableNetworkInfo_Builder : public jni::object_base<"android/telephony/AvailableNetworkInfo$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::telephony::AvailableNetworkInfo_Builder> new_object(jint subId) { return base_::new_object(subId); }
	jni::ref<android::telephony::AvailableNetworkInfo_Builder> setPriority(jint priority) { return call_method<"setPriority", jni::ref<android::telephony::AvailableNetworkInfo_Builder>>(priority); }
	jni::ref<android::telephony::AvailableNetworkInfo_Builder> setMccMncs(jni::ref<java::util::List> mccMncs) { return call_method<"setMccMncs", jni::ref<android::telephony::AvailableNetworkInfo_Builder>>(mccMncs); }
	jni::ref<android::telephony::AvailableNetworkInfo_Builder> setRadioAccessSpecifiers(jni::ref<java::util::List> radioAccessSpecifiers) { return call_method<"setRadioAccessSpecifiers", jni::ref<android::telephony::AvailableNetworkInfo_Builder>>(radioAccessSpecifiers); }
	jni::ref<android::telephony::AvailableNetworkInfo> build() { return call_method<"build", jni::ref<android::telephony::AvailableNetworkInfo>>(); }

protected:

	AvailableNetworkInfo_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_AVAILABLENETWORKINFO_BUILDER
