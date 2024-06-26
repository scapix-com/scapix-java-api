// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_CALENDARVIEW_ONDATECHANGELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_CALENDARVIEW_ONDATECHANGELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class CalendarView_OnDateChangeListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::CalendarView_OnDateChangeListener>
{
	static constexpr fixed_string class_name = "android/widget/CalendarView$OnDateChangeListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_CALENDARVIEW_ONDATECHANGELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_CALENDARVIEW_ONDATECHANGELISTENER)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_CALENDARVIEW_ONDATECHANGELISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/widget/CalendarView.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::CalendarView_OnDateChangeListener : public jni::object_base<"android/widget/CalendarView$OnDateChangeListener",
	java::lang::Object>
{
public:

	void onSelectedDayChange(jni::ref<android::widget::CalendarView> p1, jint p2, jint p3, jint p4) { return call_method<"onSelectedDayChange", void>(p1, p2, p3, p4); }

protected:

	CalendarView_OnDateChangeListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_CALENDARVIEW_ONDATECHANGELISTENER
