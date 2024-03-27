// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_ACL_ACLENTRY_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_ACL_ACLENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::acl { class AclEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::acl::AclEntry>
{
	static constexpr fixed_string class_name = "java/security/acl/AclEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_ACL_ACLENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_ACL_ACLENTRY)
#define SCAPIX_JAVA_API_JAVA_SECURITY_ACL_ACLENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Principal.h>
#include <scapix/java_api/java/security/acl/Permission.h>
#include <scapix/java_api/java/util/Enumeration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::acl::AclEntry : public jni::object_base<"java/security/acl/AclEntry",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	jboolean setPrincipal(jni::ref<java::security::Principal> p1) { return call_method<"setPrincipal", jboolean>(p1); }
	jni::ref<java::security::Principal> getPrincipal() { return call_method<"getPrincipal", jni::ref<java::security::Principal>>(); }
	void setNegativePermissions() { return call_method<"setNegativePermissions", void>(); }
	jboolean isNegative() { return call_method<"isNegative", jboolean>(); }
	jboolean addPermission(jni::ref<java::security::acl::Permission> p1) { return call_method<"addPermission", jboolean>(p1); }
	jboolean removePermission(jni::ref<java::security::acl::Permission> p1) { return call_method<"removePermission", jboolean>(p1); }
	jboolean checkPermission(jni::ref<java::security::acl::Permission> p1) { return call_method<"checkPermission", jboolean>(p1); }
	jni::ref<java::util::Enumeration> permissions() { return call_method<"permissions", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	AclEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_ACL_ACLENTRY
