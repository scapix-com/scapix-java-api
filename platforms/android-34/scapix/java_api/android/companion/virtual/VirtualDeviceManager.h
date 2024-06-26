// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_COMPANION_VIRTUAL_VIRTUALDEVICEMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_COMPANION_VIRTUAL_VIRTUALDEVICEMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::companion::virtual_ { class VirtualDeviceManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::companion::virtual_::VirtualDeviceManager>
{
	static constexpr fixed_string class_name = "android/companion/virtual/VirtualDeviceManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_COMPANION_VIRTUAL_VIRTUALDEVICEMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_COMPANION_VIRTUAL_VIRTUALDEVICEMANAGER)
#define SCAPIX_JAVA_API_ANDROID_COMPANION_VIRTUAL_VIRTUALDEVICEMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::companion::virtual_::VirtualDeviceManager : public jni::object_base<"android/companion/virtual/VirtualDeviceManager",
	java::lang::Object>
{
public:

	jni::ref<java::util::List> getVirtualDevices() { return call_method<"getVirtualDevices", jni::ref<java::util::List>>(); }

protected:

	VirtualDeviceManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_COMPANION_VIRTUAL_VIRTUALDEVICEMANAGER
