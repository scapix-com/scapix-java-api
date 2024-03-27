// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>

#ifndef SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_OAEPPARAMETERSPEC_FWD
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_OAEPPARAMETERSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::crypto::spec { class OAEPParameterSpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::crypto::spec::OAEPParameterSpec>
{
	static constexpr fixed_string class_name = "javax/crypto/spec/OAEPParameterSpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::spec::AlgorithmParameterSpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_OAEPPARAMETERSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_OAEPPARAMETERSPEC)
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_OAEPPARAMETERSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/crypto/spec/PSource.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::crypto::spec::OAEPParameterSpec : public jni::object_base<"javax/crypto/spec/OAEPParameterSpec",
	java::lang::Object,
	java::security::spec::AlgorithmParameterSpec>
{
public:

	static jni::ref<javax::crypto::spec::OAEPParameterSpec> DEFAULT() { return get_static_field<"DEFAULT", jni::ref<javax::crypto::spec::OAEPParameterSpec>>(); }

	static jni::ref<javax::crypto::spec::OAEPParameterSpec> new_object(jni::ref<java::lang::String> mdName, jni::ref<java::lang::String> mgfName, jni::ref<java::security::spec::AlgorithmParameterSpec> mgfSpec, jni::ref<javax::crypto::spec::PSource> pSrc) { return base_::new_object(mdName, mgfName, mgfSpec, pSrc); }
	jni::ref<java::lang::String> getDigestAlgorithm() { return call_method<"getDigestAlgorithm", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getMGFAlgorithm() { return call_method<"getMGFAlgorithm", jni::ref<java::lang::String>>(); }
	jni::ref<java::security::spec::AlgorithmParameterSpec> getMGFParameters() { return call_method<"getMGFParameters", jni::ref<java::security::spec::AlgorithmParameterSpec>>(); }
	jni::ref<javax::crypto::spec::PSource> getPSource() { return call_method<"getPSource", jni::ref<javax::crypto::spec::PSource>>(); }

protected:

	OAEPParameterSpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_OAEPPARAMETERSPEC
