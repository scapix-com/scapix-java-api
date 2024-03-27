// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_PRESHAREDKEYEXTENSION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_PRESHAREDKEYEXTENSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class PreSharedKeyExtension; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::PreSharedKeyExtension>
{
	static constexpr fixed_string class_name = "sun/security/ssl/PreSharedKeyExtension";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_PRESHAREDKEYEXTENSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_PRESHAREDKEYEXTENSION)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_PRESHAREDKEYEXTENSION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::PreSharedKeyExtension : public jni::object_base<"sun/security/ssl/PreSharedKeyExtension",
	java::lang::Object>
{
public:


protected:

	PreSharedKeyExtension(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_PRESHAREDKEYEXTENSION