// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/acl/Owner.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_ACL_ACL_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_ACL_ACL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::acl { class Acl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::acl::Acl>
{
	static constexpr fixed_string class_name = "java/security/acl/Acl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::acl::Owner>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_ACL_ACL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_ACL_ACL)
#define SCAPIX_JAVA_API_JAVA_SECURITY_ACL_ACL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Principal.h>
#include <scapix/java_api/java/security/acl/AclEntry.h>
#include <scapix/java_api/java/security/acl/Permission.h>
#include <scapix/java_api/java/util/Enumeration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::acl::Acl : public jni::object_base<"java/security/acl/Acl",
	java::lang::Object,
	java::security::acl::Owner>
{
public:

	void setName(jni::ref<java::security::Principal> p1, jni::ref<java::lang::String> p2) { return call_method<"setName", void>(p1, p2); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jboolean addEntry(jni::ref<java::security::Principal> p1, jni::ref<java::security::acl::AclEntry> p2) { return call_method<"addEntry", jboolean>(p1, p2); }
	jboolean removeEntry(jni::ref<java::security::Principal> p1, jni::ref<java::security::acl::AclEntry> p2) { return call_method<"removeEntry", jboolean>(p1, p2); }
	jni::ref<java::util::Enumeration> getPermissions(jni::ref<java::security::Principal> p1) { return call_method<"getPermissions", jni::ref<java::util::Enumeration>>(p1); }
	jni::ref<java::util::Enumeration> entries() { return call_method<"entries", jni::ref<java::util::Enumeration>>(); }
	jboolean checkPermission(jni::ref<java::security::Principal> p1, jni::ref<java::security::acl::Permission> p2) { return call_method<"checkPermission", jboolean>(p1, p2); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Acl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_ACL_ACL
