// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_FINISHED_VERIFYDATASCHEME_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_FINISHED_VERIFYDATASCHEME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class Finished_VerifyDataScheme; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::Finished_VerifyDataScheme>
{
	static constexpr fixed_string class_name = "sun/security/ssl/Finished$VerifyDataScheme";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_FINISHED_VERIFYDATASCHEME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_FINISHED_VERIFYDATASCHEME)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_FINISHED_VERIFYDATASCHEME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/security/ssl/HandshakeContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::Finished_VerifyDataScheme : public jni::object_base<"sun/security/ssl/Finished$VerifyDataScheme",
	java::lang::Enum>
{
public:

	static jni::ref<sun::security::ssl::Finished_VerifyDataScheme> SSL30() { return get_static_field<"SSL30", jni::ref<sun::security::ssl::Finished_VerifyDataScheme>>(); }
	static jni::ref<sun::security::ssl::Finished_VerifyDataScheme> TLS10() { return get_static_field<"TLS10", jni::ref<sun::security::ssl::Finished_VerifyDataScheme>>(); }
	static jni::ref<sun::security::ssl::Finished_VerifyDataScheme> TLS12() { return get_static_field<"TLS12", jni::ref<sun::security::ssl::Finished_VerifyDataScheme>>(); }
	static jni::ref<sun::security::ssl::Finished_VerifyDataScheme> TLS13() { return get_static_field<"TLS13", jni::ref<sun::security::ssl::Finished_VerifyDataScheme>>(); }

	static jni::ref<jni::array<sun::security::ssl::Finished_VerifyDataScheme>> values() { return call_static_method<"values", jni::ref<jni::array<sun::security::ssl::Finished_VerifyDataScheme>>>(); }
	static jni::ref<sun::security::ssl::Finished_VerifyDataScheme> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<sun::security::ssl::Finished_VerifyDataScheme>>(name); }
	jni::ref<jni::array<jbyte>> createVerifyData(jni::ref<sun::security::ssl::HandshakeContext> context, jboolean isValidation) { return call_method<"createVerifyData", jni::ref<jni::array<jbyte>>>(context, isValidation); }

protected:

	Finished_VerifyDataScheme(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_FINISHED_VERIFYDATASCHEME
