// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_PERIODICADVERTISINGPARAMETERS_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_PERIODICADVERTISINGPARAMETERS_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::bluetooth::le { class PeriodicAdvertisingParameters_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::bluetooth::le::PeriodicAdvertisingParameters_Builder>
{
	static constexpr fixed_string class_name = "android/bluetooth/le/PeriodicAdvertisingParameters$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_PERIODICADVERTISINGPARAMETERS_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_PERIODICADVERTISINGPARAMETERS_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_PERIODICADVERTISINGPARAMETERS_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/bluetooth/le/PeriodicAdvertisingParameters.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::bluetooth::le::PeriodicAdvertisingParameters_Builder : public jni::object_base<"android/bluetooth/le/PeriodicAdvertisingParameters$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::bluetooth::le::PeriodicAdvertisingParameters_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::bluetooth::le::PeriodicAdvertisingParameters_Builder> setIncludeTxPower(jboolean includeTxPower) { return call_method<"setIncludeTxPower", jni::ref<android::bluetooth::le::PeriodicAdvertisingParameters_Builder>>(includeTxPower); }
	jni::ref<android::bluetooth::le::PeriodicAdvertisingParameters_Builder> setInterval(jint interval) { return call_method<"setInterval", jni::ref<android::bluetooth::le::PeriodicAdvertisingParameters_Builder>>(interval); }
	jni::ref<android::bluetooth::le::PeriodicAdvertisingParameters> build() { return call_method<"build", jni::ref<android::bluetooth::le::PeriodicAdvertisingParameters>>(); }

protected:

	PeriodicAdvertisingParameters_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_PERIODICADVERTISINGPARAMETERS_BUILDER
