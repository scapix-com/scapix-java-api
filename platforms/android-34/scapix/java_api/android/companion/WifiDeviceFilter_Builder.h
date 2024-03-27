// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_COMPANION_WIFIDEVICEFILTER_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_COMPANION_WIFIDEVICEFILTER_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::companion { class WifiDeviceFilter_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::companion::WifiDeviceFilter_Builder>
{
	static constexpr fixed_string class_name = "android/companion/WifiDeviceFilter$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_COMPANION_WIFIDEVICEFILTER_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_COMPANION_WIFIDEVICEFILTER_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_COMPANION_WIFIDEVICEFILTER_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/companion/WifiDeviceFilter.h>
#include <scapix/java_api/android/net/MacAddress.h>
#include <scapix/java_api/java/util/regex/Pattern.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::companion::WifiDeviceFilter_Builder : public jni::object_base<"android/companion/WifiDeviceFilter$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::companion::WifiDeviceFilter_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::companion::WifiDeviceFilter_Builder> setNamePattern(jni::ref<java::util::regex::Pattern> value) { return call_method<"setNamePattern", jni::ref<android::companion::WifiDeviceFilter_Builder>>(value); }
	jni::ref<android::companion::WifiDeviceFilter_Builder> setBssid(jni::ref<android::net::MacAddress> value) { return call_method<"setBssid", jni::ref<android::companion::WifiDeviceFilter_Builder>>(value); }
	jni::ref<android::companion::WifiDeviceFilter_Builder> setBssidMask(jni::ref<android::net::MacAddress> value) { return call_method<"setBssidMask", jni::ref<android::companion::WifiDeviceFilter_Builder>>(value); }
	jni::ref<android::companion::WifiDeviceFilter> build() { return call_method<"build", jni::ref<android::companion::WifiDeviceFilter>>(); }

protected:

	WifiDeviceFilter_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_COMPANION_WIFIDEVICEFILTER_BUILDER