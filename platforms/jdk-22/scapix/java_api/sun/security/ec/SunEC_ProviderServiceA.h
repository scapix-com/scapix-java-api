// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ec/SunEC_ProviderService.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_EC_SUNEC_PROVIDERSERVICEA_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_SUNEC_PROVIDERSERVICEA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ec { class SunEC_ProviderServiceA; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ec::SunEC_ProviderServiceA>
{
	static constexpr fixed_string class_name = "sun/security/ec/SunEC$ProviderServiceA";
	using base_classes = std::tuple<scapix::java_api::sun::security::ec::SunEC_ProviderService>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_SUNEC_PROVIDERSERVICEA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_EC_SUNEC_PROVIDERSERVICEA)
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_SUNEC_PROVIDERSERVICEA

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ec::SunEC_ProviderServiceA : public jni::object_base<"sun/security/ec/SunEC$ProviderServiceA",
	sun::security::ec::SunEC_ProviderService>
{
public:


protected:

	SunEC_ProviderServiceA(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_SUNEC_PROVIDERSERVICEA
