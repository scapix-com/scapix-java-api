// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ssl/InputRecord.h>
#include <scapix/java_api/sun/security/ssl/SSLRecord.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLENGINEINPUTRECORD_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLENGINEINPUTRECORD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLEngineInputRecord; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLEngineInputRecord>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLEngineInputRecord";
	using base_classes = std::tuple<scapix::java_api::sun::security::ssl::InputRecord, scapix::java_api::sun::security::ssl::SSLRecord>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLENGINEINPUTRECORD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLENGINEINPUTRECORD)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLENGINEINPUTRECORD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLEngineInputRecord : public jni::object_base<"sun/security/ssl/SSLEngineInputRecord",
	sun::security::ssl::InputRecord,
	sun::security::ssl::SSLRecord>
{
public:


protected:

	SSLEngineInputRecord(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLENGINEINPUTRECORD
