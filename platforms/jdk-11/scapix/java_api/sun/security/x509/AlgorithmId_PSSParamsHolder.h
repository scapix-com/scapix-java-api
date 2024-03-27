// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_ALGORITHMID_PSSPARAMSHOLDER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_ALGORITHMID_PSSPARAMSHOLDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class AlgorithmId_PSSParamsHolder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::AlgorithmId_PSSParamsHolder>
{
	static constexpr fixed_string class_name = "sun/security/x509/AlgorithmId$PSSParamsHolder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_ALGORITHMID_PSSPARAMSHOLDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_ALGORITHMID_PSSPARAMSHOLDER)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_ALGORITHMID_PSSPARAMSHOLDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::x509::AlgorithmId_PSSParamsHolder : public jni::object_base<"sun/security/x509/AlgorithmId$PSSParamsHolder",
	java::lang::Object>
{
public:


protected:

	AlgorithmId_PSSParamsHolder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_ALGORITHMID_PSSPARAMSHOLDER
