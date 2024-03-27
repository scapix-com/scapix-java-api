// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/text/InputType.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_EDITORINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_EDITORINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::inputmethod { class EditorInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::inputmethod::EditorInfo>
{
	static constexpr fixed_string class_name = "android/view/inputmethod/EditorInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::text::InputType, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_EDITORINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_EDITORINFO)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_EDITORINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/LocaleList.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/util/Printer.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::inputmethod::EditorInfo : public jni::object_base<"android/view/inputmethod/EditorInfo",
	java::lang::Object,
	android::text::InputType,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint IME_ACTION_DONE() { return get_static_field<"IME_ACTION_DONE", jint>(); }
	static jint IME_ACTION_GO() { return get_static_field<"IME_ACTION_GO", jint>(); }
	static jint IME_ACTION_NEXT() { return get_static_field<"IME_ACTION_NEXT", jint>(); }
	static jint IME_ACTION_NONE() { return get_static_field<"IME_ACTION_NONE", jint>(); }
	static jint IME_ACTION_PREVIOUS() { return get_static_field<"IME_ACTION_PREVIOUS", jint>(); }
	static jint IME_ACTION_SEARCH() { return get_static_field<"IME_ACTION_SEARCH", jint>(); }
	static jint IME_ACTION_SEND() { return get_static_field<"IME_ACTION_SEND", jint>(); }
	static jint IME_ACTION_UNSPECIFIED() { return get_static_field<"IME_ACTION_UNSPECIFIED", jint>(); }
	static jint IME_FLAG_FORCE_ASCII() { return get_static_field<"IME_FLAG_FORCE_ASCII", jint>(); }
	static jint IME_FLAG_NAVIGATE_NEXT() { return get_static_field<"IME_FLAG_NAVIGATE_NEXT", jint>(); }
	static jint IME_FLAG_NAVIGATE_PREVIOUS() { return get_static_field<"IME_FLAG_NAVIGATE_PREVIOUS", jint>(); }
	static jint IME_FLAG_NO_ACCESSORY_ACTION() { return get_static_field<"IME_FLAG_NO_ACCESSORY_ACTION", jint>(); }
	static jint IME_FLAG_NO_ENTER_ACTION() { return get_static_field<"IME_FLAG_NO_ENTER_ACTION", jint>(); }
	static jint IME_FLAG_NO_EXTRACT_UI() { return get_static_field<"IME_FLAG_NO_EXTRACT_UI", jint>(); }
	static jint IME_FLAG_NO_FULLSCREEN() { return get_static_field<"IME_FLAG_NO_FULLSCREEN", jint>(); }
	static jint IME_MASK_ACTION() { return get_static_field<"IME_MASK_ACTION", jint>(); }
	static jint IME_NULL() { return get_static_field<"IME_NULL", jint>(); }
	jint actionId() { return get_field<"actionId", jint>(); }
	void actionId(jint v) { set_field<"actionId", jint>(v); }
	jni::ref<java::lang::CharSequence> actionLabel() { return get_field<"actionLabel", jni::ref<java::lang::CharSequence>>(); }
	void actionLabel(jni::ref<java::lang::CharSequence> v) { set_field<"actionLabel", jni::ref<java::lang::CharSequence>>(v); }
	jni::ref<android::os::Bundle> extras() { return get_field<"extras", jni::ref<android::os::Bundle>>(); }
	void extras(jni::ref<android::os::Bundle> v) { set_field<"extras", jni::ref<android::os::Bundle>>(v); }
	jint fieldId() { return get_field<"fieldId", jint>(); }
	void fieldId(jint v) { set_field<"fieldId", jint>(v); }
	jni::ref<java::lang::String> fieldName() { return get_field<"fieldName", jni::ref<java::lang::String>>(); }
	void fieldName(jni::ref<java::lang::String> v) { set_field<"fieldName", jni::ref<java::lang::String>>(v); }
	jni::ref<android::os::LocaleList> hintLocales() { return get_field<"hintLocales", jni::ref<android::os::LocaleList>>(); }
	void hintLocales(jni::ref<android::os::LocaleList> v) { set_field<"hintLocales", jni::ref<android::os::LocaleList>>(v); }
	jni::ref<java::lang::CharSequence> hintText() { return get_field<"hintText", jni::ref<java::lang::CharSequence>>(); }
	void hintText(jni::ref<java::lang::CharSequence> v) { set_field<"hintText", jni::ref<java::lang::CharSequence>>(v); }
	jint imeOptions() { return get_field<"imeOptions", jint>(); }
	void imeOptions(jint v) { set_field<"imeOptions", jint>(v); }
	jint initialCapsMode() { return get_field<"initialCapsMode", jint>(); }
	void initialCapsMode(jint v) { set_field<"initialCapsMode", jint>(v); }
	jint initialSelEnd() { return get_field<"initialSelEnd", jint>(); }
	void initialSelEnd(jint v) { set_field<"initialSelEnd", jint>(v); }
	jint initialSelStart() { return get_field<"initialSelStart", jint>(); }
	void initialSelStart(jint v) { set_field<"initialSelStart", jint>(v); }
	jint inputType() { return get_field<"inputType", jint>(); }
	void inputType(jint v) { set_field<"inputType", jint>(v); }
	jni::ref<java::lang::CharSequence> label() { return get_field<"label", jni::ref<java::lang::CharSequence>>(); }
	void label(jni::ref<java::lang::CharSequence> v) { set_field<"label", jni::ref<java::lang::CharSequence>>(v); }
	jni::ref<java::lang::String> packageName() { return get_field<"packageName", jni::ref<java::lang::String>>(); }
	void packageName(jni::ref<java::lang::String> v) { set_field<"packageName", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> privateImeOptions() { return get_field<"privateImeOptions", jni::ref<java::lang::String>>(); }
	void privateImeOptions(jni::ref<java::lang::String> v) { set_field<"privateImeOptions", jni::ref<java::lang::String>>(v); }

	static jni::ref<android::view::inputmethod::EditorInfo> new_object() { return base_::new_object(); }
	void makeCompatible(jint targetSdkVersion) { return call_method<"makeCompatible", void>(targetSdkVersion); }
	void dump(jni::ref<android::util::Printer> pw, jni::ref<java::lang::String> prefix) { return call_method<"dump", void>(pw, prefix); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	EditorInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_EDITORINFO
