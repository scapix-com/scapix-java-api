// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/text/style/LeadingMarginSpan.h>
#include <scapix/java_api/android/text/ParcelableSpan.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_BULLETSPAN_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_BULLETSPAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::style { class BulletSpan; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::style::BulletSpan>
{
	static constexpr fixed_string class_name = "android/text/style/BulletSpan";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::text::style::LeadingMarginSpan, scapix::java_api::android::text::ParcelableSpan>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_BULLETSPAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_BULLETSPAN)
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_BULLETSPAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/Paint.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/text/Layout.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::style::BulletSpan : public jni::object_base<"android/text/style/BulletSpan",
	java::lang::Object,
	android::text::style::LeadingMarginSpan,
	android::text::ParcelableSpan>
{
public:

	static jint STANDARD_GAP_WIDTH() { return get_static_field<"STANDARD_GAP_WIDTH", jint>(); }

	static jni::ref<android::text::style::BulletSpan> new_object() { return base_::new_object(); }
	static jni::ref<android::text::style::BulletSpan> new_object(jint gapWidth) { return base_::new_object(gapWidth); }
	static jni::ref<android::text::style::BulletSpan> new_object(jint gapWidth, jint color) { return base_::new_object(gapWidth, color); }
	static jni::ref<android::text::style::BulletSpan> new_object(jint gapWidth, jint color, jint bulletRadius) { return base_::new_object(gapWidth, color, bulletRadius); }
	static jni::ref<android::text::style::BulletSpan> new_object(jni::ref<android::os::Parcel> src) { return base_::new_object(src); }
	jint getSpanTypeId() { return call_method<"getSpanTypeId", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint getLeadingMargin(jboolean first) { return call_method<"getLeadingMargin", jint>(first); }
	jint getGapWidth() { return call_method<"getGapWidth", jint>(); }
	jint getBulletRadius() { return call_method<"getBulletRadius", jint>(); }
	jint getColor() { return call_method<"getColor", jint>(); }
	void drawLeadingMargin(jni::ref<android::graphics::Canvas> canvas, jni::ref<android::graphics::Paint> paint, jint x, jint dir, jint top, jint baseline, jint bottom, jni::ref<java::lang::CharSequence> text, jint start, jint end, jboolean first, jni::ref<android::text::Layout> layout) { return call_method<"drawLeadingMargin", void>(canvas, paint, x, dir, top, baseline, bottom, text, start, end, first, layout); }

protected:

	BulletSpan(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_BULLETSPAN
