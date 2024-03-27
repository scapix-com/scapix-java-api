// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/Record.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSRECORD_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSRECORD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class DTLSRecord; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::DTLSRecord>
{
	static constexpr fixed_string class_name = "sun/security/ssl/DTLSRecord";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::Record>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSRECORD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSRECORD)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSRECORD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::DTLSRecord : public jni::object_base<"sun/security/ssl/DTLSRecord",
	java::lang::Object,
	sun::security::ssl::Record>
{
public:

	static jint headerSize() { return get_static_field<"headerSize", jint>(); }
	static jint handshakeHeaderSize() { return get_static_field<"handshakeHeaderSize", jint>(); }
	static jint headerPlusMaxIVSize() { return get_static_field<"headerPlusMaxIVSize", jint>(); }
	static jint maxPlaintextPlusSize() { return get_static_field<"maxPlaintextPlusSize", jint>(); }
	static jint maxRecordSize() { return get_static_field<"maxRecordSize", jint>(); }
	static jint minCertPlaintextSize() { return get_static_field<"minCertPlaintextSize", jint>(); }


protected:

	DTLSRecord(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSRECORD