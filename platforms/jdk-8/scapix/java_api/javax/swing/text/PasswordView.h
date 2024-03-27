// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/FieldView.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_PASSWORDVIEW_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_PASSWORDVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class PasswordView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::PasswordView>
{
	static constexpr fixed_string class_name = "javax/swing/text/PasswordView";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::FieldView>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_PASSWORDVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_PASSWORDVIEW)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_PASSWORDVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Shape.h>
#include <scapix/java_api/javax/swing/text/Element.h>
#include <scapix/java_api/javax/swing/text/Position_Bias.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::PasswordView : public jni::object_base<"javax/swing/text/PasswordView",
	javax::swing::text::FieldView>
{
public:

	static jni::ref<javax::swing::text::PasswordView> new_object(jni::ref<javax::swing::text::Element> p1) { return base_::new_object(p1); }
	jni::ref<java::awt::Shape> modelToView(jint p1, jni::ref<java::awt::Shape> p2, jni::ref<javax::swing::text::Position_Bias> p3) { return call_method<"modelToView", jni::ref<java::awt::Shape>>(p1, p2, p3); }
	jint viewToModel(jfloat p1, jfloat p2, jni::ref<java::awt::Shape> p3, jni::ref<jni::array<javax::swing::text::Position_Bias>> p4) { return call_method<"viewToModel", jint>(p1, p2, p3, p4); }
	jfloat getPreferredSpan(jint p1) { return call_method<"getPreferredSpan", jfloat>(p1); }

protected:

	PasswordView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_PASSWORDVIEW
