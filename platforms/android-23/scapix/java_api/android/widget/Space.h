// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/View.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_SPACE_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_SPACE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class Space; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::Space>
{
	static constexpr fixed_string class_name = "android/widget/Space";
	using base_classes = std::tuple<scapix::java_api::android::view::View>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_SPACE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_SPACE)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_SPACE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::Space : public jni::object_base<"android/widget/Space",
	android::view::View>
{
public:

	static jni::ref<android::widget::Space> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	static jni::ref<android::widget::Space> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::widget::Space> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::widget::Space> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	void draw(jni::ref<android::graphics::Canvas> canvas) { return call_method<"draw", void>(canvas); }

protected:

	Space(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_SPACE
