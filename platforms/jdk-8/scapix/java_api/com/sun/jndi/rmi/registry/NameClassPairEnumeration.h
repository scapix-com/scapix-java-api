// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/naming/NamingEnumeration.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_RMI_REGISTRY_NAMECLASSPAIRENUMERATION_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_RMI_REGISTRY_NAMECLASSPAIRENUMERATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::rmi::registry { class NameClassPairEnumeration; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::rmi::registry::NameClassPairEnumeration>
{
	static constexpr fixed_string class_name = "com/sun/jndi/rmi/registry/NameClassPairEnumeration";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::naming::NamingEnumeration>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_RMI_REGISTRY_NAMECLASSPAIRENUMERATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_RMI_REGISTRY_NAMECLASSPAIRENUMERATION)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_RMI_REGISTRY_NAMECLASSPAIRENUMERATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/naming/NameClassPair.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jndi::rmi::registry::NameClassPairEnumeration : public jni::object_base<"com/sun/jndi/rmi/registry/NameClassPairEnumeration",
	java::lang::Object,
	javax::naming::NamingEnumeration>
{
public:

	jboolean hasMore() { return call_method<"hasMore", jboolean>(); }
	jni::ref<javax::naming::NameClassPair> next() { return call_method<"next", jni::ref<javax::naming::NameClassPair>>(); }
	jboolean hasMoreElements() { return call_method<"hasMoreElements", jboolean>(); }
	jni::ref<javax::naming::NameClassPair> nextElement() { return call_method<"nextElement", jni::ref<javax::naming::NameClassPair>>(); }
	void close() { return call_method<"close", void>(); }

protected:

	NameClassPairEnumeration(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_RMI_REGISTRY_NAMECLASSPAIRENUMERATION
