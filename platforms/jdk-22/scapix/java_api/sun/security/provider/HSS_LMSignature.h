// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_HSS_LMSIGNATURE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_HSS_LMSIGNATURE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider { class HSS_LMSignature; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::HSS_LMSignature>
{
	static constexpr fixed_string class_name = "sun/security/provider/HSS$LMSignature";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_HSS_LMSIGNATURE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_HSS_LMSIGNATURE)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_HSS_LMSIGNATURE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::provider::HSS_LMSignature : public jni::object_base<"sun/security/provider/HSS$LMSignature",
	java::lang::Object>
{
public:


protected:

	HSS_LMSignature(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_HSS_LMSIGNATURE
