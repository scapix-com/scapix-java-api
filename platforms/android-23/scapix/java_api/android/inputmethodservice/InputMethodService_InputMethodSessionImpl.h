// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/inputmethodservice/AbstractInputMethodService_AbstractInputMethodSessionImpl.h>

#ifndef SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_INPUTMETHODSESSIONIMPL_FWD
#define SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_INPUTMETHODSESSIONIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::inputmethodservice { class InputMethodService_InputMethodSessionImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::inputmethodservice::InputMethodService_InputMethodSessionImpl>
{
	static constexpr fixed_string class_name = "android/inputmethodservice/InputMethodService$InputMethodSessionImpl";
	using base_classes = std::tuple<scapix::java_api::android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_INPUTMETHODSESSIONIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_INPUTMETHODSESSIONIMPL)
#define SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_INPUTMETHODSESSIONIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/inputmethodservice/InputMethodService.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/view/inputmethod/CompletionInfo.h>
#include <scapix/java_api/android/view/inputmethod/CursorAnchorInfo.h>
#include <scapix/java_api/android/view/inputmethod/ExtractedText.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::inputmethodservice::InputMethodService_InputMethodSessionImpl : public jni::object_base<"android/inputmethodservice/InputMethodService$InputMethodSessionImpl",
	android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl>
{
public:

	static jni::ref<android::inputmethodservice::InputMethodService_InputMethodSessionImpl> new_object(jni::ref<android::inputmethodservice::InputMethodService> p1) { return base_::new_object(p1); }
	void finishInput() { return call_method<"finishInput", void>(); }
	void displayCompletions(jni::ref<jni::array<android::view::inputmethod::CompletionInfo>> completions) { return call_method<"displayCompletions", void>(completions); }
	void updateExtractedText(jint token, jni::ref<android::view::inputmethod::ExtractedText> text) { return call_method<"updateExtractedText", void>(token, text); }
	void updateSelection(jint oldSelStart, jint oldSelEnd, jint newSelStart, jint newSelEnd, jint candidatesStart, jint candidatesEnd) { return call_method<"updateSelection", void>(oldSelStart, oldSelEnd, newSelStart, newSelEnd, candidatesStart, candidatesEnd); }
	void viewClicked(jboolean focusChanged) { return call_method<"viewClicked", void>(focusChanged); }
	void updateCursor(jni::ref<android::graphics::Rect> newCursor) { return call_method<"updateCursor", void>(newCursor); }
	void appPrivateCommand(jni::ref<java::lang::String> action, jni::ref<android::os::Bundle> data) { return call_method<"appPrivateCommand", void>(action, data); }
	void toggleSoftInput(jint showFlags, jint hideFlags) { return call_method<"toggleSoftInput", void>(showFlags, hideFlags); }
	void updateCursorAnchorInfo(jni::ref<android::view::inputmethod::CursorAnchorInfo> info) { return call_method<"updateCursorAnchorInfo", void>(info); }

protected:

	InputMethodService_InputMethodSessionImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_INPUTMETHODSERVICE_INPUTMETHODSESSIONIMPL
