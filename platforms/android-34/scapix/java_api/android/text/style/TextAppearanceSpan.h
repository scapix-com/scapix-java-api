// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/text/style/MetricAffectingSpan.h>
#include <scapix/java_api/android/text/ParcelableSpan.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TEXTAPPEARANCESPAN_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TEXTAPPEARANCESPAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::style { class TextAppearanceSpan; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::style::TextAppearanceSpan>
{
	static constexpr fixed_string class_name = "android/text/style/TextAppearanceSpan";
	using base_classes = std::tuple<scapix::java_api::android::text::style::MetricAffectingSpan, scapix::java_api::android::text::ParcelableSpan>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TEXTAPPEARANCESPAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TEXTAPPEARANCESPAN)
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TEXTAPPEARANCESPAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/res/ColorStateList.h>
#include <scapix/java_api/android/graphics/Typeface.h>
#include <scapix/java_api/android/os/LocaleList.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/text/TextPaint.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::style::TextAppearanceSpan : public jni::object_base<"android/text/style/TextAppearanceSpan",
	android::text::style::MetricAffectingSpan,
	android::text::ParcelableSpan>
{
public:

	static jni::ref<android::text::style::TextAppearanceSpan> new_object(jni::ref<android::content::Context> context, jint appearance) { return base_::new_object(context, appearance); }
	static jni::ref<android::text::style::TextAppearanceSpan> new_object(jni::ref<android::content::Context> context, jint appearance, jint colorList) { return base_::new_object(context, appearance, colorList); }
	static jni::ref<android::text::style::TextAppearanceSpan> new_object(jni::ref<java::lang::String> family, jint style, jint size, jni::ref<android::content::res::ColorStateList> color, jni::ref<android::content::res::ColorStateList> linkColor) { return base_::new_object(family, style, size, color, linkColor); }
	static jni::ref<android::text::style::TextAppearanceSpan> new_object(jni::ref<android::os::Parcel> src) { return base_::new_object(src); }
	jint getSpanTypeId() { return call_method<"getSpanTypeId", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jni::ref<java::lang::String> getFamily() { return call_method<"getFamily", jni::ref<java::lang::String>>(); }
	jni::ref<android::content::res::ColorStateList> getTextColor() { return call_method<"getTextColor", jni::ref<android::content::res::ColorStateList>>(); }
	jni::ref<android::content::res::ColorStateList> getLinkTextColor() { return call_method<"getLinkTextColor", jni::ref<android::content::res::ColorStateList>>(); }
	jint getTextSize() { return call_method<"getTextSize", jint>(); }
	jint getTextStyle() { return call_method<"getTextStyle", jint>(); }
	jint getTextFontWeight() { return call_method<"getTextFontWeight", jint>(); }
	jni::ref<android::os::LocaleList> getTextLocales() { return call_method<"getTextLocales", jni::ref<android::os::LocaleList>>(); }
	jni::ref<android::graphics::Typeface> getTypeface() { return call_method<"getTypeface", jni::ref<android::graphics::Typeface>>(); }
	jint getShadowColor() { return call_method<"getShadowColor", jint>(); }
	jfloat getShadowDx() { return call_method<"getShadowDx", jfloat>(); }
	jfloat getShadowDy() { return call_method<"getShadowDy", jfloat>(); }
	jfloat getShadowRadius() { return call_method<"getShadowRadius", jfloat>(); }
	jni::ref<java::lang::String> getFontFeatureSettings() { return call_method<"getFontFeatureSettings", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getFontVariationSettings() { return call_method<"getFontVariationSettings", jni::ref<java::lang::String>>(); }
	jboolean isElegantTextHeight() { return call_method<"isElegantTextHeight", jboolean>(); }
	jfloat getLetterSpacing() { return call_method<"getLetterSpacing", jfloat>(); }
	void updateDrawState(jni::ref<android::text::TextPaint> ds) { return call_method<"updateDrawState", void>(ds); }
	void updateMeasureState(jni::ref<android::text::TextPaint> ds) { return call_method<"updateMeasureState", void>(ds); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	TextAppearanceSpan(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_TEXTAPPEARANCESPAN
