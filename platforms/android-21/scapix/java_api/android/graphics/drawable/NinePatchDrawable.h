// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/graphics/drawable/Drawable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_NINEPATCHDRAWABLE_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_NINEPATCHDRAWABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics::drawable { class NinePatchDrawable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::drawable::NinePatchDrawable>
{
	static constexpr fixed_string class_name = "android/graphics/drawable/NinePatchDrawable";
	using base_classes = std::tuple<scapix::java_api::android::graphics::drawable::Drawable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_NINEPATCHDRAWABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_NINEPATCHDRAWABLE)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_NINEPATCHDRAWABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/res/ColorStateList.h>
#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/android/content/res/Resources_Theme.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/ColorFilter.h>
#include <scapix/java_api/android/graphics/NinePatch.h>
#include <scapix/java_api/android/graphics/Outline.h>
#include <scapix/java_api/android/graphics/Paint.h>
#include <scapix/java_api/android/graphics/PorterDuff_Mode.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/graphics/Region.h>
#include <scapix/java_api/android/graphics/drawable/Drawable_ConstantState.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/util/DisplayMetrics.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xmlpull/v1/XmlPullParser.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::drawable::NinePatchDrawable : public jni::object_base<"android/graphics/drawable/NinePatchDrawable",
	android::graphics::drawable::Drawable>
{
public:

	static jni::ref<android::graphics::drawable::NinePatchDrawable> new_object(jni::ref<android::graphics::Bitmap> bitmap, jni::ref<jni::array<jbyte>> chunk, jni::ref<android::graphics::Rect> padding, jni::ref<java::lang::String> srcName) { return base_::new_object(bitmap, chunk, padding, srcName); }
	static jni::ref<android::graphics::drawable::NinePatchDrawable> new_object(jni::ref<android::content::res::Resources> res, jni::ref<android::graphics::Bitmap> bitmap, jni::ref<jni::array<jbyte>> chunk, jni::ref<android::graphics::Rect> padding, jni::ref<java::lang::String> srcName) { return base_::new_object(res, bitmap, chunk, padding, srcName); }
	static jni::ref<android::graphics::drawable::NinePatchDrawable> new_object(jni::ref<android::graphics::NinePatch> patch) { return base_::new_object(patch); }
	static jni::ref<android::graphics::drawable::NinePatchDrawable> new_object(jni::ref<android::content::res::Resources> res, jni::ref<android::graphics::NinePatch> patch) { return base_::new_object(res, patch); }
	void setTargetDensity(jni::ref<android::graphics::Canvas> canvas) { return call_method<"setTargetDensity", void>(canvas); }
	void setTargetDensity(jni::ref<android::util::DisplayMetrics> metrics) { return call_method<"setTargetDensity", void>(metrics); }
	void setTargetDensity(jint density) { return call_method<"setTargetDensity", void>(density); }
	void draw(jni::ref<android::graphics::Canvas> canvas) { return call_method<"draw", void>(canvas); }
	jint getChangingConfigurations() { return call_method<"getChangingConfigurations", jint>(); }
	jboolean getPadding(jni::ref<android::graphics::Rect> padding) { return call_method<"getPadding", jboolean>(padding); }
	void getOutline(jni::ref<android::graphics::Outline> outline) { return call_method<"getOutline", void>(outline); }
	void setAlpha(jint alpha) { return call_method<"setAlpha", void>(alpha); }
	jint getAlpha() { return call_method<"getAlpha", jint>(); }
	void setColorFilter(jni::ref<android::graphics::ColorFilter> cf) { return call_method<"setColorFilter", void>(cf); }
	void setTintList(jni::ref<android::content::res::ColorStateList> tint) { return call_method<"setTintList", void>(tint); }
	void setTintMode(jni::ref<android::graphics::PorterDuff_Mode> tintMode) { return call_method<"setTintMode", void>(tintMode); }
	void setDither(jboolean dither) { return call_method<"setDither", void>(dither); }
	void setAutoMirrored(jboolean mirrored) { return call_method<"setAutoMirrored", void>(mirrored); }
	jboolean isAutoMirrored() { return call_method<"isAutoMirrored", jboolean>(); }
	void setFilterBitmap(jboolean filter) { return call_method<"setFilterBitmap", void>(filter); }
	void inflate(jni::ref<android::content::res::Resources> r, jni::ref<org::xmlpull::v1::XmlPullParser> parser, jni::ref<android::util::AttributeSet> attrs, jni::ref<android::content::res::Resources_Theme> theme) { return call_method<"inflate", void>(r, parser, attrs, theme); }
	void applyTheme(jni::ref<android::content::res::Resources_Theme> t) { return call_method<"applyTheme", void>(t); }
	jboolean canApplyTheme() { return call_method<"canApplyTheme", jboolean>(); }
	jni::ref<android::graphics::Paint> getPaint() { return call_method<"getPaint", jni::ref<android::graphics::Paint>>(); }
	jint getIntrinsicWidth() { return call_method<"getIntrinsicWidth", jint>(); }
	jint getIntrinsicHeight() { return call_method<"getIntrinsicHeight", jint>(); }
	jint getMinimumWidth() { return call_method<"getMinimumWidth", jint>(); }
	jint getMinimumHeight() { return call_method<"getMinimumHeight", jint>(); }
	jint getOpacity() { return call_method<"getOpacity", jint>(); }
	jni::ref<android::graphics::Region> getTransparentRegion() { return call_method<"getTransparentRegion", jni::ref<android::graphics::Region>>(); }
	jni::ref<android::graphics::drawable::Drawable_ConstantState> getConstantState() { return call_method<"getConstantState", jni::ref<android::graphics::drawable::Drawable_ConstantState>>(); }
	jni::ref<android::graphics::drawable::Drawable> mutate() { return call_method<"mutate", jni::ref<android::graphics::drawable::Drawable>>(); }
	jboolean isStateful() { return call_method<"isStateful", jboolean>(); }

protected:

	NinePatchDrawable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_NINEPATCHDRAWABLE
