// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRAFFICKEYDERIVATION_KEYSCHEDULE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRAFFICKEYDERIVATION_KEYSCHEDULE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLTrafficKeyDerivation_KeySchedule; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLTrafficKeyDerivation_KeySchedule>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLTrafficKeyDerivation$KeySchedule";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRAFFICKEYDERIVATION_KEYSCHEDULE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRAFFICKEYDERIVATION_KEYSCHEDULE)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRAFFICKEYDERIVATION_KEYSCHEDULE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLTrafficKeyDerivation_KeySchedule : public jni::object_base<"sun/security/ssl/SSLTrafficKeyDerivation$KeySchedule",
	java::lang::Enum>
{
public:

	static jni::ref<sun::security::ssl::SSLTrafficKeyDerivation_KeySchedule> TlsKey() { return get_static_field<"TlsKey", jni::ref<sun::security::ssl::SSLTrafficKeyDerivation_KeySchedule>>(); }
	static jni::ref<sun::security::ssl::SSLTrafficKeyDerivation_KeySchedule> TlsIv() { return get_static_field<"TlsIv", jni::ref<sun::security::ssl::SSLTrafficKeyDerivation_KeySchedule>>(); }
	static jni::ref<sun::security::ssl::SSLTrafficKeyDerivation_KeySchedule> TlsUpdateNplus1() { return get_static_field<"TlsUpdateNplus1", jni::ref<sun::security::ssl::SSLTrafficKeyDerivation_KeySchedule>>(); }

	static jni::ref<jni::array<sun::security::ssl::SSLTrafficKeyDerivation_KeySchedule>> values() { return call_static_method<"values", jni::ref<jni::array<sun::security::ssl::SSLTrafficKeyDerivation_KeySchedule>>>(); }
	static jni::ref<sun::security::ssl::SSLTrafficKeyDerivation_KeySchedule> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<sun::security::ssl::SSLTrafficKeyDerivation_KeySchedule>>(name); }

protected:

	SSLTrafficKeyDerivation_KeySchedule(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLTRAFFICKEYDERIVATION_KEYSCHEDULE
