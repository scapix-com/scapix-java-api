// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_DIALOGINTERFACE_ONMULTICHOICECLICKLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_DIALOGINTERFACE_ONMULTICHOICECLICKLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content { class DialogInterface_OnMultiChoiceClickListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::DialogInterface_OnMultiChoiceClickListener>
{
	static constexpr fixed_string class_name = "android/content/DialogInterface$OnMultiChoiceClickListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_DIALOGINTERFACE_ONMULTICHOICECLICKLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_DIALOGINTERFACE_ONMULTICHOICECLICKLISTENER)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_DIALOGINTERFACE_ONMULTICHOICECLICKLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/DialogInterface.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::DialogInterface_OnMultiChoiceClickListener : public jni::object_base<"android/content/DialogInterface$OnMultiChoiceClickListener",
	java::lang::Object>
{
public:

	void onClick(jni::ref<android::content::DialogInterface> p1, jint p2, jboolean p3) { return call_method<"onClick", void>(p1, p2, p3); }

protected:

	DialogInterface_OnMultiChoiceClickListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_DIALOGINTERFACE_ONMULTICHOICECLICKLISTENER
