// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/ViewGroup_LayoutParams.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_GALLERY_LAYOUTPARAMS_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_GALLERY_LAYOUTPARAMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class Gallery_LayoutParams; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::Gallery_LayoutParams>
{
	static constexpr fixed_string class_name = "android/widget/Gallery$LayoutParams";
	using base_classes = std::tuple<scapix::java_api::android::view::ViewGroup_LayoutParams>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_GALLERY_LAYOUTPARAMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_GALLERY_LAYOUTPARAMS)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_GALLERY_LAYOUTPARAMS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::Gallery_LayoutParams : public jni::object_base<"android/widget/Gallery$LayoutParams",
	android::view::ViewGroup_LayoutParams>
{
public:

	static jni::ref<android::widget::Gallery_LayoutParams> new_object(jni::ref<android::content::Context> c, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(c, attrs); }
	static jni::ref<android::widget::Gallery_LayoutParams> new_object(jint w, jint h) { return base_::new_object(w, h); }
	static jni::ref<android::widget::Gallery_LayoutParams> new_object(jni::ref<android::view::ViewGroup_LayoutParams> source) { return base_::new_object(source); }

protected:

	Gallery_LayoutParams(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_GALLERY_LAYOUTPARAMS
