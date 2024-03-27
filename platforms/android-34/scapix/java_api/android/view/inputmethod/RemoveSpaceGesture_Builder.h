// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_REMOVESPACEGESTURE_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_REMOVESPACEGESTURE_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::inputmethod { class RemoveSpaceGesture_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::inputmethod::RemoveSpaceGesture_Builder>
{
	static constexpr fixed_string class_name = "android/view/inputmethod/RemoveSpaceGesture$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_REMOVESPACEGESTURE_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_REMOVESPACEGESTURE_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_REMOVESPACEGESTURE_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/PointF.h>
#include <scapix/java_api/android/view/inputmethod/RemoveSpaceGesture.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::inputmethod::RemoveSpaceGesture_Builder : public jni::object_base<"android/view/inputmethod/RemoveSpaceGesture$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::view::inputmethod::RemoveSpaceGesture_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::view::inputmethod::RemoveSpaceGesture_Builder> setPoints(jni::ref<android::graphics::PointF> startPoint, jni::ref<android::graphics::PointF> endPoint) { return call_method<"setPoints", jni::ref<android::view::inputmethod::RemoveSpaceGesture_Builder>>(startPoint, endPoint); }
	jni::ref<android::view::inputmethod::RemoveSpaceGesture_Builder> setFallbackText(jni::ref<java::lang::String> fallbackText) { return call_method<"setFallbackText", jni::ref<android::view::inputmethod::RemoveSpaceGesture_Builder>>(fallbackText); }
	jni::ref<android::view::inputmethod::RemoveSpaceGesture> build() { return call_method<"build", jni::ref<android::view::inputmethod::RemoveSpaceGesture>>(); }

protected:

	RemoveSpaceGesture_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_REMOVESPACEGESTURE_BUILDER