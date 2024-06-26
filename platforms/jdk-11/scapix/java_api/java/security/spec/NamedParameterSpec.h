// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_NAMEDPARAMETERSPEC_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_NAMEDPARAMETERSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::spec { class NamedParameterSpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::spec::NamedParameterSpec>
{
	static constexpr fixed_string class_name = "java/security/spec/NamedParameterSpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::spec::AlgorithmParameterSpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_NAMEDPARAMETERSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_NAMEDPARAMETERSPEC)
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_NAMEDPARAMETERSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::spec::NamedParameterSpec : public jni::object_base<"java/security/spec/NamedParameterSpec",
	java::lang::Object,
	java::security::spec::AlgorithmParameterSpec>
{
public:

	static jni::ref<java::security::spec::NamedParameterSpec> X25519() { return get_static_field<"X25519", jni::ref<java::security::spec::NamedParameterSpec>>(); }
	static jni::ref<java::security::spec::NamedParameterSpec> X448() { return get_static_field<"X448", jni::ref<java::security::spec::NamedParameterSpec>>(); }

	static jni::ref<java::security::spec::NamedParameterSpec> new_object(jni::ref<java::lang::String> stdName) { return base_::new_object(stdName); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }

protected:

	NamedParameterSpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_NAMEDPARAMETERSPEC
