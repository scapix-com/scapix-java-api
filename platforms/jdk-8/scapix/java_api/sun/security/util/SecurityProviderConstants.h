// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SECURITYPROVIDERCONSTANTS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SECURITYPROVIDERCONSTANTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class SecurityProviderConstants; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::SecurityProviderConstants>
{
	static constexpr fixed_string class_name = "sun/security/util/SecurityProviderConstants";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SECURITYPROVIDERCONSTANTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SECURITYPROVIDERCONSTANTS)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SECURITYPROVIDERCONSTANTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/javax/crypto/spec/DHParameterSpec.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::SecurityProviderConstants : public jni::object_base<"sun/security/util/SecurityProviderConstants",
	java::lang::Object>
{
public:

	static jint DEF_DSA_KEY_SIZE() { return get_static_field<"DEF_DSA_KEY_SIZE", jint>(); }
	static jint DEF_RSA_KEY_SIZE() { return get_static_field<"DEF_RSA_KEY_SIZE", jint>(); }
	static jint DEF_RSASSA_PSS_KEY_SIZE() { return get_static_field<"DEF_RSASSA_PSS_KEY_SIZE", jint>(); }
	static jint DEF_DH_KEY_SIZE() { return get_static_field<"DEF_DH_KEY_SIZE", jint>(); }
	static jint DEF_EC_KEY_SIZE() { return get_static_field<"DEF_EC_KEY_SIZE", jint>(); }

	static jni::ref<java::util::List> getAliases(jni::ref<java::lang::String> p1) { return call_static_method<"getAliases", jni::ref<java::util::List>>(p1); }
	static jint getDefDSASubprimeSize(jint p1) { return call_static_method<"getDefDSASubprimeSize", jint>(p1); }
	static jint getDefDHPrivateExpSize(jni::ref<javax::crypto::spec::DHParameterSpec> p1) { return call_static_method<"getDefDHPrivateExpSize", jint>(p1); }

protected:

	SecurityProviderConstants(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_SECURITYPROVIDERCONSTANTS