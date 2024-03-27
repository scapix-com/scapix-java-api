// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_POWERMANAGER_ONTHERMALSTATUSCHANGEDLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_POWERMANAGER_ONTHERMALSTATUSCHANGEDLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class PowerManager_OnThermalStatusChangedListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::PowerManager_OnThermalStatusChangedListener>
{
	static constexpr fixed_string class_name = "android/os/PowerManager$OnThermalStatusChangedListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_POWERMANAGER_ONTHERMALSTATUSCHANGEDLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_POWERMANAGER_ONTHERMALSTATUSCHANGEDLISTENER)
#define SCAPIX_JAVA_API_ANDROID_OS_POWERMANAGER_ONTHERMALSTATUSCHANGEDLISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::PowerManager_OnThermalStatusChangedListener : public jni::object_base<"android/os/PowerManager$OnThermalStatusChangedListener",
	java::lang::Object>
{
public:

	void onThermalStatusChanged(jint p1) { return call_method<"onThermalStatusChanged", void>(p1); }

protected:

	PowerManager_OnThermalStatusChangedListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_POWERMANAGER_ONTHERMALSTATUSCHANGEDLISTENER
