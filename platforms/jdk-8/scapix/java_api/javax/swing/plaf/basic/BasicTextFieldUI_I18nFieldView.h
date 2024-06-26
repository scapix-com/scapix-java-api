// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/ParagraphView.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTFIELDUI_I18NFIELDVIEW_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTFIELDUI_I18NFIELDVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicTextFieldUI_I18nFieldView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicTextFieldUI_I18nFieldView>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicTextFieldUI$I18nFieldView";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::ParagraphView>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTFIELDUI_I18NFIELDVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTFIELDUI_I18NFIELDVIEW)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTFIELDUI_I18NFIELDVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Shape.h>
#include <scapix/java_api/javax/swing/event/DocumentEvent.h>
#include <scapix/java_api/javax/swing/text/Position_Bias.h>
#include <scapix/java_api/javax/swing/text/ViewFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::basic::BasicTextFieldUI_I18nFieldView : public jni::object_base<"javax/swing/plaf/basic/BasicTextFieldUI$I18nFieldView",
	javax::swing::text::ParagraphView>
{
public:

	jint getFlowSpan(jint p1) { return call_method<"getFlowSpan", jint>(p1); }
	void paint(jni::ref<java::awt::Graphics> p1, jni::ref<java::awt::Shape> p2) { return call_method<"paint", void>(p1, p2); }
	jint getResizeWeight(jint p1) { return call_method<"getResizeWeight", jint>(p1); }
	jni::ref<java::awt::Shape> modelToView(jint p1, jni::ref<java::awt::Shape> p2, jni::ref<javax::swing::text::Position_Bias> p3) { return call_method<"modelToView", jni::ref<java::awt::Shape>>(p1, p2, p3); }
	jni::ref<java::awt::Shape> modelToView(jint p1, jni::ref<javax::swing::text::Position_Bias> p2, jint p3, jni::ref<javax::swing::text::Position_Bias> p4, jni::ref<java::awt::Shape> p5) { return call_method<"modelToView", jni::ref<java::awt::Shape>>(p1, p2, p3, p4, p5); }
	jint viewToModel(jfloat p1, jfloat p2, jni::ref<java::awt::Shape> p3, jni::ref<jni::array<javax::swing::text::Position_Bias>> p4) { return call_method<"viewToModel", jint>(p1, p2, p3, p4); }
	void insertUpdate(jni::ref<javax::swing::event::DocumentEvent> p1, jni::ref<java::awt::Shape> p2, jni::ref<javax::swing::text::ViewFactory> p3) { return call_method<"insertUpdate", void>(p1, p2, p3); }
	void removeUpdate(jni::ref<javax::swing::event::DocumentEvent> p1, jni::ref<java::awt::Shape> p2, jni::ref<javax::swing::text::ViewFactory> p3) { return call_method<"removeUpdate", void>(p1, p2, p3); }

protected:

	BasicTextFieldUI_I18nFieldView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTFIELDUI_I18NFIELDVIEW
