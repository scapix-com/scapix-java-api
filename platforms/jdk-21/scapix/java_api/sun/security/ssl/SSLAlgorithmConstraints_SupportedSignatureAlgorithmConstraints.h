// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/AlgorithmConstraints.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLALGORITHMCONSTRAINTS_SUPPORTEDSIGNATUREALGORITHMCONSTRAINTS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLALGORITHMCONSTRAINTS_SUPPORTEDSIGNATUREALGORITHMCONSTRAINTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLAlgorithmConstraints_SupportedSignatureAlgorithmConstraints; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLAlgorithmConstraints_SupportedSignatureAlgorithmConstraints>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::AlgorithmConstraints>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLALGORITHMCONSTRAINTS_SUPPORTEDSIGNATUREALGORITHMCONSTRAINTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLALGORITHMCONSTRAINTS_SUPPORTEDSIGNATUREALGORITHMCONSTRAINTS)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLALGORITHMCONSTRAINTS_SUPPORTEDSIGNATUREALGORITHMCONSTRAINTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/AlgorithmParameters.h>
#include <scapix/java_api/java/security/Key.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLAlgorithmConstraints_SupportedSignatureAlgorithmConstraints : public jni::object_base<"sun/security/ssl/SSLAlgorithmConstraints$SupportedSignatureAlgorithmConstraints",
	java::lang::Object,
	java::security::AlgorithmConstraints>
{
public:

	jboolean permits(jni::ref<java::util::Set> primitives, jni::ref<java::lang::String> algorithm, jni::ref<java::security::AlgorithmParameters> parameters) { return call_method<"permits", jboolean>(primitives, algorithm, parameters); }
	jboolean permits(jni::ref<java::util::Set> primitives, jni::ref<java::security::Key> key) { return call_method<"permits", jboolean>(primitives, key); }
	jboolean permits(jni::ref<java::util::Set> primitives, jni::ref<java::lang::String> algorithm, jni::ref<java::security::Key> key, jni::ref<java::security::AlgorithmParameters> parameters) { return call_method<"permits", jboolean>(primitives, algorithm, key, parameters); }

protected:

	SSLAlgorithmConstraints_SupportedSignatureAlgorithmConstraints(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLALGORITHMCONSTRAINTS_SUPPORTEDSIGNATUREALGORITHMCONSTRAINTS
