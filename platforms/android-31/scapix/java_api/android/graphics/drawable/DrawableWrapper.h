// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/graphics/drawable/Drawable_Callback.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_DRAWABLEWRAPPER_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_DRAWABLEWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics::drawable { class DrawableWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::drawable::DrawableWrapper>
{
	static constexpr fixed_string class_name = "android/graphics/drawable/DrawableWrapper";
	using base_classes = std::tuple<scapix::java_api::android::graphics::drawable::Drawable, scapix::java_api::android::graphics::drawable::Drawable_Callback>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_DRAWABLEWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_DRAWABLEWRAPPER)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_DRAWABLEWRAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/res/ColorStateList.h>
#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/android/content/res/Resources_Theme.h>
#include <scapix/java_api/android/graphics/BlendMode.h>
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/ColorFilter.h>
#include <scapix/java_api/android/graphics/Insets.h>
#include <scapix/java_api/android/graphics/Outline.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/graphics/drawable/Drawable_ConstantState.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/org/xmlpull/v1/XmlPullParser.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::drawable::DrawableWrapper : public jni::object_base<"android/graphics/drawable/DrawableWrapper",
	android::graphics::drawable::Drawable,
	android::graphics::drawable::Drawable_Callback>
{
public:

	static jni::ref<android::graphics::drawable::DrawableWrapper> new_object(jni::ref<android::graphics::drawable::Drawable> dr) { return base_::new_object(dr); }
	void setDrawable(jni::ref<android::graphics::drawable::Drawable> dr) { return call_method<"setDrawable", void>(dr); }
	jni::ref<android::graphics::drawable::Drawable> getDrawable() { return call_method<"getDrawable", jni::ref<android::graphics::drawable::Drawable>>(); }
	void inflate(jni::ref<android::content::res::Resources> r, jni::ref<org::xmlpull::v1::XmlPullParser> parser, jni::ref<android::util::AttributeSet> attrs, jni::ref<android::content::res::Resources_Theme> theme) { return call_method<"inflate", void>(r, parser, attrs, theme); }
	void applyTheme(jni::ref<android::content::res::Resources_Theme> t) { return call_method<"applyTheme", void>(t); }
	jboolean canApplyTheme() { return call_method<"canApplyTheme", jboolean>(); }
	void invalidateDrawable(jni::ref<android::graphics::drawable::Drawable> who) { return call_method<"invalidateDrawable", void>(who); }
	void scheduleDrawable(jni::ref<android::graphics::drawable::Drawable> who, jni::ref<java::lang::Runnable> what, jlong when) { return call_method<"scheduleDrawable", void>(who, what, when); }
	void unscheduleDrawable(jni::ref<android::graphics::drawable::Drawable> who, jni::ref<java::lang::Runnable> what) { return call_method<"unscheduleDrawable", void>(who, what); }
	void draw(jni::ref<android::graphics::Canvas> canvas) { return call_method<"draw", void>(canvas); }
	jint getChangingConfigurations() { return call_method<"getChangingConfigurations", jint>(); }
	jboolean getPadding(jni::ref<android::graphics::Rect> padding) { return call_method<"getPadding", jboolean>(padding); }
	jni::ref<android::graphics::Insets> getOpticalInsets() { return call_method<"getOpticalInsets", jni::ref<android::graphics::Insets>>(); }
	void setHotspot(jfloat x, jfloat y) { return call_method<"setHotspot", void>(x, y); }
	void setHotspotBounds(jint left, jint top, jint right, jint bottom) { return call_method<"setHotspotBounds", void>(left, top, right, bottom); }
	void getHotspotBounds(jni::ref<android::graphics::Rect> outRect) { return call_method<"getHotspotBounds", void>(outRect); }
	jboolean setVisible(jboolean visible, jboolean restart) { return call_method<"setVisible", jboolean>(visible, restart); }
	void setAlpha(jint alpha) { return call_method<"setAlpha", void>(alpha); }
	jint getAlpha() { return call_method<"getAlpha", jint>(); }
	void setColorFilter(jni::ref<android::graphics::ColorFilter> colorFilter) { return call_method<"setColorFilter", void>(colorFilter); }
	jni::ref<android::graphics::ColorFilter> getColorFilter() { return call_method<"getColorFilter", jni::ref<android::graphics::ColorFilter>>(); }
	void setTintList(jni::ref<android::content::res::ColorStateList> tint) { return call_method<"setTintList", void>(tint); }
	void setTintBlendMode(jni::ref<android::graphics::BlendMode> blendMode) { return call_method<"setTintBlendMode", void>(blendMode); }
	jboolean onLayoutDirectionChanged(jint layoutDirection) { return call_method<"onLayoutDirectionChanged", jboolean>(layoutDirection); }
	jint getOpacity() { return call_method<"getOpacity", jint>(); }
	jboolean isStateful() { return call_method<"isStateful", jboolean>(); }
	jboolean hasFocusStateSpecified() { return call_method<"hasFocusStateSpecified", jboolean>(); }
	void jumpToCurrentState() { return call_method<"jumpToCurrentState", void>(); }
	jint getIntrinsicWidth() { return call_method<"getIntrinsicWidth", jint>(); }
	jint getIntrinsicHeight() { return call_method<"getIntrinsicHeight", jint>(); }
	void getOutline(jni::ref<android::graphics::Outline> outline) { return call_method<"getOutline", void>(outline); }
	jni::ref<android::graphics::drawable::Drawable_ConstantState> getConstantState() { return call_method<"getConstantState", jni::ref<android::graphics::drawable::Drawable_ConstantState>>(); }
	jni::ref<android::graphics::drawable::Drawable> mutate() { return call_method<"mutate", jni::ref<android::graphics::drawable::Drawable>>(); }

protected:

	DrawableWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_DRAWABLEWRAPPER
