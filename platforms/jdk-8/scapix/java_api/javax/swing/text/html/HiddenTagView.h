// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/html/EditableView.h>
#include <scapix/java_api/javax/swing/event/DocumentListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HIDDENTAGVIEW_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HIDDENTAGVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class HiddenTagView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::HiddenTagView>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/HiddenTagView";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::html::EditableView, scapix::java_api::javax::swing::event::DocumentListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HIDDENTAGVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HIDDENTAGVIEW)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HIDDENTAGVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Shape.h>
#include <scapix/java_api/javax/swing/event/DocumentEvent.h>
#include <scapix/java_api/javax/swing/text/ViewFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::html::HiddenTagView : public jni::object_base<"javax/swing/text/html/HiddenTagView",
	javax::swing::text::html::EditableView,
	javax::swing::event::DocumentListener>
{
public:

	jfloat getAlignment(jint p1) { return call_method<"getAlignment", jfloat>(p1); }
	jfloat getMinimumSpan(jint p1) { return call_method<"getMinimumSpan", jfloat>(p1); }
	jfloat getPreferredSpan(jint p1) { return call_method<"getPreferredSpan", jfloat>(p1); }
	jfloat getMaximumSpan(jint p1) { return call_method<"getMaximumSpan", jfloat>(p1); }
	void insertUpdate(jni::ref<javax::swing::event::DocumentEvent> p1) { return call_method<"insertUpdate", void>(p1); }
	void removeUpdate(jni::ref<javax::swing::event::DocumentEvent> p1) { return call_method<"removeUpdate", void>(p1); }
	void changedUpdate(jni::ref<javax::swing::event::DocumentEvent> p1) { return call_method<"changedUpdate", void>(p1); }
	void changedUpdate(jni::ref<javax::swing::event::DocumentEvent> p1, jni::ref<java::awt::Shape> p2, jni::ref<javax::swing::text::ViewFactory> p3) { return call_method<"changedUpdate", void>(p1, p2, p3); }

protected:

	HiddenTagView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HIDDENTAGVIEW