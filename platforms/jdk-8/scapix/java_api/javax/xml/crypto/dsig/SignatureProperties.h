// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/crypto/XMLStructure.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SIGNATUREPROPERTIES_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SIGNATUREPROPERTIES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::crypto::dsig { class SignatureProperties; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::crypto::dsig::SignatureProperties>
{
	static constexpr fixed_string class_name = "javax/xml/crypto/dsig/SignatureProperties";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::crypto::XMLStructure>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SIGNATUREPROPERTIES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SIGNATUREPROPERTIES)
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SIGNATUREPROPERTIES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::crypto::dsig::SignatureProperties : public jni::object_base<"javax/xml/crypto/dsig/SignatureProperties",
	java::lang::Object,
	javax::xml::crypto::XMLStructure>
{
public:

	static jni::ref<java::lang::String> TYPE() { return get_static_field<"TYPE", jni::ref<java::lang::String>>(); }

	jni::ref<java::lang::String> getId() { return call_method<"getId", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::List> getProperties() { return call_method<"getProperties", jni::ref<java::util::List>>(); }

protected:

	SignatureProperties(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_SIGNATUREPROPERTIES