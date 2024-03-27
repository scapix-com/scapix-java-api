// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/text/style/MetricAffectingSpan.h>
#include <scapix/java_api/android/text/ParcelableSpan.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_STYLESPAN_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_STYLESPAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::style { class StyleSpan; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::style::StyleSpan>
{
	static constexpr fixed_string class_name = "android/text/style/StyleSpan";
	using base_classes = std::tuple<scapix::java_api::android::text::style::MetricAffectingSpan, scapix::java_api::android::text::ParcelableSpan>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_STYLESPAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_STYLESPAN)
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_STYLESPAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/text/TextPaint.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::style::StyleSpan : public jni::object_base<"android/text/style/StyleSpan",
	android::text::style::MetricAffectingSpan,
	android::text::ParcelableSpan>
{
public:

	static jni::ref<android::text::style::StyleSpan> new_object(jint style) { return base_::new_object(style); }
	static jni::ref<android::text::style::StyleSpan> new_object(jni::ref<android::os::Parcel> src) { return base_::new_object(src); }
	jint getSpanTypeId() { return call_method<"getSpanTypeId", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint getStyle() { return call_method<"getStyle", jint>(); }
	void updateDrawState(jni::ref<android::text::TextPaint> ds) { return call_method<"updateDrawState", void>(ds); }
	void updateMeasureState(jni::ref<android::text::TextPaint> paint) { return call_method<"updateMeasureState", void>(paint); }

protected:

	StyleSpan(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_STYLESPAN
