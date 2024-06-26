// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISESETTINGS_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISESETTINGS_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::bluetooth::le { class AdvertiseSettings_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::bluetooth::le::AdvertiseSettings_Builder>
{
	static constexpr fixed_string class_name = "android/bluetooth/le/AdvertiseSettings$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISESETTINGS_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISESETTINGS_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISESETTINGS_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/bluetooth/le/AdvertiseSettings.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::bluetooth::le::AdvertiseSettings_Builder : public jni::object_base<"android/bluetooth/le/AdvertiseSettings$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::bluetooth::le::AdvertiseSettings_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::bluetooth::le::AdvertiseSettings_Builder> setAdvertiseMode(jint advertiseMode) { return call_method<"setAdvertiseMode", jni::ref<android::bluetooth::le::AdvertiseSettings_Builder>>(advertiseMode); }
	jni::ref<android::bluetooth::le::AdvertiseSettings_Builder> setTxPowerLevel(jint txPowerLevel) { return call_method<"setTxPowerLevel", jni::ref<android::bluetooth::le::AdvertiseSettings_Builder>>(txPowerLevel); }
	jni::ref<android::bluetooth::le::AdvertiseSettings_Builder> setConnectable(jboolean connectable) { return call_method<"setConnectable", jni::ref<android::bluetooth::le::AdvertiseSettings_Builder>>(connectable); }
	jni::ref<android::bluetooth::le::AdvertiseSettings_Builder> setTimeout(jint timeoutMillis) { return call_method<"setTimeout", jni::ref<android::bluetooth::le::AdvertiseSettings_Builder>>(timeoutMillis); }
	jni::ref<android::bluetooth::le::AdvertiseSettings> build() { return call_method<"build", jni::ref<android::bluetooth::le::AdvertiseSettings>>(); }

protected:

	AdvertiseSettings_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISESETTINGS_BUILDER
