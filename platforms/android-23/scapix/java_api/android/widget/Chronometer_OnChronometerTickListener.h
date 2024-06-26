// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_CHRONOMETER_ONCHRONOMETERTICKLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_CHRONOMETER_ONCHRONOMETERTICKLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class Chronometer_OnChronometerTickListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::Chronometer_OnChronometerTickListener>
{
	static constexpr fixed_string class_name = "android/widget/Chronometer$OnChronometerTickListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_CHRONOMETER_ONCHRONOMETERTICKLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_CHRONOMETER_ONCHRONOMETERTICKLISTENER)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_CHRONOMETER_ONCHRONOMETERTICKLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/widget/Chronometer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::Chronometer_OnChronometerTickListener : public jni::object_base<"android/widget/Chronometer$OnChronometerTickListener",
	java::lang::Object>
{
public:

	void onChronometerTick(jni::ref<android::widget::Chronometer> p1) { return call_method<"onChronometerTick", void>(p1); }

protected:

	Chronometer_OnChronometerTickListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_CHRONOMETER_ONCHRONOMETERTICKLISTENER
