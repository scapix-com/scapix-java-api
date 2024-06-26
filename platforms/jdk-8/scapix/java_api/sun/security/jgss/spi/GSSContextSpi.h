// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_JGSS_SPI_GSSCONTEXTSPI_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_JGSS_SPI_GSSCONTEXTSPI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::jgss::spi { class GSSContextSpi; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::jgss::spi::GSSContextSpi>
{
	static constexpr fixed_string class_name = "sun/security/jgss/spi/GSSContextSpi";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_JGSS_SPI_GSSCONTEXTSPI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_JGSS_SPI_GSSCONTEXTSPI)
#define SCAPIX_JAVA_API_SUN_SECURITY_JGSS_SPI_GSSCONTEXTSPI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/security/jgss/InquireType.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/org/ietf/jgss/ChannelBinding.h>
#include <scapix/java_api/org/ietf/jgss/MessageProp.h>
#include <scapix/java_api/org/ietf/jgss/Oid.h>
#include <scapix/java_api/sun/security/jgss/spi/GSSCredentialSpi.h>
#include <scapix/java_api/sun/security/jgss/spi/GSSNameSpi.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::jgss::spi::GSSContextSpi : public jni::object_base<"sun/security/jgss/spi/GSSContextSpi",
	java::lang::Object>
{
public:

	jni::ref<java::security::Provider> getProvider() { return call_method<"getProvider", jni::ref<java::security::Provider>>(); }
	void requestLifetime(jint p1) { return call_method<"requestLifetime", void>(p1); }
	void requestMutualAuth(jboolean p1) { return call_method<"requestMutualAuth", void>(p1); }
	void requestReplayDet(jboolean p1) { return call_method<"requestReplayDet", void>(p1); }
	void requestSequenceDet(jboolean p1) { return call_method<"requestSequenceDet", void>(p1); }
	void requestCredDeleg(jboolean p1) { return call_method<"requestCredDeleg", void>(p1); }
	void requestAnonymity(jboolean p1) { return call_method<"requestAnonymity", void>(p1); }
	void requestConf(jboolean p1) { return call_method<"requestConf", void>(p1); }
	void requestInteg(jboolean p1) { return call_method<"requestInteg", void>(p1); }
	void requestDelegPolicy(jboolean p1) { return call_method<"requestDelegPolicy", void>(p1); }
	void setChannelBinding(jni::ref<org::ietf::jgss::ChannelBinding> p1) { return call_method<"setChannelBinding", void>(p1); }
	jboolean getCredDelegState() { return call_method<"getCredDelegState", jboolean>(); }
	jboolean getMutualAuthState() { return call_method<"getMutualAuthState", jboolean>(); }
	jboolean getReplayDetState() { return call_method<"getReplayDetState", jboolean>(); }
	jboolean getSequenceDetState() { return call_method<"getSequenceDetState", jboolean>(); }
	jboolean getAnonymityState() { return call_method<"getAnonymityState", jboolean>(); }
	jboolean getDelegPolicyState() { return call_method<"getDelegPolicyState", jboolean>(); }
	jboolean isTransferable() { return call_method<"isTransferable", jboolean>(); }
	jboolean isProtReady() { return call_method<"isProtReady", jboolean>(); }
	jboolean isInitiator() { return call_method<"isInitiator", jboolean>(); }
	jboolean getConfState() { return call_method<"getConfState", jboolean>(); }
	jboolean getIntegState() { return call_method<"getIntegState", jboolean>(); }
	jint getLifetime() { return call_method<"getLifetime", jint>(); }
	jboolean isEstablished() { return call_method<"isEstablished", jboolean>(); }
	jni::ref<sun::security::jgss::spi::GSSNameSpi> getSrcName() { return call_method<"getSrcName", jni::ref<sun::security::jgss::spi::GSSNameSpi>>(); }
	jni::ref<sun::security::jgss::spi::GSSNameSpi> getTargName() { return call_method<"getTargName", jni::ref<sun::security::jgss::spi::GSSNameSpi>>(); }
	jni::ref<org::ietf::jgss::Oid> getMech() { return call_method<"getMech", jni::ref<org::ietf::jgss::Oid>>(); }
	jni::ref<sun::security::jgss::spi::GSSCredentialSpi> getDelegCred() { return call_method<"getDelegCred", jni::ref<sun::security::jgss::spi::GSSCredentialSpi>>(); }
	jni::ref<jni::array<jbyte>> initSecContext(jni::ref<java::io::InputStream> p1, jint p2) { return call_method<"initSecContext", jni::ref<jni::array<jbyte>>>(p1, p2); }
	jni::ref<jni::array<jbyte>> acceptSecContext(jni::ref<java::io::InputStream> p1, jint p2) { return call_method<"acceptSecContext", jni::ref<jni::array<jbyte>>>(p1, p2); }
	jint getWrapSizeLimit(jint p1, jboolean p2, jint p3) { return call_method<"getWrapSizeLimit", jint>(p1, p2, p3); }
	void wrap(jni::ref<java::io::InputStream> p1, jni::ref<java::io::OutputStream> p2, jni::ref<org::ietf::jgss::MessageProp> p3) { return call_method<"wrap", void>(p1, p2, p3); }
	jni::ref<jni::array<jbyte>> wrap(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3, jni::ref<org::ietf::jgss::MessageProp> p4) { return call_method<"wrap", jni::ref<jni::array<jbyte>>>(p1, p2, p3, p4); }
	void unwrap(jni::ref<java::io::InputStream> p1, jni::ref<java::io::OutputStream> p2, jni::ref<org::ietf::jgss::MessageProp> p3) { return call_method<"unwrap", void>(p1, p2, p3); }
	jni::ref<jni::array<jbyte>> unwrap(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3, jni::ref<org::ietf::jgss::MessageProp> p4) { return call_method<"unwrap", jni::ref<jni::array<jbyte>>>(p1, p2, p3, p4); }
	void getMIC(jni::ref<java::io::InputStream> p1, jni::ref<java::io::OutputStream> p2, jni::ref<org::ietf::jgss::MessageProp> p3) { return call_method<"getMIC", void>(p1, p2, p3); }
	jni::ref<jni::array<jbyte>> getMIC(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3, jni::ref<org::ietf::jgss::MessageProp> p4) { return call_method<"getMIC", jni::ref<jni::array<jbyte>>>(p1, p2, p3, p4); }
	void verifyMIC(jni::ref<java::io::InputStream> p1, jni::ref<java::io::InputStream> p2, jni::ref<org::ietf::jgss::MessageProp> p3) { return call_method<"verifyMIC", void>(p1, p2, p3); }
	void verifyMIC(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3, jni::ref<jni::array<jbyte>> p4, jint p5, jint p6, jni::ref<org::ietf::jgss::MessageProp> p7) { return call_method<"verifyMIC", void>(p1, p2, p3, p4, p5, p6, p7); }
	jni::ref<jni::array<jbyte>> export_() { return call_method<"export", jni::ref<jni::array<jbyte>>>(); }
	void dispose() { return call_method<"dispose", void>(); }
	jni::ref<java::lang::Object> inquireSecContext(jni::ref<com::sun::security::jgss::InquireType> p1) { return call_method<"inquireSecContext", jni::ref<java::lang::Object>>(p1); }

protected:

	GSSContextSpi(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_JGSS_SPI_GSSCONTEXTSPI
