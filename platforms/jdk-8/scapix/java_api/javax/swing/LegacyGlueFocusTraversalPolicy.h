// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/FocusTraversalPolicy.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_LEGACYGLUEFOCUSTRAVERSALPOLICY_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_LEGACYGLUEFOCUSTRAVERSALPOLICY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class LegacyGlueFocusTraversalPolicy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::LegacyGlueFocusTraversalPolicy>
{
	static constexpr fixed_string class_name = "javax/swing/LegacyGlueFocusTraversalPolicy";
	using base_classes = std::tuple<scapix::java_api::java::awt::FocusTraversalPolicy, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_LEGACYGLUEFOCUSTRAVERSALPOLICY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_LEGACYGLUEFOCUSTRAVERSALPOLICY)
#define SCAPIX_JAVA_API_JAVAX_SWING_LEGACYGLUEFOCUSTRAVERSALPOLICY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Container.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::LegacyGlueFocusTraversalPolicy : public jni::object_base<"javax/swing/LegacyGlueFocusTraversalPolicy",
	java::awt::FocusTraversalPolicy,
	java::io::Serializable>
{
public:

	jni::ref<java::awt::Component> getComponentAfter(jni::ref<java::awt::Container> p1, jni::ref<java::awt::Component> p2) { return call_method<"getComponentAfter", jni::ref<java::awt::Component>>(p1, p2); }
	jni::ref<java::awt::Component> getComponentBefore(jni::ref<java::awt::Container> p1, jni::ref<java::awt::Component> p2) { return call_method<"getComponentBefore", jni::ref<java::awt::Component>>(p1, p2); }
	jni::ref<java::awt::Component> getFirstComponent(jni::ref<java::awt::Container> p1) { return call_method<"getFirstComponent", jni::ref<java::awt::Component>>(p1); }
	jni::ref<java::awt::Component> getLastComponent(jni::ref<java::awt::Container> p1) { return call_method<"getLastComponent", jni::ref<java::awt::Component>>(p1); }
	jni::ref<java::awt::Component> getDefaultComponent(jni::ref<java::awt::Container> p1) { return call_method<"getDefaultComponent", jni::ref<java::awt::Component>>(p1); }

protected:

	LegacyGlueFocusTraversalPolicy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_LEGACYGLUEFOCUSTRAVERSALPOLICY
