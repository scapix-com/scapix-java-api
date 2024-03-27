// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/text/style/ClickableSpan.h>
#include <scapix/java_api/android/text/ParcelableSpan.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_URLSPAN_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_URLSPAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::style { class URLSpan; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::style::URLSpan>
{
	static constexpr fixed_string class_name = "android/text/style/URLSpan";
	using base_classes = std::tuple<scapix::java_api::android::text::style::ClickableSpan, scapix::java_api::android::text::ParcelableSpan>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_URLSPAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_URLSPAN)
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_URLSPAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::style::URLSpan : public jni::object_base<"android/text/style/URLSpan",
	android::text::style::ClickableSpan,
	android::text::ParcelableSpan>
{
public:

	static jni::ref<android::text::style::URLSpan> new_object(jni::ref<java::lang::String> url) { return base_::new_object(url); }
	static jni::ref<android::text::style::URLSpan> new_object(jni::ref<android::os::Parcel> src) { return base_::new_object(src); }
	jint getSpanTypeId() { return call_method<"getSpanTypeId", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jni::ref<java::lang::String> getURL() { return call_method<"getURL", jni::ref<java::lang::String>>(); }
	void onClick(jni::ref<android::view::View> widget) { return call_method<"onClick", void>(widget); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	URLSpan(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_URLSPAN
