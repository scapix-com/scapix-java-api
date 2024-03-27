// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALPNEXTENSION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALPNEXTENSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class AlpnExtension; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::AlpnExtension>
{
	static constexpr fixed_string class_name = "sun/security/ssl/AlpnExtension";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALPNEXTENSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALPNEXTENSION)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALPNEXTENSION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::AlpnExtension : public jni::object_base<"sun/security/ssl/AlpnExtension",
	java::lang::Object>
{
public:


protected:

	AlpnExtension(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALPNEXTENSION