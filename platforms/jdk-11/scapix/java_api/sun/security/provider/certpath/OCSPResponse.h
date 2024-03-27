// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_OCSPRESPONSE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_OCSPRESPONSE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider::certpath { class OCSPResponse; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::certpath::OCSPResponse>
{
	static constexpr fixed_string class_name = "sun/security/provider/certpath/OCSPResponse";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_OCSPRESPONSE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_OCSPRESPONSE)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_OCSPRESPONSE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/sun/security/provider/certpath/CertId.h>
#include <scapix/java_api/sun/security/provider/certpath/OCSPResponse_ResponseStatus.h>
#include <scapix/java_api/sun/security/provider/certpath/OCSPResponse_SingleResponse.h>
#include <scapix/java_api/sun/security/provider/certpath/ResponderId.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::provider::certpath::OCSPResponse : public jni::object_base<"sun/security/provider/certpath/OCSPResponse",
	java::lang::Object>
{
public:

	using SingleResponse = OCSPResponse_SingleResponse;
	using ResponseStatus = OCSPResponse_ResponseStatus;

	static jni::ref<sun::security::provider::certpath::OCSPResponse> new_object(jni::ref<jni::array<jbyte>> bytes) { return base_::new_object(bytes); }
	jni::ref<sun::security::provider::certpath::OCSPResponse_ResponseStatus> getResponseStatus() { return call_method<"getResponseStatus", jni::ref<sun::security::provider::certpath::OCSPResponse_ResponseStatus>>(); }
	jni::ref<sun::security::provider::certpath::OCSPResponse_SingleResponse> getSingleResponse(jni::ref<sun::security::provider::certpath::CertId> certId) { return call_method<"getSingleResponse", jni::ref<sun::security::provider::certpath::OCSPResponse_SingleResponse>>(certId); }
	jni::ref<java::util::Set> getCertIds() { return call_method<"getCertIds", jni::ref<java::util::Set>>(); }
	jni::ref<sun::security::provider::certpath::ResponderId> getResponderId() { return call_method<"getResponderId", jni::ref<sun::security::provider::certpath::ResponderId>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	OCSPResponse(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_OCSPRESPONSE
