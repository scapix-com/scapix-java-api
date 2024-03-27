// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/view/inputmethod/InputConnection.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTCONNECTIONWRAPPER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTCONNECTIONWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::inputmethod { class InputConnectionWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::inputmethod::InputConnectionWrapper>
{
	static constexpr fixed_string class_name = "android/view/inputmethod/InputConnectionWrapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::view::inputmethod::InputConnection>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTCONNECTIONWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTCONNECTIONWRAPPER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTCONNECTIONWRAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/inputmethod/CompletionInfo.h>
#include <scapix/java_api/android/view/inputmethod/CorrectionInfo.h>
#include <scapix/java_api/android/view/inputmethod/ExtractedText.h>
#include <scapix/java_api/android/view/inputmethod/ExtractedTextRequest.h>
#include <scapix/java_api/android/view/inputmethod/InputContentInfo.h>
#include <scapix/java_api/android/view/inputmethod/SurroundingText.h>
#include <scapix/java_api/android/view/inputmethod/TextAttribute.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::inputmethod::InputConnectionWrapper : public jni::object_base<"android/view/inputmethod/InputConnectionWrapper",
	java::lang::Object,
	android::view::inputmethod::InputConnection>
{
public:

	static jni::ref<android::view::inputmethod::InputConnectionWrapper> new_object(jni::ref<android::view::inputmethod::InputConnection> target, jboolean mutable_) { return base_::new_object(target, mutable_); }
	void setTarget(jni::ref<android::view::inputmethod::InputConnection> target) { return call_method<"setTarget", void>(target); }
	jni::ref<java::lang::CharSequence> getTextBeforeCursor(jint n, jint flags) { return call_method<"getTextBeforeCursor", jni::ref<java::lang::CharSequence>>(n, flags); }
	jni::ref<java::lang::CharSequence> getTextAfterCursor(jint n, jint flags) { return call_method<"getTextAfterCursor", jni::ref<java::lang::CharSequence>>(n, flags); }
	jni::ref<java::lang::CharSequence> getSelectedText(jint flags) { return call_method<"getSelectedText", jni::ref<java::lang::CharSequence>>(flags); }
	jni::ref<android::view::inputmethod::SurroundingText> getSurroundingText(jint beforeLength, jint afterLength, jint flags) { return call_method<"getSurroundingText", jni::ref<android::view::inputmethod::SurroundingText>>(beforeLength, afterLength, flags); }
	jint getCursorCapsMode(jint reqModes) { return call_method<"getCursorCapsMode", jint>(reqModes); }
	jni::ref<android::view::inputmethod::ExtractedText> getExtractedText(jni::ref<android::view::inputmethod::ExtractedTextRequest> request, jint flags) { return call_method<"getExtractedText", jni::ref<android::view::inputmethod::ExtractedText>>(request, flags); }
	jboolean deleteSurroundingTextInCodePoints(jint beforeLength, jint afterLength) { return call_method<"deleteSurroundingTextInCodePoints", jboolean>(beforeLength, afterLength); }
	jboolean deleteSurroundingText(jint beforeLength, jint afterLength) { return call_method<"deleteSurroundingText", jboolean>(beforeLength, afterLength); }
	jboolean setComposingText(jni::ref<java::lang::CharSequence> text, jint newCursorPosition) { return call_method<"setComposingText", jboolean>(text, newCursorPosition); }
	jboolean setComposingText(jni::ref<java::lang::CharSequence> text, jint newCursorPosition, jni::ref<android::view::inputmethod::TextAttribute> textAttribute) { return call_method<"setComposingText", jboolean>(text, newCursorPosition, textAttribute); }
	jboolean setComposingRegion(jint start, jint end) { return call_method<"setComposingRegion", jboolean>(start, end); }
	jboolean setComposingRegion(jint start, jint end, jni::ref<android::view::inputmethod::TextAttribute> textAttribute) { return call_method<"setComposingRegion", jboolean>(start, end, textAttribute); }
	jboolean finishComposingText() { return call_method<"finishComposingText", jboolean>(); }
	jboolean commitText(jni::ref<java::lang::CharSequence> text, jint newCursorPosition) { return call_method<"commitText", jboolean>(text, newCursorPosition); }
	jboolean commitText(jni::ref<java::lang::CharSequence> text, jint newCursorPosition, jni::ref<android::view::inputmethod::TextAttribute> textAttribute) { return call_method<"commitText", jboolean>(text, newCursorPosition, textAttribute); }
	jboolean commitCompletion(jni::ref<android::view::inputmethod::CompletionInfo> text) { return call_method<"commitCompletion", jboolean>(text); }
	jboolean commitCorrection(jni::ref<android::view::inputmethod::CorrectionInfo> correctionInfo) { return call_method<"commitCorrection", jboolean>(correctionInfo); }
	jboolean setSelection(jint start, jint end) { return call_method<"setSelection", jboolean>(start, end); }
	jboolean performEditorAction(jint editorAction) { return call_method<"performEditorAction", jboolean>(editorAction); }
	jboolean performContextMenuAction(jint id) { return call_method<"performContextMenuAction", jboolean>(id); }
	jboolean beginBatchEdit() { return call_method<"beginBatchEdit", jboolean>(); }
	jboolean endBatchEdit() { return call_method<"endBatchEdit", jboolean>(); }
	jboolean sendKeyEvent(jni::ref<android::view::KeyEvent> event) { return call_method<"sendKeyEvent", jboolean>(event); }
	jboolean clearMetaKeyStates(jint states) { return call_method<"clearMetaKeyStates", jboolean>(states); }
	jboolean reportFullscreenMode(jboolean enabled) { return call_method<"reportFullscreenMode", jboolean>(enabled); }
	jboolean performSpellCheck() { return call_method<"performSpellCheck", jboolean>(); }
	jboolean performPrivateCommand(jni::ref<java::lang::String> action, jni::ref<android::os::Bundle> data) { return call_method<"performPrivateCommand", jboolean>(action, data); }
	jboolean requestCursorUpdates(jint cursorUpdateMode) { return call_method<"requestCursorUpdates", jboolean>(cursorUpdateMode); }
	jni::ref<android::os::Handler> getHandler() { return call_method<"getHandler", jni::ref<android::os::Handler>>(); }
	void closeConnection() { return call_method<"closeConnection", void>(); }
	jboolean commitContent(jni::ref<android::view::inputmethod::InputContentInfo> inputContentInfo, jint flags, jni::ref<android::os::Bundle> opts) { return call_method<"commitContent", jboolean>(inputContentInfo, flags, opts); }
	jboolean setImeConsumesInput(jboolean imeConsumesInput) { return call_method<"setImeConsumesInput", jboolean>(imeConsumesInput); }

protected:

	InputConnectionWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTCONNECTIONWRAPPER
