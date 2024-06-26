// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/ViewGroup_LayoutParams.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_VIEWGROUP_MARGINLAYOUTPARAMS_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEWGROUP_MARGINLAYOUTPARAMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class ViewGroup_MarginLayoutParams; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::ViewGroup_MarginLayoutParams>
{
	static constexpr fixed_string class_name = "android/view/ViewGroup$MarginLayoutParams";
	using base_classes = std::tuple<scapix::java_api::android::view::ViewGroup_LayoutParams>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEWGROUP_MARGINLAYOUTPARAMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_VIEWGROUP_MARGINLAYOUTPARAMS)
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEWGROUP_MARGINLAYOUTPARAMS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::ViewGroup_MarginLayoutParams : public jni::object_base<"android/view/ViewGroup$MarginLayoutParams",
	android::view::ViewGroup_LayoutParams>
{
public:

	jint bottomMargin() { return get_field<"bottomMargin", jint>(); }
	void bottomMargin(jint v) { set_field<"bottomMargin", jint>(v); }
	jint leftMargin() { return get_field<"leftMargin", jint>(); }
	void leftMargin(jint v) { set_field<"leftMargin", jint>(v); }
	jint rightMargin() { return get_field<"rightMargin", jint>(); }
	void rightMargin(jint v) { set_field<"rightMargin", jint>(v); }
	jint topMargin() { return get_field<"topMargin", jint>(); }
	void topMargin(jint v) { set_field<"topMargin", jint>(v); }

	static jni::ref<android::view::ViewGroup_MarginLayoutParams> new_object(jni::ref<android::content::Context> c, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(c, attrs); }
	static jni::ref<android::view::ViewGroup_MarginLayoutParams> new_object(jint width, jint height) { return base_::new_object(width, height); }
	static jni::ref<android::view::ViewGroup_MarginLayoutParams> new_object(jni::ref<android::view::ViewGroup_MarginLayoutParams> source) { return base_::new_object(source); }
	static jni::ref<android::view::ViewGroup_MarginLayoutParams> new_object(jni::ref<android::view::ViewGroup_LayoutParams> source) { return base_::new_object(source); }
	void setMargins(jint left, jint top, jint right, jint bottom) { return call_method<"setMargins", void>(left, top, right, bottom); }
	void setMarginStart(jint start) { return call_method<"setMarginStart", void>(start); }
	jint getMarginStart() { return call_method<"getMarginStart", jint>(); }
	void setMarginEnd(jint end) { return call_method<"setMarginEnd", void>(end); }
	jint getMarginEnd() { return call_method<"getMarginEnd", jint>(); }
	jboolean isMarginRelative() { return call_method<"isMarginRelative", jboolean>(); }
	void setLayoutDirection(jint layoutDirection) { return call_method<"setLayoutDirection", void>(layoutDirection); }
	jint getLayoutDirection() { return call_method<"getLayoutDirection", jint>(); }
	void resolveLayoutDirection(jint layoutDirection) { return call_method<"resolveLayoutDirection", void>(layoutDirection); }

protected:

	ViewGroup_MarginLayoutParams(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEWGROUP_MARGINLAYOUTPARAMS
