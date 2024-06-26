// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/View.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTUI_ROOTVIEW_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTUI_ROOTVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicTextUI_RootView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicTextUI_RootView>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicTextUI$RootView";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::View>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTUI_ROOTVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTUI_ROOTVIEW)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTUI_ROOTVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Container.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Shape.h>
#include <scapix/java_api/javax/swing/event/DocumentEvent.h>
#include <scapix/java_api/javax/swing/text/AttributeSet.h>
#include <scapix/java_api/javax/swing/text/Document.h>
#include <scapix/java_api/javax/swing/text/Element.h>
#include <scapix/java_api/javax/swing/text/Position_Bias.h>
#include <scapix/java_api/javax/swing/text/ViewFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::basic::BasicTextUI_RootView : public jni::object_base<"javax/swing/plaf/basic/BasicTextUI$RootView",
	javax::swing::text::View>
{
public:

	jni::ref<javax::swing::text::AttributeSet> getAttributes() { return call_method<"getAttributes", jni::ref<javax::swing::text::AttributeSet>>(); }
	jfloat getPreferredSpan(jint p1) { return call_method<"getPreferredSpan", jfloat>(p1); }
	jfloat getMinimumSpan(jint p1) { return call_method<"getMinimumSpan", jfloat>(p1); }
	jfloat getMaximumSpan(jint p1) { return call_method<"getMaximumSpan", jfloat>(p1); }
	void preferenceChanged(jni::ref<javax::swing::text::View> p1, jboolean p2, jboolean p3) { return call_method<"preferenceChanged", void>(p1, p2, p3); }
	jfloat getAlignment(jint p1) { return call_method<"getAlignment", jfloat>(p1); }
	void paint(jni::ref<java::awt::Graphics> p1, jni::ref<java::awt::Shape> p2) { return call_method<"paint", void>(p1, p2); }
	void setParent(jni::ref<javax::swing::text::View> p1) { return call_method<"setParent", void>(p1); }
	jint getViewCount() { return call_method<"getViewCount", jint>(); }
	jni::ref<javax::swing::text::View> getView(jint p1) { return call_method<"getView", jni::ref<javax::swing::text::View>>(p1); }
	jint getViewIndex(jint p1, jni::ref<javax::swing::text::Position_Bias> p2) { return call_method<"getViewIndex", jint>(p1, p2); }
	jni::ref<java::awt::Shape> getChildAllocation(jint p1, jni::ref<java::awt::Shape> p2) { return call_method<"getChildAllocation", jni::ref<java::awt::Shape>>(p1, p2); }
	jni::ref<java::awt::Shape> modelToView(jint p1, jni::ref<java::awt::Shape> p2, jni::ref<javax::swing::text::Position_Bias> p3) { return call_method<"modelToView", jni::ref<java::awt::Shape>>(p1, p2, p3); }
	jni::ref<java::awt::Shape> modelToView(jint p1, jni::ref<javax::swing::text::Position_Bias> p2, jint p3, jni::ref<javax::swing::text::Position_Bias> p4, jni::ref<java::awt::Shape> p5) { return call_method<"modelToView", jni::ref<java::awt::Shape>>(p1, p2, p3, p4, p5); }
	jint viewToModel(jfloat p1, jfloat p2, jni::ref<java::awt::Shape> p3, jni::ref<jni::array<javax::swing::text::Position_Bias>> p4) { return call_method<"viewToModel", jint>(p1, p2, p3, p4); }
	jint getNextVisualPositionFrom(jint p1, jni::ref<javax::swing::text::Position_Bias> p2, jni::ref<java::awt::Shape> p3, jint p4, jni::ref<jni::array<javax::swing::text::Position_Bias>> p5) { return call_method<"getNextVisualPositionFrom", jint>(p1, p2, p3, p4, p5); }
	void insertUpdate(jni::ref<javax::swing::event::DocumentEvent> p1, jni::ref<java::awt::Shape> p2, jni::ref<javax::swing::text::ViewFactory> p3) { return call_method<"insertUpdate", void>(p1, p2, p3); }
	void removeUpdate(jni::ref<javax::swing::event::DocumentEvent> p1, jni::ref<java::awt::Shape> p2, jni::ref<javax::swing::text::ViewFactory> p3) { return call_method<"removeUpdate", void>(p1, p2, p3); }
	void changedUpdate(jni::ref<javax::swing::event::DocumentEvent> p1, jni::ref<java::awt::Shape> p2, jni::ref<javax::swing::text::ViewFactory> p3) { return call_method<"changedUpdate", void>(p1, p2, p3); }
	jni::ref<javax::swing::text::Document> getDocument() { return call_method<"getDocument", jni::ref<javax::swing::text::Document>>(); }
	jint getStartOffset() { return call_method<"getStartOffset", jint>(); }
	jint getEndOffset() { return call_method<"getEndOffset", jint>(); }
	jni::ref<javax::swing::text::Element> getElement() { return call_method<"getElement", jni::ref<javax::swing::text::Element>>(); }
	jni::ref<javax::swing::text::View> breakView(jint p1, jfloat p2, jni::ref<java::awt::Shape> p3) { return call_method<"breakView", jni::ref<javax::swing::text::View>>(p1, p2, p3); }
	jint getResizeWeight(jint p1) { return call_method<"getResizeWeight", jint>(p1); }
	void setSize(jfloat p1, jfloat p2) { return call_method<"setSize", void>(p1, p2); }
	jni::ref<java::awt::Container> getContainer() { return call_method<"getContainer", jni::ref<java::awt::Container>>(); }
	jni::ref<javax::swing::text::ViewFactory> getViewFactory() { return call_method<"getViewFactory", jni::ref<javax::swing::text::ViewFactory>>(); }

protected:

	BasicTextUI_RootView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTUI_ROOTVIEW
