// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/cert/CertPathBuilderSpi.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_SUNCERTPATHBUILDER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_SUNCERTPATHBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider::certpath { class SunCertPathBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::certpath::SunCertPathBuilder>
{
	static constexpr fixed_string class_name = "sun/security/provider/certpath/SunCertPathBuilder";
	using base_classes = std::tuple<scapix::java_api::java::security::cert::CertPathBuilderSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_SUNCERTPATHBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_SUNCERTPATHBUILDER)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_SUNCERTPATHBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/cert/CertPathBuilderResult.h>
#include <scapix/java_api/java/security/cert/CertPathChecker.h>
#include <scapix/java_api/java/security/cert/CertPathParameters.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::provider::certpath::SunCertPathBuilder : public jni::object_base<"sun/security/provider/certpath/SunCertPathBuilder",
	java::security::cert::CertPathBuilderSpi>
{
public:

	static jni::ref<sun::security::provider::certpath::SunCertPathBuilder> new_object() { return base_::new_object(); }
	jni::ref<java::security::cert::CertPathChecker> engineGetRevocationChecker() { return call_method<"engineGetRevocationChecker", jni::ref<java::security::cert::CertPathChecker>>(); }
	jni::ref<java::security::cert::CertPathBuilderResult> engineBuild(jni::ref<java::security::cert::CertPathParameters> p1) { return call_method<"engineBuild", jni::ref<java::security::cert::CertPathBuilderResult>>(p1); }

protected:

	SunCertPathBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_SUNCERTPATHBUILDER
