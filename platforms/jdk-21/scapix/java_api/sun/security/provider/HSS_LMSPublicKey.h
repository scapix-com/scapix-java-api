// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_HSS_LMSPUBLICKEY_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_HSS_LMSPUBLICKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider { class HSS_LMSPublicKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::HSS_LMSPublicKey>
{
	static constexpr fixed_string class_name = "sun/security/provider/HSS$LMSPublicKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_HSS_LMSPUBLICKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_HSS_LMSPUBLICKEY)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_HSS_LMSPUBLICKEY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::provider::HSS_LMSPublicKey : public jni::object_base<"sun/security/provider/HSS$LMSPublicKey",
	java::lang::Object>
{
public:


protected:

	HSS_LMSPublicKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_HSS_LMSPUBLICKEY
