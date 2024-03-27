// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRANSPORT_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRANSPORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLTransport; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLTransport>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLTransport";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRANSPORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRANSPORT)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRANSPORT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/sun/security/ssl/Plaintext.h>
#include <scapix/java_api/sun/security/ssl/TransportContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLTransport : public jni::object_base<"sun/security/ssl/SSLTransport",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> getPeerHost() { return call_method<"getPeerHost", jni::ref<java::lang::String>>(); }
	jint getPeerPort() { return call_method<"getPeerPort", jint>(); }
	void shutdown() { return call_method<"shutdown", void>(); }
	jboolean useDelegatedTask() { return call_method<"useDelegatedTask", jboolean>(); }
	static jni::ref<sun::security::ssl::Plaintext> decode(jni::ref<sun::security::ssl::TransportContext> context, jni::ref<jni::array<java::nio::ByteBuffer>> srcs, jint srcsOffset, jint srcsLength, jni::ref<jni::array<java::nio::ByteBuffer>> dsts, jint dstsOffset, jint dstsLength) { return call_static_method<"decode", jni::ref<sun::security::ssl::Plaintext>>(context, srcs, srcsOffset, srcsLength, dsts, dstsOffset, dstsLength); }

protected:

	SSLTransport(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRANSPORT
