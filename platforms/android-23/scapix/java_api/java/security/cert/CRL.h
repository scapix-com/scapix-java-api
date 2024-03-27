// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CRL_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CRL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::cert { class CRL; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::cert::CRL>
{
	static constexpr fixed_string class_name = "java/security/cert/CRL";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CRL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CRL)
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CRL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/cert/Certificate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::cert::CRL : public jni::object_base<"java/security/cert/CRL",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> getType() { return call_method<"getType", jni::ref<java::lang::String>>(); }
	jboolean isRevoked(jni::ref<java::security::cert::Certificate> p1) { return call_method<"isRevoked", jboolean>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	CRL(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_CRL
