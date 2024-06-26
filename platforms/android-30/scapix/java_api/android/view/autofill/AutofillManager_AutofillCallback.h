// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_AUTOFILL_AUTOFILLMANAGER_AUTOFILLCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_AUTOFILL_AUTOFILLMANAGER_AUTOFILLCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::autofill { class AutofillManager_AutofillCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::autofill::AutofillManager_AutofillCallback>
{
	static constexpr fixed_string class_name = "android/view/autofill/AutofillManager$AutofillCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_AUTOFILL_AUTOFILLMANAGER_AUTOFILLCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_AUTOFILL_AUTOFILLMANAGER_AUTOFILLCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_VIEW_AUTOFILL_AUTOFILLMANAGER_AUTOFILLCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/View.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::autofill::AutofillManager_AutofillCallback : public jni::object_base<"android/view/autofill/AutofillManager$AutofillCallback",
	java::lang::Object>
{
public:

	static jint EVENT_INPUT_HIDDEN() { return get_static_field<"EVENT_INPUT_HIDDEN", jint>(); }
	static jint EVENT_INPUT_SHOWN() { return get_static_field<"EVENT_INPUT_SHOWN", jint>(); }
	static jint EVENT_INPUT_UNAVAILABLE() { return get_static_field<"EVENT_INPUT_UNAVAILABLE", jint>(); }

	static jni::ref<android::view::autofill::AutofillManager_AutofillCallback> new_object() { return base_::new_object(); }
	void onAutofillEvent(jni::ref<android::view::View> view, jint event) { return call_method<"onAutofillEvent", void>(view, event); }
	void onAutofillEvent(jni::ref<android::view::View> view, jint virtualId, jint event) { return call_method<"onAutofillEvent", void>(view, virtualId, event); }

protected:

	AutofillManager_AutofillCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_AUTOFILL_AUTOFILLMANAGER_AUTOFILLCALLBACK
