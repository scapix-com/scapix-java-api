// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_USERACL_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_USERACL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp { class UserAcl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::UserAcl>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/UserAcl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_USERACL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_USERACL)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_USERACL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::snmp::UserAcl : public jni::object_base<"com/sun/jmx/snmp/UserAcl",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jboolean checkReadPermission(jni::ref<java::lang::String> p1) { return call_method<"checkReadPermission", jboolean>(p1); }
	jboolean checkReadPermission(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jint p3) { return call_method<"checkReadPermission", jboolean>(p1, p2, p3); }
	jboolean checkContextName(jni::ref<java::lang::String> p1) { return call_method<"checkContextName", jboolean>(p1); }
	jboolean checkWritePermission(jni::ref<java::lang::String> p1) { return call_method<"checkWritePermission", jboolean>(p1); }
	jboolean checkWritePermission(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jint p3) { return call_method<"checkWritePermission", jboolean>(p1, p2, p3); }

protected:

	UserAcl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_USERACL
