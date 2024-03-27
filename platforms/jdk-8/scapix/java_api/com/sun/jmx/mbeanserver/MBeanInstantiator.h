// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANINSTANTIATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANINSTANTIATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::mbeanserver { class MBeanInstantiator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::mbeanserver::MBeanInstantiator>
{
	static constexpr fixed_string class_name = "com/sun/jmx/mbeanserver/MBeanInstantiator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANINSTANTIATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANINSTANTIATOR)
#define SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANINSTANTIATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/mbeanserver/ModifiableClassLoaderRepository.h>
#include <scapix/java_api/java/io/ObjectInputStream.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/management/ObjectName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::mbeanserver::MBeanInstantiator : public jni::object_base<"com/sun/jmx/mbeanserver/MBeanInstantiator",
	java::lang::Object>
{
public:

	void testCreation(jni::ref<java::lang::Class> p1) { return call_method<"testCreation", void>(p1); }
	jni::ref<java::lang::Class> findClassWithDefaultLoaderRepository(jni::ref<java::lang::String> p1) { return call_method<"findClassWithDefaultLoaderRepository", jni::ref<java::lang::Class>>(p1); }
	jni::ref<java::lang::Class> findClass(jni::ref<java::lang::String> p1, jni::ref<java::lang::ClassLoader> p2) { return call_method<"findClass", jni::ref<java::lang::Class>>(p1, p2); }
	jni::ref<java::lang::Class> findClass(jni::ref<java::lang::String> p1, jni::ref<javax::management::ObjectName> p2) { return call_method<"findClass", jni::ref<java::lang::Class>>(p1, p2); }
	jni::ref<jni::array<java::lang::Class>> findSignatureClasses(jni::ref<jni::array<java::lang::String>> p1, jni::ref<java::lang::ClassLoader> p2) { return call_method<"findSignatureClasses", jni::ref<jni::array<java::lang::Class>>>(p1, p2); }
	jni::ref<java::lang::Object> instantiate(jni::ref<java::lang::Class> p1) { return call_method<"instantiate", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> instantiate(jni::ref<java::lang::Class> p1, jni::ref<jni::array<java::lang::Object>> p2, jni::ref<jni::array<java::lang::String>> p3, jni::ref<java::lang::ClassLoader> p4) { return call_method<"instantiate", jni::ref<java::lang::Object>>(p1, p2, p3, p4); }
	jni::ref<java::io::ObjectInputStream> deserialize(jni::ref<java::lang::ClassLoader> p1, jni::ref<jni::array<jbyte>> p2) { return call_method<"deserialize", jni::ref<java::io::ObjectInputStream>>(p1, p2); }
	jni::ref<java::io::ObjectInputStream> deserialize(jni::ref<java::lang::String> p1, jni::ref<javax::management::ObjectName> p2, jni::ref<jni::array<jbyte>> p3, jni::ref<java::lang::ClassLoader> p4) { return call_method<"deserialize", jni::ref<java::io::ObjectInputStream>>(p1, p2, p3, p4); }
	jni::ref<java::lang::Object> instantiate(jni::ref<java::lang::String> p1) { return call_method<"instantiate", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> instantiate(jni::ref<java::lang::String> p1, jni::ref<javax::management::ObjectName> p2, jni::ref<java::lang::ClassLoader> p3) { return call_method<"instantiate", jni::ref<java::lang::Object>>(p1, p2, p3); }
	jni::ref<java::lang::Object> instantiate(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::Object>> p2, jni::ref<jni::array<java::lang::String>> p3, jni::ref<java::lang::ClassLoader> p4) { return call_method<"instantiate", jni::ref<java::lang::Object>>(p1, p2, p3, p4); }
	jni::ref<java::lang::Object> instantiate(jni::ref<java::lang::String> p1, jni::ref<javax::management::ObjectName> p2, jni::ref<jni::array<java::lang::Object>> p3, jni::ref<jni::array<java::lang::String>> p4, jni::ref<java::lang::ClassLoader> p5) { return call_method<"instantiate", jni::ref<java::lang::Object>>(p1, p2, p3, p4, p5); }
	jni::ref<com::sun::jmx::mbeanserver::ModifiableClassLoaderRepository> getClassLoaderRepository() { return call_method<"getClassLoaderRepository", jni::ref<com::sun::jmx::mbeanserver::ModifiableClassLoaderRepository>>(); }

protected:

	MBeanInstantiator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_MBEANSERVER_MBEANINSTANTIATOR