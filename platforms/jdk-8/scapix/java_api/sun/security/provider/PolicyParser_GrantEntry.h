// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYPARSER_GRANTENTRY_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYPARSER_GRANTENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider { class PolicyParser_GrantEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::PolicyParser_GrantEntry>
{
	static constexpr fixed_string class_name = "sun/security/provider/PolicyParser$GrantEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYPARSER_GRANTENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYPARSER_GRANTENTRY)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYPARSER_GRANTENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/PrintWriter.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/LinkedList.h>
#include <scapix/java_api/java/util/Vector.h>
#include <scapix/java_api/sun/security/provider/PolicyParser_PermissionEntry.h>
#include <scapix/java_api/sun/security/provider/PolicyParser_PrincipalEntry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::provider::PolicyParser_GrantEntry : public jni::object_base<"sun/security/provider/PolicyParser$GrantEntry",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> signedBy() { return get_field<"signedBy", jni::ref<java::lang::String>>(); }
	void signedBy(jni::ref<java::lang::String> v) { set_field<"signedBy", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> codeBase() { return get_field<"codeBase", jni::ref<java::lang::String>>(); }
	void codeBase(jni::ref<java::lang::String> v) { set_field<"codeBase", jni::ref<java::lang::String>>(v); }
	jni::ref<java::util::LinkedList> principals() { return get_field<"principals", jni::ref<java::util::LinkedList>>(); }
	void principals(jni::ref<java::util::LinkedList> v) { set_field<"principals", jni::ref<java::util::LinkedList>>(v); }
	jni::ref<java::util::Vector> permissionEntries() { return get_field<"permissionEntries", jni::ref<java::util::Vector>>(); }
	void permissionEntries(jni::ref<java::util::Vector> v) { set_field<"permissionEntries", jni::ref<java::util::Vector>>(v); }

	static jni::ref<sun::security::provider::PolicyParser_GrantEntry> new_object() { return base_::new_object(); }
	static jni::ref<sun::security::provider::PolicyParser_GrantEntry> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	void add(jni::ref<sun::security::provider::PolicyParser_PermissionEntry> p1) { return call_method<"add", void>(p1); }
	jboolean remove(jni::ref<sun::security::provider::PolicyParser_PrincipalEntry> p1) { return call_method<"remove", jboolean>(p1); }
	jboolean remove(jni::ref<sun::security::provider::PolicyParser_PermissionEntry> p1) { return call_method<"remove", jboolean>(p1); }
	jboolean contains(jni::ref<sun::security::provider::PolicyParser_PrincipalEntry> p1) { return call_method<"contains", jboolean>(p1); }
	jboolean contains(jni::ref<sun::security::provider::PolicyParser_PermissionEntry> p1) { return call_method<"contains", jboolean>(p1); }
	jni::ref<java::util::Enumeration> permissionElements() { return call_method<"permissionElements", jni::ref<java::util::Enumeration>>(); }
	void write(jni::ref<java::io::PrintWriter> p1) { return call_method<"write", void>(p1); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	PolicyParser_GrantEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYPARSER_GRANTENTRY
