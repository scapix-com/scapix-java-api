// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_EDITORBOUNDSINFO_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_EDITORBOUNDSINFO_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::inputmethod { class EditorBoundsInfo_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::inputmethod::EditorBoundsInfo_Builder>
{
	static constexpr fixed_string class_name = "android/view/inputmethod/EditorBoundsInfo$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_EDITORBOUNDSINFO_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_EDITORBOUNDSINFO_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_EDITORBOUNDSINFO_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/RectF.h>
#include <scapix/java_api/android/view/inputmethod/EditorBoundsInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::inputmethod::EditorBoundsInfo_Builder : public jni::object_base<"android/view/inputmethod/EditorBoundsInfo$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::view::inputmethod::EditorBoundsInfo_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::view::inputmethod::EditorBoundsInfo_Builder> setEditorBounds(jni::ref<android::graphics::RectF> bounds) { return call_method<"setEditorBounds", jni::ref<android::view::inputmethod::EditorBoundsInfo_Builder>>(bounds); }
	jni::ref<android::view::inputmethod::EditorBoundsInfo_Builder> setHandwritingBounds(jni::ref<android::graphics::RectF> bounds) { return call_method<"setHandwritingBounds", jni::ref<android::view::inputmethod::EditorBoundsInfo_Builder>>(bounds); }
	jni::ref<android::view::inputmethod::EditorBoundsInfo> build() { return call_method<"build", jni::ref<android::view::inputmethod::EditorBoundsInfo>>(); }

protected:

	EditorBoundsInfo_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_EDITORBOUNDSINFO_BUILDER
