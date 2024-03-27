// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/crypto/XMLStructure.h>
#include <scapix/java_api/javax/xml/crypto/AlgorithmMethod.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_DIGESTMETHOD_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_DIGESTMETHOD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::crypto::dsig { class DigestMethod; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::crypto::dsig::DigestMethod>
{
	static constexpr fixed_string class_name = "javax/xml/crypto/dsig/DigestMethod";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::crypto::XMLStructure, scapix::java_api::javax::xml::crypto::AlgorithmMethod>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_DIGESTMETHOD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_DIGESTMETHOD)
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_DIGESTMETHOD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::crypto::dsig::DigestMethod : public jni::object_base<"javax/xml/crypto/dsig/DigestMethod",
	java::lang::Object,
	javax::xml::crypto::XMLStructure,
	javax::xml::crypto::AlgorithmMethod>
{
public:

	static jni::ref<java::lang::String> SHA1() { return get_static_field<"SHA1", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SHA256() { return get_static_field<"SHA256", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SHA512() { return get_static_field<"SHA512", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RIPEMD160() { return get_static_field<"RIPEMD160", jni::ref<java::lang::String>>(); }

	jni::ref<java::security::spec::AlgorithmParameterSpec> getParameterSpec() { return call_method<"getParameterSpec", jni::ref<java::security::spec::AlgorithmParameterSpec>>(); }

protected:

	DigestMethod(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_DIGESTMETHOD
