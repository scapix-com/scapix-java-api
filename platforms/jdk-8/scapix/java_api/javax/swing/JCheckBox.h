// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JToggleButton.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JCHECKBOX_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JCHECKBOX_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JCheckBox; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JCheckBox>
{
	static constexpr fixed_string class_name = "javax/swing/JCheckBox";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JToggleButton, scapix::java_api::javax::accessibility::Accessible>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JCHECKBOX_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JCHECKBOX)
#define SCAPIX_JAVA_API_JAVAX_SWING_JCHECKBOX

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#include <scapix/java_api/javax/swing/Action.h>
#include <scapix/java_api/javax/swing/Icon.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::JCheckBox : public jni::object_base<"javax/swing/JCheckBox",
	javax::swing::JToggleButton,
	javax::accessibility::Accessible>
{
public:

	static jni::ref<java::lang::String> BORDER_PAINTED_FLAT_CHANGED_PROPERTY() { return get_static_field<"BORDER_PAINTED_FLAT_CHANGED_PROPERTY", jni::ref<java::lang::String>>(); }

	static jni::ref<javax::swing::JCheckBox> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::JCheckBox> new_object(jni::ref<javax::swing::Icon> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::JCheckBox> new_object(jni::ref<javax::swing::Icon> p1, jboolean p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::swing::JCheckBox> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::JCheckBox> new_object(jni::ref<javax::swing::Action> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::JCheckBox> new_object(jni::ref<java::lang::String> p1, jboolean p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::swing::JCheckBox> new_object(jni::ref<java::lang::String> p1, jni::ref<javax::swing::Icon> p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::swing::JCheckBox> new_object(jni::ref<java::lang::String> p1, jni::ref<javax::swing::Icon> p2, jboolean p3) { return base_::new_object(p1, p2, p3); }
	void setBorderPaintedFlat(jboolean p1) { return call_method<"setBorderPaintedFlat", void>(p1); }
	jboolean isBorderPaintedFlat() { return call_method<"isBorderPaintedFlat", jboolean>(); }
	void updateUI() { return call_method<"updateUI", void>(); }
	jni::ref<java::lang::String> getUIClassID() { return call_method<"getUIClassID", jni::ref<java::lang::String>>(); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	JCheckBox(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JCHECKBOX
