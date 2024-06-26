// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/AlertDialog.h>
#include <scapix/java_api/android/content/DialogInterface_OnClickListener.h>
#include <scapix/java_api/android/widget/DatePicker_OnDateChangedListener.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_DATEPICKERDIALOG_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_DATEPICKERDIALOG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class DatePickerDialog; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::DatePickerDialog>
{
	static constexpr fixed_string class_name = "android/app/DatePickerDialog";
	using base_classes = std::tuple<scapix::java_api::android::app::AlertDialog, scapix::java_api::android::content::DialogInterface_OnClickListener, scapix::java_api::android::widget::DatePicker_OnDateChangedListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_DATEPICKERDIALOG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_DATEPICKERDIALOG)
#define SCAPIX_JAVA_API_ANDROID_APP_DATEPICKERDIALOG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/DatePickerDialog_OnDateSetListener.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/DialogInterface.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/widget/DatePicker.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::DatePickerDialog : public jni::object_base<"android/app/DatePickerDialog",
	android::app::AlertDialog,
	android::content::DialogInterface_OnClickListener,
	android::widget::DatePicker_OnDateChangedListener>
{
public:

	using OnDateSetListener = DatePickerDialog_OnDateSetListener;

	static jni::ref<android::app::DatePickerDialog> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::app::DatePickerDialog> new_object(jni::ref<android::content::Context> context, jint themeResId) { return base_::new_object(context, themeResId); }
	static jni::ref<android::app::DatePickerDialog> new_object(jni::ref<android::content::Context> context, jni::ref<android::app::DatePickerDialog_OnDateSetListener> listener, jint year, jint month, jint dayOfMonth) { return base_::new_object(context, listener, year, month, dayOfMonth); }
	static jni::ref<android::app::DatePickerDialog> new_object(jni::ref<android::content::Context> context, jint themeResId, jni::ref<android::app::DatePickerDialog_OnDateSetListener> listener, jint year, jint monthOfYear, jint dayOfMonth) { return base_::new_object(context, themeResId, listener, year, monthOfYear, dayOfMonth); }
	void onDateChanged(jni::ref<android::widget::DatePicker> view, jint year, jint month, jint dayOfMonth) { return call_method<"onDateChanged", void>(view, year, month, dayOfMonth); }
	void setOnDateSetListener(jni::ref<android::app::DatePickerDialog_OnDateSetListener> listener) { return call_method<"setOnDateSetListener", void>(listener); }
	void onClick(jni::ref<android::content::DialogInterface> dialog, jint which) { return call_method<"onClick", void>(dialog, which); }
	jni::ref<android::widget::DatePicker> getDatePicker() { return call_method<"getDatePicker", jni::ref<android::widget::DatePicker>>(); }
	void updateDate(jint year, jint month, jint dayOfMonth) { return call_method<"updateDate", void>(year, month, dayOfMonth); }
	jni::ref<android::os::Bundle> onSaveInstanceState() { return call_method<"onSaveInstanceState", jni::ref<android::os::Bundle>>(); }
	void onRestoreInstanceState(jni::ref<android::os::Bundle> savedInstanceState) { return call_method<"onRestoreInstanceState", void>(savedInstanceState); }

protected:

	DatePickerDialog(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_DATEPICKERDIALOG
