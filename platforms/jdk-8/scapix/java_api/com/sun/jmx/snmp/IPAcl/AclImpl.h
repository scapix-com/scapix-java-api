// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jmx/snmp/IPAcl/OwnerImpl.h>
#include <scapix/java_api/java/security/acl/Acl.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_ACLIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_ACLIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::snmp::IPAcl { class AclImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::snmp::IPAcl::AclImpl>
{
	static constexpr fixed_string class_name = "com/sun/jmx/snmp/IPAcl/AclImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::jmx::snmp::IPAcl::OwnerImpl, scapix::java_api::java::security::acl::Acl, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_ACLIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_ACLIMPL)
#define SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_ACLIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/snmp/IPAcl/PrincipalImpl.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Principal.h>
#include <scapix/java_api/java/security/acl/AclEntry.h>
#include <scapix/java_api/java/security/acl/Permission.h>
#include <scapix/java_api/java/util/Enumeration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jmx::snmp::IPAcl::AclImpl : public jni::object_base<"com/sun/jmx/snmp/IPAcl/AclImpl",
	com::sun::jmx::snmp::IPAcl::OwnerImpl,
	java::security::acl::Acl,
	java::io::Serializable>
{
public:

	static jni::ref<com::sun::jmx::snmp::IPAcl::AclImpl> new_object(jni::ref<com::sun::jmx::snmp::IPAcl::PrincipalImpl> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	void setName(jni::ref<java::security::Principal> p1, jni::ref<java::lang::String> p2) { return call_method<"setName", void>(p1, p2); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jboolean addEntry(jni::ref<java::security::Principal> p1, jni::ref<java::security::acl::AclEntry> p2) { return call_method<"addEntry", jboolean>(p1, p2); }
	jboolean removeEntry(jni::ref<java::security::Principal> p1, jni::ref<java::security::acl::AclEntry> p2) { return call_method<"removeEntry", jboolean>(p1, p2); }
	void removeAll(jni::ref<java::security::Principal> p1) { return call_method<"removeAll", void>(p1); }
	jni::ref<java::util::Enumeration> getPermissions(jni::ref<java::security::Principal> p1) { return call_method<"getPermissions", jni::ref<java::util::Enumeration>>(p1); }
	jni::ref<java::util::Enumeration> entries() { return call_method<"entries", jni::ref<java::util::Enumeration>>(); }
	jboolean checkPermission(jni::ref<java::security::Principal> p1, jni::ref<java::security::acl::Permission> p2) { return call_method<"checkPermission", jboolean>(p1, p2); }
	jboolean checkPermission(jni::ref<java::security::Principal> p1, jni::ref<java::lang::String> p2, jni::ref<java::security::acl::Permission> p3) { return call_method<"checkPermission", jboolean>(p1, p2, p3); }
	jboolean checkCommunity(jni::ref<java::lang::String> p1) { return call_method<"checkCommunity", jboolean>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AclImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_SNMP_IPACL_ACLIMPL
