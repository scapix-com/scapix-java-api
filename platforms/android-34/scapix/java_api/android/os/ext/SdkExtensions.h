// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_EXT_SDKEXTENSIONS_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_EXT_SDKEXTENSIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os::ext { class SdkExtensions; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::ext::SdkExtensions>
{
	static constexpr fixed_string class_name = "android/os/ext/SdkExtensions";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_EXT_SDKEXTENSIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_EXT_SDKEXTENSIONS)
#define SCAPIX_JAVA_API_ANDROID_OS_EXT_SDKEXTENSIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::ext::SdkExtensions : public jni::object_base<"android/os/ext/SdkExtensions",
	java::lang::Object>
{
public:

	static jint AD_SERVICES() { return get_static_field<"AD_SERVICES", jint>(); }

	static jint getExtensionVersion(jint extension) { return call_static_method<"getExtensionVersion", jint>(extension); }
	static jni::ref<java::util::Map> getAllExtensionVersions() { return call_static_method<"getAllExtensionVersions", jni::ref<java::util::Map>>(); }

protected:

	SdkExtensions(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_EXT_SDKEXTENSIONS
