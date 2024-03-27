// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/view/KeyEvent_Callback.h>
#include <scapix/java_api/android/content/ComponentCallbacks2.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::voice { class VoiceInteractionSession; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::voice::VoiceInteractionSession>
{
	static constexpr fixed_string class_name = "android/service/voice/VoiceInteractionSession";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::view::KeyEvent_Callback, scapix::java_api::android::content::ComponentCallbacks2>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Dialog.h>
#include <scapix/java_api/android/app/DirectAction.h>
#include <scapix/java_api/android/app/assist/AssistContent.h>
#include <scapix/java_api/android/app/assist/AssistStructure.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/content/res/Configuration.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/CancellationSignal.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/service/voice/VoiceInteractionSession_AbortVoiceRequest.h>
#include <scapix/java_api/android/service/voice/VoiceInteractionSession_ActivityId.h>
#include <scapix/java_api/android/service/voice/VoiceInteractionSession_AssistState.h>
#include <scapix/java_api/android/service/voice/VoiceInteractionSession_CommandRequest.h>
#include <scapix/java_api/android/service/voice/VoiceInteractionSession_CompleteVoiceRequest.h>
#include <scapix/java_api/android/service/voice/VoiceInteractionSession_ConfirmationRequest.h>
#include <scapix/java_api/android/service/voice/VoiceInteractionSession_Insets.h>
#include <scapix/java_api/android/service/voice/VoiceInteractionSession_PickOptionRequest.h>
#include <scapix/java_api/android/service/voice/VoiceInteractionSession_Request.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/LayoutInflater.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/io/PrintWriter.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::voice::VoiceInteractionSession : public jni::object_base<"android/service/voice/VoiceInteractionSession",
	java::lang::Object,
	android::view::KeyEvent_Callback,
	android::content::ComponentCallbacks2>
{
public:

	using Request = VoiceInteractionSession_Request;
	using PickOptionRequest = VoiceInteractionSession_PickOptionRequest;
	using Insets = VoiceInteractionSession_Insets;
	using ConfirmationRequest = VoiceInteractionSession_ConfirmationRequest;
	using CompleteVoiceRequest = VoiceInteractionSession_CompleteVoiceRequest;
	using CommandRequest = VoiceInteractionSession_CommandRequest;
	using AssistState = VoiceInteractionSession_AssistState;
	using ActivityId = VoiceInteractionSession_ActivityId;
	using AbortVoiceRequest = VoiceInteractionSession_AbortVoiceRequest;

	static jint SHOW_SOURCE_ACTIVITY() { return get_static_field<"SHOW_SOURCE_ACTIVITY", jint>(); }
	static jint SHOW_SOURCE_APPLICATION() { return get_static_field<"SHOW_SOURCE_APPLICATION", jint>(); }
	static jint SHOW_SOURCE_ASSIST_GESTURE() { return get_static_field<"SHOW_SOURCE_ASSIST_GESTURE", jint>(); }
	static jint SHOW_SOURCE_AUTOMOTIVE_SYSTEM_UI() { return get_static_field<"SHOW_SOURCE_AUTOMOTIVE_SYSTEM_UI", jint>(); }
	static jint SHOW_SOURCE_NOTIFICATION() { return get_static_field<"SHOW_SOURCE_NOTIFICATION", jint>(); }
	static jint SHOW_SOURCE_PUSH_TO_TALK() { return get_static_field<"SHOW_SOURCE_PUSH_TO_TALK", jint>(); }
	static jint SHOW_WITH_ASSIST() { return get_static_field<"SHOW_WITH_ASSIST", jint>(); }
	static jint SHOW_WITH_SCREENSHOT() { return get_static_field<"SHOW_WITH_SCREENSHOT", jint>(); }

	static jni::ref<android::service::voice::VoiceInteractionSession> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::service::voice::VoiceInteractionSession> new_object(jni::ref<android::content::Context> context, jni::ref<android::os::Handler> handler) { return base_::new_object(context, handler); }
	jni::ref<android::content::Context> getContext() { return call_method<"getContext", jni::ref<android::content::Context>>(); }
	void setDisabledShowContext(jint flags) { return call_method<"setDisabledShowContext", void>(flags); }
	jint getDisabledShowContext() { return call_method<"getDisabledShowContext", jint>(); }
	jint getUserDisabledShowContext() { return call_method<"getUserDisabledShowContext", jint>(); }
	void show(jni::ref<android::os::Bundle> args, jint flags) { return call_method<"show", void>(args, flags); }
	void hide() { return call_method<"hide", void>(); }
	void setUiEnabled(jboolean enabled) { return call_method<"setUiEnabled", void>(enabled); }
	void setTheme(jint theme) { return call_method<"setTheme", void>(theme); }
	void startVoiceActivity(jni::ref<android::content::Intent> intent) { return call_method<"startVoiceActivity", void>(intent); }
	void startAssistantActivity(jni::ref<android::content::Intent> intent) { return call_method<"startAssistantActivity", void>(intent); }
	void requestDirectActions(jni::ref<android::service::voice::VoiceInteractionSession_ActivityId> activityId, jni::ref<android::os::CancellationSignal> cancellationSignal, jni::ref<java::util::concurrent::Executor> resultExecutor, jni::ref<java::util::function::Consumer> callback) { return call_method<"requestDirectActions", void>(activityId, cancellationSignal, resultExecutor, callback); }
	void onDirectActionsInvalidated(jni::ref<android::service::voice::VoiceInteractionSession_ActivityId> activityId) { return call_method<"onDirectActionsInvalidated", void>(activityId); }
	void performDirectAction(jni::ref<android::app::DirectAction> action, jni::ref<android::os::Bundle> extras, jni::ref<android::os::CancellationSignal> cancellationSignal, jni::ref<java::util::concurrent::Executor> resultExecutor, jni::ref<java::util::function::Consumer> resultListener) { return call_method<"performDirectAction", void>(action, extras, cancellationSignal, resultExecutor, resultListener); }
	void setKeepAwake(jboolean keepAwake) { return call_method<"setKeepAwake", void>(keepAwake); }
	void closeSystemDialogs() { return call_method<"closeSystemDialogs", void>(); }
	jni::ref<android::view::LayoutInflater> getLayoutInflater() { return call_method<"getLayoutInflater", jni::ref<android::view::LayoutInflater>>(); }
	jni::ref<android::app::Dialog> getWindow() { return call_method<"getWindow", jni::ref<android::app::Dialog>>(); }
	void finish() { return call_method<"finish", void>(); }
	void onCreate() { return call_method<"onCreate", void>(); }
	void onPrepareShow(jni::ref<android::os::Bundle> args, jint showFlags) { return call_method<"onPrepareShow", void>(args, showFlags); }
	void onShow(jni::ref<android::os::Bundle> args, jint showFlags) { return call_method<"onShow", void>(args, showFlags); }
	void onHide() { return call_method<"onHide", void>(); }
	void onDestroy() { return call_method<"onDestroy", void>(); }
	jni::ref<android::view::View> onCreateContentView() { return call_method<"onCreateContentView", jni::ref<android::view::View>>(); }
	void setContentView(jni::ref<android::view::View> view) { return call_method<"setContentView", void>(view); }
	void onAssistStructureFailure(jni::ref<java::lang::Throwable> failure) { return call_method<"onAssistStructureFailure", void>(failure); }
	void onHandleAssist(jni::ref<android::os::Bundle> data, jni::ref<android::app::assist::AssistStructure> structure, jni::ref<android::app::assist::AssistContent> content) { return call_method<"onHandleAssist", void>(data, structure, content); }
	void onHandleAssist(jni::ref<android::service::voice::VoiceInteractionSession_AssistState> state) { return call_method<"onHandleAssist", void>(state); }
	void onHandleAssistSecondary(jni::ref<android::os::Bundle> data, jni::ref<android::app::assist::AssistStructure> structure, jni::ref<android::app::assist::AssistContent> content, jint index, jint count) { return call_method<"onHandleAssistSecondary", void>(data, structure, content, index, count); }
	void onHandleScreenshot(jni::ref<android::graphics::Bitmap> screenshot) { return call_method<"onHandleScreenshot", void>(screenshot); }
	jboolean onKeyDown(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyDown", jboolean>(keyCode, event); }
	jboolean onKeyLongPress(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyLongPress", jboolean>(keyCode, event); }
	jboolean onKeyUp(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyUp", jboolean>(keyCode, event); }
	jboolean onKeyMultiple(jint keyCode, jint count, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyMultiple", jboolean>(keyCode, count, event); }
	void onBackPressed() { return call_method<"onBackPressed", void>(); }
	void onCloseSystemDialogs() { return call_method<"onCloseSystemDialogs", void>(); }
	void onLockscreenShown() { return call_method<"onLockscreenShown", void>(); }
	void onConfigurationChanged(jni::ref<android::content::res::Configuration> newConfig) { return call_method<"onConfigurationChanged", void>(newConfig); }
	void onLowMemory() { return call_method<"onLowMemory", void>(); }
	void onTrimMemory(jint level) { return call_method<"onTrimMemory", void>(level); }
	void onComputeInsets(jni::ref<android::service::voice::VoiceInteractionSession_Insets> outInsets) { return call_method<"onComputeInsets", void>(outInsets); }
	void onTaskStarted(jni::ref<android::content::Intent> intent, jint taskId) { return call_method<"onTaskStarted", void>(intent, taskId); }
	void onTaskFinished(jni::ref<android::content::Intent> intent, jint taskId) { return call_method<"onTaskFinished", void>(intent, taskId); }
	jni::ref<jni::array<jboolean>> onGetSupportedCommands(jni::ref<jni::array<java::lang::String>> commands) { return call_method<"onGetSupportedCommands", jni::ref<jni::array<jboolean>>>(commands); }
	void onRequestConfirmation(jni::ref<android::service::voice::VoiceInteractionSession_ConfirmationRequest> request) { return call_method<"onRequestConfirmation", void>(request); }
	void onRequestPickOption(jni::ref<android::service::voice::VoiceInteractionSession_PickOptionRequest> request) { return call_method<"onRequestPickOption", void>(request); }
	void onRequestCompleteVoice(jni::ref<android::service::voice::VoiceInteractionSession_CompleteVoiceRequest> request) { return call_method<"onRequestCompleteVoice", void>(request); }
	void onRequestAbortVoice(jni::ref<android::service::voice::VoiceInteractionSession_AbortVoiceRequest> request) { return call_method<"onRequestAbortVoice", void>(request); }
	void onRequestCommand(jni::ref<android::service::voice::VoiceInteractionSession_CommandRequest> request) { return call_method<"onRequestCommand", void>(request); }
	void onCancelRequest(jni::ref<android::service::voice::VoiceInteractionSession_Request> request) { return call_method<"onCancelRequest", void>(request); }
	void dump(jni::ref<java::lang::String> prefix, jni::ref<java::io::FileDescriptor> fd, jni::ref<java::io::PrintWriter> writer, jni::ref<jni::array<java::lang::String>> args) { return call_method<"dump", void>(prefix, fd, writer, args); }

protected:

	VoiceInteractionSession(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION
