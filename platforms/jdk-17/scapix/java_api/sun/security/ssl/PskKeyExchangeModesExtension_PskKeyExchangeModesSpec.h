// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLExtension_SSLExtensionSpec.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_PSKKEYEXCHANGEMODESEXTENSION_PSKKEYEXCHANGEMODESSPEC_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_PSKKEYEXCHANGEMODESEXTENSION_PSKKEYEXCHANGEMODESSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class PskKeyExchangeModesExtension_PskKeyExchangeModesSpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::PskKeyExchangeModesExtension_PskKeyExchangeModesSpec>
{
	static constexpr fixed_string class_name = "sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeModesSpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLExtension_SSLExtensionSpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_PSKKEYEXCHANGEMODESEXTENSION_PSKKEYEXCHANGEMODESSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_PSKKEYEXCHANGEMODESEXTENSION_PSKKEYEXCHANGEMODESSPEC)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_PSKKEYEXCHANGEMODESEXTENSION_PSKKEYEXCHANGEMODESSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::PskKeyExchangeModesExtension_PskKeyExchangeModesSpec : public jni::object_base<"sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeModesSpec",
	java::lang::Object,
	sun::security::ssl::SSLExtension_SSLExtensionSpec>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	PskKeyExchangeModesExtension_PskKeyExchangeModesSpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_PSKKEYEXCHANGEMODESEXTENSION_PSKKEYEXCHANGEMODESSPEC
