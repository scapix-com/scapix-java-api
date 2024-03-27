// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/crypto/dsig/spec/TransformParameterSpec.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_XSLTTRANSFORMPARAMETERSPEC_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_XSLTTRANSFORMPARAMETERSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::crypto::dsig::spec { class XSLTTransformParameterSpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::crypto::dsig::spec::XSLTTransformParameterSpec>
{
	static constexpr fixed_string class_name = "javax/xml/crypto/dsig/spec/XSLTTransformParameterSpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::crypto::dsig::spec::TransformParameterSpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_XSLTTRANSFORMPARAMETERSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_XSLTTRANSFORMPARAMETERSPEC)
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_XSLTTRANSFORMPARAMETERSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/xml/crypto/XMLStructure.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::crypto::dsig::spec::XSLTTransformParameterSpec : public jni::object_base<"javax/xml/crypto/dsig/spec/XSLTTransformParameterSpec",
	java::lang::Object,
	javax::xml::crypto::dsig::spec::TransformParameterSpec>
{
public:

	static jni::ref<javax::xml::crypto::dsig::spec::XSLTTransformParameterSpec> new_object(jni::ref<javax::xml::crypto::XMLStructure> p1) { return base_::new_object(p1); }
	jni::ref<javax::xml::crypto::XMLStructure> getStylesheet() { return call_method<"getStylesheet", jni::ref<javax::xml::crypto::XMLStructure>>(); }

protected:

	XSLTTransformParameterSpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_XSLTTRANSFORMPARAMETERSPEC
