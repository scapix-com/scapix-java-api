// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_JMX_INTROSPECTOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_JMX_INTROSPECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::management::jmx { class Introspector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::management::jmx::Introspector>
{
	static constexpr fixed_string class_name = "com/sun/management/jmx/Introspector";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_JMX_INTROSPECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_JMX_INTROSPECTOR)
#define SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_JMX_INTROSPECTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/javax/management/MBeanInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::management::jmx::Introspector : public jni::object_base<"com/sun/management/jmx/Introspector",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::management::jmx::Introspector> new_object() { return base_::new_object(); }
	static jni::ref<javax::management::MBeanInfo> testCompliance(jni::ref<java::lang::Class> p1) { return call_static_method<"testCompliance", jni::ref<javax::management::MBeanInfo>>(p1); }
	static jni::ref<java::lang::Class> getMBeanInterface(jni::ref<java::lang::Class> p1) { return call_static_method<"getMBeanInterface", jni::ref<java::lang::Class>>(p1); }

protected:

	Introspector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_JMX_INTROSPECTOR
