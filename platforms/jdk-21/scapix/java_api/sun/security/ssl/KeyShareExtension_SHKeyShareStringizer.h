// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLStringizer.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYSHAREEXTENSION_SHKEYSHARESTRINGIZER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYSHAREEXTENSION_SHKEYSHARESTRINGIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class KeyShareExtension_SHKeyShareStringizer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::KeyShareExtension_SHKeyShareStringizer>
{
	static constexpr fixed_string class_name = "sun/security/ssl/KeyShareExtension$SHKeyShareStringizer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLStringizer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYSHAREEXTENSION_SHKEYSHARESTRINGIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYSHAREEXTENSION_SHKEYSHARESTRINGIZER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYSHAREEXTENSION_SHKEYSHARESTRINGIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/sun/security/ssl/HandshakeContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::KeyShareExtension_SHKeyShareStringizer : public jni::object_base<"sun/security/ssl/KeyShareExtension$SHKeyShareStringizer",
	java::lang::Object,
	sun::security::ssl::SSLStringizer>
{
public:

	jni::ref<java::lang::String> toString(jni::ref<sun::security::ssl::HandshakeContext> handshakeContext, jni::ref<java::nio::ByteBuffer> buffer) { return call_method<"toString", jni::ref<java::lang::String>>(handshakeContext, buffer); }

protected:

	KeyShareExtension_SHKeyShareStringizer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYSHAREEXTENSION_SHKEYSHARESTRINGIZER
