// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_PAINT_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_PAINT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class Paint; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::Paint>
{
	static constexpr fixed_string class_name = "android/graphics/Paint";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_PAINT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_PAINT)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_PAINT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/ColorFilter.h>
#include <scapix/java_api/android/graphics/MaskFilter.h>
#include <scapix/java_api/android/graphics/Paint_Align.h>
#include <scapix/java_api/android/graphics/Paint_Cap.h>
#include <scapix/java_api/android/graphics/Paint_FontMetrics.h>
#include <scapix/java_api/android/graphics/Paint_FontMetricsInt.h>
#include <scapix/java_api/android/graphics/Paint_Join.h>
#include <scapix/java_api/android/graphics/Paint_Style.h>
#include <scapix/java_api/android/graphics/Path.h>
#include <scapix/java_api/android/graphics/PathEffect.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/graphics/Shader.h>
#include <scapix/java_api/android/graphics/Typeface.h>
#include <scapix/java_api/android/graphics/Xfermode.h>
#include <scapix/java_api/android/os/LocaleList.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::Paint : public jni::object_base<"android/graphics/Paint",
	java::lang::Object>
{
public:

	using FontMetricsInt = Paint_FontMetricsInt;
	using FontMetrics = Paint_FontMetrics;
	using Align = Paint_Align;
	using Join = Paint_Join;
	using Cap = Paint_Cap;
	using Style = Paint_Style;

	static jint ANTI_ALIAS_FLAG() { return get_static_field<"ANTI_ALIAS_FLAG", jint>(); }
	static jint DEV_KERN_TEXT_FLAG() { return get_static_field<"DEV_KERN_TEXT_FLAG", jint>(); }
	static jint DITHER_FLAG() { return get_static_field<"DITHER_FLAG", jint>(); }
	static jint EMBEDDED_BITMAP_TEXT_FLAG() { return get_static_field<"EMBEDDED_BITMAP_TEXT_FLAG", jint>(); }
	static jint FAKE_BOLD_TEXT_FLAG() { return get_static_field<"FAKE_BOLD_TEXT_FLAG", jint>(); }
	static jint FILTER_BITMAP_FLAG() { return get_static_field<"FILTER_BITMAP_FLAG", jint>(); }
	static jint HINTING_OFF() { return get_static_field<"HINTING_OFF", jint>(); }
	static jint HINTING_ON() { return get_static_field<"HINTING_ON", jint>(); }
	static jint LINEAR_TEXT_FLAG() { return get_static_field<"LINEAR_TEXT_FLAG", jint>(); }
	static jint STRIKE_THRU_TEXT_FLAG() { return get_static_field<"STRIKE_THRU_TEXT_FLAG", jint>(); }
	static jint SUBPIXEL_TEXT_FLAG() { return get_static_field<"SUBPIXEL_TEXT_FLAG", jint>(); }
	static jint UNDERLINE_TEXT_FLAG() { return get_static_field<"UNDERLINE_TEXT_FLAG", jint>(); }

	static jni::ref<android::graphics::Paint> new_object() { return base_::new_object(); }
	static jni::ref<android::graphics::Paint> new_object(jint flags) { return base_::new_object(flags); }
	static jni::ref<android::graphics::Paint> new_object(jni::ref<android::graphics::Paint> paint) { return base_::new_object(paint); }
	void reset() { return call_method<"reset", void>(); }
	void set(jni::ref<android::graphics::Paint> src) { return call_method<"set", void>(src); }
	jint getFlags() { return call_method<"getFlags", jint>(); }
	void setFlags(jint flags) { return call_method<"setFlags", void>(flags); }
	jint getHinting() { return call_method<"getHinting", jint>(); }
	void setHinting(jint mode) { return call_method<"setHinting", void>(mode); }
	jboolean isAntiAlias() { return call_method<"isAntiAlias", jboolean>(); }
	void setAntiAlias(jboolean aa) { return call_method<"setAntiAlias", void>(aa); }
	jboolean isDither() { return call_method<"isDither", jboolean>(); }
	void setDither(jboolean dither) { return call_method<"setDither", void>(dither); }
	jboolean isLinearText() { return call_method<"isLinearText", jboolean>(); }
	void setLinearText(jboolean linearText) { return call_method<"setLinearText", void>(linearText); }
	jboolean isSubpixelText() { return call_method<"isSubpixelText", jboolean>(); }
	void setSubpixelText(jboolean subpixelText) { return call_method<"setSubpixelText", void>(subpixelText); }
	jboolean isUnderlineText() { return call_method<"isUnderlineText", jboolean>(); }
	void setUnderlineText(jboolean underlineText) { return call_method<"setUnderlineText", void>(underlineText); }
	jboolean isStrikeThruText() { return call_method<"isStrikeThruText", jboolean>(); }
	void setStrikeThruText(jboolean strikeThruText) { return call_method<"setStrikeThruText", void>(strikeThruText); }
	jboolean isFakeBoldText() { return call_method<"isFakeBoldText", jboolean>(); }
	void setFakeBoldText(jboolean fakeBoldText) { return call_method<"setFakeBoldText", void>(fakeBoldText); }
	jboolean isFilterBitmap() { return call_method<"isFilterBitmap", jboolean>(); }
	void setFilterBitmap(jboolean filter) { return call_method<"setFilterBitmap", void>(filter); }
	jni::ref<android::graphics::Paint_Style> getStyle() { return call_method<"getStyle", jni::ref<android::graphics::Paint_Style>>(); }
	void setStyle(jni::ref<android::graphics::Paint_Style> style) { return call_method<"setStyle", void>(style); }
	jint getColor() { return call_method<"getColor", jint>(); }
	void setColor(jint color) { return call_method<"setColor", void>(color); }
	jint getAlpha() { return call_method<"getAlpha", jint>(); }
	void setAlpha(jint a) { return call_method<"setAlpha", void>(a); }
	void setARGB(jint a, jint r, jint g, jint b) { return call_method<"setARGB", void>(a, r, g, b); }
	jfloat getStrokeWidth() { return call_method<"getStrokeWidth", jfloat>(); }
	void setStrokeWidth(jfloat width) { return call_method<"setStrokeWidth", void>(width); }
	jfloat getStrokeMiter() { return call_method<"getStrokeMiter", jfloat>(); }
	void setStrokeMiter(jfloat miter) { return call_method<"setStrokeMiter", void>(miter); }
	jni::ref<android::graphics::Paint_Cap> getStrokeCap() { return call_method<"getStrokeCap", jni::ref<android::graphics::Paint_Cap>>(); }
	void setStrokeCap(jni::ref<android::graphics::Paint_Cap> cap) { return call_method<"setStrokeCap", void>(cap); }
	jni::ref<android::graphics::Paint_Join> getStrokeJoin() { return call_method<"getStrokeJoin", jni::ref<android::graphics::Paint_Join>>(); }
	void setStrokeJoin(jni::ref<android::graphics::Paint_Join> join) { return call_method<"setStrokeJoin", void>(join); }
	jboolean getFillPath(jni::ref<android::graphics::Path> src, jni::ref<android::graphics::Path> dst) { return call_method<"getFillPath", jboolean>(src, dst); }
	jni::ref<android::graphics::Shader> getShader() { return call_method<"getShader", jni::ref<android::graphics::Shader>>(); }
	jni::ref<android::graphics::Shader> setShader(jni::ref<android::graphics::Shader> shader) { return call_method<"setShader", jni::ref<android::graphics::Shader>>(shader); }
	jni::ref<android::graphics::ColorFilter> getColorFilter() { return call_method<"getColorFilter", jni::ref<android::graphics::ColorFilter>>(); }
	jni::ref<android::graphics::ColorFilter> setColorFilter(jni::ref<android::graphics::ColorFilter> filter) { return call_method<"setColorFilter", jni::ref<android::graphics::ColorFilter>>(filter); }
	jni::ref<android::graphics::Xfermode> getXfermode() { return call_method<"getXfermode", jni::ref<android::graphics::Xfermode>>(); }
	jni::ref<android::graphics::Xfermode> setXfermode(jni::ref<android::graphics::Xfermode> xfermode) { return call_method<"setXfermode", jni::ref<android::graphics::Xfermode>>(xfermode); }
	jni::ref<android::graphics::PathEffect> getPathEffect() { return call_method<"getPathEffect", jni::ref<android::graphics::PathEffect>>(); }
	jni::ref<android::graphics::PathEffect> setPathEffect(jni::ref<android::graphics::PathEffect> effect) { return call_method<"setPathEffect", jni::ref<android::graphics::PathEffect>>(effect); }
	jni::ref<android::graphics::MaskFilter> getMaskFilter() { return call_method<"getMaskFilter", jni::ref<android::graphics::MaskFilter>>(); }
	jni::ref<android::graphics::MaskFilter> setMaskFilter(jni::ref<android::graphics::MaskFilter> maskfilter) { return call_method<"setMaskFilter", jni::ref<android::graphics::MaskFilter>>(maskfilter); }
	jni::ref<android::graphics::Typeface> getTypeface() { return call_method<"getTypeface", jni::ref<android::graphics::Typeface>>(); }
	jni::ref<android::graphics::Typeface> setTypeface(jni::ref<android::graphics::Typeface> typeface) { return call_method<"setTypeface", jni::ref<android::graphics::Typeface>>(typeface); }
	void setShadowLayer(jfloat radius, jfloat dx, jfloat dy, jint shadowColor) { return call_method<"setShadowLayer", void>(radius, dx, dy, shadowColor); }
	void clearShadowLayer() { return call_method<"clearShadowLayer", void>(); }
	jni::ref<android::graphics::Paint_Align> getTextAlign() { return call_method<"getTextAlign", jni::ref<android::graphics::Paint_Align>>(); }
	void setTextAlign(jni::ref<android::graphics::Paint_Align> align) { return call_method<"setTextAlign", void>(align); }
	jni::ref<java::util::Locale> getTextLocale() { return call_method<"getTextLocale", jni::ref<java::util::Locale>>(); }
	jni::ref<android::os::LocaleList> getTextLocales() { return call_method<"getTextLocales", jni::ref<android::os::LocaleList>>(); }
	void setTextLocale(jni::ref<java::util::Locale> locale) { return call_method<"setTextLocale", void>(locale); }
	void setTextLocales(jni::ref<android::os::LocaleList> locales) { return call_method<"setTextLocales", void>(locales); }
	jboolean isElegantTextHeight() { return call_method<"isElegantTextHeight", jboolean>(); }
	void setElegantTextHeight(jboolean elegant) { return call_method<"setElegantTextHeight", void>(elegant); }
	jfloat getTextSize() { return call_method<"getTextSize", jfloat>(); }
	void setTextSize(jfloat textSize) { return call_method<"setTextSize", void>(textSize); }
	jfloat getTextScaleX() { return call_method<"getTextScaleX", jfloat>(); }
	void setTextScaleX(jfloat scaleX) { return call_method<"setTextScaleX", void>(scaleX); }
	jfloat getTextSkewX() { return call_method<"getTextSkewX", jfloat>(); }
	void setTextSkewX(jfloat skewX) { return call_method<"setTextSkewX", void>(skewX); }
	jfloat getLetterSpacing() { return call_method<"getLetterSpacing", jfloat>(); }
	void setLetterSpacing(jfloat letterSpacing) { return call_method<"setLetterSpacing", void>(letterSpacing); }
	jni::ref<java::lang::String> getFontFeatureSettings() { return call_method<"getFontFeatureSettings", jni::ref<java::lang::String>>(); }
	void setFontFeatureSettings(jni::ref<java::lang::String> settings) { return call_method<"setFontFeatureSettings", void>(settings); }
	jni::ref<java::lang::String> getFontVariationSettings() { return call_method<"getFontVariationSettings", jni::ref<java::lang::String>>(); }
	jboolean setFontVariationSettings(jni::ref<java::lang::String> fontVariationSettings) { return call_method<"setFontVariationSettings", jboolean>(fontVariationSettings); }
	jfloat ascent() { return call_method<"ascent", jfloat>(); }
	jfloat descent() { return call_method<"descent", jfloat>(); }
	jfloat getFontMetrics(jni::ref<android::graphics::Paint_FontMetrics> metrics) { return call_method<"getFontMetrics", jfloat>(metrics); }
	jni::ref<android::graphics::Paint_FontMetrics> getFontMetrics() { return call_method<"getFontMetrics", jni::ref<android::graphics::Paint_FontMetrics>>(); }
	jint getFontMetricsInt(jni::ref<android::graphics::Paint_FontMetricsInt> fmi) { return call_method<"getFontMetricsInt", jint>(fmi); }
	jni::ref<android::graphics::Paint_FontMetricsInt> getFontMetricsInt() { return call_method<"getFontMetricsInt", jni::ref<android::graphics::Paint_FontMetricsInt>>(); }
	jfloat getFontSpacing() { return call_method<"getFontSpacing", jfloat>(); }
	jfloat measureText(jni::ref<jni::array<jchar>> text, jint index, jint count) { return call_method<"measureText", jfloat>(text, index, count); }
	jfloat measureText(jni::ref<java::lang::String> text, jint start, jint end) { return call_method<"measureText", jfloat>(text, start, end); }
	jfloat measureText(jni::ref<java::lang::String> text) { return call_method<"measureText", jfloat>(text); }
	jfloat measureText(jni::ref<java::lang::CharSequence> text, jint start, jint end) { return call_method<"measureText", jfloat>(text, start, end); }
	jint breakText(jni::ref<jni::array<jchar>> text, jint index, jint count, jfloat maxWidth, jni::ref<jni::array<jfloat>> measuredWidth) { return call_method<"breakText", jint>(text, index, count, maxWidth, measuredWidth); }
	jint breakText(jni::ref<java::lang::CharSequence> text, jint start, jint end, jboolean measureForwards, jfloat maxWidth, jni::ref<jni::array<jfloat>> measuredWidth) { return call_method<"breakText", jint>(text, start, end, measureForwards, maxWidth, measuredWidth); }
	jint breakText(jni::ref<java::lang::String> text, jboolean measureForwards, jfloat maxWidth, jni::ref<jni::array<jfloat>> measuredWidth) { return call_method<"breakText", jint>(text, measureForwards, maxWidth, measuredWidth); }
	jint getTextWidths(jni::ref<jni::array<jchar>> text, jint index, jint count, jni::ref<jni::array<jfloat>> widths) { return call_method<"getTextWidths", jint>(text, index, count, widths); }
	jint getTextWidths(jni::ref<java::lang::CharSequence> text, jint start, jint end, jni::ref<jni::array<jfloat>> widths) { return call_method<"getTextWidths", jint>(text, start, end, widths); }
	jint getTextWidths(jni::ref<java::lang::String> text, jint start, jint end, jni::ref<jni::array<jfloat>> widths) { return call_method<"getTextWidths", jint>(text, start, end, widths); }
	jint getTextWidths(jni::ref<java::lang::String> text, jni::ref<jni::array<jfloat>> widths) { return call_method<"getTextWidths", jint>(text, widths); }
	void getTextPath(jni::ref<jni::array<jchar>> text, jint index, jint count, jfloat x, jfloat y, jni::ref<android::graphics::Path> path) { return call_method<"getTextPath", void>(text, index, count, x, y, path); }
	void getTextPath(jni::ref<java::lang::String> text, jint start, jint end, jfloat x, jfloat y, jni::ref<android::graphics::Path> path) { return call_method<"getTextPath", void>(text, start, end, x, y, path); }
	void getTextBounds(jni::ref<java::lang::String> text, jint start, jint end, jni::ref<android::graphics::Rect> bounds) { return call_method<"getTextBounds", void>(text, start, end, bounds); }
	void getTextBounds(jni::ref<jni::array<jchar>> text, jint index, jint count, jni::ref<android::graphics::Rect> bounds) { return call_method<"getTextBounds", void>(text, index, count, bounds); }
	jboolean hasGlyph(jni::ref<java::lang::String> string) { return call_method<"hasGlyph", jboolean>(string); }
	jfloat getRunAdvance(jni::ref<jni::array<jchar>> text, jint start, jint end, jint contextStart, jint contextEnd, jboolean isRtl, jint offset) { return call_method<"getRunAdvance", jfloat>(text, start, end, contextStart, contextEnd, isRtl, offset); }
	jfloat getRunAdvance(jni::ref<java::lang::CharSequence> text, jint start, jint end, jint contextStart, jint contextEnd, jboolean isRtl, jint offset) { return call_method<"getRunAdvance", jfloat>(text, start, end, contextStart, contextEnd, isRtl, offset); }
	jint getOffsetForAdvance(jni::ref<jni::array<jchar>> text, jint start, jint end, jint contextStart, jint contextEnd, jboolean isRtl, jfloat advance) { return call_method<"getOffsetForAdvance", jint>(text, start, end, contextStart, contextEnd, isRtl, advance); }
	jint getOffsetForAdvance(jni::ref<java::lang::CharSequence> text, jint start, jint end, jint contextStart, jint contextEnd, jboolean isRtl, jfloat advance) { return call_method<"getOffsetForAdvance", jint>(text, start, end, contextStart, contextEnd, isRtl, advance); }

protected:

	Paint(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_PAINT
