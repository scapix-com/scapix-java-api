// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBAPREQ_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBAPREQ_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5 { class KrbApReq; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::KrbApReq>
{
	static constexpr fixed_string class_name = "sun/security/krb5/KrbApReq";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBAPREQ_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBAPREQ)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBAPREQ

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/sun/security/jgss/krb5/Krb5AcceptCredential.h>
#include <scapix/java_api/sun/security/krb5/Checksum.h>
#include <scapix/java_api/sun/security/krb5/Credentials.h>
#include <scapix/java_api/sun/security/krb5/EncryptionKey.h>
#include <scapix/java_api/sun/security/krb5/PrincipalName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::KrbApReq : public jni::object_base<"sun/security/krb5/KrbApReq",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::krb5::KrbApReq> new_object(jni::ref<sun::security::krb5::Credentials> p1, jboolean p2, jboolean p3, jboolean p4, jni::ref<sun::security::krb5::Checksum> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	static jni::ref<sun::security::krb5::KrbApReq> new_object(jni::ref<jni::array<jbyte>> p1, jni::ref<sun::security::jgss::krb5::Krb5AcceptCredential> p2, jni::ref<java::net::InetAddress> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<sun::security::krb5::Credentials> getCreds() { return call_method<"getCreds", jni::ref<sun::security::krb5::Credentials>>(); }
	jboolean getMutualAuthRequired() { return call_method<"getMutualAuthRequired", jboolean>(); }
	jni::ref<sun::security::krb5::EncryptionKey> getSubKey() { return call_method<"getSubKey", jni::ref<sun::security::krb5::EncryptionKey>>(); }
	jni::ref<java::lang::Integer> getSeqNumber() { return call_method<"getSeqNumber", jni::ref<java::lang::Integer>>(); }
	jni::ref<sun::security::krb5::Checksum> getChecksum() { return call_method<"getChecksum", jni::ref<sun::security::krb5::Checksum>>(); }
	jni::ref<jni::array<jbyte>> getMessage() { return call_method<"getMessage", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<sun::security::krb5::PrincipalName> getClient() { return call_method<"getClient", jni::ref<sun::security::krb5::PrincipalName>>(); }

protected:

	KrbApReq(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBAPREQ