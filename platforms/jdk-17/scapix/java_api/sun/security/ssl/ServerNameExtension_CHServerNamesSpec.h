// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLExtension_SSLExtensionSpec.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SERVERNAMEEXTENSION_CHSERVERNAMESSPEC_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SERVERNAMEEXTENSION_CHSERVERNAMESSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class ServerNameExtension_CHServerNamesSpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::ServerNameExtension_CHServerNamesSpec>
{
	static constexpr fixed_string class_name = "sun/security/ssl/ServerNameExtension$CHServerNamesSpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLExtension_SSLExtensionSpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SERVERNAMEEXTENSION_CHSERVERNAMESSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SERVERNAMEEXTENSION_CHSERVERNAMESSPEC)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SERVERNAMEEXTENSION_CHSERVERNAMESSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::ServerNameExtension_CHServerNamesSpec : public jni::object_base<"sun/security/ssl/ServerNameExtension$CHServerNamesSpec",
	java::lang::Object,
	sun::security::ssl::SSLExtension_SSLExtensionSpec>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ServerNameExtension_CHServerNamesSpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SERVERNAMEEXTENSION_CHSERVERNAMESSPEC
