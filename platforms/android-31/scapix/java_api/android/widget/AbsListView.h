// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/AdapterView.h>
#include <scapix/java_api/android/text/TextWatcher.h>
#include <scapix/java_api/android/view/ViewTreeObserver_OnGlobalLayoutListener.h>
#include <scapix/java_api/android/widget/Filter_FilterListener.h>
#include <scapix/java_api/android/view/ViewTreeObserver_OnTouchModeChangeListener.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_ABSLISTVIEW_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_ABSLISTVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class AbsListView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::AbsListView>
{
	static constexpr fixed_string class_name = "android/widget/AbsListView";
	using base_classes = std::tuple<scapix::java_api::android::widget::AdapterView, scapix::java_api::android::text::TextWatcher, scapix::java_api::android::view::ViewTreeObserver_OnGlobalLayoutListener, scapix::java_api::android::widget::Filter_FilterListener, scapix::java_api::android::view::ViewTreeObserver_OnTouchModeChangeListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_ABSLISTVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_ABSLISTVIEW)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_ABSLISTVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/os/Parcelable.h>
#include <scapix/java_api/android/text/Editable.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/util/SparseBooleanArray.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/PointerIcon.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeInfo.h>
#include <scapix/java_api/android/view/inputmethod/EditorInfo.h>
#include <scapix/java_api/android/view/inputmethod/InputConnection.h>
#include <scapix/java_api/android/widget/AbsListView_LayoutParams.h>
#include <scapix/java_api/android/widget/AbsListView_MultiChoiceModeListener.h>
#include <scapix/java_api/android/widget/AbsListView_OnScrollListener.h>
#include <scapix/java_api/android/widget/AbsListView_RecyclerListener.h>
#include <scapix/java_api/android/widget/ListAdapter.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/ArrayList.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/widget/AbsListView_SelectionBoundsAdjuster.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::AbsListView : public jni::object_base<"android/widget/AbsListView",
	android::widget::AdapterView,
	android::text::TextWatcher,
	android::view::ViewTreeObserver_OnGlobalLayoutListener,
	android::widget::Filter_FilterListener,
	android::view::ViewTreeObserver_OnTouchModeChangeListener>
{
public:

	using SelectionBoundsAdjuster = AbsListView_SelectionBoundsAdjuster;
	using RecyclerListener = AbsListView_RecyclerListener;
	using OnScrollListener = AbsListView_OnScrollListener;
	using MultiChoiceModeListener = AbsListView_MultiChoiceModeListener;
	using LayoutParams = AbsListView_LayoutParams;

	static jint CHOICE_MODE_MULTIPLE() { return get_static_field<"CHOICE_MODE_MULTIPLE", jint>(); }
	static jint CHOICE_MODE_MULTIPLE_MODAL() { return get_static_field<"CHOICE_MODE_MULTIPLE_MODAL", jint>(); }
	static jint CHOICE_MODE_NONE() { return get_static_field<"CHOICE_MODE_NONE", jint>(); }
	static jint CHOICE_MODE_SINGLE() { return get_static_field<"CHOICE_MODE_SINGLE", jint>(); }
	static jint TRANSCRIPT_MODE_ALWAYS_SCROLL() { return get_static_field<"TRANSCRIPT_MODE_ALWAYS_SCROLL", jint>(); }
	static jint TRANSCRIPT_MODE_DISABLED() { return get_static_field<"TRANSCRIPT_MODE_DISABLED", jint>(); }
	static jint TRANSCRIPT_MODE_NORMAL() { return get_static_field<"TRANSCRIPT_MODE_NORMAL", jint>(); }

	static jni::ref<android::widget::AbsListView> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::AbsListView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::widget::AbsListView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::widget::AbsListView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	void setAdapter(jni::ref<android::widget::ListAdapter> adapter) { return call_method<"setAdapter", void>(adapter); }
	jint getCheckedItemCount() { return call_method<"getCheckedItemCount", jint>(); }
	jboolean isItemChecked(jint position) { return call_method<"isItemChecked", jboolean>(position); }
	jint getCheckedItemPosition() { return call_method<"getCheckedItemPosition", jint>(); }
	jni::ref<android::util::SparseBooleanArray> getCheckedItemPositions() { return call_method<"getCheckedItemPositions", jni::ref<android::util::SparseBooleanArray>>(); }
	jni::ref<jni::array<jlong>> getCheckedItemIds() { return call_method<"getCheckedItemIds", jni::ref<jni::array<jlong>>>(); }
	void clearChoices() { return call_method<"clearChoices", void>(); }
	void setItemChecked(jint position, jboolean value) { return call_method<"setItemChecked", void>(position, value); }
	jboolean performItemClick(jni::ref<android::view::View> view, jint position, jlong id) { return call_method<"performItemClick", jboolean>(view, position, id); }
	jint getChoiceMode() { return call_method<"getChoiceMode", jint>(); }
	void setChoiceMode(jint choiceMode) { return call_method<"setChoiceMode", void>(choiceMode); }
	void setMultiChoiceModeListener(jni::ref<android::widget::AbsListView_MultiChoiceModeListener> listener) { return call_method<"setMultiChoiceModeListener", void>(listener); }
	void setFastScrollEnabled(jboolean enabled) { return call_method<"setFastScrollEnabled", void>(enabled); }
	void setFastScrollStyle(jint styleResId) { return call_method<"setFastScrollStyle", void>(styleResId); }
	void setFastScrollAlwaysVisible(jboolean alwaysShow) { return call_method<"setFastScrollAlwaysVisible", void>(alwaysShow); }
	jboolean isFastScrollAlwaysVisible() { return call_method<"isFastScrollAlwaysVisible", jboolean>(); }
	jint getVerticalScrollbarWidth() { return call_method<"getVerticalScrollbarWidth", jint>(); }
	jboolean isFastScrollEnabled() { return call_method<"isFastScrollEnabled", jboolean>(); }
	void setVerticalScrollbarPosition(jint position) { return call_method<"setVerticalScrollbarPosition", void>(position); }
	void setScrollBarStyle(jint style) { return call_method<"setScrollBarStyle", void>(style); }
	void setSmoothScrollbarEnabled(jboolean enabled) { return call_method<"setSmoothScrollbarEnabled", void>(enabled); }
	jboolean isSmoothScrollbarEnabled() { return call_method<"isSmoothScrollbarEnabled", jboolean>(); }
	void setOnScrollListener(jni::ref<android::widget::AbsListView_OnScrollListener> l) { return call_method<"setOnScrollListener", void>(l); }
	jni::ref<java::lang::CharSequence> getAccessibilityClassName() { return call_method<"getAccessibilityClassName", jni::ref<java::lang::CharSequence>>(); }
	jboolean isScrollingCacheEnabled() { return call_method<"isScrollingCacheEnabled", jboolean>(); }
	void setScrollingCacheEnabled(jboolean enabled) { return call_method<"setScrollingCacheEnabled", void>(enabled); }
	void setTextFilterEnabled(jboolean textFilterEnabled) { return call_method<"setTextFilterEnabled", void>(textFilterEnabled); }
	jboolean isTextFilterEnabled() { return call_method<"isTextFilterEnabled", jboolean>(); }
	void getFocusedRect(jni::ref<android::graphics::Rect> r) { return call_method<"getFocusedRect", void>(r); }
	jboolean isStackFromBottom() { return call_method<"isStackFromBottom", jboolean>(); }
	void setStackFromBottom(jboolean stackFromBottom) { return call_method<"setStackFromBottom", void>(stackFromBottom); }
	jni::ref<android::os::Parcelable> onSaveInstanceState() { return call_method<"onSaveInstanceState", jni::ref<android::os::Parcelable>>(); }
	void onRestoreInstanceState(jni::ref<android::os::Parcelable> state) { return call_method<"onRestoreInstanceState", void>(state); }
	void setFilterText(jni::ref<java::lang::String> filterText) { return call_method<"setFilterText", void>(filterText); }
	jni::ref<java::lang::CharSequence> getTextFilter() { return call_method<"getTextFilter", jni::ref<java::lang::CharSequence>>(); }
	void requestLayout() { return call_method<"requestLayout", void>(); }
	jni::ref<android::view::View> getSelectedView() { return call_method<"getSelectedView", jni::ref<android::view::View>>(); }
	jint getListPaddingTop() { return call_method<"getListPaddingTop", jint>(); }
	jint getListPaddingBottom() { return call_method<"getListPaddingBottom", jint>(); }
	jint getListPaddingLeft() { return call_method<"getListPaddingLeft", jint>(); }
	jint getListPaddingRight() { return call_method<"getListPaddingRight", jint>(); }
	void onInitializeAccessibilityNodeInfoForItem(jni::ref<android::view::View> view, jint position, jni::ref<android::view::accessibility::AccessibilityNodeInfo> info) { return call_method<"onInitializeAccessibilityNodeInfoForItem", void>(view, position, info); }
	void setDrawSelectorOnTop(jboolean onTop) { return call_method<"setDrawSelectorOnTop", void>(onTop); }
	jboolean isDrawSelectorOnTop() { return call_method<"isDrawSelectorOnTop", jboolean>(); }
	void setSelector(jint resID) { return call_method<"setSelector", void>(resID); }
	void setSelector(jni::ref<android::graphics::drawable::Drawable> sel) { return call_method<"setSelector", void>(sel); }
	jni::ref<android::graphics::drawable::Drawable> getSelector() { return call_method<"getSelector", jni::ref<android::graphics::drawable::Drawable>>(); }
	void setScrollIndicators(jni::ref<android::view::View> up, jni::ref<android::view::View> down) { return call_method<"setScrollIndicators", void>(up, down); }
	jboolean verifyDrawable(jni::ref<android::graphics::drawable::Drawable> dr) { return call_method<"verifyDrawable", jboolean>(dr); }
	void jumpDrawablesToCurrentState() { return call_method<"jumpDrawablesToCurrentState", void>(); }
	void onWindowFocusChanged(jboolean hasWindowFocus) { return call_method<"onWindowFocusChanged", void>(hasWindowFocus); }
	void onRtlPropertiesChanged(jint layoutDirection) { return call_method<"onRtlPropertiesChanged", void>(layoutDirection); }
	void onCancelPendingInputEvents() { return call_method<"onCancelPendingInputEvents", void>(); }
	jboolean showContextMenu() { return call_method<"showContextMenu", jboolean>(); }
	jboolean showContextMenu(jfloat x, jfloat y) { return call_method<"showContextMenu", jboolean>(x, y); }
	jboolean showContextMenuForChild(jni::ref<android::view::View> originalView) { return call_method<"showContextMenuForChild", jboolean>(originalView); }
	jboolean showContextMenuForChild(jni::ref<android::view::View> originalView, jfloat x, jfloat y) { return call_method<"showContextMenuForChild", jboolean>(originalView, x, y); }
	jboolean onKeyDown(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyDown", jboolean>(keyCode, event); }
	jboolean onKeyUp(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyUp", jboolean>(keyCode, event); }
	void dispatchDrawableHotspotChanged(jfloat x, jfloat y) { return call_method<"dispatchDrawableHotspotChanged", void>(x, y); }
	jint pointToPosition(jint x, jint y) { return call_method<"pointToPosition", jint>(x, y); }
	jlong pointToRowId(jint x, jint y) { return call_method<"pointToRowId", jlong>(x, y); }
	void onTouchModeChanged(jboolean isInTouchMode) { return call_method<"onTouchModeChanged", void>(isInTouchMode); }
	jboolean onTouchEvent(jni::ref<android::view::MotionEvent> ev) { return call_method<"onTouchEvent", jboolean>(ev); }
	jboolean onGenericMotionEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onGenericMotionEvent", jboolean>(event); }
	void fling(jint velocityY) { return call_method<"fling", void>(velocityY); }
	jboolean onStartNestedScroll(jni::ref<android::view::View> child, jni::ref<android::view::View> target, jint nestedScrollAxes) { return call_method<"onStartNestedScroll", jboolean>(child, target, nestedScrollAxes); }
	void onNestedScrollAccepted(jni::ref<android::view::View> child, jni::ref<android::view::View> target, jint axes) { return call_method<"onNestedScrollAccepted", void>(child, target, axes); }
	void onNestedScroll(jni::ref<android::view::View> target, jint dxConsumed, jint dyConsumed, jint dxUnconsumed, jint dyUnconsumed) { return call_method<"onNestedScroll", void>(target, dxConsumed, dyConsumed, dxUnconsumed, dyUnconsumed); }
	jboolean onNestedFling(jni::ref<android::view::View> target, jfloat velocityX, jfloat velocityY, jboolean consumed) { return call_method<"onNestedFling", jboolean>(target, velocityX, velocityY, consumed); }
	void draw(jni::ref<android::graphics::Canvas> canvas) { return call_method<"draw", void>(canvas); }
	void requestDisallowInterceptTouchEvent(jboolean disallowIntercept) { return call_method<"requestDisallowInterceptTouchEvent", void>(disallowIntercept); }
	jboolean onInterceptHoverEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onInterceptHoverEvent", jboolean>(event); }
	jni::ref<android::view::PointerIcon> onResolvePointerIcon(jni::ref<android::view::MotionEvent> event, jint pointerIndex) { return call_method<"onResolvePointerIcon", jni::ref<android::view::PointerIcon>>(event, pointerIndex); }
	jboolean onInterceptTouchEvent(jni::ref<android::view::MotionEvent> ev) { return call_method<"onInterceptTouchEvent", jboolean>(ev); }
	void addTouchables(jni::ref<java::util::ArrayList> views) { return call_method<"addTouchables", void>(views); }
	void setFriction(jfloat friction) { return call_method<"setFriction", void>(friction); }
	void setVelocityScale(jfloat scale) { return call_method<"setVelocityScale", void>(scale); }
	void smoothScrollToPosition(jint position) { return call_method<"smoothScrollToPosition", void>(position); }
	void smoothScrollToPositionFromTop(jint position, jint offset, jint duration) { return call_method<"smoothScrollToPositionFromTop", void>(position, offset, duration); }
	void smoothScrollToPositionFromTop(jint position, jint offset) { return call_method<"smoothScrollToPositionFromTop", void>(position, offset); }
	void smoothScrollToPosition(jint position, jint boundPosition) { return call_method<"smoothScrollToPosition", void>(position, boundPosition); }
	void smoothScrollBy(jint distance, jint duration) { return call_method<"smoothScrollBy", void>(distance, duration); }
	void scrollListBy(jint y) { return call_method<"scrollListBy", void>(y); }
	jboolean canScrollList(jint direction) { return call_method<"canScrollList", jboolean>(direction); }
	void invalidateViews() { return call_method<"invalidateViews", void>(); }
	jni::ref<android::view::inputmethod::InputConnection> onCreateInputConnection(jni::ref<android::view::inputmethod::EditorInfo> outAttrs) { return call_method<"onCreateInputConnection", jni::ref<android::view::inputmethod::InputConnection>>(outAttrs); }
	jboolean checkInputConnectionProxy(jni::ref<android::view::View> view) { return call_method<"checkInputConnectionProxy", jboolean>(view); }
	void clearTextFilter() { return call_method<"clearTextFilter", void>(); }
	jboolean hasTextFilter() { return call_method<"hasTextFilter", jboolean>(); }
	void onGlobalLayout() { return call_method<"onGlobalLayout", void>(); }
	void beforeTextChanged(jni::ref<java::lang::CharSequence> s, jint start, jint count, jint after) { return call_method<"beforeTextChanged", void>(s, start, count, after); }
	void onTextChanged(jni::ref<java::lang::CharSequence> s, jint start, jint before, jint count) { return call_method<"onTextChanged", void>(s, start, before, count); }
	void afterTextChanged(jni::ref<android::text::Editable> s) { return call_method<"afterTextChanged", void>(s); }
	void onFilterComplete(jint count) { return call_method<"onFilterComplete", void>(count); }
	jni::ref<android::widget::AbsListView_LayoutParams> generateLayoutParams(jni::ref<android::util::AttributeSet> attrs) { return call_method<"generateLayoutParams", jni::ref<android::widget::AbsListView_LayoutParams>>(attrs); }
	void setTranscriptMode(jint mode) { return call_method<"setTranscriptMode", void>(mode); }
	jint getTranscriptMode() { return call_method<"getTranscriptMode", jint>(); }
	jint getSolidColor() { return call_method<"getSolidColor", jint>(); }
	void setCacheColorHint(jint color) { return call_method<"setCacheColorHint", void>(color); }
	jint getCacheColorHint() { return call_method<"getCacheColorHint", jint>(); }
	void reclaimViews(jni::ref<java::util::List> views) { return call_method<"reclaimViews", void>(views); }
	void setRemoteViewsAdapter(jni::ref<android::content::Intent> intent) { return call_method<"setRemoteViewsAdapter", void>(intent); }
	void deferNotifyDataSetChanged() { return call_method<"deferNotifyDataSetChanged", void>(); }
	jboolean onRemoteAdapterConnected() { return call_method<"onRemoteAdapterConnected", jboolean>(); }
	void onRemoteAdapterDisconnected() { return call_method<"onRemoteAdapterDisconnected", void>(); }
	void setEdgeEffectColor(jint color) { return call_method<"setEdgeEffectColor", void>(color); }
	void setBottomEdgeEffectColor(jint color) { return call_method<"setBottomEdgeEffectColor", void>(color); }
	void setTopEdgeEffectColor(jint color) { return call_method<"setTopEdgeEffectColor", void>(color); }
	jint getTopEdgeEffectColor() { return call_method<"getTopEdgeEffectColor", jint>(); }
	jint getBottomEdgeEffectColor() { return call_method<"getBottomEdgeEffectColor", jint>(); }
	void setRecyclerListener(jni::ref<android::widget::AbsListView_RecyclerListener> listener) { return call_method<"setRecyclerListener", void>(listener); }
	void setSelectionFromTop(jint position, jint y) { return call_method<"setSelectionFromTop", void>(position, y); }

protected:

	AbsListView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_ABSLISTVIEW
