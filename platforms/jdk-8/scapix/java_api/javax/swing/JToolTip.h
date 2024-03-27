// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JTOOLTIP_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JTOOLTIP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JToolTip; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JToolTip>
{
	static constexpr fixed_string class_name = "javax/swing/JToolTip";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JComponent, scapix::java_api::javax::accessibility::Accessible>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JTOOLTIP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JTOOLTIP)
#define SCAPIX_JAVA_API_JAVAX_SWING_JTOOLTIP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#include <scapix/java_api/javax/swing/plaf/ToolTipUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::JToolTip : public jni::object_base<"javax/swing/JToolTip",
	javax::swing::JComponent,
	javax::accessibility::Accessible>
{
public:

	static jni::ref<javax::swing::JToolTip> new_object() { return base_::new_object(); }
	jni::ref<javax::swing::plaf::ToolTipUI> getUI() { return call_method<"getUI", jni::ref<javax::swing::plaf::ToolTipUI>>(); }
	void updateUI() { return call_method<"updateUI", void>(); }
	jni::ref<java::lang::String> getUIClassID() { return call_method<"getUIClassID", jni::ref<java::lang::String>>(); }
	void setTipText(jni::ref<java::lang::String> p1) { return call_method<"setTipText", void>(p1); }
	jni::ref<java::lang::String> getTipText() { return call_method<"getTipText", jni::ref<java::lang::String>>(); }
	void setComponent(jni::ref<javax::swing::JComponent> p1) { return call_method<"setComponent", void>(p1); }
	jni::ref<javax::swing::JComponent> getComponent() { return call_method<"getComponent", jni::ref<javax::swing::JComponent>>(); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	JToolTip(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JTOOLTIP
