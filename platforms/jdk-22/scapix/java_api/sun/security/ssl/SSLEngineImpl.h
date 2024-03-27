// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/net/ssl/SSLEngine.h>
#include <scapix/java_api/sun/security/ssl/SSLTransport.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLENGINEIMPL_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLENGINEIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLEngineImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLEngineImpl>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLEngineImpl";
	using base_classes = std::tuple<scapix::java_api::javax::net::ssl::SSLEngine, scapix::java_api::sun::security::ssl::SSLTransport>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLENGINEIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLENGINEIMPL)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLENGINEIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/util/function/BiFunction.h>
#include <scapix/java_api/javax/net/ssl/SSLEngineResult.h>
#include <scapix/java_api/javax/net/ssl/SSLEngineResult_HandshakeStatus.h>
#include <scapix/java_api/javax/net/ssl/SSLParameters.h>
#include <scapix/java_api/javax/net/ssl/SSLSession.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLEngineImpl : public jni::object_base<"sun/security/ssl/SSLEngineImpl",
	javax::net::ssl::SSLEngine,
	sun::security::ssl::SSLTransport>
{
public:

	void beginHandshake() { return call_method<"beginHandshake", void>(); }
	jni::ref<javax::net::ssl::SSLEngineResult> wrap(jni::ref<jni::array<java::nio::ByteBuffer>> appData, jint offset, jint length, jni::ref<java::nio::ByteBuffer> netData) { return call_method<"wrap", jni::ref<javax::net::ssl::SSLEngineResult>>(appData, offset, length, netData); }
	jni::ref<javax::net::ssl::SSLEngineResult> wrap(jni::ref<jni::array<java::nio::ByteBuffer>> srcs, jint srcsOffset, jint srcsLength, jni::ref<jni::array<java::nio::ByteBuffer>> dsts, jint dstsOffset, jint dstsLength) { return call_method<"wrap", jni::ref<javax::net::ssl::SSLEngineResult>>(srcs, srcsOffset, srcsLength, dsts, dstsOffset, dstsLength); }
	jni::ref<javax::net::ssl::SSLEngineResult> unwrap(jni::ref<java::nio::ByteBuffer> src, jni::ref<jni::array<java::nio::ByteBuffer>> dsts, jint offset, jint length) { return call_method<"unwrap", jni::ref<javax::net::ssl::SSLEngineResult>>(src, dsts, offset, length); }
	jni::ref<javax::net::ssl::SSLEngineResult> unwrap(jni::ref<jni::array<java::nio::ByteBuffer>> srcs, jint srcsOffset, jint srcsLength, jni::ref<jni::array<java::nio::ByteBuffer>> dsts, jint dstsOffset, jint dstsLength) { return call_method<"unwrap", jni::ref<javax::net::ssl::SSLEngineResult>>(srcs, srcsOffset, srcsLength, dsts, dstsOffset, dstsLength); }
	jni::ref<java::lang::Runnable> getDelegatedTask() { return call_method<"getDelegatedTask", jni::ref<java::lang::Runnable>>(); }
	void closeInbound() { return call_method<"closeInbound", void>(); }
	jboolean isInboundDone() { return call_method<"isInboundDone", jboolean>(); }
	void closeOutbound() { return call_method<"closeOutbound", void>(); }
	jboolean isOutboundDone() { return call_method<"isOutboundDone", jboolean>(); }
	jni::ref<jni::array<java::lang::String>> getSupportedCipherSuites() { return call_method<"getSupportedCipherSuites", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> getEnabledCipherSuites() { return call_method<"getEnabledCipherSuites", jni::ref<jni::array<java::lang::String>>>(); }
	void setEnabledCipherSuites(jni::ref<jni::array<java::lang::String>> suites) { return call_method<"setEnabledCipherSuites", void>(suites); }
	jni::ref<jni::array<java::lang::String>> getSupportedProtocols() { return call_method<"getSupportedProtocols", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> getEnabledProtocols() { return call_method<"getEnabledProtocols", jni::ref<jni::array<java::lang::String>>>(); }
	void setEnabledProtocols(jni::ref<jni::array<java::lang::String>> protocols) { return call_method<"setEnabledProtocols", void>(protocols); }
	jni::ref<javax::net::ssl::SSLSession> getSession() { return call_method<"getSession", jni::ref<javax::net::ssl::SSLSession>>(); }
	jni::ref<javax::net::ssl::SSLSession> getHandshakeSession() { return call_method<"getHandshakeSession", jni::ref<javax::net::ssl::SSLSession>>(); }
	jni::ref<javax::net::ssl::SSLEngineResult_HandshakeStatus> getHandshakeStatus() { return call_method<"getHandshakeStatus", jni::ref<javax::net::ssl::SSLEngineResult_HandshakeStatus>>(); }
	void setUseClientMode(jboolean mode) { return call_method<"setUseClientMode", void>(mode); }
	jboolean getUseClientMode() { return call_method<"getUseClientMode", jboolean>(); }
	void setNeedClientAuth(jboolean need) { return call_method<"setNeedClientAuth", void>(need); }
	jboolean getNeedClientAuth() { return call_method<"getNeedClientAuth", jboolean>(); }
	void setWantClientAuth(jboolean want) { return call_method<"setWantClientAuth", void>(want); }
	jboolean getWantClientAuth() { return call_method<"getWantClientAuth", jboolean>(); }
	void setEnableSessionCreation(jboolean flag) { return call_method<"setEnableSessionCreation", void>(flag); }
	jboolean getEnableSessionCreation() { return call_method<"getEnableSessionCreation", jboolean>(); }
	jni::ref<javax::net::ssl::SSLParameters> getSSLParameters() { return call_method<"getSSLParameters", jni::ref<javax::net::ssl::SSLParameters>>(); }
	void setSSLParameters(jni::ref<javax::net::ssl::SSLParameters> params) { return call_method<"setSSLParameters", void>(params); }
	jni::ref<java::lang::String> getApplicationProtocol() { return call_method<"getApplicationProtocol", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getHandshakeApplicationProtocol() { return call_method<"getHandshakeApplicationProtocol", jni::ref<java::lang::String>>(); }
	void setHandshakeApplicationProtocolSelector(jni::ref<java::util::function::BiFunction> selector) { return call_method<"setHandshakeApplicationProtocolSelector", void>(selector); }
	jni::ref<java::util::function::BiFunction> getHandshakeApplicationProtocolSelector() { return call_method<"getHandshakeApplicationProtocolSelector", jni::ref<java::util::function::BiFunction>>(); }
	jboolean useDelegatedTask() { return call_method<"useDelegatedTask", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	SSLEngineImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLENGINEIMPL
