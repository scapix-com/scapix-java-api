// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTCONNECTION_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTCONNECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::inputmethod { class InputConnection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::inputmethod::InputConnection>
{
	static constexpr fixed_string class_name = "android/view/inputmethod/InputConnection";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTCONNECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTCONNECTION)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTCONNECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/inputmethod/CompletionInfo.h>
#include <scapix/java_api/android/view/inputmethod/CorrectionInfo.h>
#include <scapix/java_api/android/view/inputmethod/ExtractedText.h>
#include <scapix/java_api/android/view/inputmethod/ExtractedTextRequest.h>
#include <scapix/java_api/android/view/inputmethod/InputContentInfo.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::inputmethod::InputConnection : public jni::object_base<"android/view/inputmethod/InputConnection",
	java::lang::Object>
{
public:

	static jint CURSOR_UPDATE_IMMEDIATE() { return get_static_field<"CURSOR_UPDATE_IMMEDIATE", jint>(); }
	static jint CURSOR_UPDATE_MONITOR() { return get_static_field<"CURSOR_UPDATE_MONITOR", jint>(); }
	static jint GET_EXTRACTED_TEXT_MONITOR() { return get_static_field<"GET_EXTRACTED_TEXT_MONITOR", jint>(); }
	static jint GET_TEXT_WITH_STYLES() { return get_static_field<"GET_TEXT_WITH_STYLES", jint>(); }
	static jint INPUT_CONTENT_GRANT_READ_URI_PERMISSION() { return get_static_field<"INPUT_CONTENT_GRANT_READ_URI_PERMISSION", jint>(); }

	jni::ref<java::lang::CharSequence> getTextBeforeCursor(jint p1, jint p2) { return call_method<"getTextBeforeCursor", jni::ref<java::lang::CharSequence>>(p1, p2); }
	jni::ref<java::lang::CharSequence> getTextAfterCursor(jint p1, jint p2) { return call_method<"getTextAfterCursor", jni::ref<java::lang::CharSequence>>(p1, p2); }
	jni::ref<java::lang::CharSequence> getSelectedText(jint p1) { return call_method<"getSelectedText", jni::ref<java::lang::CharSequence>>(p1); }
	jint getCursorCapsMode(jint p1) { return call_method<"getCursorCapsMode", jint>(p1); }
	jni::ref<android::view::inputmethod::ExtractedText> getExtractedText(jni::ref<android::view::inputmethod::ExtractedTextRequest> p1, jint p2) { return call_method<"getExtractedText", jni::ref<android::view::inputmethod::ExtractedText>>(p1, p2); }
	jboolean deleteSurroundingText(jint p1, jint p2) { return call_method<"deleteSurroundingText", jboolean>(p1, p2); }
	jboolean deleteSurroundingTextInCodePoints(jint p1, jint p2) { return call_method<"deleteSurroundingTextInCodePoints", jboolean>(p1, p2); }
	jboolean setComposingText(jni::ref<java::lang::CharSequence> p1, jint p2) { return call_method<"setComposingText", jboolean>(p1, p2); }
	jboolean setComposingRegion(jint p1, jint p2) { return call_method<"setComposingRegion", jboolean>(p1, p2); }
	jboolean finishComposingText() { return call_method<"finishComposingText", jboolean>(); }
	jboolean commitText(jni::ref<java::lang::CharSequence> p1, jint p2) { return call_method<"commitText", jboolean>(p1, p2); }
	jboolean commitCompletion(jni::ref<android::view::inputmethod::CompletionInfo> p1) { return call_method<"commitCompletion", jboolean>(p1); }
	jboolean commitCorrection(jni::ref<android::view::inputmethod::CorrectionInfo> p1) { return call_method<"commitCorrection", jboolean>(p1); }
	jboolean setSelection(jint p1, jint p2) { return call_method<"setSelection", jboolean>(p1, p2); }
	jboolean performEditorAction(jint p1) { return call_method<"performEditorAction", jboolean>(p1); }
	jboolean performContextMenuAction(jint p1) { return call_method<"performContextMenuAction", jboolean>(p1); }
	jboolean beginBatchEdit() { return call_method<"beginBatchEdit", jboolean>(); }
	jboolean endBatchEdit() { return call_method<"endBatchEdit", jboolean>(); }
	jboolean sendKeyEvent(jni::ref<android::view::KeyEvent> p1) { return call_method<"sendKeyEvent", jboolean>(p1); }
	jboolean clearMetaKeyStates(jint p1) { return call_method<"clearMetaKeyStates", jboolean>(p1); }
	jboolean reportFullscreenMode(jboolean p1) { return call_method<"reportFullscreenMode", jboolean>(p1); }
	jboolean performPrivateCommand(jni::ref<java::lang::String> p1, jni::ref<android::os::Bundle> p2) { return call_method<"performPrivateCommand", jboolean>(p1, p2); }
	jboolean requestCursorUpdates(jint p1) { return call_method<"requestCursorUpdates", jboolean>(p1); }
	jni::ref<android::os::Handler> getHandler() { return call_method<"getHandler", jni::ref<android::os::Handler>>(); }
	void closeConnection() { return call_method<"closeConnection", void>(); }
	jboolean commitContent(jni::ref<android::view::inputmethod::InputContentInfo> p1, jint p2, jni::ref<android::os::Bundle> p3) { return call_method<"commitContent", jboolean>(p1, p2, p3); }

protected:

	InputConnection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTCONNECTION