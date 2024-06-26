// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_ALGORITHMPARAMETERGENERATORSPI_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_ALGORITHMPARAMETERGENERATORSPI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class AlgorithmParameterGeneratorSpi; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::AlgorithmParameterGeneratorSpi>
{
	static constexpr fixed_string class_name = "java/security/AlgorithmParameterGeneratorSpi";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_ALGORITHMPARAMETERGENERATORSPI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_ALGORITHMPARAMETERGENERATORSPI)
#define SCAPIX_JAVA_API_JAVA_SECURITY_ALGORITHMPARAMETERGENERATORSPI

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::AlgorithmParameterGeneratorSpi : public jni::object_base<"java/security/AlgorithmParameterGeneratorSpi",
	java::lang::Object>
{
public:

	static jni::ref<java::security::AlgorithmParameterGeneratorSpi> new_object() { return base_::new_object(); }

protected:

	AlgorithmParameterGeneratorSpi(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_ALGORITHMPARAMETERGENERATORSPI
