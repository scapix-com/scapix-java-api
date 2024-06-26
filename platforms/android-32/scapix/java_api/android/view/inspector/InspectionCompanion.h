// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INSPECTOR_INSPECTIONCOMPANION_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INSPECTOR_INSPECTIONCOMPANION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::inspector { class InspectionCompanion; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::inspector::InspectionCompanion>
{
	static constexpr fixed_string class_name = "android/view/inspector/InspectionCompanion";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INSPECTOR_INSPECTIONCOMPANION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INSPECTOR_INSPECTIONCOMPANION)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INSPECTOR_INSPECTIONCOMPANION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/inspector/PropertyMapper.h>
#include <scapix/java_api/android/view/inspector/PropertyReader.h>
#include <scapix/java_api/android/view/inspector/InspectionCompanion_UninitializedPropertyMapException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::inspector::InspectionCompanion : public jni::object_base<"android/view/inspector/InspectionCompanion",
	java::lang::Object>
{
public:

	using UninitializedPropertyMapException = InspectionCompanion_UninitializedPropertyMapException;

	void mapProperties(jni::ref<android::view::inspector::PropertyMapper> p1) { return call_method<"mapProperties", void>(p1); }
	void readProperties(jni::ref<java::lang::Object> p1, jni::ref<android::view::inspector::PropertyReader> p2) { return call_method<"readProperties", void>(p1, p2); }

protected:

	InspectionCompanion(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INSPECTOR_INSPECTIONCOMPANION
