// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/x509/Extension.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_CRLDISTRIBUTIONPOINTSEXTENSION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_CRLDISTRIBUTIONPOINTSEXTENSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class CRLDistributionPointsExtension; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::CRLDistributionPointsExtension>
{
	static constexpr fixed_string class_name = "sun/security/x509/CRLDistributionPointsExtension";
	using base_classes = std::tuple<scapix::java_api::sun::security::x509::Extension>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_CRLDISTRIBUTIONPOINTSEXTENSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_CRLDISTRIBUTIONPOINTSEXTENSION)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_CRLDISTRIBUTIONPOINTSEXTENSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Boolean.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/sun/security/util/DerOutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::CRLDistributionPointsExtension : public jni::object_base<"sun/security/x509/CRLDistributionPointsExtension",
	sun::security::x509::Extension>
{
public:

	static jni::ref<java::lang::String> NAME() { return get_static_field<"NAME", jni::ref<java::lang::String>>(); }

	static jni::ref<sun::security::x509::CRLDistributionPointsExtension> new_object(jni::ref<java::util::List> distributionPoints) { return base_::new_object(distributionPoints); }
	static jni::ref<sun::security::x509::CRLDistributionPointsExtension> new_object(jboolean isCritical, jni::ref<java::util::List> distributionPoints) { return base_::new_object(isCritical, distributionPoints); }
	static jni::ref<sun::security::x509::CRLDistributionPointsExtension> new_object(jni::ref<java::lang::Boolean> critical, jni::ref<java::lang::Object> value) { return base_::new_object(critical, value); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	void encode(jni::ref<sun::security::util::DerOutputStream> out) { return call_method<"encode", void>(out); }
	jni::ref<java::util::List> getDistributionPoints() { return call_method<"getDistributionPoints", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	CRLDistributionPointsExtension(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_CRLDISTRIBUTIONPOINTSEXTENSION
