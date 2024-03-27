// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/view/inputmethod/InputConnection.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_BASEINPUTCONNECTION_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_BASEINPUTCONNECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::inputmethod { class BaseInputConnection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::inputmethod::BaseInputConnection>
{
	static constexpr fixed_string class_name = "android/view/inputmethod/BaseInputConnection";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::view::inputmethod::InputConnection>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_BASEINPUTCONNECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_BASEINPUTCONNECTION)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_BASEINPUTCONNECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/text/Editable.h>
#include <scapix/java_api/android/text/Spannable.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/inputmethod/CompletionInfo.h>
#include <scapix/java_api/android/view/inputmethod/CorrectionInfo.h>
#include <scapix/java_api/android/view/inputmethod/ExtractedText.h>
#include <scapix/java_api/android/view/inputmethod/ExtractedTextRequest.h>
#include <scapix/java_api/android/view/inputmethod/InputContentInfo.h>
#include <scapix/java_api/android/view/inputmethod/SurroundingText.h>
#include <scapix/java_api/android/view/inputmethod/TextSnapshot.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::inputmethod::BaseInputConnection : public jni::object_base<"android/view/inputmethod/BaseInputConnection",
	java::lang::Object,
	android::view::inputmethod::InputConnection>
{
public:

	static jni::ref<android::view::inputmethod::BaseInputConnection> new_object(jni::ref<android::view::View> targetView, jboolean fullEditor) { return base_::new_object(targetView, fullEditor); }
	static void removeComposingSpans(jni::ref<android::text::Spannable> text) { return call_static_method<"removeComposingSpans", void>(text); }
	static void setComposingSpans(jni::ref<android::text::Spannable> text) { return call_static_method<"setComposingSpans", void>(text); }
	static jint getComposingSpanStart(jni::ref<android::text::Spannable> text) { return call_static_method<"getComposingSpanStart", jint>(text); }
	static jint getComposingSpanEnd(jni::ref<android::text::Spannable> text) { return call_static_method<"getComposingSpanEnd", jint>(text); }
	jni::ref<android::text::Editable> getEditable() { return call_method<"getEditable", jni::ref<android::text::Editable>>(); }
	jboolean beginBatchEdit() { return call_method<"beginBatchEdit", jboolean>(); }
	jboolean endBatchEdit() { return call_method<"endBatchEdit", jboolean>(); }
	void closeConnection() { return call_method<"closeConnection", void>(); }
	jboolean clearMetaKeyStates(jint states) { return call_method<"clearMetaKeyStates", jboolean>(states); }
	jboolean commitCompletion(jni::ref<android::view::inputmethod::CompletionInfo> text) { return call_method<"commitCompletion", jboolean>(text); }
	jboolean commitCorrection(jni::ref<android::view::inputmethod::CorrectionInfo> correctionInfo) { return call_method<"commitCorrection", jboolean>(correctionInfo); }
	jboolean commitText(jni::ref<java::lang::CharSequence> text, jint newCursorPosition) { return call_method<"commitText", jboolean>(text, newCursorPosition); }
	jboolean deleteSurroundingText(jint beforeLength, jint afterLength) { return call_method<"deleteSurroundingText", jboolean>(beforeLength, afterLength); }
	jboolean deleteSurroundingTextInCodePoints(jint beforeLength, jint afterLength) { return call_method<"deleteSurroundingTextInCodePoints", jboolean>(beforeLength, afterLength); }
	jboolean finishComposingText() { return call_method<"finishComposingText", jboolean>(); }
	jint getCursorCapsMode(jint reqModes) { return call_method<"getCursorCapsMode", jint>(reqModes); }
	jni::ref<android::view::inputmethod::ExtractedText> getExtractedText(jni::ref<android::view::inputmethod::ExtractedTextRequest> request, jint flags) { return call_method<"getExtractedText", jni::ref<android::view::inputmethod::ExtractedText>>(request, flags); }
	jni::ref<java::lang::CharSequence> getTextBeforeCursor(jint length, jint flags) { return call_method<"getTextBeforeCursor", jni::ref<java::lang::CharSequence>>(length, flags); }
	jni::ref<java::lang::CharSequence> getSelectedText(jint flags) { return call_method<"getSelectedText", jni::ref<java::lang::CharSequence>>(flags); }
	jni::ref<java::lang::CharSequence> getTextAfterCursor(jint length, jint flags) { return call_method<"getTextAfterCursor", jni::ref<java::lang::CharSequence>>(length, flags); }
	jni::ref<android::view::inputmethod::SurroundingText> getSurroundingText(jint beforeLength, jint afterLength, jint flags) { return call_method<"getSurroundingText", jni::ref<android::view::inputmethod::SurroundingText>>(beforeLength, afterLength, flags); }
	jboolean performEditorAction(jint actionCode) { return call_method<"performEditorAction", jboolean>(actionCode); }
	jboolean performContextMenuAction(jint id) { return call_method<"performContextMenuAction", jboolean>(id); }
	jboolean performPrivateCommand(jni::ref<java::lang::String> action, jni::ref<android::os::Bundle> data) { return call_method<"performPrivateCommand", jboolean>(action, data); }
	jboolean requestCursorUpdates(jint cursorUpdateMode) { return call_method<"requestCursorUpdates", jboolean>(cursorUpdateMode); }
	jni::ref<android::os::Handler> getHandler() { return call_method<"getHandler", jni::ref<android::os::Handler>>(); }
	jboolean setComposingText(jni::ref<java::lang::CharSequence> text, jint newCursorPosition) { return call_method<"setComposingText", jboolean>(text, newCursorPosition); }
	jboolean setComposingRegion(jint start, jint end) { return call_method<"setComposingRegion", jboolean>(start, end); }
	jboolean setSelection(jint start, jint end) { return call_method<"setSelection", jboolean>(start, end); }
	jboolean sendKeyEvent(jni::ref<android::view::KeyEvent> event) { return call_method<"sendKeyEvent", jboolean>(event); }
	jboolean reportFullscreenMode(jboolean enabled) { return call_method<"reportFullscreenMode", jboolean>(enabled); }
	jboolean commitContent(jni::ref<android::view::inputmethod::InputContentInfo> inputContentInfo, jint flags, jni::ref<android::os::Bundle> opts) { return call_method<"commitContent", jboolean>(inputContentInfo, flags, opts); }
	jni::ref<android::view::inputmethod::TextSnapshot> takeSnapshot() { return call_method<"takeSnapshot", jni::ref<android::view::inputmethod::TextSnapshot>>(); }

protected:

	BaseInputConnection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_BASEINPUTCONNECTION