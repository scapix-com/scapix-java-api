// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/view/inputmethod/InputMethod.h>

#ifndef SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_ABSTRACTINPUTMETHODSERVICE_ABSTRACTINPUTMETHODIMPL_FWD
#define SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_ABSTRACTINPUTMETHODSERVICE_ABSTRACTINPUTMETHODIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::inputmethodservice { class AbstractInputMethodService_AbstractInputMethodImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl>
{
	static constexpr fixed_string class_name = "android/inputmethodservice/AbstractInputMethodService$AbstractInputMethodImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::view::inputmethod::InputMethod>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_ABSTRACTINPUTMETHODSERVICE_ABSTRACTINPUTMETHODIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_ABSTRACTINPUTMETHODSERVICE_ABSTRACTINPUTMETHODIMPL)
#define SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_ABSTRACTINPUTMETHODSERVICE_ABSTRACTINPUTMETHODIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/inputmethodservice/AbstractInputMethodService.h>
#include <scapix/java_api/android/view/inputmethod/InputMethod_SessionCallback.h>
#include <scapix/java_api/android/view/inputmethod/InputMethodSession.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl : public jni::object_base<"android/inputmethodservice/AbstractInputMethodService$AbstractInputMethodImpl",
	java::lang::Object,
	android::view::inputmethod::InputMethod>
{
public:

	static jni::ref<android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl> new_object(jni::ref<android::inputmethodservice::AbstractInputMethodService> p1) { return base_::new_object(p1); }
	void createSession(jni::ref<android::view::inputmethod::InputMethod_SessionCallback> callback) { return call_method<"createSession", void>(callback); }
	void setSessionEnabled(jni::ref<android::view::inputmethod::InputMethodSession> session, jboolean enabled) { return call_method<"setSessionEnabled", void>(session, enabled); }
	void revokeSession(jni::ref<android::view::inputmethod::InputMethodSession> session) { return call_method<"revokeSession", void>(session); }

protected:

	AbstractInputMethodService_AbstractInputMethodImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_ABSTRACTINPUTMETHODSERVICE_ABSTRACTINPUTMETHODIMPL