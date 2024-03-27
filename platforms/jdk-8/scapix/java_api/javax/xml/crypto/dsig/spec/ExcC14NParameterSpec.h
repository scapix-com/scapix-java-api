// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/crypto/dsig/spec/C14NMethodParameterSpec.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_EXCC14NPARAMETERSPEC_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_EXCC14NPARAMETERSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::crypto::dsig::spec { class ExcC14NParameterSpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::crypto::dsig::spec::ExcC14NParameterSpec>
{
	static constexpr fixed_string class_name = "javax/xml/crypto/dsig/spec/ExcC14NParameterSpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::crypto::dsig::spec::C14NMethodParameterSpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_EXCC14NPARAMETERSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_EXCC14NPARAMETERSPEC)
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_EXCC14NPARAMETERSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::crypto::dsig::spec::ExcC14NParameterSpec : public jni::object_base<"javax/xml/crypto/dsig/spec/ExcC14NParameterSpec",
	java::lang::Object,
	javax::xml::crypto::dsig::spec::C14NMethodParameterSpec>
{
public:

	static jni::ref<java::lang::String> DEFAULT() { return get_static_field<"DEFAULT", jni::ref<java::lang::String>>(); }

	static jni::ref<javax::xml::crypto::dsig::spec::ExcC14NParameterSpec> new_object() { return base_::new_object(); }
	static jni::ref<javax::xml::crypto::dsig::spec::ExcC14NParameterSpec> new_object(jni::ref<java::util::List> p1) { return base_::new_object(p1); }
	jni::ref<java::util::List> getPrefixList() { return call_method<"getPrefixList", jni::ref<java::util::List>>(); }

protected:

	ExcC14NParameterSpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SPEC_EXCC14NPARAMETERSPEC
