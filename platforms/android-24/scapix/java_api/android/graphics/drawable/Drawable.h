// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_DRAWABLE_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_DRAWABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics::drawable { class Drawable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::drawable::Drawable>
{
	static constexpr fixed_string class_name = "android/graphics/drawable/Drawable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_DRAWABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_DRAWABLE)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_DRAWABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/res/ColorStateList.h>
#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/android/content/res/Resources_Theme.h>
#include <scapix/java_api/android/graphics/BitmapFactory_Options.h>
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/ColorFilter.h>
#include <scapix/java_api/android/graphics/Outline.h>
#include <scapix/java_api/android/graphics/PorterDuff_Mode.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/graphics/Region.h>
#include <scapix/java_api/android/graphics/drawable/Drawable_Callback.h>
#include <scapix/java_api/android/graphics/drawable/Drawable_ConstantState.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/util/TypedValue.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xmlpull/v1/XmlPullParser.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::drawable::Drawable : public jni::object_base<"android/graphics/drawable/Drawable",
	java::lang::Object>
{
public:

	using ConstantState = Drawable_ConstantState;
	using Callback = Drawable_Callback;

	static jni::ref<android::graphics::drawable::Drawable> new_object() { return base_::new_object(); }
	void draw(jni::ref<android::graphics::Canvas> p1) { return call_method<"draw", void>(p1); }
	void setBounds(jint left, jint top, jint right, jint bottom) { return call_method<"setBounds", void>(left, top, right, bottom); }
	void setBounds(jni::ref<android::graphics::Rect> bounds) { return call_method<"setBounds", void>(bounds); }
	void copyBounds(jni::ref<android::graphics::Rect> bounds) { return call_method<"copyBounds", void>(bounds); }
	jni::ref<android::graphics::Rect> copyBounds() { return call_method<"copyBounds", jni::ref<android::graphics::Rect>>(); }
	jni::ref<android::graphics::Rect> getBounds() { return call_method<"getBounds", jni::ref<android::graphics::Rect>>(); }
	jni::ref<android::graphics::Rect> getDirtyBounds() { return call_method<"getDirtyBounds", jni::ref<android::graphics::Rect>>(); }
	void setChangingConfigurations(jint configs) { return call_method<"setChangingConfigurations", void>(configs); }
	jint getChangingConfigurations() { return call_method<"getChangingConfigurations", jint>(); }
	void setDither(jboolean dither) { return call_method<"setDither", void>(dither); }
	void setFilterBitmap(jboolean filter) { return call_method<"setFilterBitmap", void>(filter); }
	jboolean isFilterBitmap() { return call_method<"isFilterBitmap", jboolean>(); }
	void setCallback(jni::ref<android::graphics::drawable::Drawable_Callback> cb) { return call_method<"setCallback", void>(cb); }
	jni::ref<android::graphics::drawable::Drawable_Callback> getCallback() { return call_method<"getCallback", jni::ref<android::graphics::drawable::Drawable_Callback>>(); }
	void invalidateSelf() { return call_method<"invalidateSelf", void>(); }
	void scheduleSelf(jni::ref<java::lang::Runnable> what, jlong when) { return call_method<"scheduleSelf", void>(what, when); }
	void unscheduleSelf(jni::ref<java::lang::Runnable> what) { return call_method<"unscheduleSelf", void>(what); }
	jint getLayoutDirection() { return call_method<"getLayoutDirection", jint>(); }
	jboolean setLayoutDirection(jint layoutDirection) { return call_method<"setLayoutDirection", jboolean>(layoutDirection); }
	jboolean onLayoutDirectionChanged(jint layoutDirection) { return call_method<"onLayoutDirectionChanged", jboolean>(layoutDirection); }
	void setAlpha(jint p1) { return call_method<"setAlpha", void>(p1); }
	jint getAlpha() { return call_method<"getAlpha", jint>(); }
	void setColorFilter(jni::ref<android::graphics::ColorFilter> p1) { return call_method<"setColorFilter", void>(p1); }
	void setColorFilter(jint color, jni::ref<android::graphics::PorterDuff_Mode> mode) { return call_method<"setColorFilter", void>(color, mode); }
	void setTint(jint tintColor) { return call_method<"setTint", void>(tintColor); }
	void setTintList(jni::ref<android::content::res::ColorStateList> tint) { return call_method<"setTintList", void>(tint); }
	void setTintMode(jni::ref<android::graphics::PorterDuff_Mode> tintMode) { return call_method<"setTintMode", void>(tintMode); }
	jni::ref<android::graphics::ColorFilter> getColorFilter() { return call_method<"getColorFilter", jni::ref<android::graphics::ColorFilter>>(); }
	void clearColorFilter() { return call_method<"clearColorFilter", void>(); }
	void setHotspot(jfloat x, jfloat y) { return call_method<"setHotspot", void>(x, y); }
	void setHotspotBounds(jint left, jint top, jint right, jint bottom) { return call_method<"setHotspotBounds", void>(left, top, right, bottom); }
	void getHotspotBounds(jni::ref<android::graphics::Rect> outRect) { return call_method<"getHotspotBounds", void>(outRect); }
	jboolean isStateful() { return call_method<"isStateful", jboolean>(); }
	jboolean setState(jni::ref<jni::array<jint>> stateSet) { return call_method<"setState", jboolean>(stateSet); }
	jni::ref<jni::array<jint>> getState() { return call_method<"getState", jni::ref<jni::array<jint>>>(); }
	void jumpToCurrentState() { return call_method<"jumpToCurrentState", void>(); }
	jni::ref<android::graphics::drawable::Drawable> getCurrent() { return call_method<"getCurrent", jni::ref<android::graphics::drawable::Drawable>>(); }
	jboolean setLevel(jint level) { return call_method<"setLevel", jboolean>(level); }
	jint getLevel() { return call_method<"getLevel", jint>(); }
	jboolean setVisible(jboolean visible, jboolean restart) { return call_method<"setVisible", jboolean>(visible, restart); }
	jboolean isVisible() { return call_method<"isVisible", jboolean>(); }
	void setAutoMirrored(jboolean mirrored) { return call_method<"setAutoMirrored", void>(mirrored); }
	jboolean isAutoMirrored() { return call_method<"isAutoMirrored", jboolean>(); }
	void applyTheme(jni::ref<android::content::res::Resources_Theme> t) { return call_method<"applyTheme", void>(t); }
	jboolean canApplyTheme() { return call_method<"canApplyTheme", jboolean>(); }
	jint getOpacity() { return call_method<"getOpacity", jint>(); }
	static jint resolveOpacity(jint op1, jint op2) { return call_static_method<"resolveOpacity", jint>(op1, op2); }
	jni::ref<android::graphics::Region> getTransparentRegion() { return call_method<"getTransparentRegion", jni::ref<android::graphics::Region>>(); }
	jint getIntrinsicWidth() { return call_method<"getIntrinsicWidth", jint>(); }
	jint getIntrinsicHeight() { return call_method<"getIntrinsicHeight", jint>(); }
	jint getMinimumWidth() { return call_method<"getMinimumWidth", jint>(); }
	jint getMinimumHeight() { return call_method<"getMinimumHeight", jint>(); }
	jboolean getPadding(jni::ref<android::graphics::Rect> padding) { return call_method<"getPadding", jboolean>(padding); }
	void getOutline(jni::ref<android::graphics::Outline> outline) { return call_method<"getOutline", void>(outline); }
	jni::ref<android::graphics::drawable::Drawable> mutate() { return call_method<"mutate", jni::ref<android::graphics::drawable::Drawable>>(); }
	static jni::ref<android::graphics::drawable::Drawable> createFromStream(jni::ref<java::io::InputStream> is, jni::ref<java::lang::String> srcName) { return call_static_method<"createFromStream", jni::ref<android::graphics::drawable::Drawable>>(is, srcName); }
	static jni::ref<android::graphics::drawable::Drawable> createFromResourceStream(jni::ref<android::content::res::Resources> res, jni::ref<android::util::TypedValue> value, jni::ref<java::io::InputStream> is, jni::ref<java::lang::String> srcName) { return call_static_method<"createFromResourceStream", jni::ref<android::graphics::drawable::Drawable>>(res, value, is, srcName); }
	static jni::ref<android::graphics::drawable::Drawable> createFromResourceStream(jni::ref<android::content::res::Resources> res, jni::ref<android::util::TypedValue> value, jni::ref<java::io::InputStream> is, jni::ref<java::lang::String> srcName, jni::ref<android::graphics::BitmapFactory_Options> opts) { return call_static_method<"createFromResourceStream", jni::ref<android::graphics::drawable::Drawable>>(res, value, is, srcName, opts); }
	static jni::ref<android::graphics::drawable::Drawable> createFromXml(jni::ref<android::content::res::Resources> r, jni::ref<org::xmlpull::v1::XmlPullParser> parser) { return call_static_method<"createFromXml", jni::ref<android::graphics::drawable::Drawable>>(r, parser); }
	static jni::ref<android::graphics::drawable::Drawable> createFromXml(jni::ref<android::content::res::Resources> r, jni::ref<org::xmlpull::v1::XmlPullParser> parser, jni::ref<android::content::res::Resources_Theme> theme) { return call_static_method<"createFromXml", jni::ref<android::graphics::drawable::Drawable>>(r, parser, theme); }
	static jni::ref<android::graphics::drawable::Drawable> createFromXmlInner(jni::ref<android::content::res::Resources> r, jni::ref<org::xmlpull::v1::XmlPullParser> parser, jni::ref<android::util::AttributeSet> attrs) { return call_static_method<"createFromXmlInner", jni::ref<android::graphics::drawable::Drawable>>(r, parser, attrs); }
	static jni::ref<android::graphics::drawable::Drawable> createFromXmlInner(jni::ref<android::content::res::Resources> r, jni::ref<org::xmlpull::v1::XmlPullParser> parser, jni::ref<android::util::AttributeSet> attrs, jni::ref<android::content::res::Resources_Theme> theme) { return call_static_method<"createFromXmlInner", jni::ref<android::graphics::drawable::Drawable>>(r, parser, attrs, theme); }
	static jni::ref<android::graphics::drawable::Drawable> createFromPath(jni::ref<java::lang::String> pathName) { return call_static_method<"createFromPath", jni::ref<android::graphics::drawable::Drawable>>(pathName); }
	void inflate(jni::ref<android::content::res::Resources> r, jni::ref<org::xmlpull::v1::XmlPullParser> parser, jni::ref<android::util::AttributeSet> attrs) { return call_method<"inflate", void>(r, parser, attrs); }
	void inflate(jni::ref<android::content::res::Resources> r, jni::ref<org::xmlpull::v1::XmlPullParser> parser, jni::ref<android::util::AttributeSet> attrs, jni::ref<android::content::res::Resources_Theme> theme) { return call_method<"inflate", void>(r, parser, attrs, theme); }
	jni::ref<android::graphics::drawable::Drawable_ConstantState> getConstantState() { return call_method<"getConstantState", jni::ref<android::graphics::drawable::Drawable_ConstantState>>(); }

protected:

	Drawable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_DRAWABLE