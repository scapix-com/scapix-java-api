// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_TEXTINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_TEXTINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::textservice { class TextInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::textservice::TextInfo>
{
	static constexpr fixed_string class_name = "android/view/textservice/TextInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_TEXTINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_TEXTINFO)
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_TEXTINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::textservice::TextInfo : public jni::object_base<"android/view/textservice/TextInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::view::textservice::TextInfo> new_object(jni::ref<java::lang::String> text) { return base_::new_object(text); }
	static jni::ref<android::view::textservice::TextInfo> new_object(jni::ref<java::lang::String> text, jint cookie, jint sequenceNumber) { return base_::new_object(text, cookie, sequenceNumber); }
	static jni::ref<android::view::textservice::TextInfo> new_object(jni::ref<java::lang::CharSequence> charSequence, jint start, jint end, jint cookie, jint sequenceNumber) { return base_::new_object(charSequence, start, end, cookie, sequenceNumber); }
	static jni::ref<android::view::textservice::TextInfo> new_object(jni::ref<android::os::Parcel> source) { return base_::new_object(source); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jni::ref<java::lang::String> getText() { return call_method<"getText", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::CharSequence> getCharSequence() { return call_method<"getCharSequence", jni::ref<java::lang::CharSequence>>(); }
	jint getCookie() { return call_method<"getCookie", jint>(); }
	jint getSequence() { return call_method<"getSequence", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	TextInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_TEXTINFO