// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_REVOCATIONCHECKER_MODE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_REVOCATIONCHECKER_MODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider::certpath { class RevocationChecker_Mode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::certpath::RevocationChecker_Mode>
{
	static constexpr fixed_string class_name = "sun/security/provider/certpath/RevocationChecker$Mode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_REVOCATIONCHECKER_MODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_REVOCATIONCHECKER_MODE)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_REVOCATIONCHECKER_MODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::provider::certpath::RevocationChecker_Mode : public jni::object_base<"sun/security/provider/certpath/RevocationChecker$Mode",
	java::lang::Enum>
{
public:

	static jni::ref<sun::security::provider::certpath::RevocationChecker_Mode> PREFER_OCSP() { return get_static_field<"PREFER_OCSP", jni::ref<sun::security::provider::certpath::RevocationChecker_Mode>>(); }
	static jni::ref<sun::security::provider::certpath::RevocationChecker_Mode> PREFER_CRLS() { return get_static_field<"PREFER_CRLS", jni::ref<sun::security::provider::certpath::RevocationChecker_Mode>>(); }
	static jni::ref<sun::security::provider::certpath::RevocationChecker_Mode> ONLY_CRLS() { return get_static_field<"ONLY_CRLS", jni::ref<sun::security::provider::certpath::RevocationChecker_Mode>>(); }
	static jni::ref<sun::security::provider::certpath::RevocationChecker_Mode> ONLY_OCSP() { return get_static_field<"ONLY_OCSP", jni::ref<sun::security::provider::certpath::RevocationChecker_Mode>>(); }

	static jni::ref<jni::array<sun::security::provider::certpath::RevocationChecker_Mode>> values() { return call_static_method<"values", jni::ref<jni::array<sun::security::provider::certpath::RevocationChecker_Mode>>>(); }
	static jni::ref<sun::security::provider::certpath::RevocationChecker_Mode> valueOf(jni::ref<java::lang::String> p1) { return call_static_method<"valueOf", jni::ref<sun::security::provider::certpath::RevocationChecker_Mode>>(p1); }

protected:

	RevocationChecker_Mode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_REVOCATIONCHECKER_MODE