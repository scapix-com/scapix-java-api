// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ssl/DTLSOutputRecord_RecordMemo.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSOUTPUTRECORD_HANDSHAKEMEMO_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSOUTPUTRECORD_HANDSHAKEMEMO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class DTLSOutputRecord_HandshakeMemo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::DTLSOutputRecord_HandshakeMemo>
{
	static constexpr fixed_string class_name = "sun/security/ssl/DTLSOutputRecord$HandshakeMemo";
	using base_classes = std::tuple<scapix::java_api::sun::security::ssl::DTLSOutputRecord_RecordMemo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSOUTPUTRECORD_HANDSHAKEMEMO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSOUTPUTRECORD_HANDSHAKEMEMO)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSOUTPUTRECORD_HANDSHAKEMEMO

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::DTLSOutputRecord_HandshakeMemo : public jni::object_base<"sun/security/ssl/DTLSOutputRecord$HandshakeMemo",
	sun::security::ssl::DTLSOutputRecord_RecordMemo>
{
public:


protected:

	DTLSOutputRecord_HandshakeMemo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSOUTPUTRECORD_HANDSHAKEMEMO
