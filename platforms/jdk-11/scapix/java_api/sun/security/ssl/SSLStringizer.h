// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSTRINGIZER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSTRINGIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLStringizer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLStringizer>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLStringizer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSTRINGIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSTRINGIZER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSTRINGIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLStringizer : public jni::object_base<"sun/security/ssl/SSLStringizer",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> toString(jni::ref<java::nio::ByteBuffer> p1) { return call_method<"toString", jni::ref<java::lang::String>>(p1); }

protected:

	SSLStringizer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSTRINGIZER
