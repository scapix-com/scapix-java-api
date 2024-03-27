// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_PSSPARAMETERSPEC_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_PSSPARAMETERSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::spec { class PSSParameterSpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::spec::PSSParameterSpec>
{
	static constexpr fixed_string class_name = "java/security/spec/PSSParameterSpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::spec::AlgorithmParameterSpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_PSSPARAMETERSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_PSSPARAMETERSPEC)
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_PSSPARAMETERSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::spec::PSSParameterSpec : public jni::object_base<"java/security/spec/PSSParameterSpec",
	java::lang::Object,
	java::security::spec::AlgorithmParameterSpec>
{
public:

	static jni::ref<java::security::spec::PSSParameterSpec> DEFAULT() { return get_static_field<"DEFAULT", jni::ref<java::security::spec::PSSParameterSpec>>(); }

	static jni::ref<java::security::spec::PSSParameterSpec> new_object(jni::ref<java::lang::String> mdName, jni::ref<java::lang::String> mgfName, jni::ref<java::security::spec::AlgorithmParameterSpec> mgfSpec, jint saltLen, jint trailerField) { return base_::new_object(mdName, mgfName, mgfSpec, saltLen, trailerField); }
	static jni::ref<java::security::spec::PSSParameterSpec> new_object(jint saltLen) { return base_::new_object(saltLen); }
	jni::ref<java::lang::String> getDigestAlgorithm() { return call_method<"getDigestAlgorithm", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getMGFAlgorithm() { return call_method<"getMGFAlgorithm", jni::ref<java::lang::String>>(); }
	jni::ref<java::security::spec::AlgorithmParameterSpec> getMGFParameters() { return call_method<"getMGFParameters", jni::ref<java::security::spec::AlgorithmParameterSpec>>(); }
	jint getSaltLength() { return call_method<"getSaltLength", jint>(); }
	jint getTrailerField() { return call_method<"getTrailerField", jint>(); }

protected:

	PSSParameterSpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_PSSPARAMETERSPEC
