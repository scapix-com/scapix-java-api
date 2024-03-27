// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/BoxView.h>
#include <scapix/java_api/javax/swing/text/TabExpander.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_WRAPPEDPLAINVIEW_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_WRAPPEDPLAINVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class WrappedPlainView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::WrappedPlainView>
{
	static constexpr fixed_string class_name = "javax/swing/text/WrappedPlainView";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::BoxView, scapix::java_api::javax::swing::text::TabExpander>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_WRAPPEDPLAINVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_WRAPPEDPLAINVIEW)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_WRAPPEDPLAINVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Shape.h>
#include <scapix/java_api/javax/swing/event/DocumentEvent.h>
#include <scapix/java_api/javax/swing/text/Element.h>
#include <scapix/java_api/javax/swing/text/ViewFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::WrappedPlainView : public jni::object_base<"javax/swing/text/WrappedPlainView",
	javax::swing::text::BoxView,
	javax::swing::text::TabExpander>
{
public:

	static jni::ref<javax::swing::text::WrappedPlainView> new_object(jni::ref<javax::swing::text::Element> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::text::WrappedPlainView> new_object(jni::ref<javax::swing::text::Element> p1, jboolean p2) { return base_::new_object(p1, p2); }
	jfloat nextTabStop(jfloat p1, jint p2) { return call_method<"nextTabStop", jfloat>(p1, p2); }
	void paint(jni::ref<java::awt::Graphics> p1, jni::ref<java::awt::Shape> p2) { return call_method<"paint", void>(p1, p2); }
	void setSize(jfloat p1, jfloat p2) { return call_method<"setSize", void>(p1, p2); }
	jfloat getPreferredSpan(jint p1) { return call_method<"getPreferredSpan", jfloat>(p1); }
	jfloat getMinimumSpan(jint p1) { return call_method<"getMinimumSpan", jfloat>(p1); }
	jfloat getMaximumSpan(jint p1) { return call_method<"getMaximumSpan", jfloat>(p1); }
	void insertUpdate(jni::ref<javax::swing::event::DocumentEvent> p1, jni::ref<java::awt::Shape> p2, jni::ref<javax::swing::text::ViewFactory> p3) { return call_method<"insertUpdate", void>(p1, p2, p3); }
	void removeUpdate(jni::ref<javax::swing::event::DocumentEvent> p1, jni::ref<java::awt::Shape> p2, jni::ref<javax::swing::text::ViewFactory> p3) { return call_method<"removeUpdate", void>(p1, p2, p3); }
	void changedUpdate(jni::ref<javax::swing::event::DocumentEvent> p1, jni::ref<java::awt::Shape> p2, jni::ref<javax::swing::text::ViewFactory> p3) { return call_method<"changedUpdate", void>(p1, p2, p3); }

protected:

	WrappedPlainView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_WRAPPEDPLAINVIEW
