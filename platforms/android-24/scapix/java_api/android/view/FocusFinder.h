// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_FOCUSFINDER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_FOCUSFINDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class FocusFinder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::FocusFinder>
{
	static constexpr fixed_string class_name = "android/view/FocusFinder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_FOCUSFINDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_FOCUSFINDER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_FOCUSFINDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::FocusFinder : public jni::object_base<"android/view/FocusFinder",
	java::lang::Object>
{
public:

	static jni::ref<android::view::FocusFinder> getInstance() { return call_static_method<"getInstance", jni::ref<android::view::FocusFinder>>(); }
	jni::ref<android::view::View> findNextFocus(jni::ref<android::view::ViewGroup> root, jni::ref<android::view::View> focused, jint direction) { return call_method<"findNextFocus", jni::ref<android::view::View>>(root, focused, direction); }
	jni::ref<android::view::View> findNextFocusFromRect(jni::ref<android::view::ViewGroup> root, jni::ref<android::graphics::Rect> focusedRect, jint direction) { return call_method<"findNextFocusFromRect", jni::ref<android::view::View>>(root, focusedRect, direction); }
	jni::ref<android::view::View> findNearestTouchable(jni::ref<android::view::ViewGroup> root, jint x, jint y, jint direction, jni::ref<jni::array<jint>> deltas) { return call_method<"findNearestTouchable", jni::ref<android::view::View>>(root, x, y, direction, deltas); }

protected:

	FocusFinder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_FOCUSFINDER
