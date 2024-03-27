// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_PSKKEYEXCHANGEMODESEXTENSION_PSKKEYEXCHANGEMODE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_PSKKEYEXCHANGEMODESEXTENSION_PSKKEYEXCHANGEMODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class PskKeyExchangeModesExtension_PskKeyExchangeMode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::PskKeyExchangeModesExtension_PskKeyExchangeMode>
{
	static constexpr fixed_string class_name = "sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeMode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_PSKKEYEXCHANGEMODESEXTENSION_PSKKEYEXCHANGEMODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_PSKKEYEXCHANGEMODESEXTENSION_PSKKEYEXCHANGEMODE)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_PSKKEYEXCHANGEMODESEXTENSION_PSKKEYEXCHANGEMODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::PskKeyExchangeModesExtension_PskKeyExchangeMode : public jni::object_base<"sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeMode",
	java::lang::Enum>
{
public:

	static jni::ref<sun::security::ssl::PskKeyExchangeModesExtension_PskKeyExchangeMode> PSK_KE() { return get_static_field<"PSK_KE", jni::ref<sun::security::ssl::PskKeyExchangeModesExtension_PskKeyExchangeMode>>(); }
	static jni::ref<sun::security::ssl::PskKeyExchangeModesExtension_PskKeyExchangeMode> PSK_DHE_KE() { return get_static_field<"PSK_DHE_KE", jni::ref<sun::security::ssl::PskKeyExchangeModesExtension_PskKeyExchangeMode>>(); }

	static jni::ref<jni::array<sun::security::ssl::PskKeyExchangeModesExtension_PskKeyExchangeMode>> values() { return call_static_method<"values", jni::ref<jni::array<sun::security::ssl::PskKeyExchangeModesExtension_PskKeyExchangeMode>>>(); }
	static jni::ref<sun::security::ssl::PskKeyExchangeModesExtension_PskKeyExchangeMode> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<sun::security::ssl::PskKeyExchangeModesExtension_PskKeyExchangeMode>>(name); }

protected:

	PskKeyExchangeModesExtension_PskKeyExchangeMode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_PSKKEYEXCHANGEMODESEXTENSION_PSKKEYEXCHANGEMODE