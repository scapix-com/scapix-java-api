// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/crypto/dsig/spec/TransformParameterSpec.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_XPATHFILTERPARAMETERSPEC_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_XPATHFILTERPARAMETERSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::crypto::dsig::spec { class XPathFilterParameterSpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::crypto::dsig::spec::XPathFilterParameterSpec>
{
	static constexpr fixed_string class_name = "javax/xml/crypto/dsig/spec/XPathFilterParameterSpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::crypto::dsig::spec::TransformParameterSpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_XPATHFILTERPARAMETERSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_XPATHFILTERPARAMETERSPEC)
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_XPATHFILTERPARAMETERSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::crypto::dsig::spec::XPathFilterParameterSpec : public jni::object_base<"javax/xml/crypto/dsig/spec/XPathFilterParameterSpec",
	java::lang::Object,
	javax::xml::crypto::dsig::spec::TransformParameterSpec>
{
public:

	static jni::ref<javax::xml::crypto::dsig::spec::XPathFilterParameterSpec> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::xml::crypto::dsig::spec::XPathFilterParameterSpec> new_object(jni::ref<java::lang::String> p1, jni::ref<java::util::Map> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> getXPath() { return call_method<"getXPath", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::Map> getNamespaceMap() { return call_method<"getNamespaceMap", jni::ref<java::util::Map>>(); }

protected:

	XPathFilterParameterSpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_XPATHFILTERPARAMETERSPEC
