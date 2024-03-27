// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewTreeObserver_OnPreDrawListener.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_TEXTVIEW_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_TEXTVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class TextView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::TextView>
{
	static constexpr fixed_string class_name = "android/widget/TextView";
	using base_classes = std::tuple<scapix::java_api::android::view::View, scapix::java_api::android::view::ViewTreeObserver_OnPreDrawListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_TEXTVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_TEXTVIEW)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_TEXTVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/res/ColorStateList.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/graphics/Typeface.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcelable.h>
#include <scapix/java_api/android/text/Editable.h>
#include <scapix/java_api/android/text/Editable_Factory.h>
#include <scapix/java_api/android/text/InputFilter.h>
#include <scapix/java_api/android/text/Layout.h>
#include <scapix/java_api/android/text/Spannable_Factory.h>
#include <scapix/java_api/android/text/TextPaint.h>
#include <scapix/java_api/android/text/TextUtils_TruncateAt.h>
#include <scapix/java_api/android/text/TextWatcher.h>
#include <scapix/java_api/android/text/method/KeyListener.h>
#include <scapix/java_api/android/text/method/MovementMethod.h>
#include <scapix/java_api/android/text/method/TransformationMethod.h>
#include <scapix/java_api/android/text/style/URLSpan.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/ActionMode_Callback.h>
#include <scapix/java_api/android/view/DragEvent.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityEvent.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeInfo.h>
#include <scapix/java_api/android/view/inputmethod/CompletionInfo.h>
#include <scapix/java_api/android/view/inputmethod/CorrectionInfo.h>
#include <scapix/java_api/android/view/inputmethod/EditorInfo.h>
#include <scapix/java_api/android/view/inputmethod/ExtractedText.h>
#include <scapix/java_api/android/view/inputmethod/ExtractedTextRequest.h>
#include <scapix/java_api/android/view/inputmethod/InputConnection.h>
#include <scapix/java_api/android/widget/Scroller.h>
#include <scapix/java_api/android/widget/TextView_BufferType.h>
#include <scapix/java_api/android/widget/TextView_OnEditorActionListener.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/ArrayList.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/android/widget/TextView_SavedState.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::TextView : public jni::object_base<"android/widget/TextView",
	android::view::View,
	android::view::ViewTreeObserver_OnPreDrawListener>
{
public:

	using SavedState = TextView_SavedState;
	using BufferType = TextView_BufferType;
	using OnEditorActionListener = TextView_OnEditorActionListener;

	static jni::ref<android::widget::TextView> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::TextView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::widget::TextView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::widget::TextView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	void setEnabled(jboolean enabled) { return call_method<"setEnabled", void>(enabled); }
	void setTypeface(jni::ref<android::graphics::Typeface> tf, jint style) { return call_method<"setTypeface", void>(tf, style); }
	jni::ref<java::lang::CharSequence> getText() { return call_method<"getText", jni::ref<java::lang::CharSequence>>(); }
	jint length() { return call_method<"length", jint>(); }
	jni::ref<android::text::Editable> getEditableText() { return call_method<"getEditableText", jni::ref<android::text::Editable>>(); }
	jint getLineHeight() { return call_method<"getLineHeight", jint>(); }
	jni::ref<android::text::Layout> getLayout() { return call_method<"getLayout", jni::ref<android::text::Layout>>(); }
	jni::ref<android::text::method::KeyListener> getKeyListener() { return call_method<"getKeyListener", jni::ref<android::text::method::KeyListener>>(); }
	void setKeyListener(jni::ref<android::text::method::KeyListener> input) { return call_method<"setKeyListener", void>(input); }
	jni::ref<android::text::method::MovementMethod> getMovementMethod() { return call_method<"getMovementMethod", jni::ref<android::text::method::MovementMethod>>(); }
	void setMovementMethod(jni::ref<android::text::method::MovementMethod> movement) { return call_method<"setMovementMethod", void>(movement); }
	jni::ref<android::text::method::TransformationMethod> getTransformationMethod() { return call_method<"getTransformationMethod", jni::ref<android::text::method::TransformationMethod>>(); }
	void setTransformationMethod(jni::ref<android::text::method::TransformationMethod> method) { return call_method<"setTransformationMethod", void>(method); }
	jint getCompoundPaddingTop() { return call_method<"getCompoundPaddingTop", jint>(); }
	jint getCompoundPaddingBottom() { return call_method<"getCompoundPaddingBottom", jint>(); }
	jint getCompoundPaddingLeft() { return call_method<"getCompoundPaddingLeft", jint>(); }
	jint getCompoundPaddingRight() { return call_method<"getCompoundPaddingRight", jint>(); }
	jint getCompoundPaddingStart() { return call_method<"getCompoundPaddingStart", jint>(); }
	jint getCompoundPaddingEnd() { return call_method<"getCompoundPaddingEnd", jint>(); }
	jint getExtendedPaddingTop() { return call_method<"getExtendedPaddingTop", jint>(); }
	jint getExtendedPaddingBottom() { return call_method<"getExtendedPaddingBottom", jint>(); }
	jint getTotalPaddingLeft() { return call_method<"getTotalPaddingLeft", jint>(); }
	jint getTotalPaddingRight() { return call_method<"getTotalPaddingRight", jint>(); }
	jint getTotalPaddingStart() { return call_method<"getTotalPaddingStart", jint>(); }
	jint getTotalPaddingEnd() { return call_method<"getTotalPaddingEnd", jint>(); }
	jint getTotalPaddingTop() { return call_method<"getTotalPaddingTop", jint>(); }
	jint getTotalPaddingBottom() { return call_method<"getTotalPaddingBottom", jint>(); }
	void setCompoundDrawables(jni::ref<android::graphics::drawable::Drawable> left, jni::ref<android::graphics::drawable::Drawable> top, jni::ref<android::graphics::drawable::Drawable> right, jni::ref<android::graphics::drawable::Drawable> bottom) { return call_method<"setCompoundDrawables", void>(left, top, right, bottom); }
	void setCompoundDrawablesWithIntrinsicBounds(jint left, jint top, jint right, jint bottom) { return call_method<"setCompoundDrawablesWithIntrinsicBounds", void>(left, top, right, bottom); }
	void setCompoundDrawablesWithIntrinsicBounds(jni::ref<android::graphics::drawable::Drawable> left, jni::ref<android::graphics::drawable::Drawable> top, jni::ref<android::graphics::drawable::Drawable> right, jni::ref<android::graphics::drawable::Drawable> bottom) { return call_method<"setCompoundDrawablesWithIntrinsicBounds", void>(left, top, right, bottom); }
	void setCompoundDrawablesRelative(jni::ref<android::graphics::drawable::Drawable> start, jni::ref<android::graphics::drawable::Drawable> top, jni::ref<android::graphics::drawable::Drawable> end, jni::ref<android::graphics::drawable::Drawable> bottom) { return call_method<"setCompoundDrawablesRelative", void>(start, top, end, bottom); }
	void setCompoundDrawablesRelativeWithIntrinsicBounds(jint start, jint top, jint end, jint bottom) { return call_method<"setCompoundDrawablesRelativeWithIntrinsicBounds", void>(start, top, end, bottom); }
	void setCompoundDrawablesRelativeWithIntrinsicBounds(jni::ref<android::graphics::drawable::Drawable> start, jni::ref<android::graphics::drawable::Drawable> top, jni::ref<android::graphics::drawable::Drawable> end, jni::ref<android::graphics::drawable::Drawable> bottom) { return call_method<"setCompoundDrawablesRelativeWithIntrinsicBounds", void>(start, top, end, bottom); }
	jni::ref<jni::array<android::graphics::drawable::Drawable>> getCompoundDrawables() { return call_method<"getCompoundDrawables", jni::ref<jni::array<android::graphics::drawable::Drawable>>>(); }
	jni::ref<jni::array<android::graphics::drawable::Drawable>> getCompoundDrawablesRelative() { return call_method<"getCompoundDrawablesRelative", jni::ref<jni::array<android::graphics::drawable::Drawable>>>(); }
	void setCompoundDrawablePadding(jint pad) { return call_method<"setCompoundDrawablePadding", void>(pad); }
	jint getCompoundDrawablePadding() { return call_method<"getCompoundDrawablePadding", jint>(); }
	void setPadding(jint left, jint top, jint right, jint bottom) { return call_method<"setPadding", void>(left, top, right, bottom); }
	void setPaddingRelative(jint start, jint top, jint end, jint bottom) { return call_method<"setPaddingRelative", void>(start, top, end, bottom); }
	jint getAutoLinkMask() { return call_method<"getAutoLinkMask", jint>(); }
	void setTextAppearance(jni::ref<android::content::Context> context, jint resid) { return call_method<"setTextAppearance", void>(context, resid); }
	jni::ref<java::util::Locale> getTextLocale() { return call_method<"getTextLocale", jni::ref<java::util::Locale>>(); }
	void setTextLocale(jni::ref<java::util::Locale> locale) { return call_method<"setTextLocale", void>(locale); }
	jfloat getTextSize() { return call_method<"getTextSize", jfloat>(); }
	void setTextSize(jfloat size) { return call_method<"setTextSize", void>(size); }
	void setTextSize(jint unit, jfloat size) { return call_method<"setTextSize", void>(unit, size); }
	jfloat getTextScaleX() { return call_method<"getTextScaleX", jfloat>(); }
	void setTextScaleX(jfloat size) { return call_method<"setTextScaleX", void>(size); }
	void setTypeface(jni::ref<android::graphics::Typeface> tf) { return call_method<"setTypeface", void>(tf); }
	jni::ref<android::graphics::Typeface> getTypeface() { return call_method<"getTypeface", jni::ref<android::graphics::Typeface>>(); }
	void setElegantTextHeight(jboolean elegant) { return call_method<"setElegantTextHeight", void>(elegant); }
	jfloat getLetterSpacing() { return call_method<"getLetterSpacing", jfloat>(); }
	void setLetterSpacing(jfloat letterSpacing) { return call_method<"setLetterSpacing", void>(letterSpacing); }
	jni::ref<java::lang::String> getFontFeatureSettings() { return call_method<"getFontFeatureSettings", jni::ref<java::lang::String>>(); }
	void setFontFeatureSettings(jni::ref<java::lang::String> fontFeatureSettings) { return call_method<"setFontFeatureSettings", void>(fontFeatureSettings); }
	void setTextColor(jint color) { return call_method<"setTextColor", void>(color); }
	void setTextColor(jni::ref<android::content::res::ColorStateList> colors) { return call_method<"setTextColor", void>(colors); }
	jni::ref<android::content::res::ColorStateList> getTextColors() { return call_method<"getTextColors", jni::ref<android::content::res::ColorStateList>>(); }
	jint getCurrentTextColor() { return call_method<"getCurrentTextColor", jint>(); }
	void setHighlightColor(jint color) { return call_method<"setHighlightColor", void>(color); }
	jint getHighlightColor() { return call_method<"getHighlightColor", jint>(); }
	void setShowSoftInputOnFocus(jboolean show) { return call_method<"setShowSoftInputOnFocus", void>(show); }
	jboolean getShowSoftInputOnFocus() { return call_method<"getShowSoftInputOnFocus", jboolean>(); }
	void setShadowLayer(jfloat radius, jfloat dx, jfloat dy, jint color) { return call_method<"setShadowLayer", void>(radius, dx, dy, color); }
	jfloat getShadowRadius() { return call_method<"getShadowRadius", jfloat>(); }
	jfloat getShadowDx() { return call_method<"getShadowDx", jfloat>(); }
	jfloat getShadowDy() { return call_method<"getShadowDy", jfloat>(); }
	jint getShadowColor() { return call_method<"getShadowColor", jint>(); }
	jni::ref<android::text::TextPaint> getPaint() { return call_method<"getPaint", jni::ref<android::text::TextPaint>>(); }
	void setAutoLinkMask(jint mask) { return call_method<"setAutoLinkMask", void>(mask); }
	void setLinksClickable(jboolean whether) { return call_method<"setLinksClickable", void>(whether); }
	jboolean getLinksClickable() { return call_method<"getLinksClickable", jboolean>(); }
	jni::ref<jni::array<android::text::style::URLSpan>> getUrls() { return call_method<"getUrls", jni::ref<jni::array<android::text::style::URLSpan>>>(); }
	void setHintTextColor(jint color) { return call_method<"setHintTextColor", void>(color); }
	void setHintTextColor(jni::ref<android::content::res::ColorStateList> colors) { return call_method<"setHintTextColor", void>(colors); }
	jni::ref<android::content::res::ColorStateList> getHintTextColors() { return call_method<"getHintTextColors", jni::ref<android::content::res::ColorStateList>>(); }
	jint getCurrentHintTextColor() { return call_method<"getCurrentHintTextColor", jint>(); }
	void setLinkTextColor(jint color) { return call_method<"setLinkTextColor", void>(color); }
	void setLinkTextColor(jni::ref<android::content::res::ColorStateList> colors) { return call_method<"setLinkTextColor", void>(colors); }
	jni::ref<android::content::res::ColorStateList> getLinkTextColors() { return call_method<"getLinkTextColors", jni::ref<android::content::res::ColorStateList>>(); }
	void setGravity(jint gravity) { return call_method<"setGravity", void>(gravity); }
	jint getGravity() { return call_method<"getGravity", jint>(); }
	jint getPaintFlags() { return call_method<"getPaintFlags", jint>(); }
	void setPaintFlags(jint flags) { return call_method<"setPaintFlags", void>(flags); }
	void setHorizontallyScrolling(jboolean whether) { return call_method<"setHorizontallyScrolling", void>(whether); }
	void setMinLines(jint minlines) { return call_method<"setMinLines", void>(minlines); }
	jint getMinLines() { return call_method<"getMinLines", jint>(); }
	void setMinHeight(jint minHeight) { return call_method<"setMinHeight", void>(minHeight); }
	jint getMinHeight() { return call_method<"getMinHeight", jint>(); }
	void setMaxLines(jint maxlines) { return call_method<"setMaxLines", void>(maxlines); }
	jint getMaxLines() { return call_method<"getMaxLines", jint>(); }
	void setMaxHeight(jint maxHeight) { return call_method<"setMaxHeight", void>(maxHeight); }
	jint getMaxHeight() { return call_method<"getMaxHeight", jint>(); }
	void setLines(jint lines) { return call_method<"setLines", void>(lines); }
	void setHeight(jint pixels) { return call_method<"setHeight", void>(pixels); }
	void setMinEms(jint minems) { return call_method<"setMinEms", void>(minems); }
	jint getMinEms() { return call_method<"getMinEms", jint>(); }
	void setMinWidth(jint minpixels) { return call_method<"setMinWidth", void>(minpixels); }
	jint getMinWidth() { return call_method<"getMinWidth", jint>(); }
	void setMaxEms(jint maxems) { return call_method<"setMaxEms", void>(maxems); }
	jint getMaxEms() { return call_method<"getMaxEms", jint>(); }
	void setMaxWidth(jint maxpixels) { return call_method<"setMaxWidth", void>(maxpixels); }
	jint getMaxWidth() { return call_method<"getMaxWidth", jint>(); }
	void setEms(jint ems) { return call_method<"setEms", void>(ems); }
	void setWidth(jint pixels) { return call_method<"setWidth", void>(pixels); }
	void setLineSpacing(jfloat add, jfloat mult) { return call_method<"setLineSpacing", void>(add, mult); }
	jfloat getLineSpacingMultiplier() { return call_method<"getLineSpacingMultiplier", jfloat>(); }
	jfloat getLineSpacingExtra() { return call_method<"getLineSpacingExtra", jfloat>(); }
	void append(jni::ref<java::lang::CharSequence> text) { return call_method<"append", void>(text); }
	void append(jni::ref<java::lang::CharSequence> text, jint start, jint end) { return call_method<"append", void>(text, start, end); }
	void drawableHotspotChanged(jfloat x, jfloat y) { return call_method<"drawableHotspotChanged", void>(x, y); }
	jni::ref<android::os::Parcelable> onSaveInstanceState() { return call_method<"onSaveInstanceState", jni::ref<android::os::Parcelable>>(); }
	void onRestoreInstanceState(jni::ref<android::os::Parcelable> state) { return call_method<"onRestoreInstanceState", void>(state); }
	void setFreezesText(jboolean freezesText) { return call_method<"setFreezesText", void>(freezesText); }
	jboolean getFreezesText() { return call_method<"getFreezesText", jboolean>(); }
	void setEditableFactory(jni::ref<android::text::Editable_Factory> factory) { return call_method<"setEditableFactory", void>(factory); }
	void setSpannableFactory(jni::ref<android::text::Spannable_Factory> factory) { return call_method<"setSpannableFactory", void>(factory); }
	void setText(jni::ref<java::lang::CharSequence> text) { return call_method<"setText", void>(text); }
	void setTextKeepState(jni::ref<java::lang::CharSequence> text) { return call_method<"setTextKeepState", void>(text); }
	void setText(jni::ref<java::lang::CharSequence> text, jni::ref<android::widget::TextView_BufferType> type) { return call_method<"setText", void>(text, type); }
	void setText(jni::ref<jni::array<jchar>> text, jint start, jint len) { return call_method<"setText", void>(text, start, len); }
	void setTextKeepState(jni::ref<java::lang::CharSequence> text, jni::ref<android::widget::TextView_BufferType> type) { return call_method<"setTextKeepState", void>(text, type); }
	void setText(jint resid) { return call_method<"setText", void>(resid); }
	void setText(jint resid, jni::ref<android::widget::TextView_BufferType> type) { return call_method<"setText", void>(resid, type); }
	void setHint(jni::ref<java::lang::CharSequence> hint) { return call_method<"setHint", void>(hint); }
	void setHint(jint resid) { return call_method<"setHint", void>(resid); }
	jni::ref<java::lang::CharSequence> getHint() { return call_method<"getHint", jni::ref<java::lang::CharSequence>>(); }
	void setInputType(jint type) { return call_method<"setInputType", void>(type); }
	void setRawInputType(jint type) { return call_method<"setRawInputType", void>(type); }
	jint getInputType() { return call_method<"getInputType", jint>(); }
	void setImeOptions(jint imeOptions) { return call_method<"setImeOptions", void>(imeOptions); }
	jint getImeOptions() { return call_method<"getImeOptions", jint>(); }
	void setImeActionLabel(jni::ref<java::lang::CharSequence> label, jint actionId) { return call_method<"setImeActionLabel", void>(label, actionId); }
	jni::ref<java::lang::CharSequence> getImeActionLabel() { return call_method<"getImeActionLabel", jni::ref<java::lang::CharSequence>>(); }
	jint getImeActionId() { return call_method<"getImeActionId", jint>(); }
	void setOnEditorActionListener(jni::ref<android::widget::TextView_OnEditorActionListener> l) { return call_method<"setOnEditorActionListener", void>(l); }
	void onEditorAction(jint actionCode) { return call_method<"onEditorAction", void>(actionCode); }
	void setPrivateImeOptions(jni::ref<java::lang::String> type) { return call_method<"setPrivateImeOptions", void>(type); }
	jni::ref<java::lang::String> getPrivateImeOptions() { return call_method<"getPrivateImeOptions", jni::ref<java::lang::String>>(); }
	void setInputExtras(jint xmlResId) { return call_method<"setInputExtras", void>(xmlResId); }
	jni::ref<android::os::Bundle> getInputExtras(jboolean create) { return call_method<"getInputExtras", jni::ref<android::os::Bundle>>(create); }
	jni::ref<java::lang::CharSequence> getError() { return call_method<"getError", jni::ref<java::lang::CharSequence>>(); }
	void setError(jni::ref<java::lang::CharSequence> error) { return call_method<"setError", void>(error); }
	void setError(jni::ref<java::lang::CharSequence> error, jni::ref<android::graphics::drawable::Drawable> icon) { return call_method<"setError", void>(error, icon); }
	void setFilters(jni::ref<jni::array<android::text::InputFilter>> filters) { return call_method<"setFilters", void>(filters); }
	jni::ref<jni::array<android::text::InputFilter>> getFilters() { return call_method<"getFilters", jni::ref<jni::array<android::text::InputFilter>>>(); }
	jboolean onPreDraw() { return call_method<"onPreDraw", jboolean>(); }
	void onScreenStateChanged(jint screenState) { return call_method<"onScreenStateChanged", void>(screenState); }
	void jumpDrawablesToCurrentState() { return call_method<"jumpDrawablesToCurrentState", void>(); }
	void invalidateDrawable(jni::ref<android::graphics::drawable::Drawable> drawable) { return call_method<"invalidateDrawable", void>(drawable); }
	jboolean hasOverlappingRendering() { return call_method<"hasOverlappingRendering", jboolean>(); }
	jboolean isTextSelectable() { return call_method<"isTextSelectable", jboolean>(); }
	void setTextIsSelectable(jboolean selectable) { return call_method<"setTextIsSelectable", void>(selectable); }
	void getFocusedRect(jni::ref<android::graphics::Rect> r) { return call_method<"getFocusedRect", void>(r); }
	jint getLineCount() { return call_method<"getLineCount", jint>(); }
	jint getLineBounds(jint line, jni::ref<android::graphics::Rect> bounds) { return call_method<"getLineBounds", jint>(line, bounds); }
	jint getBaseline() { return call_method<"getBaseline", jint>(); }
	jboolean onKeyPreIme(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyPreIme", jboolean>(keyCode, event); }
	jboolean onKeyDown(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyDown", jboolean>(keyCode, event); }
	jboolean onKeyMultiple(jint keyCode, jint repeatCount, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyMultiple", jboolean>(keyCode, repeatCount, event); }
	jboolean onKeyUp(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyUp", jboolean>(keyCode, event); }
	jboolean onCheckIsTextEditor() { return call_method<"onCheckIsTextEditor", jboolean>(); }
	jni::ref<android::view::inputmethod::InputConnection> onCreateInputConnection(jni::ref<android::view::inputmethod::EditorInfo> outAttrs) { return call_method<"onCreateInputConnection", jni::ref<android::view::inputmethod::InputConnection>>(outAttrs); }
	jboolean extractText(jni::ref<android::view::inputmethod::ExtractedTextRequest> request, jni::ref<android::view::inputmethod::ExtractedText> outText) { return call_method<"extractText", jboolean>(request, outText); }
	void setExtractedText(jni::ref<android::view::inputmethod::ExtractedText> text) { return call_method<"setExtractedText", void>(text); }
	void onCommitCompletion(jni::ref<android::view::inputmethod::CompletionInfo> text) { return call_method<"onCommitCompletion", void>(text); }
	void onCommitCorrection(jni::ref<android::view::inputmethod::CorrectionInfo> info) { return call_method<"onCommitCorrection", void>(info); }
	void beginBatchEdit() { return call_method<"beginBatchEdit", void>(); }
	void endBatchEdit() { return call_method<"endBatchEdit", void>(); }
	void onBeginBatchEdit() { return call_method<"onBeginBatchEdit", void>(); }
	void onEndBatchEdit() { return call_method<"onEndBatchEdit", void>(); }
	jboolean onPrivateIMECommand(jni::ref<java::lang::String> action, jni::ref<android::os::Bundle> data) { return call_method<"onPrivateIMECommand", jboolean>(action, data); }
	void setIncludeFontPadding(jboolean includepad) { return call_method<"setIncludeFontPadding", void>(includepad); }
	jboolean getIncludeFontPadding() { return call_method<"getIncludeFontPadding", jboolean>(); }
	jboolean bringPointIntoView(jint offset) { return call_method<"bringPointIntoView", jboolean>(offset); }
	jboolean moveCursorToVisibleOffset() { return call_method<"moveCursorToVisibleOffset", jboolean>(); }
	void computeScroll() { return call_method<"computeScroll", void>(); }
	void debug(jint depth) { return call_method<"debug", void>(depth); }
	jint getSelectionStart() { return call_method<"getSelectionStart", jint>(); }
	jint getSelectionEnd() { return call_method<"getSelectionEnd", jint>(); }
	jboolean hasSelection() { return call_method<"hasSelection", jboolean>(); }
	void setSingleLine() { return call_method<"setSingleLine", void>(); }
	void setAllCaps(jboolean allCaps) { return call_method<"setAllCaps", void>(allCaps); }
	void setSingleLine(jboolean singleLine) { return call_method<"setSingleLine", void>(singleLine); }
	void setEllipsize(jni::ref<android::text::TextUtils_TruncateAt> where) { return call_method<"setEllipsize", void>(where); }
	void setMarqueeRepeatLimit(jint marqueeLimit) { return call_method<"setMarqueeRepeatLimit", void>(marqueeLimit); }
	jint getMarqueeRepeatLimit() { return call_method<"getMarqueeRepeatLimit", jint>(); }
	jni::ref<android::text::TextUtils_TruncateAt> getEllipsize() { return call_method<"getEllipsize", jni::ref<android::text::TextUtils_TruncateAt>>(); }
	void setSelectAllOnFocus(jboolean selectAllOnFocus) { return call_method<"setSelectAllOnFocus", void>(selectAllOnFocus); }
	void setCursorVisible(jboolean visible) { return call_method<"setCursorVisible", void>(visible); }
	jboolean isCursorVisible() { return call_method<"isCursorVisible", jboolean>(); }
	void addTextChangedListener(jni::ref<android::text::TextWatcher> watcher) { return call_method<"addTextChangedListener", void>(watcher); }
	void removeTextChangedListener(jni::ref<android::text::TextWatcher> watcher) { return call_method<"removeTextChangedListener", void>(watcher); }
	void onStartTemporaryDetach() { return call_method<"onStartTemporaryDetach", void>(); }
	void onFinishTemporaryDetach() { return call_method<"onFinishTemporaryDetach", void>(); }
	void onWindowFocusChanged(jboolean hasWindowFocus) { return call_method<"onWindowFocusChanged", void>(hasWindowFocus); }
	void clearComposingText() { return call_method<"clearComposingText", void>(); }
	void setSelected(jboolean selected) { return call_method<"setSelected", void>(selected); }
	jboolean onTouchEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onTouchEvent", jboolean>(event); }
	jboolean onGenericMotionEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onGenericMotionEvent", jboolean>(event); }
	jboolean didTouchFocusSelect() { return call_method<"didTouchFocusSelect", jboolean>(); }
	void cancelLongPress() { return call_method<"cancelLongPress", void>(); }
	jboolean onTrackballEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onTrackballEvent", jboolean>(event); }
	void setScroller(jni::ref<android::widget::Scroller> s) { return call_method<"setScroller", void>(s); }
	void findViewsWithText(jni::ref<java::util::ArrayList> outViews, jni::ref<java::lang::CharSequence> searched, jint flags) { return call_method<"findViewsWithText", void>(outViews, searched, flags); }
	jboolean onKeyShortcut(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyShortcut", jboolean>(keyCode, event); }
	void onPopulateAccessibilityEvent(jni::ref<android::view::accessibility::AccessibilityEvent> event) { return call_method<"onPopulateAccessibilityEvent", void>(event); }
	void onInitializeAccessibilityEvent(jni::ref<android::view::accessibility::AccessibilityEvent> event) { return call_method<"onInitializeAccessibilityEvent", void>(event); }
	void onInitializeAccessibilityNodeInfo(jni::ref<android::view::accessibility::AccessibilityNodeInfo> info) { return call_method<"onInitializeAccessibilityNodeInfo", void>(info); }
	void sendAccessibilityEvent(jint eventType) { return call_method<"sendAccessibilityEvent", void>(eventType); }
	jboolean isInputMethodTarget() { return call_method<"isInputMethodTarget", jboolean>(); }
	jboolean onTextContextMenuItem(jint id) { return call_method<"onTextContextMenuItem", jboolean>(id); }
	jboolean performLongClick() { return call_method<"performLongClick", jboolean>(); }
	jboolean isSuggestionsEnabled() { return call_method<"isSuggestionsEnabled", jboolean>(); }
	void setCustomSelectionActionModeCallback(jni::ref<android::view::ActionMode_Callback> actionModeCallback) { return call_method<"setCustomSelectionActionModeCallback", void>(actionModeCallback); }
	jni::ref<android::view::ActionMode_Callback> getCustomSelectionActionModeCallback() { return call_method<"getCustomSelectionActionModeCallback", jni::ref<android::view::ActionMode_Callback>>(); }
	jint getOffsetForPosition(jfloat x, jfloat y) { return call_method<"getOffsetForPosition", jint>(x, y); }
	jboolean onDragEvent(jni::ref<android::view::DragEvent> event) { return call_method<"onDragEvent", jboolean>(event); }
	void onRtlPropertiesChanged(jint layoutDirection) { return call_method<"onRtlPropertiesChanged", void>(layoutDirection); }

protected:

	TextView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_TEXTVIEW
