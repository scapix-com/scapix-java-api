// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYPARSER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYPARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider { class PolicyParser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::PolicyParser>
{
	static constexpr fixed_string class_name = "sun/security/provider/PolicyParser";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYPARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYPARSER)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYPARSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/Reader.h>
#include <scapix/java_api/java/io/Writer.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/sun/security/provider/PolicyParser_GrantEntry.h>
#include <scapix/java_api/sun/security/provider/PolicyParser_ParsingException.h>
#include <scapix/java_api/sun/security/provider/PolicyParser_PermissionEntry.h>
#include <scapix/java_api/sun/security/provider/PolicyParser_PrincipalEntry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::provider::PolicyParser : public jni::object_base<"sun/security/provider/PolicyParser",
	java::lang::Object>
{
public:

	using ParsingException = PolicyParser_ParsingException;
	using PermissionEntry = PolicyParser_PermissionEntry;
	using PrincipalEntry = PolicyParser_PrincipalEntry;
	using GrantEntry = PolicyParser_GrantEntry;

	static jni::ref<sun::security::provider::PolicyParser> new_object() { return base_::new_object(); }
	static jni::ref<sun::security::provider::PolicyParser> new_object(jboolean expandProp) { return base_::new_object(expandProp); }
	void read(jni::ref<java::io::Reader> policy) { return call_method<"read", void>(policy); }
	void add(jni::ref<sun::security::provider::PolicyParser_GrantEntry> ge) { return call_method<"add", void>(ge); }
	void replace(jni::ref<sun::security::provider::PolicyParser_GrantEntry> origGe, jni::ref<sun::security::provider::PolicyParser_GrantEntry> newGe) { return call_method<"replace", void>(origGe, newGe); }
	jboolean remove(jni::ref<sun::security::provider::PolicyParser_GrantEntry> ge) { return call_method<"remove", jboolean>(ge); }
	jni::ref<java::lang::String> getKeyStoreUrl() { return call_method<"getKeyStoreUrl", jni::ref<java::lang::String>>(); }
	void setKeyStoreUrl(jni::ref<java::lang::String> url) { return call_method<"setKeyStoreUrl", void>(url); }
	jni::ref<java::lang::String> getKeyStoreType() { return call_method<"getKeyStoreType", jni::ref<java::lang::String>>(); }
	void setKeyStoreType(jni::ref<java::lang::String> type) { return call_method<"setKeyStoreType", void>(type); }
	jni::ref<java::lang::String> getKeyStoreProvider() { return call_method<"getKeyStoreProvider", jni::ref<java::lang::String>>(); }
	void setKeyStoreProvider(jni::ref<java::lang::String> provider) { return call_method<"setKeyStoreProvider", void>(provider); }
	jni::ref<java::lang::String> getStorePassURL() { return call_method<"getStorePassURL", jni::ref<java::lang::String>>(); }
	void setStorePassURL(jni::ref<java::lang::String> storePassURL) { return call_method<"setStorePassURL", void>(storePassURL); }
	jni::ref<java::util::Enumeration> grantElements() { return call_method<"grantElements", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::util::Collection> getDomainEntries() { return call_method<"getDomainEntries", jni::ref<java::util::Collection>>(); }
	void write(jni::ref<java::io::Writer> policy) { return call_method<"write", void>(policy); }
	static void main(jni::ref<jni::array<java::lang::String>> arg) { return call_static_method<"main", void>(arg); }

protected:

	PolicyParser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_POLICYPARSER
