// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/text/ParcelableSpan.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_ANNOTATION_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_ANNOTATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text { class Annotation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::Annotation>
{
	static constexpr fixed_string class_name = "android/text/Annotation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::text::ParcelableSpan>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_ANNOTATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_ANNOTATION)
#define SCAPIX_JAVA_API_ANDROID_TEXT_ANNOTATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::Annotation : public jni::object_base<"android/text/Annotation",
	java::lang::Object,
	android::text::ParcelableSpan>
{
public:

	static jni::ref<android::text::Annotation> new_object(jni::ref<java::lang::String> key, jni::ref<java::lang::String> value) { return base_::new_object(key, value); }
	static jni::ref<android::text::Annotation> new_object(jni::ref<android::os::Parcel> src) { return base_::new_object(src); }
	jint getSpanTypeId() { return call_method<"getSpanTypeId", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jni::ref<java::lang::String> getKey() { return call_method<"getKey", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getValue() { return call_method<"getValue", jni::ref<java::lang::String>>(); }

protected:

	Annotation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_ANNOTATION
