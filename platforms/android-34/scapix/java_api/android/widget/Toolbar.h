// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/ViewGroup.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_TOOLBAR_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_TOOLBAR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class Toolbar; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::Toolbar>
{
	static constexpr fixed_string class_name = "android/widget/Toolbar";
	using base_classes = std::tuple<scapix::java_api::android::view::ViewGroup>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_TOOLBAR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_TOOLBAR)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_TOOLBAR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/Menu.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/View_OnClickListener.h>
#include <scapix/java_api/android/widget/Toolbar_LayoutParams.h>
#include <scapix/java_api/android/widget/Toolbar_OnMenuItemClickListener.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::Toolbar : public jni::object_base<"android/widget/Toolbar",
	android::view::ViewGroup>
{
public:

	using LayoutParams = Toolbar_LayoutParams;
	using OnMenuItemClickListener = Toolbar_OnMenuItemClickListener;

	static jni::ref<android::widget::Toolbar> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::Toolbar> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::widget::Toolbar> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::widget::Toolbar> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	void setPopupTheme(jint resId) { return call_method<"setPopupTheme", void>(resId); }
	jint getPopupTheme() { return call_method<"getPopupTheme", jint>(); }
	void setTitleMargin(jint start, jint top, jint end, jint bottom) { return call_method<"setTitleMargin", void>(start, top, end, bottom); }
	jint getTitleMarginStart() { return call_method<"getTitleMarginStart", jint>(); }
	void setTitleMarginStart(jint margin) { return call_method<"setTitleMarginStart", void>(margin); }
	jint getTitleMarginTop() { return call_method<"getTitleMarginTop", jint>(); }
	void setTitleMarginTop(jint margin) { return call_method<"setTitleMarginTop", void>(margin); }
	jint getTitleMarginEnd() { return call_method<"getTitleMarginEnd", jint>(); }
	void setTitleMarginEnd(jint margin) { return call_method<"setTitleMarginEnd", void>(margin); }
	jint getTitleMarginBottom() { return call_method<"getTitleMarginBottom", jint>(); }
	void setTitleMarginBottom(jint margin) { return call_method<"setTitleMarginBottom", void>(margin); }
	void onRtlPropertiesChanged(jint layoutDirection) { return call_method<"onRtlPropertiesChanged", void>(layoutDirection); }
	void setLogo(jint resId) { return call_method<"setLogo", void>(resId); }
	jboolean isOverflowMenuShowing() { return call_method<"isOverflowMenuShowing", jboolean>(); }
	jboolean showOverflowMenu() { return call_method<"showOverflowMenu", jboolean>(); }
	jboolean hideOverflowMenu() { return call_method<"hideOverflowMenu", jboolean>(); }
	void dismissPopupMenus() { return call_method<"dismissPopupMenus", void>(); }
	void setLogo(jni::ref<android::graphics::drawable::Drawable> drawable) { return call_method<"setLogo", void>(drawable); }
	jni::ref<android::graphics::drawable::Drawable> getLogo() { return call_method<"getLogo", jni::ref<android::graphics::drawable::Drawable>>(); }
	void setLogoDescription(jint resId) { return call_method<"setLogoDescription", void>(resId); }
	void setLogoDescription(jni::ref<java::lang::CharSequence> description) { return call_method<"setLogoDescription", void>(description); }
	jni::ref<java::lang::CharSequence> getLogoDescription() { return call_method<"getLogoDescription", jni::ref<java::lang::CharSequence>>(); }
	jboolean hasExpandedActionView() { return call_method<"hasExpandedActionView", jboolean>(); }
	void collapseActionView() { return call_method<"collapseActionView", void>(); }
	jni::ref<java::lang::CharSequence> getTitle() { return call_method<"getTitle", jni::ref<java::lang::CharSequence>>(); }
	void setTitle(jint resId) { return call_method<"setTitle", void>(resId); }
	void setTitle(jni::ref<java::lang::CharSequence> title) { return call_method<"setTitle", void>(title); }
	jni::ref<java::lang::CharSequence> getSubtitle() { return call_method<"getSubtitle", jni::ref<java::lang::CharSequence>>(); }
	void setSubtitle(jint resId) { return call_method<"setSubtitle", void>(resId); }
	void setSubtitle(jni::ref<java::lang::CharSequence> subtitle) { return call_method<"setSubtitle", void>(subtitle); }
	void setTitleTextAppearance(jni::ref<android::content::Context> context, jint resId) { return call_method<"setTitleTextAppearance", void>(context, resId); }
	void setSubtitleTextAppearance(jni::ref<android::content::Context> context, jint resId) { return call_method<"setSubtitleTextAppearance", void>(context, resId); }
	void setTitleTextColor(jint color) { return call_method<"setTitleTextColor", void>(color); }
	void setSubtitleTextColor(jint color) { return call_method<"setSubtitleTextColor", void>(color); }
	jni::ref<java::lang::CharSequence> getNavigationContentDescription() { return call_method<"getNavigationContentDescription", jni::ref<java::lang::CharSequence>>(); }
	void setNavigationContentDescription(jint resId) { return call_method<"setNavigationContentDescription", void>(resId); }
	void setNavigationContentDescription(jni::ref<java::lang::CharSequence> description) { return call_method<"setNavigationContentDescription", void>(description); }
	void setNavigationIcon(jint resId) { return call_method<"setNavigationIcon", void>(resId); }
	void setNavigationIcon(jni::ref<android::graphics::drawable::Drawable> icon) { return call_method<"setNavigationIcon", void>(icon); }
	jni::ref<android::graphics::drawable::Drawable> getNavigationIcon() { return call_method<"getNavigationIcon", jni::ref<android::graphics::drawable::Drawable>>(); }
	void setNavigationOnClickListener(jni::ref<android::view::View_OnClickListener> listener) { return call_method<"setNavigationOnClickListener", void>(listener); }
	jni::ref<java::lang::CharSequence> getCollapseContentDescription() { return call_method<"getCollapseContentDescription", jni::ref<java::lang::CharSequence>>(); }
	void setCollapseContentDescription(jint resId) { return call_method<"setCollapseContentDescription", void>(resId); }
	void setCollapseContentDescription(jni::ref<java::lang::CharSequence> description) { return call_method<"setCollapseContentDescription", void>(description); }
	jni::ref<android::graphics::drawable::Drawable> getCollapseIcon() { return call_method<"getCollapseIcon", jni::ref<android::graphics::drawable::Drawable>>(); }
	void setCollapseIcon(jint resId) { return call_method<"setCollapseIcon", void>(resId); }
	void setCollapseIcon(jni::ref<android::graphics::drawable::Drawable> icon) { return call_method<"setCollapseIcon", void>(icon); }
	jni::ref<android::view::Menu> getMenu() { return call_method<"getMenu", jni::ref<android::view::Menu>>(); }
	void setOverflowIcon(jni::ref<android::graphics::drawable::Drawable> icon) { return call_method<"setOverflowIcon", void>(icon); }
	jni::ref<android::graphics::drawable::Drawable> getOverflowIcon() { return call_method<"getOverflowIcon", jni::ref<android::graphics::drawable::Drawable>>(); }
	void inflateMenu(jint resId) { return call_method<"inflateMenu", void>(resId); }
	void setOnMenuItemClickListener(jni::ref<android::widget::Toolbar_OnMenuItemClickListener> listener) { return call_method<"setOnMenuItemClickListener", void>(listener); }
	void setContentInsetsRelative(jint contentInsetStart, jint contentInsetEnd) { return call_method<"setContentInsetsRelative", void>(contentInsetStart, contentInsetEnd); }
	jint getContentInsetStart() { return call_method<"getContentInsetStart", jint>(); }
	jint getContentInsetEnd() { return call_method<"getContentInsetEnd", jint>(); }
	void setContentInsetsAbsolute(jint contentInsetLeft, jint contentInsetRight) { return call_method<"setContentInsetsAbsolute", void>(contentInsetLeft, contentInsetRight); }
	jint getContentInsetLeft() { return call_method<"getContentInsetLeft", jint>(); }
	jint getContentInsetRight() { return call_method<"getContentInsetRight", jint>(); }
	jint getContentInsetStartWithNavigation() { return call_method<"getContentInsetStartWithNavigation", jint>(); }
	void setContentInsetStartWithNavigation(jint insetStartWithNavigation) { return call_method<"setContentInsetStartWithNavigation", void>(insetStartWithNavigation); }
	jint getContentInsetEndWithActions() { return call_method<"getContentInsetEndWithActions", jint>(); }
	void setContentInsetEndWithActions(jint insetEndWithActions) { return call_method<"setContentInsetEndWithActions", void>(insetEndWithActions); }
	jint getCurrentContentInsetStart() { return call_method<"getCurrentContentInsetStart", jint>(); }
	jint getCurrentContentInsetEnd() { return call_method<"getCurrentContentInsetEnd", jint>(); }
	jint getCurrentContentInsetLeft() { return call_method<"getCurrentContentInsetLeft", jint>(); }
	jint getCurrentContentInsetRight() { return call_method<"getCurrentContentInsetRight", jint>(); }
	jboolean onTouchEvent(jni::ref<android::view::MotionEvent> ev) { return call_method<"onTouchEvent", jboolean>(ev); }
	jni::ref<android::widget::Toolbar_LayoutParams> generateLayoutParams(jni::ref<android::util::AttributeSet> attrs) { return call_method<"generateLayoutParams", jni::ref<android::widget::Toolbar_LayoutParams>>(attrs); }

protected:

	Toolbar(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_TOOLBAR
