// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_CERTIFICATE_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERTIFICATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class Certificate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::Certificate>
{
	static constexpr fixed_string class_name = "java/security/Certificate";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERTIFICATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_CERTIFICATE)
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERTIFICATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Principal.h>
#include <scapix/java_api/java/security/PublicKey.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::Certificate : public jni::object_base<"java/security/Certificate",
	java::lang::Object>
{
public:

	jni::ref<java::security::Principal> getGuarantor() { return call_method<"getGuarantor", jni::ref<java::security::Principal>>(); }
	jni::ref<java::security::Principal> getPrincipal() { return call_method<"getPrincipal", jni::ref<java::security::Principal>>(); }
	jni::ref<java::security::PublicKey> getPublicKey() { return call_method<"getPublicKey", jni::ref<java::security::PublicKey>>(); }
	void encode(jni::ref<java::io::OutputStream> p1) { return call_method<"encode", void>(p1); }
	void decode(jni::ref<java::io::InputStream> p1) { return call_method<"decode", void>(p1); }
	jni::ref<java::lang::String> getFormat() { return call_method<"getFormat", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString(jboolean p1) { return call_method<"toString", jni::ref<java::lang::String>>(p1); }

protected:

	Certificate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERTIFICATE
