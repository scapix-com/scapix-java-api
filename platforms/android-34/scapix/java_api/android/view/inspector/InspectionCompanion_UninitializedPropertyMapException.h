// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INSPECTOR_INSPECTIONCOMPANION_UNINITIALIZEDPROPERTYMAPEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INSPECTOR_INSPECTIONCOMPANION_UNINITIALIZEDPROPERTYMAPEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::inspector { class InspectionCompanion_UninitializedPropertyMapException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::inspector::InspectionCompanion_UninitializedPropertyMapException>
{
	static constexpr fixed_string class_name = "android/view/inspector/InspectionCompanion$UninitializedPropertyMapException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INSPECTOR_INSPECTIONCOMPANION_UNINITIALIZEDPROPERTYMAPEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INSPECTOR_INSPECTIONCOMPANION_UNINITIALIZEDPROPERTYMAPEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INSPECTOR_INSPECTIONCOMPANION_UNINITIALIZEDPROPERTYMAPEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::inspector::InspectionCompanion_UninitializedPropertyMapException : public jni::object_base<"android/view/inspector/InspectionCompanion$UninitializedPropertyMapException",
	java::lang::RuntimeException>
{
public:

	static jni::ref<android::view::inspector::InspectionCompanion_UninitializedPropertyMapException> new_object() { return base_::new_object(); }

protected:

	InspectionCompanion_UninitializedPropertyMapException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INSPECTOR_INSPECTIONCOMPANION_UNINITIALIZEDPROPERTYMAPEXCEPTION
