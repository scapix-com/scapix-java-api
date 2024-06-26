// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_PARCELABLESPAN_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_PARCELABLESPAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text { class ParcelableSpan; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::ParcelableSpan>
{
	static constexpr fixed_string class_name = "android/text/ParcelableSpan";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_PARCELABLESPAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_PARCELABLESPAN)
#define SCAPIX_JAVA_API_ANDROID_TEXT_PARCELABLESPAN

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::ParcelableSpan : public jni::object_base<"android/text/ParcelableSpan",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	jint getSpanTypeId() { return call_method<"getSpanTypeId", jint>(); }

protected:

	ParcelableSpan(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_PARCELABLESPAN
