// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewParent.h>
#include <scapix/java_api/android/view/ViewManager.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_VIEWGROUP_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEWGROUP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class ViewGroup; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::ViewGroup>
{
	static constexpr fixed_string class_name = "android/view/ViewGroup";
	using base_classes = std::tuple<scapix::java_api::android::view::View, scapix::java_api::android::view::ViewParent, scapix::java_api::android::view::ViewManager>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEWGROUP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_VIEWGROUP)
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEWGROUP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/animation/LayoutTransition.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/res/Configuration.h>
#include <scapix/java_api/android/graphics/Point.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/graphics/Region.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/ActionMode.h>
#include <scapix/java_api/android/view/ActionMode_Callback.h>
#include <scapix/java_api/android/view/DragEvent.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/ViewGroup_LayoutParams.h>
#include <scapix/java_api/android/view/ViewGroup_OnHierarchyChangeListener.h>
#include <scapix/java_api/android/view/ViewGroupOverlay.h>
#include <scapix/java_api/android/view/ViewStructure.h>
#include <scapix/java_api/android/view/WindowInsets.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityEvent.h>
#include <scapix/java_api/android/view/animation/Animation_AnimationListener.h>
#include <scapix/java_api/android/view/animation/LayoutAnimationController.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/util/ArrayList.h>
#include <scapix/java_api/android/view/ViewGroup_MarginLayoutParams.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::ViewGroup : public jni::object_base<"android/view/ViewGroup",
	android::view::View,
	android::view::ViewParent,
	android::view::ViewManager>
{
public:

	using MarginLayoutParams = ViewGroup_MarginLayoutParams;
	using LayoutParams = ViewGroup_LayoutParams;
	using OnHierarchyChangeListener = ViewGroup_OnHierarchyChangeListener;

	static jint FOCUS_AFTER_DESCENDANTS() { return get_static_field<"FOCUS_AFTER_DESCENDANTS", jint>(); }
	static jint FOCUS_BEFORE_DESCENDANTS() { return get_static_field<"FOCUS_BEFORE_DESCENDANTS", jint>(); }
	static jint FOCUS_BLOCK_DESCENDANTS() { return get_static_field<"FOCUS_BLOCK_DESCENDANTS", jint>(); }
	static jint LAYOUT_MODE_CLIP_BOUNDS() { return get_static_field<"LAYOUT_MODE_CLIP_BOUNDS", jint>(); }
	static jint LAYOUT_MODE_OPTICAL_BOUNDS() { return get_static_field<"LAYOUT_MODE_OPTICAL_BOUNDS", jint>(); }
	static jint PERSISTENT_ALL_CACHES() { return get_static_field<"PERSISTENT_ALL_CACHES", jint>(); }
	static jint PERSISTENT_ANIMATION_CACHE() { return get_static_field<"PERSISTENT_ANIMATION_CACHE", jint>(); }
	static jint PERSISTENT_NO_CACHE() { return get_static_field<"PERSISTENT_NO_CACHE", jint>(); }
	static jint PERSISTENT_SCROLLING_CACHE() { return get_static_field<"PERSISTENT_SCROLLING_CACHE", jint>(); }

	static jni::ref<android::view::ViewGroup> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::view::ViewGroup> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::view::ViewGroup> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::view::ViewGroup> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	jint getDescendantFocusability() { return call_method<"getDescendantFocusability", jint>(); }
	void setDescendantFocusability(jint focusability) { return call_method<"setDescendantFocusability", void>(focusability); }
	void requestChildFocus(jni::ref<android::view::View> child, jni::ref<android::view::View> focused) { return call_method<"requestChildFocus", void>(child, focused); }
	void focusableViewAvailable(jni::ref<android::view::View> v) { return call_method<"focusableViewAvailable", void>(v); }
	jboolean showContextMenuForChild(jni::ref<android::view::View> originalView) { return call_method<"showContextMenuForChild", jboolean>(originalView); }
	jni::ref<android::view::ActionMode> startActionModeForChild(jni::ref<android::view::View> originalView, jni::ref<android::view::ActionMode_Callback> callback) { return call_method<"startActionModeForChild", jni::ref<android::view::ActionMode>>(originalView, callback); }
	jni::ref<android::view::ActionMode> startActionModeForChild(jni::ref<android::view::View> originalView, jni::ref<android::view::ActionMode_Callback> callback, jint type) { return call_method<"startActionModeForChild", jni::ref<android::view::ActionMode>>(originalView, callback, type); }
	jni::ref<android::view::View> focusSearch(jni::ref<android::view::View> focused, jint direction) { return call_method<"focusSearch", jni::ref<android::view::View>>(focused, direction); }
	jboolean requestChildRectangleOnScreen(jni::ref<android::view::View> child, jni::ref<android::graphics::Rect> rectangle, jboolean immediate) { return call_method<"requestChildRectangleOnScreen", jboolean>(child, rectangle, immediate); }
	jboolean requestSendAccessibilityEvent(jni::ref<android::view::View> child, jni::ref<android::view::accessibility::AccessibilityEvent> event) { return call_method<"requestSendAccessibilityEvent", jboolean>(child, event); }
	jboolean onRequestSendAccessibilityEvent(jni::ref<android::view::View> child, jni::ref<android::view::accessibility::AccessibilityEvent> event) { return call_method<"onRequestSendAccessibilityEvent", jboolean>(child, event); }
	void childHasTransientStateChanged(jni::ref<android::view::View> child, jboolean childHasTransientState) { return call_method<"childHasTransientStateChanged", void>(child, childHasTransientState); }
	jboolean hasTransientState() { return call_method<"hasTransientState", jboolean>(); }
	jboolean dispatchUnhandledMove(jni::ref<android::view::View> focused, jint direction) { return call_method<"dispatchUnhandledMove", jboolean>(focused, direction); }
	void clearChildFocus(jni::ref<android::view::View> child) { return call_method<"clearChildFocus", void>(child); }
	void clearFocus() { return call_method<"clearFocus", void>(); }
	jni::ref<android::view::View> getFocusedChild() { return call_method<"getFocusedChild", jni::ref<android::view::View>>(); }
	jboolean hasFocus() { return call_method<"hasFocus", jboolean>(); }
	jni::ref<android::view::View> findFocus() { return call_method<"findFocus", jni::ref<android::view::View>>(); }
	jboolean hasFocusable() { return call_method<"hasFocusable", jboolean>(); }
	void addFocusables(jni::ref<java::util::ArrayList> views, jint direction, jint focusableMode) { return call_method<"addFocusables", void>(views, direction, focusableMode); }
	void setTouchscreenBlocksFocus(jboolean touchscreenBlocksFocus) { return call_method<"setTouchscreenBlocksFocus", void>(touchscreenBlocksFocus); }
	jboolean getTouchscreenBlocksFocus() { return call_method<"getTouchscreenBlocksFocus", jboolean>(); }
	void findViewsWithText(jni::ref<java::util::ArrayList> outViews, jni::ref<java::lang::CharSequence> text, jint flags) { return call_method<"findViewsWithText", void>(outViews, text, flags); }
	void dispatchWindowFocusChanged(jboolean hasFocus) { return call_method<"dispatchWindowFocusChanged", void>(hasFocus); }
	void addTouchables(jni::ref<java::util::ArrayList> views) { return call_method<"addTouchables", void>(views); }
	void dispatchDisplayHint(jint hint) { return call_method<"dispatchDisplayHint", void>(hint); }
	void dispatchWindowVisibilityChanged(jint visibility) { return call_method<"dispatchWindowVisibilityChanged", void>(visibility); }
	void dispatchConfigurationChanged(jni::ref<android::content::res::Configuration> newConfig) { return call_method<"dispatchConfigurationChanged", void>(newConfig); }
	void recomputeViewAttributes(jni::ref<android::view::View> child) { return call_method<"recomputeViewAttributes", void>(child); }
	void bringChildToFront(jni::ref<android::view::View> child) { return call_method<"bringChildToFront", void>(child); }
	jboolean dispatchDragEvent(jni::ref<android::view::DragEvent> event) { return call_method<"dispatchDragEvent", jboolean>(event); }
	void dispatchWindowSystemUiVisiblityChanged(jint visible) { return call_method<"dispatchWindowSystemUiVisiblityChanged", void>(visible); }
	void dispatchSystemUiVisibilityChanged(jint visible) { return call_method<"dispatchSystemUiVisibilityChanged", void>(visible); }
	jboolean dispatchKeyEventPreIme(jni::ref<android::view::KeyEvent> event) { return call_method<"dispatchKeyEventPreIme", jboolean>(event); }
	jboolean dispatchKeyEvent(jni::ref<android::view::KeyEvent> event) { return call_method<"dispatchKeyEvent", jboolean>(event); }
	jboolean dispatchKeyShortcutEvent(jni::ref<android::view::KeyEvent> event) { return call_method<"dispatchKeyShortcutEvent", jboolean>(event); }
	jboolean dispatchTrackballEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"dispatchTrackballEvent", jboolean>(event); }
	void addChildrenForAccessibility(jni::ref<java::util::ArrayList> outChildren) { return call_method<"addChildrenForAccessibility", void>(outChildren); }
	jboolean onInterceptHoverEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onInterceptHoverEvent", jboolean>(event); }
	jboolean dispatchTouchEvent(jni::ref<android::view::MotionEvent> ev) { return call_method<"dispatchTouchEvent", jboolean>(ev); }
	void setMotionEventSplittingEnabled(jboolean split) { return call_method<"setMotionEventSplittingEnabled", void>(split); }
	jboolean isMotionEventSplittingEnabled() { return call_method<"isMotionEventSplittingEnabled", jboolean>(); }
	jboolean isTransitionGroup() { return call_method<"isTransitionGroup", jboolean>(); }
	void setTransitionGroup(jboolean isTransitionGroup) { return call_method<"setTransitionGroup", void>(isTransitionGroup); }
	void requestDisallowInterceptTouchEvent(jboolean disallowIntercept) { return call_method<"requestDisallowInterceptTouchEvent", void>(disallowIntercept); }
	jboolean onInterceptTouchEvent(jni::ref<android::view::MotionEvent> ev) { return call_method<"onInterceptTouchEvent", jboolean>(ev); }
	jboolean requestFocus(jint direction, jni::ref<android::graphics::Rect> previouslyFocusedRect) { return call_method<"requestFocus", jboolean>(direction, previouslyFocusedRect); }
	void dispatchProvideStructure(jni::ref<android::view::ViewStructure> structure) { return call_method<"dispatchProvideStructure", void>(structure); }
	jni::ref<java::lang::CharSequence> getAccessibilityClassName() { return call_method<"getAccessibilityClassName", jni::ref<java::lang::CharSequence>>(); }
	void notifySubtreeAccessibilityStateChanged(jni::ref<android::view::View> child, jni::ref<android::view::View> source, jint changeType) { return call_method<"notifySubtreeAccessibilityStateChanged", void>(child, source, changeType); }
	jboolean onNestedPrePerformAccessibilityAction(jni::ref<android::view::View> target, jint action, jni::ref<android::os::Bundle> args) { return call_method<"onNestedPrePerformAccessibilityAction", jboolean>(target, action, args); }
	jni::ref<android::view::ViewGroupOverlay> getOverlay() { return call_method<"getOverlay", jni::ref<android::view::ViewGroupOverlay>>(); }
	jboolean getClipChildren() { return call_method<"getClipChildren", jboolean>(); }
	void setClipChildren(jboolean clipChildren) { return call_method<"setClipChildren", void>(clipChildren); }
	void setClipToPadding(jboolean clipToPadding) { return call_method<"setClipToPadding", void>(clipToPadding); }
	jboolean getClipToPadding() { return call_method<"getClipToPadding", jboolean>(); }
	void dispatchSetSelected(jboolean selected) { return call_method<"dispatchSetSelected", void>(selected); }
	void dispatchSetActivated(jboolean activated) { return call_method<"dispatchSetActivated", void>(activated); }
	void dispatchDrawableHotspotChanged(jfloat x, jfloat y) { return call_method<"dispatchDrawableHotspotChanged", void>(x, y); }
	void addView(jni::ref<android::view::View> child) { return call_method<"addView", void>(child); }
	void addView(jni::ref<android::view::View> child, jint index) { return call_method<"addView", void>(child, index); }
	void addView(jni::ref<android::view::View> child, jint width, jint height) { return call_method<"addView", void>(child, width, height); }
	void addView(jni::ref<android::view::View> child, jni::ref<android::view::ViewGroup_LayoutParams> params) { return call_method<"addView", void>(child, params); }
	void addView(jni::ref<android::view::View> child, jint index, jni::ref<android::view::ViewGroup_LayoutParams> params) { return call_method<"addView", void>(child, index, params); }
	void updateViewLayout(jni::ref<android::view::View> view, jni::ref<android::view::ViewGroup_LayoutParams> params) { return call_method<"updateViewLayout", void>(view, params); }
	void setOnHierarchyChangeListener(jni::ref<android::view::ViewGroup_OnHierarchyChangeListener> listener) { return call_method<"setOnHierarchyChangeListener", void>(listener); }
	void onViewAdded(jni::ref<android::view::View> child) { return call_method<"onViewAdded", void>(child); }
	void onViewRemoved(jni::ref<android::view::View> child) { return call_method<"onViewRemoved", void>(child); }
	void removeView(jni::ref<android::view::View> view) { return call_method<"removeView", void>(view); }
	void removeViewInLayout(jni::ref<android::view::View> view) { return call_method<"removeViewInLayout", void>(view); }
	void removeViewsInLayout(jint start, jint count) { return call_method<"removeViewsInLayout", void>(start, count); }
	void removeViewAt(jint index) { return call_method<"removeViewAt", void>(index); }
	void removeViews(jint start, jint count) { return call_method<"removeViews", void>(start, count); }
	void setLayoutTransition(jni::ref<android::animation::LayoutTransition> transition) { return call_method<"setLayoutTransition", void>(transition); }
	jni::ref<android::animation::LayoutTransition> getLayoutTransition() { return call_method<"getLayoutTransition", jni::ref<android::animation::LayoutTransition>>(); }
	void removeAllViews() { return call_method<"removeAllViews", void>(); }
	void removeAllViewsInLayout() { return call_method<"removeAllViewsInLayout", void>(); }
	void invalidateChild(jni::ref<android::view::View> child, jni::ref<android::graphics::Rect> dirty) { return call_method<"invalidateChild", void>(child, dirty); }
	jni::ref<android::view::ViewParent> invalidateChildInParent(jni::ref<jni::array<jint>> location, jni::ref<android::graphics::Rect> dirty) { return call_method<"invalidateChildInParent", jni::ref<android::view::ViewParent>>(location, dirty); }
	void offsetDescendantRectToMyCoords(jni::ref<android::view::View> descendant, jni::ref<android::graphics::Rect> rect) { return call_method<"offsetDescendantRectToMyCoords", void>(descendant, rect); }
	void offsetRectIntoDescendantCoords(jni::ref<android::view::View> descendant, jni::ref<android::graphics::Rect> rect) { return call_method<"offsetRectIntoDescendantCoords", void>(descendant, rect); }
	jboolean getChildVisibleRect(jni::ref<android::view::View> child, jni::ref<android::graphics::Rect> r, jni::ref<android::graphics::Point> offset) { return call_method<"getChildVisibleRect", jboolean>(child, r, offset); }
	void layout(jint l, jint t, jint r, jint b) { return call_method<"layout", void>(l, t, r, b); }
	void startLayoutAnimation() { return call_method<"startLayoutAnimation", void>(); }
	void scheduleLayoutAnimation() { return call_method<"scheduleLayoutAnimation", void>(); }
	void setLayoutAnimation(jni::ref<android::view::animation::LayoutAnimationController> controller) { return call_method<"setLayoutAnimation", void>(controller); }
	jni::ref<android::view::animation::LayoutAnimationController> getLayoutAnimation() { return call_method<"getLayoutAnimation", jni::ref<android::view::animation::LayoutAnimationController>>(); }
	jboolean isAnimationCacheEnabled() { return call_method<"isAnimationCacheEnabled", jboolean>(); }
	void setAnimationCacheEnabled(jboolean enabled) { return call_method<"setAnimationCacheEnabled", void>(enabled); }
	jboolean isAlwaysDrawnWithCacheEnabled() { return call_method<"isAlwaysDrawnWithCacheEnabled", jboolean>(); }
	void setAlwaysDrawnWithCacheEnabled(jboolean always) { return call_method<"setAlwaysDrawnWithCacheEnabled", void>(always); }
	jint getPersistentDrawingCache() { return call_method<"getPersistentDrawingCache", jint>(); }
	void setPersistentDrawingCache(jint drawingCacheToKeep) { return call_method<"setPersistentDrawingCache", void>(drawingCacheToKeep); }
	jint getLayoutMode() { return call_method<"getLayoutMode", jint>(); }
	void setLayoutMode(jint layoutMode) { return call_method<"setLayoutMode", void>(layoutMode); }
	jni::ref<android::view::ViewGroup_LayoutParams> generateLayoutParams(jni::ref<android::util::AttributeSet> attrs) { return call_method<"generateLayoutParams", jni::ref<android::view::ViewGroup_LayoutParams>>(attrs); }
	jint indexOfChild(jni::ref<android::view::View> child) { return call_method<"indexOfChild", jint>(child); }
	jint getChildCount() { return call_method<"getChildCount", jint>(); }
	jni::ref<android::view::View> getChildAt(jint index) { return call_method<"getChildAt", jni::ref<android::view::View>>(index); }
	static jint getChildMeasureSpec(jint spec, jint padding, jint childDimension) { return call_static_method<"getChildMeasureSpec", jint>(spec, padding, childDimension); }
	void clearDisappearingChildren() { return call_method<"clearDisappearingChildren", void>(); }
	void startViewTransition(jni::ref<android::view::View> view) { return call_method<"startViewTransition", void>(view); }
	void endViewTransition(jni::ref<android::view::View> view) { return call_method<"endViewTransition", void>(view); }
	jboolean gatherTransparentRegion(jni::ref<android::graphics::Region> region) { return call_method<"gatherTransparentRegion", jboolean>(region); }
	void requestTransparentRegion(jni::ref<android::view::View> child) { return call_method<"requestTransparentRegion", void>(child); }
	jni::ref<android::view::WindowInsets> dispatchApplyWindowInsets(jni::ref<android::view::WindowInsets> insets) { return call_method<"dispatchApplyWindowInsets", jni::ref<android::view::WindowInsets>>(insets); }
	jni::ref<android::view::animation::Animation_AnimationListener> getLayoutAnimationListener() { return call_method<"getLayoutAnimationListener", jni::ref<android::view::animation::Animation_AnimationListener>>(); }
	void jumpDrawablesToCurrentState() { return call_method<"jumpDrawablesToCurrentState", void>(); }
	void setAddStatesFromChildren(jboolean addsStates) { return call_method<"setAddStatesFromChildren", void>(addsStates); }
	jboolean addStatesFromChildren() { return call_method<"addStatesFromChildren", jboolean>(); }
	void childDrawableStateChanged(jni::ref<android::view::View> child) { return call_method<"childDrawableStateChanged", void>(child); }
	void setLayoutAnimationListener(jni::ref<android::view::animation::Animation_AnimationListener> animationListener) { return call_method<"setLayoutAnimationListener", void>(animationListener); }
	jboolean shouldDelayChildPressedState() { return call_method<"shouldDelayChildPressedState", jboolean>(); }
	jboolean onStartNestedScroll(jni::ref<android::view::View> child, jni::ref<android::view::View> target, jint nestedScrollAxes) { return call_method<"onStartNestedScroll", jboolean>(child, target, nestedScrollAxes); }
	void onNestedScrollAccepted(jni::ref<android::view::View> child, jni::ref<android::view::View> target, jint axes) { return call_method<"onNestedScrollAccepted", void>(child, target, axes); }
	void onStopNestedScroll(jni::ref<android::view::View> child) { return call_method<"onStopNestedScroll", void>(child); }
	void onNestedScroll(jni::ref<android::view::View> target, jint dxConsumed, jint dyConsumed, jint dxUnconsumed, jint dyUnconsumed) { return call_method<"onNestedScroll", void>(target, dxConsumed, dyConsumed, dxUnconsumed, dyUnconsumed); }
	void onNestedPreScroll(jni::ref<android::view::View> target, jint dx, jint dy, jni::ref<jni::array<jint>> consumed) { return call_method<"onNestedPreScroll", void>(target, dx, dy, consumed); }
	jboolean onNestedFling(jni::ref<android::view::View> target, jfloat velocityX, jfloat velocityY, jboolean consumed) { return call_method<"onNestedFling", jboolean>(target, velocityX, velocityY, consumed); }
	jboolean onNestedPreFling(jni::ref<android::view::View> target, jfloat velocityX, jfloat velocityY) { return call_method<"onNestedPreFling", jboolean>(target, velocityX, velocityY); }
	jint getNestedScrollAxes() { return call_method<"getNestedScrollAxes", jint>(); }

protected:

	ViewGroup(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEWGROUP
