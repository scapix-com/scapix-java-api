// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_OCSPRESPONSE_RESPONSESTATUS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_OCSPRESPONSE_RESPONSESTATUS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider::certpath { class OCSPResponse_ResponseStatus; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::certpath::OCSPResponse_ResponseStatus>
{
	static constexpr fixed_string class_name = "sun/security/provider/certpath/OCSPResponse$ResponseStatus";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_OCSPRESPONSE_RESPONSESTATUS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_OCSPRESPONSE_RESPONSESTATUS)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_OCSPRESPONSE_RESPONSESTATUS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::provider::certpath::OCSPResponse_ResponseStatus : public jni::object_base<"sun/security/provider/certpath/OCSPResponse$ResponseStatus",
	java::lang::Enum>
{
public:

	static jni::ref<sun::security::provider::certpath::OCSPResponse_ResponseStatus> SUCCESSFUL() { return get_static_field<"SUCCESSFUL", jni::ref<sun::security::provider::certpath::OCSPResponse_ResponseStatus>>(); }
	static jni::ref<sun::security::provider::certpath::OCSPResponse_ResponseStatus> MALFORMED_REQUEST() { return get_static_field<"MALFORMED_REQUEST", jni::ref<sun::security::provider::certpath::OCSPResponse_ResponseStatus>>(); }
	static jni::ref<sun::security::provider::certpath::OCSPResponse_ResponseStatus> INTERNAL_ERROR() { return get_static_field<"INTERNAL_ERROR", jni::ref<sun::security::provider::certpath::OCSPResponse_ResponseStatus>>(); }
	static jni::ref<sun::security::provider::certpath::OCSPResponse_ResponseStatus> TRY_LATER() { return get_static_field<"TRY_LATER", jni::ref<sun::security::provider::certpath::OCSPResponse_ResponseStatus>>(); }
	static jni::ref<sun::security::provider::certpath::OCSPResponse_ResponseStatus> UNUSED() { return get_static_field<"UNUSED", jni::ref<sun::security::provider::certpath::OCSPResponse_ResponseStatus>>(); }
	static jni::ref<sun::security::provider::certpath::OCSPResponse_ResponseStatus> SIG_REQUIRED() { return get_static_field<"SIG_REQUIRED", jni::ref<sun::security::provider::certpath::OCSPResponse_ResponseStatus>>(); }
	static jni::ref<sun::security::provider::certpath::OCSPResponse_ResponseStatus> UNAUTHORIZED() { return get_static_field<"UNAUTHORIZED", jni::ref<sun::security::provider::certpath::OCSPResponse_ResponseStatus>>(); }

	static jni::ref<jni::array<sun::security::provider::certpath::OCSPResponse_ResponseStatus>> values() { return call_static_method<"values", jni::ref<jni::array<sun::security::provider::certpath::OCSPResponse_ResponseStatus>>>(); }
	static jni::ref<sun::security::provider::certpath::OCSPResponse_ResponseStatus> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<sun::security::provider::certpath::OCSPResponse_ResponseStatus>>(name); }

protected:

	OCSPResponse_ResponseStatus(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_OCSPRESPONSE_RESPONSESTATUS