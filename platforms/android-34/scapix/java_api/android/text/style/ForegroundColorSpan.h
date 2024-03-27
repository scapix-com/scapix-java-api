// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/text/style/CharacterStyle.h>
#include <scapix/java_api/android/text/style/UpdateAppearance.h>
#include <scapix/java_api/android/text/ParcelableSpan.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_FOREGROUNDCOLORSPAN_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_FOREGROUNDCOLORSPAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::style { class ForegroundColorSpan; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::style::ForegroundColorSpan>
{
	static constexpr fixed_string class_name = "android/text/style/ForegroundColorSpan";
	using base_classes = std::tuple<scapix::java_api::android::text::style::CharacterStyle, scapix::java_api::android::text::style::UpdateAppearance, scapix::java_api::android::text::ParcelableSpan>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_FOREGROUNDCOLORSPAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_FOREGROUNDCOLORSPAN)
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_FOREGROUNDCOLORSPAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/text/TextPaint.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::style::ForegroundColorSpan : public jni::object_base<"android/text/style/ForegroundColorSpan",
	android::text::style::CharacterStyle,
	android::text::style::UpdateAppearance,
	android::text::ParcelableSpan>
{
public:

	static jni::ref<android::text::style::ForegroundColorSpan> new_object(jint color) { return base_::new_object(color); }
	static jni::ref<android::text::style::ForegroundColorSpan> new_object(jni::ref<android::os::Parcel> src) { return base_::new_object(src); }
	jint getSpanTypeId() { return call_method<"getSpanTypeId", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint getForegroundColor() { return call_method<"getForegroundColor", jint>(); }
	void updateDrawState(jni::ref<android::text::TextPaint> textPaint) { return call_method<"updateDrawState", void>(textPaint); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ForegroundColorSpan(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_FOREGROUNDCOLORSPAN
