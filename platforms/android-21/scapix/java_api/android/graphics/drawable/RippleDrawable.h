// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/graphics/drawable/LayerDrawable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_RIPPLEDRAWABLE_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_RIPPLEDRAWABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics::drawable { class RippleDrawable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::drawable::RippleDrawable>
{
	static constexpr fixed_string class_name = "android/graphics/drawable/RippleDrawable";
	using base_classes = std::tuple<scapix::java_api::android::graphics::drawable::LayerDrawable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_RIPPLEDRAWABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_RIPPLEDRAWABLE)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_RIPPLEDRAWABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/res/ColorStateList.h>
#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/android/content/res/Resources_Theme.h>
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/ColorFilter.h>
#include <scapix/java_api/android/graphics/Outline.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/graphics/drawable/Drawable_ConstantState.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/org/xmlpull/v1/XmlPullParser.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::drawable::RippleDrawable : public jni::object_base<"android/graphics/drawable/RippleDrawable",
	android::graphics::drawable::LayerDrawable>
{
public:

	static jni::ref<android::graphics::drawable::RippleDrawable> new_object(jni::ref<android::content::res::ColorStateList> color, jni::ref<android::graphics::drawable::Drawable> content, jni::ref<android::graphics::drawable::Drawable> mask) { return base_::new_object(color, content, mask); }
	void jumpToCurrentState() { return call_method<"jumpToCurrentState", void>(); }
	void setAlpha(jint alpha) { return call_method<"setAlpha", void>(alpha); }
	void setColorFilter(jni::ref<android::graphics::ColorFilter> cf) { return call_method<"setColorFilter", void>(cf); }
	jint getOpacity() { return call_method<"getOpacity", jint>(); }
	jboolean setVisible(jboolean visible, jboolean restart) { return call_method<"setVisible", jboolean>(visible, restart); }
	jboolean isStateful() { return call_method<"isStateful", jboolean>(); }
	void setColor(jni::ref<android::content::res::ColorStateList> color) { return call_method<"setColor", void>(color); }
	void inflate(jni::ref<android::content::res::Resources> r, jni::ref<org::xmlpull::v1::XmlPullParser> parser, jni::ref<android::util::AttributeSet> attrs, jni::ref<android::content::res::Resources_Theme> theme) { return call_method<"inflate", void>(r, parser, attrs, theme); }
	jboolean setDrawableByLayerId(jint id, jni::ref<android::graphics::drawable::Drawable> drawable) { return call_method<"setDrawableByLayerId", jboolean>(id, drawable); }
	void setPaddingMode(jint mode) { return call_method<"setPaddingMode", void>(mode); }
	void applyTheme(jni::ref<android::content::res::Resources_Theme> t) { return call_method<"applyTheme", void>(t); }
	jboolean canApplyTheme() { return call_method<"canApplyTheme", jboolean>(); }
	void setHotspot(jfloat x, jfloat y) { return call_method<"setHotspot", void>(x, y); }
	void setHotspotBounds(jint left, jint top, jint right, jint bottom) { return call_method<"setHotspotBounds", void>(left, top, right, bottom); }
	void getOutline(jni::ref<android::graphics::Outline> outline) { return call_method<"getOutline", void>(outline); }
	void draw(jni::ref<android::graphics::Canvas> canvas) { return call_method<"draw", void>(canvas); }
	jni::ref<android::graphics::Rect> getDirtyBounds() { return call_method<"getDirtyBounds", jni::ref<android::graphics::Rect>>(); }
	jni::ref<android::graphics::drawable::Drawable_ConstantState> getConstantState() { return call_method<"getConstantState", jni::ref<android::graphics::drawable::Drawable_ConstantState>>(); }
	jni::ref<android::graphics::drawable::Drawable> mutate() { return call_method<"mutate", jni::ref<android::graphics::drawable::Drawable>>(); }

protected:

	RippleDrawable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_RIPPLEDRAWABLE
