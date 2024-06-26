// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_ADMIN_DEVICEPOLICYRESOURCES_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_ADMIN_DEVICEPOLICYRESOURCES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::admin { class DevicePolicyResources; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::admin::DevicePolicyResources>
{
	static constexpr fixed_string class_name = "android/app/admin/DevicePolicyResources";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ADMIN_DEVICEPOLICYRESOURCES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_ADMIN_DEVICEPOLICYRESOURCES)
#define SCAPIX_JAVA_API_ANDROID_APP_ADMIN_DEVICEPOLICYRESOURCES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::admin::DevicePolicyResources : public jni::object_base<"android/app/admin/DevicePolicyResources",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> UNDEFINED() { return get_static_field<"UNDEFINED", jni::ref<java::lang::String>>(); }


protected:

	DevicePolicyResources(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ADMIN_DEVICEPOLICYRESOURCES
