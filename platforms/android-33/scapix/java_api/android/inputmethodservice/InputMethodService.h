// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/inputmethodservice/AbstractInputMethodService.h>

#ifndef SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::inputmethodservice { class InputMethodService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::inputmethodservice::InputMethodService>
{
	static constexpr fixed_string class_name = "android/inputmethodservice/InputMethodService";
	using base_classes = std::tuple<scapix::java_api::android::inputmethodservice::AbstractInputMethodService>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE)
#define SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Dialog.h>
#include <scapix/java_api/android/content/res/Configuration.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/inputmethodservice/AbstractInputMethodService_AbstractInputMethodImpl.h>
#include <scapix/java_api/android/inputmethodservice/AbstractInputMethodService_AbstractInputMethodSessionImpl.h>
#include <scapix/java_api/android/inputmethodservice/InputMethodService_Insets.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/LayoutInflater.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/Window.h>
#include <scapix/java_api/android/view/inputmethod/CompletionInfo.h>
#include <scapix/java_api/android/view/inputmethod/CursorAnchorInfo.h>
#include <scapix/java_api/android/view/inputmethod/EditorInfo.h>
#include <scapix/java_api/android/view/inputmethod/ExtractedText.h>
#include <scapix/java_api/android/view/inputmethod/InlineSuggestionsRequest.h>
#include <scapix/java_api/android/view/inputmethod/InlineSuggestionsResponse.h>
#include <scapix/java_api/android/view/inputmethod/InputBinding.h>
#include <scapix/java_api/android/view/inputmethod/InputConnection.h>
#include <scapix/java_api/android/view/inputmethod/InputMethodSubtype.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/inputmethodservice/InputMethodService_InputMethodSessionImpl.h>
#include <scapix/java_api/android/inputmethodservice/InputMethodService_InputMethodImpl.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::inputmethodservice::InputMethodService : public jni::object_base<"android/inputmethodservice/InputMethodService",
	android::inputmethodservice::AbstractInputMethodService>
{
public:

	using Insets = InputMethodService_Insets;
	using InputMethodSessionImpl = InputMethodService_InputMethodSessionImpl;
	using InputMethodImpl = InputMethodService_InputMethodImpl;

	static jint BACK_DISPOSITION_ADJUST_NOTHING() { return get_static_field<"BACK_DISPOSITION_ADJUST_NOTHING", jint>(); }
	static jint BACK_DISPOSITION_DEFAULT() { return get_static_field<"BACK_DISPOSITION_DEFAULT", jint>(); }
	static jint BACK_DISPOSITION_WILL_DISMISS() { return get_static_field<"BACK_DISPOSITION_WILL_DISMISS", jint>(); }
	static jint BACK_DISPOSITION_WILL_NOT_DISMISS() { return get_static_field<"BACK_DISPOSITION_WILL_NOT_DISMISS", jint>(); }

	static jni::ref<android::inputmethodservice::InputMethodService> new_object() { return base_::new_object(); }
	jni::ref<android::view::inputmethod::InlineSuggestionsRequest> onCreateInlineSuggestionsRequest(jni::ref<android::os::Bundle> uiExtras) { return call_method<"onCreateInlineSuggestionsRequest", jni::ref<android::view::inputmethod::InlineSuggestionsRequest>>(uiExtras); }
	jboolean onInlineSuggestionsResponse(jni::ref<android::view::inputmethod::InlineSuggestionsResponse> response) { return call_method<"onInlineSuggestionsResponse", jboolean>(response); }
	void setTheme(jint theme) { return call_method<"setTheme", void>(theme); }
	jboolean enableHardwareAcceleration() { return call_method<"enableHardwareAcceleration", jboolean>(); }
	void onCreate() { return call_method<"onCreate", void>(); }
	void onInitializeInterface() { return call_method<"onInitializeInterface", void>(); }
	void onDestroy() { return call_method<"onDestroy", void>(); }
	void onConfigurationChanged(jni::ref<android::content::res::Configuration> newConfig) { return call_method<"onConfigurationChanged", void>(newConfig); }
	jni::ref<android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl> onCreateInputMethodInterface() { return call_method<"onCreateInputMethodInterface", jni::ref<android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl>>(); }
	jni::ref<android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl> onCreateInputMethodSessionInterface() { return call_method<"onCreateInputMethodSessionInterface", jni::ref<android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl>>(); }
	jni::ref<android::view::LayoutInflater> getLayoutInflater() { return call_method<"getLayoutInflater", jni::ref<android::view::LayoutInflater>>(); }
	jni::ref<android::app::Dialog> getWindow() { return call_method<"getWindow", jni::ref<android::app::Dialog>>(); }
	void setBackDisposition(jint disposition) { return call_method<"setBackDisposition", void>(disposition); }
	jint getBackDisposition() { return call_method<"getBackDisposition", jint>(); }
	jint getMaxWidth() { return call_method<"getMaxWidth", jint>(); }
	jni::ref<android::view::inputmethod::InputBinding> getCurrentInputBinding() { return call_method<"getCurrentInputBinding", jni::ref<android::view::inputmethod::InputBinding>>(); }
	jni::ref<android::view::inputmethod::InputConnection> getCurrentInputConnection() { return call_method<"getCurrentInputConnection", jni::ref<android::view::inputmethod::InputConnection>>(); }
	jboolean switchToPreviousInputMethod() { return call_method<"switchToPreviousInputMethod", jboolean>(); }
	jboolean switchToNextInputMethod(jboolean onlyCurrentIme) { return call_method<"switchToNextInputMethod", jboolean>(onlyCurrentIme); }
	jboolean shouldOfferSwitchingToNextInputMethod() { return call_method<"shouldOfferSwitchingToNextInputMethod", jboolean>(); }
	jboolean getCurrentInputStarted() { return call_method<"getCurrentInputStarted", jboolean>(); }
	jni::ref<android::view::inputmethod::EditorInfo> getCurrentInputEditorInfo() { return call_method<"getCurrentInputEditorInfo", jni::ref<android::view::inputmethod::EditorInfo>>(); }
	void updateFullscreenMode() { return call_method<"updateFullscreenMode", void>(); }
	void onConfigureWindow(jni::ref<android::view::Window> win, jboolean isFullscreen, jboolean isCandidatesOnly) { return call_method<"onConfigureWindow", void>(win, isFullscreen, isCandidatesOnly); }
	jboolean isFullscreenMode() { return call_method<"isFullscreenMode", jboolean>(); }
	jboolean onEvaluateFullscreenMode() { return call_method<"onEvaluateFullscreenMode", jboolean>(); }
	void setExtractViewShown(jboolean shown) { return call_method<"setExtractViewShown", void>(shown); }
	jboolean isExtractViewShown() { return call_method<"isExtractViewShown", jboolean>(); }
	void onComputeInsets(jni::ref<android::inputmethodservice::InputMethodService_Insets> outInsets) { return call_method<"onComputeInsets", void>(outInsets); }
	void updateInputViewShown() { return call_method<"updateInputViewShown", void>(); }
	jboolean isShowInputRequested() { return call_method<"isShowInputRequested", jboolean>(); }
	jboolean isInputViewShown() { return call_method<"isInputViewShown", jboolean>(); }
	jboolean onEvaluateInputViewShown() { return call_method<"onEvaluateInputViewShown", jboolean>(); }
	void setCandidatesViewShown(jboolean shown) { return call_method<"setCandidatesViewShown", void>(shown); }
	jint getCandidatesHiddenVisibility() { return call_method<"getCandidatesHiddenVisibility", jint>(); }
	void showStatusIcon(jint iconResId) { return call_method<"showStatusIcon", void>(iconResId); }
	void hideStatusIcon() { return call_method<"hideStatusIcon", void>(); }
	void switchInputMethod(jni::ref<java::lang::String> id) { return call_method<"switchInputMethod", void>(id); }
	void switchInputMethod(jni::ref<java::lang::String> id, jni::ref<android::view::inputmethod::InputMethodSubtype> subtype) { return call_method<"switchInputMethod", void>(id, subtype); }
	void setExtractView(jni::ref<android::view::View> view) { return call_method<"setExtractView", void>(view); }
	void setCandidatesView(jni::ref<android::view::View> view) { return call_method<"setCandidatesView", void>(view); }
	void setInputView(jni::ref<android::view::View> view) { return call_method<"setInputView", void>(view); }
	jni::ref<android::view::View> onCreateExtractTextView() { return call_method<"onCreateExtractTextView", jni::ref<android::view::View>>(); }
	jni::ref<android::view::View> onCreateCandidatesView() { return call_method<"onCreateCandidatesView", jni::ref<android::view::View>>(); }
	jni::ref<android::view::View> onCreateInputView() { return call_method<"onCreateInputView", jni::ref<android::view::View>>(); }
	void onStartInputView(jni::ref<android::view::inputmethod::EditorInfo> info, jboolean restarting) { return call_method<"onStartInputView", void>(info, restarting); }
	void onFinishInputView(jboolean finishingInput) { return call_method<"onFinishInputView", void>(finishingInput); }
	void onStartCandidatesView(jni::ref<android::view::inputmethod::EditorInfo> info, jboolean restarting) { return call_method<"onStartCandidatesView", void>(info, restarting); }
	void onFinishCandidatesView(jboolean finishingInput) { return call_method<"onFinishCandidatesView", void>(finishingInput); }
	void onPrepareStylusHandwriting() { return call_method<"onPrepareStylusHandwriting", void>(); }
	jboolean onStartStylusHandwriting() { return call_method<"onStartStylusHandwriting", jboolean>(); }
	void onStylusHandwritingMotionEvent(jni::ref<android::view::MotionEvent> motionEvent) { return call_method<"onStylusHandwritingMotionEvent", void>(motionEvent); }
	void onFinishStylusHandwriting() { return call_method<"onFinishStylusHandwriting", void>(); }
	jni::ref<android::view::Window> getStylusHandwritingWindow() { return call_method<"getStylusHandwritingWindow", jni::ref<android::view::Window>>(); }
	void finishStylusHandwriting() { return call_method<"finishStylusHandwriting", void>(); }
	jboolean onShowInputRequested(jint flags, jboolean configChange) { return call_method<"onShowInputRequested", jboolean>(flags, configChange); }
	void showWindow(jboolean showInput) { return call_method<"showWindow", void>(showInput); }
	void hideWindow() { return call_method<"hideWindow", void>(); }
	void onWindowShown() { return call_method<"onWindowShown", void>(); }
	void onWindowHidden() { return call_method<"onWindowHidden", void>(); }
	void onBindInput() { return call_method<"onBindInput", void>(); }
	void onUnbindInput() { return call_method<"onUnbindInput", void>(); }
	void onStartInput(jni::ref<android::view::inputmethod::EditorInfo> attribute, jboolean restarting) { return call_method<"onStartInput", void>(attribute, restarting); }
	void onFinishInput() { return call_method<"onFinishInput", void>(); }
	void onDisplayCompletions(jni::ref<jni::array<android::view::inputmethod::CompletionInfo>> completions) { return call_method<"onDisplayCompletions", void>(completions); }
	void onUpdateExtractedText(jint token, jni::ref<android::view::inputmethod::ExtractedText> text) { return call_method<"onUpdateExtractedText", void>(token, text); }
	void onUpdateSelection(jint oldSelStart, jint oldSelEnd, jint newSelStart, jint newSelEnd, jint candidatesStart, jint candidatesEnd) { return call_method<"onUpdateSelection", void>(oldSelStart, oldSelEnd, newSelStart, newSelEnd, candidatesStart, candidatesEnd); }
	void onViewClicked(jboolean focusChanged) { return call_method<"onViewClicked", void>(focusChanged); }
	void onUpdateCursor(jni::ref<android::graphics::Rect> newCursor) { return call_method<"onUpdateCursor", void>(newCursor); }
	void onUpdateCursorAnchorInfo(jni::ref<android::view::inputmethod::CursorAnchorInfo> cursorAnchorInfo) { return call_method<"onUpdateCursorAnchorInfo", void>(cursorAnchorInfo); }
	void requestHideSelf(jint flags) { return call_method<"requestHideSelf", void>(flags); }
	void requestShowSelf(jint flags) { return call_method<"requestShowSelf", void>(flags); }
	jboolean onKeyDown(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyDown", jboolean>(keyCode, event); }
	jboolean onKeyLongPress(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyLongPress", jboolean>(keyCode, event); }
	jboolean onKeyMultiple(jint keyCode, jint count, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyMultiple", jboolean>(keyCode, count, event); }
	jboolean onKeyUp(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyUp", jboolean>(keyCode, event); }
	jboolean onTrackballEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onTrackballEvent", jboolean>(event); }
	jboolean onGenericMotionEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onGenericMotionEvent", jboolean>(event); }
	void onAppPrivateCommand(jni::ref<java::lang::String> action, jni::ref<android::os::Bundle> data) { return call_method<"onAppPrivateCommand", void>(action, data); }
	void sendDownUpKeyEvents(jint keyEventCode) { return call_method<"sendDownUpKeyEvents", void>(keyEventCode); }
	jboolean sendDefaultEditorAction(jboolean fromEnterKey) { return call_method<"sendDefaultEditorAction", jboolean>(fromEnterKey); }
	void sendKeyChar(jchar charCode) { return call_method<"sendKeyChar", void>(charCode); }
	void onExtractedSelectionChanged(jint start, jint end) { return call_method<"onExtractedSelectionChanged", void>(start, end); }
	void onExtractedTextClicked() { return call_method<"onExtractedTextClicked", void>(); }
	void onExtractedCursorMovement(jint dx, jint dy) { return call_method<"onExtractedCursorMovement", void>(dx, dy); }
	jboolean onExtractTextContextMenuItem(jint id) { return call_method<"onExtractTextContextMenuItem", jboolean>(id); }
	jni::ref<java::lang::CharSequence> getTextForImeAction(jint imeOptions) { return call_method<"getTextForImeAction", jni::ref<java::lang::CharSequence>>(imeOptions); }
	void onUpdateExtractingVisibility(jni::ref<android::view::inputmethod::EditorInfo> ei) { return call_method<"onUpdateExtractingVisibility", void>(ei); }
	void onUpdateExtractingViews(jni::ref<android::view::inputmethod::EditorInfo> ei) { return call_method<"onUpdateExtractingViews", void>(ei); }
	void onExtractingInputChanged(jni::ref<android::view::inputmethod::EditorInfo> ei) { return call_method<"onExtractingInputChanged", void>(ei); }
	jint getInputMethodWindowRecommendedHeight() { return call_method<"getInputMethodWindowRecommendedHeight", jint>(); }
	jni::ref<java::lang::Object> getSystemService(jni::ref<java::lang::String> name) { return call_method<"getSystemService", jni::ref<java::lang::Object>>(name); }

protected:

	InputMethodService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE
