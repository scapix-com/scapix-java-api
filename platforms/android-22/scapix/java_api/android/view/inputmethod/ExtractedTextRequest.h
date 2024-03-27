// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXTREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXTREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::inputmethod { class ExtractedTextRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::inputmethod::ExtractedTextRequest>
{
	static constexpr fixed_string class_name = "android/view/inputmethod/ExtractedTextRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXTREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXTREQUEST)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXTREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::inputmethod::ExtractedTextRequest : public jni::object_base<"android/view/inputmethod/ExtractedTextRequest",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	jint flags() { return get_field<"flags", jint>(); }
	void flags(jint v) { set_field<"flags", jint>(v); }
	jint hintMaxChars() { return get_field<"hintMaxChars", jint>(); }
	void hintMaxChars(jint v) { set_field<"hintMaxChars", jint>(v); }
	jint hintMaxLines() { return get_field<"hintMaxLines", jint>(); }
	void hintMaxLines(jint v) { set_field<"hintMaxLines", jint>(v); }
	jint token() { return get_field<"token", jint>(); }
	void token(jint v) { set_field<"token", jint>(v); }

	static jni::ref<android::view::inputmethod::ExtractedTextRequest> new_object() { return base_::new_object(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	ExtractedTextRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXTREQUEST
