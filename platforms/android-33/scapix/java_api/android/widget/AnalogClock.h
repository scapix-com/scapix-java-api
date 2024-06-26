// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/View.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_ANALOGCLOCK_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_ANALOGCLOCK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class AnalogClock; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::AnalogClock>
{
	static constexpr fixed_string class_name = "android/widget/AnalogClock";
	using base_classes = std::tuple<scapix::java_api::android::view::View>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_ANALOGCLOCK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_ANALOGCLOCK)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_ANALOGCLOCK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/res/ColorStateList.h>
#include <scapix/java_api/android/graphics/BlendMode.h>
#include <scapix/java_api/android/graphics/drawable/Icon.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::AnalogClock : public jni::object_base<"android/widget/AnalogClock",
	android::view::View>
{
public:

	static jni::ref<android::widget::AnalogClock> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::AnalogClock> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::widget::AnalogClock> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::widget::AnalogClock> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	void setDial(jni::ref<android::graphics::drawable::Icon> icon) { return call_method<"setDial", void>(icon); }
	void setDialTintList(jni::ref<android::content::res::ColorStateList> tint) { return call_method<"setDialTintList", void>(tint); }
	jni::ref<android::content::res::ColorStateList> getDialTintList() { return call_method<"getDialTintList", jni::ref<android::content::res::ColorStateList>>(); }
	void setDialTintBlendMode(jni::ref<android::graphics::BlendMode> blendMode) { return call_method<"setDialTintBlendMode", void>(blendMode); }
	jni::ref<android::graphics::BlendMode> getDialTintBlendMode() { return call_method<"getDialTintBlendMode", jni::ref<android::graphics::BlendMode>>(); }
	void setHourHand(jni::ref<android::graphics::drawable::Icon> icon) { return call_method<"setHourHand", void>(icon); }
	void setHourHandTintList(jni::ref<android::content::res::ColorStateList> tint) { return call_method<"setHourHandTintList", void>(tint); }
	jni::ref<android::content::res::ColorStateList> getHourHandTintList() { return call_method<"getHourHandTintList", jni::ref<android::content::res::ColorStateList>>(); }
	void setHourHandTintBlendMode(jni::ref<android::graphics::BlendMode> blendMode) { return call_method<"setHourHandTintBlendMode", void>(blendMode); }
	jni::ref<android::graphics::BlendMode> getHourHandTintBlendMode() { return call_method<"getHourHandTintBlendMode", jni::ref<android::graphics::BlendMode>>(); }
	void setMinuteHand(jni::ref<android::graphics::drawable::Icon> icon) { return call_method<"setMinuteHand", void>(icon); }
	void setMinuteHandTintList(jni::ref<android::content::res::ColorStateList> tint) { return call_method<"setMinuteHandTintList", void>(tint); }
	jni::ref<android::content::res::ColorStateList> getMinuteHandTintList() { return call_method<"getMinuteHandTintList", jni::ref<android::content::res::ColorStateList>>(); }
	void setMinuteHandTintBlendMode(jni::ref<android::graphics::BlendMode> blendMode) { return call_method<"setMinuteHandTintBlendMode", void>(blendMode); }
	jni::ref<android::graphics::BlendMode> getMinuteHandTintBlendMode() { return call_method<"getMinuteHandTintBlendMode", jni::ref<android::graphics::BlendMode>>(); }
	void setSecondHand(jni::ref<android::graphics::drawable::Icon> icon) { return call_method<"setSecondHand", void>(icon); }
	void setSecondHandTintList(jni::ref<android::content::res::ColorStateList> tint) { return call_method<"setSecondHandTintList", void>(tint); }
	jni::ref<android::content::res::ColorStateList> getSecondHandTintList() { return call_method<"getSecondHandTintList", jni::ref<android::content::res::ColorStateList>>(); }
	void setSecondHandTintBlendMode(jni::ref<android::graphics::BlendMode> blendMode) { return call_method<"setSecondHandTintBlendMode", void>(blendMode); }
	jni::ref<android::graphics::BlendMode> getSecondHandTintBlendMode() { return call_method<"getSecondHandTintBlendMode", jni::ref<android::graphics::BlendMode>>(); }
	jni::ref<java::lang::String> getTimeZone() { return call_method<"getTimeZone", jni::ref<java::lang::String>>(); }
	void setTimeZone(jni::ref<java::lang::String> timeZone) { return call_method<"setTimeZone", void>(timeZone); }
	void onVisibilityAggregated(jboolean isVisible) { return call_method<"onVisibilityAggregated", void>(isVisible); }

protected:

	AnalogClock(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_ANALOGCLOCK
