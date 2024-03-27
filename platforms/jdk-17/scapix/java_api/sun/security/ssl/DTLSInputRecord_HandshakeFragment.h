// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ssl/DTLSInputRecord_RecordFragment.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSINPUTRECORD_HANDSHAKEFRAGMENT_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSINPUTRECORD_HANDSHAKEFRAGMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class DTLSInputRecord_HandshakeFragment; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::DTLSInputRecord_HandshakeFragment>
{
	static constexpr fixed_string class_name = "sun/security/ssl/DTLSInputRecord$HandshakeFragment";
	using base_classes = std::tuple<scapix::java_api::sun::security::ssl::DTLSInputRecord_RecordFragment>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSINPUTRECORD_HANDSHAKEFRAGMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSINPUTRECORD_HANDSHAKEFRAGMENT)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSINPUTRECORD_HANDSHAKEFRAGMENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::DTLSInputRecord_HandshakeFragment : public jni::object_base<"sun/security/ssl/DTLSInputRecord$HandshakeFragment",
	sun::security::ssl::DTLSInputRecord_RecordFragment>
{
public:

	jint compareTo(jni::ref<sun::security::ssl::DTLSInputRecord_RecordFragment> o) { return call_method<"compareTo", jint>(o); }

protected:

	DTLSInputRecord_HandshakeFragment(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_DTLSINPUTRECORD_HANDSHAKEFRAGMENT
