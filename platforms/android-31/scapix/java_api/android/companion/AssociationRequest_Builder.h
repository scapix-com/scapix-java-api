// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATIONREQUEST_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATIONREQUEST_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::companion { class AssociationRequest_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::companion::AssociationRequest_Builder>
{
	static constexpr fixed_string class_name = "android/companion/AssociationRequest$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATIONREQUEST_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATIONREQUEST_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATIONREQUEST_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/companion/AssociationRequest.h>
#include <scapix/java_api/android/companion/DeviceFilter.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::companion::AssociationRequest_Builder : public jni::object_base<"android/companion/AssociationRequest$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::companion::AssociationRequest_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::companion::AssociationRequest_Builder> setSingleDevice(jboolean singleDevice) { return call_method<"setSingleDevice", jni::ref<android::companion::AssociationRequest_Builder>>(singleDevice); }
	jni::ref<android::companion::AssociationRequest_Builder> addDeviceFilter(jni::ref<android::companion::DeviceFilter> deviceFilter) { return call_method<"addDeviceFilter", jni::ref<android::companion::AssociationRequest_Builder>>(deviceFilter); }
	jni::ref<android::companion::AssociationRequest_Builder> setDeviceProfile(jni::ref<java::lang::String> deviceProfile) { return call_method<"setDeviceProfile", jni::ref<android::companion::AssociationRequest_Builder>>(deviceProfile); }
	jni::ref<android::companion::AssociationRequest> build() { return call_method<"build", jni::ref<android::companion::AssociationRequest>>(); }

protected:

	AssociationRequest_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATIONREQUEST_BUILDER
