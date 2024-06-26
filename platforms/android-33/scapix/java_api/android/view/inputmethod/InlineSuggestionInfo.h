// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INLINESUGGESTIONINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INLINESUGGESTIONINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::inputmethod { class InlineSuggestionInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::inputmethod::InlineSuggestionInfo>
{
	static constexpr fixed_string class_name = "android/view/inputmethod/InlineSuggestionInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INLINESUGGESTIONINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INLINESUGGESTIONINFO)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INLINESUGGESTIONINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/widget/inline/InlinePresentationSpec.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::inputmethod::InlineSuggestionInfo : public jni::object_base<"android/view/inputmethod/InlineSuggestionInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jni::ref<java::lang::String> SOURCE_AUTOFILL() { return get_static_field<"SOURCE_AUTOFILL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SOURCE_PLATFORM() { return get_static_field<"SOURCE_PLATFORM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TYPE_ACTION() { return get_static_field<"TYPE_ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TYPE_SUGGESTION() { return get_static_field<"TYPE_SUGGESTION", jni::ref<java::lang::String>>(); }

	jni::ref<android::widget::inline_::InlinePresentationSpec> getInlinePresentationSpec() { return call_method<"getInlinePresentationSpec", jni::ref<android::widget::inline_::InlinePresentationSpec>>(); }
	jni::ref<java::lang::String> getSource() { return call_method<"getSource", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::lang::String>> getAutofillHints() { return call_method<"getAutofillHints", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<java::lang::String> getType() { return call_method<"getType", jni::ref<java::lang::String>>(); }
	jboolean isPinned() { return call_method<"isPinned", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	InlineSuggestionInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INLINESUGGESTIONINFO
