// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/provider/SeedGenerator.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_NATIVESEEDGENERATOR_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_NATIVESEEDGENERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider { class NativeSeedGenerator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::NativeSeedGenerator>
{
	static constexpr fixed_string class_name = "sun/security/provider/NativeSeedGenerator";
	using base_classes = std::tuple<scapix::java_api::sun::security::provider::SeedGenerator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_NATIVESEEDGENERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_NATIVESEEDGENERATOR)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_NATIVESEEDGENERATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::provider::NativeSeedGenerator : public jni::object_base<"sun/security/provider/NativeSeedGenerator",
	sun::security::provider::SeedGenerator>
{
public:


protected:

	NativeSeedGenerator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_NATIVESEEDGENERATOR