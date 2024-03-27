// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>
#include <scapix/java_api/android/view/KeyEvent_Callback.h>

#ifndef SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_ABSTRACTINPUTMETHODSERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_ABSTRACTINPUTMETHODSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::inputmethodservice { class AbstractInputMethodService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::inputmethodservice::AbstractInputMethodService>
{
	static constexpr fixed_string class_name = "android/inputmethodservice/AbstractInputMethodService";
	using base_classes = std::tuple<scapix::java_api::android::app::Service, scapix::java_api::android::view::KeyEvent_Callback>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_ABSTRACTINPUTMETHODSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_ABSTRACTINPUTMETHODSERVICE)
#define SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_ABSTRACTINPUTMETHODSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/inputmethodservice/AbstractInputMethodService_AbstractInputMethodImpl.h>
#include <scapix/java_api/android/inputmethodservice/AbstractInputMethodService_AbstractInputMethodSessionImpl.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/android/view/KeyEvent_DispatcherState.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::inputmethodservice::AbstractInputMethodService : public jni::object_base<"android/inputmethodservice/AbstractInputMethodService",
	android::app::Service,
	android::view::KeyEvent_Callback>
{
public:

	using AbstractInputMethodSessionImpl = AbstractInputMethodService_AbstractInputMethodSessionImpl;
	using AbstractInputMethodImpl = AbstractInputMethodService_AbstractInputMethodImpl;

	static jni::ref<android::inputmethodservice::AbstractInputMethodService> new_object() { return base_::new_object(); }
	jni::ref<android::view::KeyEvent_DispatcherState> getKeyDispatcherState() { return call_method<"getKeyDispatcherState", jni::ref<android::view::KeyEvent_DispatcherState>>(); }
	jni::ref<android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl> onCreateInputMethodInterface() { return call_method<"onCreateInputMethodInterface", jni::ref<android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl>>(); }
	jni::ref<android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl> onCreateInputMethodSessionInterface() { return call_method<"onCreateInputMethodSessionInterface", jni::ref<android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl>>(); }
	jni::ref<android::os::IBinder> onBind(jni::ref<android::content::Intent> intent) { return call_method<"onBind", jni::ref<android::os::IBinder>>(intent); }
	jboolean onTrackballEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onTrackballEvent", jboolean>(event); }
	jboolean onGenericMotionEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onGenericMotionEvent", jboolean>(event); }
	jni::ref<java::lang::Object> getSystemService(jni::ref<java::lang::String> name) { return call_method<"getSystemService", jni::ref<java::lang::Object>>(name); }
	void onDestroy() { return call_method<"onDestroy", void>(); }

protected:

	AbstractInputMethodService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_ABSTRACTINPUTMETHODSERVICE
