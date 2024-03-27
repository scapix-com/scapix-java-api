// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_WINDOW_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_WINDOW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class Window; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::Window>
{
	static constexpr fixed_string class_name = "android/view/Window";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_WINDOW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_WINDOW)
#define SCAPIX_JAVA_API_ANDROID_VIEW_WINDOW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/res/Configuration.h>
#include <scapix/java_api/android/content/res/TypedArray.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/media/session/MediaController.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/android/transition/Scene.h>
#include <scapix/java_api/android/transition/Transition.h>
#include <scapix/java_api/android/transition/TransitionManager.h>
#include <scapix/java_api/android/view/InputEvent.h>
#include <scapix/java_api/android/view/InputQueue_Callback.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/LayoutInflater.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/SurfaceHolder_Callback2.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup_LayoutParams.h>
#include <scapix/java_api/android/view/Window_Callback.h>
#include <scapix/java_api/android/view/WindowManager.h>
#include <scapix/java_api/android/view/WindowManager_LayoutParams.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::Window : public jni::object_base<"android/view/Window",
	java::lang::Object>
{
public:

	using Callback = Window_Callback;

	static jint FEATURE_ACTION_BAR() { return get_static_field<"FEATURE_ACTION_BAR", jint>(); }
	static jint FEATURE_ACTION_BAR_OVERLAY() { return get_static_field<"FEATURE_ACTION_BAR_OVERLAY", jint>(); }
	static jint FEATURE_ACTION_MODE_OVERLAY() { return get_static_field<"FEATURE_ACTION_MODE_OVERLAY", jint>(); }
	static jint FEATURE_ACTIVITY_TRANSITIONS() { return get_static_field<"FEATURE_ACTIVITY_TRANSITIONS", jint>(); }
	static jint FEATURE_CONTENT_TRANSITIONS() { return get_static_field<"FEATURE_CONTENT_TRANSITIONS", jint>(); }
	static jint FEATURE_CONTEXT_MENU() { return get_static_field<"FEATURE_CONTEXT_MENU", jint>(); }
	static jint FEATURE_CUSTOM_TITLE() { return get_static_field<"FEATURE_CUSTOM_TITLE", jint>(); }
	static jint FEATURE_INDETERMINATE_PROGRESS() { return get_static_field<"FEATURE_INDETERMINATE_PROGRESS", jint>(); }
	static jint FEATURE_LEFT_ICON() { return get_static_field<"FEATURE_LEFT_ICON", jint>(); }
	static jint FEATURE_NO_TITLE() { return get_static_field<"FEATURE_NO_TITLE", jint>(); }
	static jint FEATURE_OPTIONS_PANEL() { return get_static_field<"FEATURE_OPTIONS_PANEL", jint>(); }
	static jint FEATURE_PROGRESS() { return get_static_field<"FEATURE_PROGRESS", jint>(); }
	static jint FEATURE_RIGHT_ICON() { return get_static_field<"FEATURE_RIGHT_ICON", jint>(); }
	static jint FEATURE_SWIPE_TO_DISMISS() { return get_static_field<"FEATURE_SWIPE_TO_DISMISS", jint>(); }
	static jint ID_ANDROID_CONTENT() { return get_static_field<"ID_ANDROID_CONTENT", jint>(); }
	static jni::ref<java::lang::String> NAVIGATION_BAR_BACKGROUND_TRANSITION_NAME() { return get_static_field<"NAVIGATION_BAR_BACKGROUND_TRANSITION_NAME", jni::ref<java::lang::String>>(); }
	static jint PROGRESS_END() { return get_static_field<"PROGRESS_END", jint>(); }
	static jint PROGRESS_INDETERMINATE_OFF() { return get_static_field<"PROGRESS_INDETERMINATE_OFF", jint>(); }
	static jint PROGRESS_INDETERMINATE_ON() { return get_static_field<"PROGRESS_INDETERMINATE_ON", jint>(); }
	static jint PROGRESS_SECONDARY_END() { return get_static_field<"PROGRESS_SECONDARY_END", jint>(); }
	static jint PROGRESS_SECONDARY_START() { return get_static_field<"PROGRESS_SECONDARY_START", jint>(); }
	static jint PROGRESS_START() { return get_static_field<"PROGRESS_START", jint>(); }
	static jint PROGRESS_VISIBILITY_OFF() { return get_static_field<"PROGRESS_VISIBILITY_OFF", jint>(); }
	static jint PROGRESS_VISIBILITY_ON() { return get_static_field<"PROGRESS_VISIBILITY_ON", jint>(); }
	static jni::ref<java::lang::String> STATUS_BAR_BACKGROUND_TRANSITION_NAME() { return get_static_field<"STATUS_BAR_BACKGROUND_TRANSITION_NAME", jni::ref<java::lang::String>>(); }

	static jni::ref<android::view::Window> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	jni::ref<android::content::Context> getContext() { return call_method<"getContext", jni::ref<android::content::Context>>(); }
	jni::ref<android::content::res::TypedArray> getWindowStyle() { return call_method<"getWindowStyle", jni::ref<android::content::res::TypedArray>>(); }
	void setContainer(jni::ref<android::view::Window> container) { return call_method<"setContainer", void>(container); }
	jni::ref<android::view::Window> getContainer() { return call_method<"getContainer", jni::ref<android::view::Window>>(); }
	jboolean hasChildren() { return call_method<"hasChildren", jboolean>(); }
	void setWindowManager(jni::ref<android::view::WindowManager> wm, jni::ref<android::os::IBinder> appToken, jni::ref<java::lang::String> appName) { return call_method<"setWindowManager", void>(wm, appToken, appName); }
	void setWindowManager(jni::ref<android::view::WindowManager> wm, jni::ref<android::os::IBinder> appToken, jni::ref<java::lang::String> appName, jboolean hardwareAccelerated) { return call_method<"setWindowManager", void>(wm, appToken, appName, hardwareAccelerated); }
	jni::ref<android::view::WindowManager> getWindowManager() { return call_method<"getWindowManager", jni::ref<android::view::WindowManager>>(); }
	void setCallback(jni::ref<android::view::Window_Callback> callback) { return call_method<"setCallback", void>(callback); }
	jni::ref<android::view::Window_Callback> getCallback() { return call_method<"getCallback", jni::ref<android::view::Window_Callback>>(); }
	void takeSurface(jni::ref<android::view::SurfaceHolder_Callback2> p1) { return call_method<"takeSurface", void>(p1); }
	void takeInputQueue(jni::ref<android::view::InputQueue_Callback> p1) { return call_method<"takeInputQueue", void>(p1); }
	jboolean isFloating() { return call_method<"isFloating", jboolean>(); }
	void setLayout(jint width, jint height) { return call_method<"setLayout", void>(width, height); }
	void setGravity(jint gravity) { return call_method<"setGravity", void>(gravity); }
	void setType(jint type) { return call_method<"setType", void>(type); }
	void setFormat(jint format) { return call_method<"setFormat", void>(format); }
	void setWindowAnimations(jint resId) { return call_method<"setWindowAnimations", void>(resId); }
	void setSoftInputMode(jint mode) { return call_method<"setSoftInputMode", void>(mode); }
	void addFlags(jint flags) { return call_method<"addFlags", void>(flags); }
	void clearFlags(jint flags) { return call_method<"clearFlags", void>(flags); }
	void setFlags(jint flags, jint mask) { return call_method<"setFlags", void>(flags, mask); }
	void setDimAmount(jfloat amount) { return call_method<"setDimAmount", void>(amount); }
	void setAttributes(jni::ref<android::view::WindowManager_LayoutParams> a) { return call_method<"setAttributes", void>(a); }
	jni::ref<android::view::WindowManager_LayoutParams> getAttributes() { return call_method<"getAttributes", jni::ref<android::view::WindowManager_LayoutParams>>(); }
	jboolean requestFeature(jint featureId) { return call_method<"requestFeature", jboolean>(featureId); }
	void makeActive() { return call_method<"makeActive", void>(); }
	jboolean isActive() { return call_method<"isActive", jboolean>(); }
	jni::ref<android::view::View> findViewById(jint id) { return call_method<"findViewById", jni::ref<android::view::View>>(id); }
	void setContentView(jint p1) { return call_method<"setContentView", void>(p1); }
	void setContentView(jni::ref<android::view::View> p1) { return call_method<"setContentView", void>(p1); }
	void setContentView(jni::ref<android::view::View> p1, jni::ref<android::view::ViewGroup_LayoutParams> p2) { return call_method<"setContentView", void>(p1, p2); }
	void addContentView(jni::ref<android::view::View> p1, jni::ref<android::view::ViewGroup_LayoutParams> p2) { return call_method<"addContentView", void>(p1, p2); }
	jni::ref<android::view::View> getCurrentFocus() { return call_method<"getCurrentFocus", jni::ref<android::view::View>>(); }
	jni::ref<android::view::LayoutInflater> getLayoutInflater() { return call_method<"getLayoutInflater", jni::ref<android::view::LayoutInflater>>(); }
	void setTitle(jni::ref<java::lang::CharSequence> p1) { return call_method<"setTitle", void>(p1); }
	void setTitleColor(jint p1) { return call_method<"setTitleColor", void>(p1); }
	void openPanel(jint p1, jni::ref<android::view::KeyEvent> p2) { return call_method<"openPanel", void>(p1, p2); }
	void closePanel(jint p1) { return call_method<"closePanel", void>(p1); }
	void togglePanel(jint p1, jni::ref<android::view::KeyEvent> p2) { return call_method<"togglePanel", void>(p1, p2); }
	void invalidatePanelMenu(jint p1) { return call_method<"invalidatePanelMenu", void>(p1); }
	jboolean performPanelShortcut(jint p1, jint p2, jni::ref<android::view::KeyEvent> p3, jint p4) { return call_method<"performPanelShortcut", jboolean>(p1, p2, p3, p4); }
	jboolean performPanelIdentifierAction(jint p1, jint p2, jint p3) { return call_method<"performPanelIdentifierAction", jboolean>(p1, p2, p3); }
	void closeAllPanels() { return call_method<"closeAllPanels", void>(); }
	jboolean performContextMenuIdentifierAction(jint p1, jint p2) { return call_method<"performContextMenuIdentifierAction", jboolean>(p1, p2); }
	void onConfigurationChanged(jni::ref<android::content::res::Configuration> p1) { return call_method<"onConfigurationChanged", void>(p1); }
	void setBackgroundDrawableResource(jint resid) { return call_method<"setBackgroundDrawableResource", void>(resid); }
	void setBackgroundDrawable(jni::ref<android::graphics::drawable::Drawable> p1) { return call_method<"setBackgroundDrawable", void>(p1); }
	void setFeatureDrawableResource(jint p1, jint p2) { return call_method<"setFeatureDrawableResource", void>(p1, p2); }
	void setFeatureDrawableUri(jint p1, jni::ref<android::net::Uri> p2) { return call_method<"setFeatureDrawableUri", void>(p1, p2); }
	void setFeatureDrawable(jint p1, jni::ref<android::graphics::drawable::Drawable> p2) { return call_method<"setFeatureDrawable", void>(p1, p2); }
	void setFeatureDrawableAlpha(jint p1, jint p2) { return call_method<"setFeatureDrawableAlpha", void>(p1, p2); }
	void setFeatureInt(jint p1, jint p2) { return call_method<"setFeatureInt", void>(p1, p2); }
	void takeKeyEvents(jboolean p1) { return call_method<"takeKeyEvents", void>(p1); }
	jboolean superDispatchKeyEvent(jni::ref<android::view::KeyEvent> p1) { return call_method<"superDispatchKeyEvent", jboolean>(p1); }
	jboolean superDispatchKeyShortcutEvent(jni::ref<android::view::KeyEvent> p1) { return call_method<"superDispatchKeyShortcutEvent", jboolean>(p1); }
	jboolean superDispatchTouchEvent(jni::ref<android::view::MotionEvent> p1) { return call_method<"superDispatchTouchEvent", jboolean>(p1); }
	jboolean superDispatchTrackballEvent(jni::ref<android::view::MotionEvent> p1) { return call_method<"superDispatchTrackballEvent", jboolean>(p1); }
	jboolean superDispatchGenericMotionEvent(jni::ref<android::view::MotionEvent> p1) { return call_method<"superDispatchGenericMotionEvent", jboolean>(p1); }
	jni::ref<android::view::View> getDecorView() { return call_method<"getDecorView", jni::ref<android::view::View>>(); }
	jni::ref<android::view::View> peekDecorView() { return call_method<"peekDecorView", jni::ref<android::view::View>>(); }
	jni::ref<android::os::Bundle> saveHierarchyState() { return call_method<"saveHierarchyState", jni::ref<android::os::Bundle>>(); }
	void restoreHierarchyState(jni::ref<android::os::Bundle> p1) { return call_method<"restoreHierarchyState", void>(p1); }
	jboolean hasFeature(jint feature) { return call_method<"hasFeature", jboolean>(feature); }
	void setChildDrawable(jint p1, jni::ref<android::graphics::drawable::Drawable> p2) { return call_method<"setChildDrawable", void>(p1, p2); }
	void setChildInt(jint p1, jint p2) { return call_method<"setChildInt", void>(p1, p2); }
	jboolean isShortcutKey(jint p1, jni::ref<android::view::KeyEvent> p2) { return call_method<"isShortcutKey", jboolean>(p1, p2); }
	void setVolumeControlStream(jint p1) { return call_method<"setVolumeControlStream", void>(p1); }
	jint getVolumeControlStream() { return call_method<"getVolumeControlStream", jint>(); }
	void setMediaController(jni::ref<android::media::session::MediaController> controller) { return call_method<"setMediaController", void>(controller); }
	jni::ref<android::media::session::MediaController> getMediaController() { return call_method<"getMediaController", jni::ref<android::media::session::MediaController>>(); }
	void setUiOptions(jint uiOptions) { return call_method<"setUiOptions", void>(uiOptions); }
	void setUiOptions(jint uiOptions, jint mask) { return call_method<"setUiOptions", void>(uiOptions, mask); }
	void setIcon(jint resId) { return call_method<"setIcon", void>(resId); }
	void setLogo(jint resId) { return call_method<"setLogo", void>(resId); }
	void setLocalFocus(jboolean hasFocus, jboolean inTouchMode) { return call_method<"setLocalFocus", void>(hasFocus, inTouchMode); }
	void injectInputEvent(jni::ref<android::view::InputEvent> event) { return call_method<"injectInputEvent", void>(event); }
	jni::ref<android::transition::TransitionManager> getTransitionManager() { return call_method<"getTransitionManager", jni::ref<android::transition::TransitionManager>>(); }
	void setTransitionManager(jni::ref<android::transition::TransitionManager> tm) { return call_method<"setTransitionManager", void>(tm); }
	jni::ref<android::transition::Scene> getContentScene() { return call_method<"getContentScene", jni::ref<android::transition::Scene>>(); }
	void setEnterTransition(jni::ref<android::transition::Transition> transition) { return call_method<"setEnterTransition", void>(transition); }
	void setReturnTransition(jni::ref<android::transition::Transition> transition) { return call_method<"setReturnTransition", void>(transition); }
	void setExitTransition(jni::ref<android::transition::Transition> transition) { return call_method<"setExitTransition", void>(transition); }
	void setReenterTransition(jni::ref<android::transition::Transition> transition) { return call_method<"setReenterTransition", void>(transition); }
	jni::ref<android::transition::Transition> getEnterTransition() { return call_method<"getEnterTransition", jni::ref<android::transition::Transition>>(); }
	jni::ref<android::transition::Transition> getReturnTransition() { return call_method<"getReturnTransition", jni::ref<android::transition::Transition>>(); }
	jni::ref<android::transition::Transition> getExitTransition() { return call_method<"getExitTransition", jni::ref<android::transition::Transition>>(); }
	jni::ref<android::transition::Transition> getReenterTransition() { return call_method<"getReenterTransition", jni::ref<android::transition::Transition>>(); }
	void setSharedElementEnterTransition(jni::ref<android::transition::Transition> transition) { return call_method<"setSharedElementEnterTransition", void>(transition); }
	void setSharedElementReturnTransition(jni::ref<android::transition::Transition> transition) { return call_method<"setSharedElementReturnTransition", void>(transition); }
	jni::ref<android::transition::Transition> getSharedElementEnterTransition() { return call_method<"getSharedElementEnterTransition", jni::ref<android::transition::Transition>>(); }
	jni::ref<android::transition::Transition> getSharedElementReturnTransition() { return call_method<"getSharedElementReturnTransition", jni::ref<android::transition::Transition>>(); }
	void setSharedElementExitTransition(jni::ref<android::transition::Transition> transition) { return call_method<"setSharedElementExitTransition", void>(transition); }
	void setSharedElementReenterTransition(jni::ref<android::transition::Transition> transition) { return call_method<"setSharedElementReenterTransition", void>(transition); }
	jni::ref<android::transition::Transition> getSharedElementExitTransition() { return call_method<"getSharedElementExitTransition", jni::ref<android::transition::Transition>>(); }
	jni::ref<android::transition::Transition> getSharedElementReenterTransition() { return call_method<"getSharedElementReenterTransition", jni::ref<android::transition::Transition>>(); }
	void setAllowEnterTransitionOverlap(jboolean allow) { return call_method<"setAllowEnterTransitionOverlap", void>(allow); }
	jboolean getAllowEnterTransitionOverlap() { return call_method<"getAllowEnterTransitionOverlap", jboolean>(); }
	void setAllowReturnTransitionOverlap(jboolean allow) { return call_method<"setAllowReturnTransitionOverlap", void>(allow); }
	jboolean getAllowReturnTransitionOverlap() { return call_method<"getAllowReturnTransitionOverlap", jboolean>(); }
	jlong getTransitionBackgroundFadeDuration() { return call_method<"getTransitionBackgroundFadeDuration", jlong>(); }
	void setTransitionBackgroundFadeDuration(jlong fadeDurationMillis) { return call_method<"setTransitionBackgroundFadeDuration", void>(fadeDurationMillis); }
	jboolean getSharedElementsUseOverlay() { return call_method<"getSharedElementsUseOverlay", jboolean>(); }
	void setSharedElementsUseOverlay(jboolean sharedElementsUseOverlay) { return call_method<"setSharedElementsUseOverlay", void>(sharedElementsUseOverlay); }
	jint getStatusBarColor() { return call_method<"getStatusBarColor", jint>(); }
	void setStatusBarColor(jint p1) { return call_method<"setStatusBarColor", void>(p1); }
	jint getNavigationBarColor() { return call_method<"getNavigationBarColor", jint>(); }
	void setNavigationBarColor(jint p1) { return call_method<"setNavigationBarColor", void>(p1); }

protected:

	Window(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_WINDOW
