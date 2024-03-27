// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/View.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_IMAGEVIEW_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_IMAGEVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class ImageView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::ImageView>
{
	static constexpr fixed_string class_name = "android/widget/ImageView";
	using base_classes = std::tuple<scapix::java_api::android::view::View>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_IMAGEVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_IMAGEVIEW)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_IMAGEVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/res/ColorStateList.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/ColorFilter.h>
#include <scapix/java_api/android/graphics/Matrix.h>
#include <scapix/java_api/android/graphics/PorterDuff_Mode.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/graphics/drawable/Icon.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/widget/ImageView_ScaleType.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::ImageView : public jni::object_base<"android/widget/ImageView",
	android::view::View>
{
public:

	using ScaleType = ImageView_ScaleType;

	static jni::ref<android::widget::ImageView> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::ImageView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::widget::ImageView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::widget::ImageView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	void jumpDrawablesToCurrentState() { return call_method<"jumpDrawablesToCurrentState", void>(); }
	void invalidateDrawable(jni::ref<android::graphics::drawable::Drawable> dr) { return call_method<"invalidateDrawable", void>(dr); }
	jboolean hasOverlappingRendering() { return call_method<"hasOverlappingRendering", jboolean>(); }
	jboolean getAdjustViewBounds() { return call_method<"getAdjustViewBounds", jboolean>(); }
	void setAdjustViewBounds(jboolean adjustViewBounds) { return call_method<"setAdjustViewBounds", void>(adjustViewBounds); }
	jint getMaxWidth() { return call_method<"getMaxWidth", jint>(); }
	void setMaxWidth(jint maxWidth) { return call_method<"setMaxWidth", void>(maxWidth); }
	jint getMaxHeight() { return call_method<"getMaxHeight", jint>(); }
	void setMaxHeight(jint maxHeight) { return call_method<"setMaxHeight", void>(maxHeight); }
	jni::ref<android::graphics::drawable::Drawable> getDrawable() { return call_method<"getDrawable", jni::ref<android::graphics::drawable::Drawable>>(); }
	void setImageResource(jint resId) { return call_method<"setImageResource", void>(resId); }
	void setImageURI(jni::ref<android::net::Uri> uri) { return call_method<"setImageURI", void>(uri); }
	void setImageDrawable(jni::ref<android::graphics::drawable::Drawable> drawable) { return call_method<"setImageDrawable", void>(drawable); }
	void setImageIcon(jni::ref<android::graphics::drawable::Icon> icon) { return call_method<"setImageIcon", void>(icon); }
	void setImageTintList(jni::ref<android::content::res::ColorStateList> tint) { return call_method<"setImageTintList", void>(tint); }
	jni::ref<android::content::res::ColorStateList> getImageTintList() { return call_method<"getImageTintList", jni::ref<android::content::res::ColorStateList>>(); }
	void setImageTintMode(jni::ref<android::graphics::PorterDuff_Mode> tintMode) { return call_method<"setImageTintMode", void>(tintMode); }
	jni::ref<android::graphics::PorterDuff_Mode> getImageTintMode() { return call_method<"getImageTintMode", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	void setImageBitmap(jni::ref<android::graphics::Bitmap> bm) { return call_method<"setImageBitmap", void>(bm); }
	void setImageState(jni::ref<jni::array<jint>> state, jboolean merge) { return call_method<"setImageState", void>(state, merge); }
	void setSelected(jboolean selected) { return call_method<"setSelected", void>(selected); }
	void setImageLevel(jint level) { return call_method<"setImageLevel", void>(level); }
	void setScaleType(jni::ref<android::widget::ImageView_ScaleType> scaleType) { return call_method<"setScaleType", void>(scaleType); }
	jni::ref<android::widget::ImageView_ScaleType> getScaleType() { return call_method<"getScaleType", jni::ref<android::widget::ImageView_ScaleType>>(); }
	jni::ref<android::graphics::Matrix> getImageMatrix() { return call_method<"getImageMatrix", jni::ref<android::graphics::Matrix>>(); }
	void setImageMatrix(jni::ref<android::graphics::Matrix> matrix) { return call_method<"setImageMatrix", void>(matrix); }
	jboolean getCropToPadding() { return call_method<"getCropToPadding", jboolean>(); }
	void setCropToPadding(jboolean cropToPadding) { return call_method<"setCropToPadding", void>(cropToPadding); }
	jni::ref<jni::array<jint>> onCreateDrawableState(jint extraSpace) { return call_method<"onCreateDrawableState", jni::ref<jni::array<jint>>>(extraSpace); }
	void onRtlPropertiesChanged(jint layoutDirection) { return call_method<"onRtlPropertiesChanged", void>(layoutDirection); }
	void drawableHotspotChanged(jfloat x, jfloat y) { return call_method<"drawableHotspotChanged", void>(x, y); }
	jint getBaseline() { return call_method<"getBaseline", jint>(); }
	void setBaseline(jint baseline) { return call_method<"setBaseline", void>(baseline); }
	void setBaselineAlignBottom(jboolean aligned) { return call_method<"setBaselineAlignBottom", void>(aligned); }
	jboolean getBaselineAlignBottom() { return call_method<"getBaselineAlignBottom", jboolean>(); }
	void setColorFilter(jint color, jni::ref<android::graphics::PorterDuff_Mode> mode) { return call_method<"setColorFilter", void>(color, mode); }
	void setColorFilter(jint color) { return call_method<"setColorFilter", void>(color); }
	void clearColorFilter() { return call_method<"clearColorFilter", void>(); }
	jni::ref<android::graphics::ColorFilter> getColorFilter() { return call_method<"getColorFilter", jni::ref<android::graphics::ColorFilter>>(); }
	void setColorFilter(jni::ref<android::graphics::ColorFilter> cf) { return call_method<"setColorFilter", void>(cf); }
	jint getImageAlpha() { return call_method<"getImageAlpha", jint>(); }
	void setImageAlpha(jint alpha) { return call_method<"setImageAlpha", void>(alpha); }
	void setAlpha(jint alpha) { return call_method<"setAlpha", void>(alpha); }
	jboolean isOpaque() { return call_method<"isOpaque", jboolean>(); }
	void onVisibilityAggregated(jboolean isVisible) { return call_method<"onVisibilityAggregated", void>(isVisible); }
	jni::ref<java::lang::CharSequence> getAccessibilityClassName() { return call_method<"getAccessibilityClassName", jni::ref<java::lang::CharSequence>>(); }

protected:

	ImageView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_IMAGEVIEW
