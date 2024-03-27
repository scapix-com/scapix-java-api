// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::inputmethod { class InputMethodManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::inputmethod::InputMethodManager>
{
	static constexpr fixed_string class_name = "android/view/inputmethod/InputMethodManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODMANAGER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/android/os/ResultReceiver.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/inputmethod/CompletionInfo.h>
#include <scapix/java_api/android/view/inputmethod/CursorAnchorInfo.h>
#include <scapix/java_api/android/view/inputmethod/ExtractedText.h>
#include <scapix/java_api/android/view/inputmethod/InputMethodInfo.h>
#include <scapix/java_api/android/view/inputmethod/InputMethodSubtype.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::inputmethod::InputMethodManager : public jni::object_base<"android/view/inputmethod/InputMethodManager",
	java::lang::Object>
{
public:

	static jint HIDE_IMPLICIT_ONLY() { return get_static_field<"HIDE_IMPLICIT_ONLY", jint>(); }
	static jint HIDE_NOT_ALWAYS() { return get_static_field<"HIDE_NOT_ALWAYS", jint>(); }
	static jint RESULT_HIDDEN() { return get_static_field<"RESULT_HIDDEN", jint>(); }
	static jint RESULT_SHOWN() { return get_static_field<"RESULT_SHOWN", jint>(); }
	static jint RESULT_UNCHANGED_HIDDEN() { return get_static_field<"RESULT_UNCHANGED_HIDDEN", jint>(); }
	static jint RESULT_UNCHANGED_SHOWN() { return get_static_field<"RESULT_UNCHANGED_SHOWN", jint>(); }
	static jint SHOW_FORCED() { return get_static_field<"SHOW_FORCED", jint>(); }
	static jint SHOW_IMPLICIT() { return get_static_field<"SHOW_IMPLICIT", jint>(); }

	jni::ref<java::util::List> getInputMethodList() { return call_method<"getInputMethodList", jni::ref<java::util::List>>(); }
	jboolean isStylusHandwritingAvailable() { return call_method<"isStylusHandwritingAvailable", jboolean>(); }
	jni::ref<android::view::inputmethod::InputMethodInfo> getCurrentInputMethodInfo() { return call_method<"getCurrentInputMethodInfo", jni::ref<android::view::inputmethod::InputMethodInfo>>(); }
	jni::ref<java::util::List> getEnabledInputMethodList() { return call_method<"getEnabledInputMethodList", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getEnabledInputMethodSubtypeList(jni::ref<android::view::inputmethod::InputMethodInfo> imi, jboolean allowsImplicitlyEnabledSubtypes) { return call_method<"getEnabledInputMethodSubtypeList", jni::ref<java::util::List>>(imi, allowsImplicitlyEnabledSubtypes); }
	void showStatusIcon(jni::ref<android::os::IBinder> imeToken, jni::ref<java::lang::String> packageName, jint iconId) { return call_method<"showStatusIcon", void>(imeToken, packageName, iconId); }
	void hideStatusIcon(jni::ref<android::os::IBinder> imeToken) { return call_method<"hideStatusIcon", void>(imeToken); }
	jboolean isFullscreenMode() { return call_method<"isFullscreenMode", jboolean>(); }
	jboolean isActive(jni::ref<android::view::View> view) { return call_method<"isActive", jboolean>(view); }
	jboolean isActive() { return call_method<"isActive", jboolean>(); }
	jboolean isAcceptingText() { return call_method<"isAcceptingText", jboolean>(); }
	jboolean isInputMethodSuppressingSpellChecker() { return call_method<"isInputMethodSuppressingSpellChecker", jboolean>(); }
	void displayCompletions(jni::ref<android::view::View> view, jni::ref<jni::array<android::view::inputmethod::CompletionInfo>> completions) { return call_method<"displayCompletions", void>(view, completions); }
	void updateExtractedText(jni::ref<android::view::View> view, jint token, jni::ref<android::view::inputmethod::ExtractedText> text) { return call_method<"updateExtractedText", void>(view, token, text); }
	jboolean showSoftInput(jni::ref<android::view::View> view, jint flags) { return call_method<"showSoftInput", jboolean>(view, flags); }
	jboolean showSoftInput(jni::ref<android::view::View> view, jint flags, jni::ref<android::os::ResultReceiver> resultReceiver) { return call_method<"showSoftInput", jboolean>(view, flags, resultReceiver); }
	jboolean hideSoftInputFromWindow(jni::ref<android::os::IBinder> windowToken, jint flags) { return call_method<"hideSoftInputFromWindow", jboolean>(windowToken, flags); }
	jboolean hideSoftInputFromWindow(jni::ref<android::os::IBinder> windowToken, jint flags, jni::ref<android::os::ResultReceiver> resultReceiver) { return call_method<"hideSoftInputFromWindow", jboolean>(windowToken, flags, resultReceiver); }
	void startStylusHandwriting(jni::ref<android::view::View> view) { return call_method<"startStylusHandwriting", void>(view); }
	void prepareStylusHandwritingDelegation(jni::ref<android::view::View> delegatorView) { return call_method<"prepareStylusHandwritingDelegation", void>(delegatorView); }
	void prepareStylusHandwritingDelegation(jni::ref<android::view::View> delegatorView, jni::ref<java::lang::String> delegatePackageName) { return call_method<"prepareStylusHandwritingDelegation", void>(delegatorView, delegatePackageName); }
	jboolean acceptStylusHandwritingDelegation(jni::ref<android::view::View> delegateView) { return call_method<"acceptStylusHandwritingDelegation", jboolean>(delegateView); }
	jboolean acceptStylusHandwritingDelegation(jni::ref<android::view::View> delegateView, jni::ref<java::lang::String> delegatorPackageName) { return call_method<"acceptStylusHandwritingDelegation", jboolean>(delegateView, delegatorPackageName); }
	void toggleSoftInputFromWindow(jni::ref<android::os::IBinder> windowToken, jint showFlags, jint hideFlags) { return call_method<"toggleSoftInputFromWindow", void>(windowToken, showFlags, hideFlags); }
	void toggleSoftInput(jint showFlags, jint hideFlags) { return call_method<"toggleSoftInput", void>(showFlags, hideFlags); }
	void restartInput(jni::ref<android::view::View> view) { return call_method<"restartInput", void>(view); }
	void invalidateInput(jni::ref<android::view::View> view) { return call_method<"invalidateInput", void>(view); }
	void updateSelection(jni::ref<android::view::View> view, jint selStart, jint selEnd, jint candidatesStart, jint candidatesEnd) { return call_method<"updateSelection", void>(view, selStart, selEnd, candidatesStart, candidatesEnd); }
	void viewClicked(jni::ref<android::view::View> view) { return call_method<"viewClicked", void>(view); }
	jboolean isWatchingCursor(jni::ref<android::view::View> view) { return call_method<"isWatchingCursor", jboolean>(view); }
	void updateCursor(jni::ref<android::view::View> view, jint left, jint top, jint right, jint bottom) { return call_method<"updateCursor", void>(view, left, top, right, bottom); }
	void updateCursorAnchorInfo(jni::ref<android::view::View> view, jni::ref<android::view::inputmethod::CursorAnchorInfo> cursorAnchorInfo) { return call_method<"updateCursorAnchorInfo", void>(view, cursorAnchorInfo); }
	void sendAppPrivateCommand(jni::ref<android::view::View> view, jni::ref<java::lang::String> action, jni::ref<android::os::Bundle> data) { return call_method<"sendAppPrivateCommand", void>(view, action, data); }
	void setInputMethod(jni::ref<android::os::IBinder> token, jni::ref<java::lang::String> id) { return call_method<"setInputMethod", void>(token, id); }
	void setInputMethodAndSubtype(jni::ref<android::os::IBinder> token, jni::ref<java::lang::String> id, jni::ref<android::view::inputmethod::InputMethodSubtype> subtype) { return call_method<"setInputMethodAndSubtype", void>(token, id, subtype); }
	void hideSoftInputFromInputMethod(jni::ref<android::os::IBinder> token, jint flags) { return call_method<"hideSoftInputFromInputMethod", void>(token, flags); }
	void showSoftInputFromInputMethod(jni::ref<android::os::IBinder> token, jint flags) { return call_method<"showSoftInputFromInputMethod", void>(token, flags); }
	void dispatchKeyEventFromInputMethod(jni::ref<android::view::View> targetView, jni::ref<android::view::KeyEvent> event) { return call_method<"dispatchKeyEventFromInputMethod", void>(targetView, event); }
	void showInputMethodPicker() { return call_method<"showInputMethodPicker", void>(); }
	void showInputMethodAndSubtypeEnabler(jni::ref<java::lang::String> imiId) { return call_method<"showInputMethodAndSubtypeEnabler", void>(imiId); }
	jni::ref<android::view::inputmethod::InputMethodSubtype> getCurrentInputMethodSubtype() { return call_method<"getCurrentInputMethodSubtype", jni::ref<android::view::inputmethod::InputMethodSubtype>>(); }
	jboolean setCurrentInputMethodSubtype(jni::ref<android::view::inputmethod::InputMethodSubtype> subtype) { return call_method<"setCurrentInputMethodSubtype", jboolean>(subtype); }
	jni::ref<java::util::Map> getShortcutInputMethodsAndSubtypes() { return call_method<"getShortcutInputMethodsAndSubtypes", jni::ref<java::util::Map>>(); }
	jboolean switchToLastInputMethod(jni::ref<android::os::IBinder> imeToken) { return call_method<"switchToLastInputMethod", jboolean>(imeToken); }
	jboolean switchToNextInputMethod(jni::ref<android::os::IBinder> imeToken, jboolean onlyCurrentIme) { return call_method<"switchToNextInputMethod", jboolean>(imeToken, onlyCurrentIme); }
	jboolean shouldOfferSwitchingToNextInputMethod(jni::ref<android::os::IBinder> imeToken) { return call_method<"shouldOfferSwitchingToNextInputMethod", jboolean>(imeToken); }
	void setAdditionalInputMethodSubtypes(jni::ref<java::lang::String> imiId, jni::ref<jni::array<android::view::inputmethod::InputMethodSubtype>> subtypes) { return call_method<"setAdditionalInputMethodSubtypes", void>(imiId, subtypes); }
	void setExplicitlyEnabledInputMethodSubtypes(jni::ref<java::lang::String> imiId, jni::ref<jni::array<jint>> subtypeHashCodes) { return call_method<"setExplicitlyEnabledInputMethodSubtypes", void>(imiId, subtypeHashCodes); }
	jni::ref<android::view::inputmethod::InputMethodSubtype> getLastInputMethodSubtype() { return call_method<"getLastInputMethodSubtype", jni::ref<android::view::inputmethod::InputMethodSubtype>>(); }

protected:

	InputMethodManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODMANAGER
