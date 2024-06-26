// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/text/ParcelableSpan.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_EASYEDITSPAN_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_EASYEDITSPAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::style { class EasyEditSpan; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::style::EasyEditSpan>
{
	static constexpr fixed_string class_name = "android/text/style/EasyEditSpan";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::text::ParcelableSpan>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_EASYEDITSPAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_EASYEDITSPAN)
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_EASYEDITSPAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::style::EasyEditSpan : public jni::object_base<"android/text/style/EasyEditSpan",
	java::lang::Object,
	android::text::ParcelableSpan>
{
public:

	static jni::ref<java::lang::String> EXTRA_TEXT_CHANGED_TYPE() { return get_static_field<"EXTRA_TEXT_CHANGED_TYPE", jni::ref<java::lang::String>>(); }
	static jint TEXT_DELETED() { return get_static_field<"TEXT_DELETED", jint>(); }
	static jint TEXT_MODIFIED() { return get_static_field<"TEXT_MODIFIED", jint>(); }

	static jni::ref<android::text::style::EasyEditSpan> new_object() { return base_::new_object(); }
	static jni::ref<android::text::style::EasyEditSpan> new_object(jni::ref<android::app::PendingIntent> pendingIntent) { return base_::new_object(pendingIntent); }
	static jni::ref<android::text::style::EasyEditSpan> new_object(jni::ref<android::os::Parcel> source) { return base_::new_object(source); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint getSpanTypeId() { return call_method<"getSpanTypeId", jint>(); }

protected:

	EasyEditSpan(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_EASYEDITSPAN
