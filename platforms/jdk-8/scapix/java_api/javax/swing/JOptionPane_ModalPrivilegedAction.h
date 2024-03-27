// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/PrivilegedAction.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JOPTIONPANE_MODALPRIVILEGEDACTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JOPTIONPANE_MODALPRIVILEGEDACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JOptionPane_ModalPrivilegedAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JOptionPane_ModalPrivilegedAction>
{
	static constexpr fixed_string class_name = "javax/swing/JOptionPane$ModalPrivilegedAction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::PrivilegedAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JOPTIONPANE_MODALPRIVILEGEDACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JOPTIONPANE_MODALPRIVILEGEDACTION)
#define SCAPIX_JAVA_API_JAVAX_SWING_JOPTIONPANE_MODALPRIVILEGEDACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/reflect/Method.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::JOptionPane_ModalPrivilegedAction : public jni::object_base<"javax/swing/JOptionPane$ModalPrivilegedAction",
	java::lang::Object,
	java::security::PrivilegedAction>
{
public:

	static jni::ref<javax::swing::JOptionPane_ModalPrivilegedAction> new_object(jni::ref<java::lang::Class> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::reflect::Method> run() { return call_method<"run", jni::ref<java::lang::reflect::Method>>(); }

protected:

	JOptionPane_ModalPrivilegedAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JOPTIONPANE_MODALPRIVILEGEDACTION