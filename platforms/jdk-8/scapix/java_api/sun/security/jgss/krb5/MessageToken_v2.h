// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/jgss/krb5/Krb5Token.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_JGSS_KRB5_MESSAGETOKEN_V2_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_JGSS_KRB5_MESSAGETOKEN_V2_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::jgss::krb5 { class MessageToken_v2; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::jgss::krb5::MessageToken_v2>
{
	static constexpr fixed_string class_name = "sun/security/jgss/krb5/MessageToken_v2";
	using base_classes = std::tuple<scapix::java_api::sun::security::jgss::krb5::Krb5Token>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_JGSS_KRB5_MESSAGETOKEN_V2_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_JGSS_KRB5_MESSAGETOKEN_V2)
#define SCAPIX_JAVA_API_SUN_SECURITY_JGSS_KRB5_MESSAGETOKEN_V2

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/org/ietf/jgss/MessageProp.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::jgss::krb5::MessageToken_v2 : public jni::object_base<"sun/security/jgss/krb5/MessageToken_v2",
	sun::security::jgss::krb5::Krb5Token>
{
public:

	jint getTokenId() { return call_method<"getTokenId", jint>(); }
	jint getKeyUsage() { return call_method<"getKeyUsage", jint>(); }
	jboolean getConfState() { return call_method<"getConfState", jboolean>(); }
	void genSignAndSeqNumber(jni::ref<org::ietf::jgss::MessageProp> p1, jni::ref<jni::array<jbyte>> p2, jint p3, jint p4) { return call_method<"genSignAndSeqNumber", void>(p1, p2, p3, p4); }
	jboolean verifySign(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"verifySign", jboolean>(p1, p2, p3); }
	jint getSequenceNumber() { return call_method<"getSequenceNumber", jint>(); }
	void encode(jni::ref<java::io::OutputStream> p1) { return call_method<"encode", void>(p1); }

protected:

	MessageToken_v2(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_JGSS_KRB5_MESSAGETOKEN_V2
