// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_DIALOGINTERFACE_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_DIALOGINTERFACE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content { class DialogInterface; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::DialogInterface>
{
	static constexpr fixed_string class_name = "android/content/DialogInterface";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_DIALOGINTERFACE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_DIALOGINTERFACE)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_DIALOGINTERFACE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/DialogInterface_OnShowListener.h>
#include <scapix/java_api/android/content/DialogInterface_OnMultiChoiceClickListener.h>
#include <scapix/java_api/android/content/DialogInterface_OnKeyListener.h>
#include <scapix/java_api/android/content/DialogInterface_OnDismissListener.h>
#include <scapix/java_api/android/content/DialogInterface_OnClickListener.h>
#include <scapix/java_api/android/content/DialogInterface_OnCancelListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::DialogInterface : public jni::object_base<"android/content/DialogInterface",
	java::lang::Object>
{
public:

	using OnShowListener = DialogInterface_OnShowListener;
	using OnMultiChoiceClickListener = DialogInterface_OnMultiChoiceClickListener;
	using OnKeyListener = DialogInterface_OnKeyListener;
	using OnDismissListener = DialogInterface_OnDismissListener;
	using OnClickListener = DialogInterface_OnClickListener;
	using OnCancelListener = DialogInterface_OnCancelListener;

	static jint BUTTON1() { return get_static_field<"BUTTON1", jint>(); }
	static jint BUTTON2() { return get_static_field<"BUTTON2", jint>(); }
	static jint BUTTON3() { return get_static_field<"BUTTON3", jint>(); }
	static jint BUTTON_NEGATIVE() { return get_static_field<"BUTTON_NEGATIVE", jint>(); }
	static jint BUTTON_NEUTRAL() { return get_static_field<"BUTTON_NEUTRAL", jint>(); }
	static jint BUTTON_POSITIVE() { return get_static_field<"BUTTON_POSITIVE", jint>(); }

	void cancel() { return call_method<"cancel", void>(); }
	void dismiss() { return call_method<"dismiss", void>(); }

protected:

	DialogInterface(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_DIALOGINTERFACE
