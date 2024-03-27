// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/crypto/dsig/Transform.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_TRANSFORMSERVICE_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_TRANSFORMSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::crypto::dsig { class TransformService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::crypto::dsig::TransformService>
{
	static constexpr fixed_string class_name = "javax/xml/crypto/dsig/TransformService";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::crypto::dsig::Transform>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_TRANSFORMSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_TRANSFORMSERVICE)
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_TRANSFORMSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/javax/xml/crypto/XMLCryptoContext.h>
#include <scapix/java_api/javax/xml/crypto/XMLStructure.h>
#include <scapix/java_api/javax/xml/crypto/dsig/spec/TransformParameterSpec.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::crypto::dsig::TransformService : public jni::object_base<"javax/xml/crypto/dsig/TransformService",
	java::lang::Object,
	javax::xml::crypto::dsig::Transform>
{
public:

	static jni::ref<javax::xml::crypto::dsig::TransformService> getInstance(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_static_method<"getInstance", jni::ref<javax::xml::crypto::dsig::TransformService>>(p1, p2); }
	static jni::ref<javax::xml::crypto::dsig::TransformService> getInstance(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::security::Provider> p3) { return call_static_method<"getInstance", jni::ref<javax::xml::crypto::dsig::TransformService>>(p1, p2, p3); }
	static jni::ref<javax::xml::crypto::dsig::TransformService> getInstance(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_static_method<"getInstance", jni::ref<javax::xml::crypto::dsig::TransformService>>(p1, p2, p3); }
	jni::ref<java::lang::String> getMechanismType() { return call_method<"getMechanismType", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getAlgorithm() { return call_method<"getAlgorithm", jni::ref<java::lang::String>>(); }
	jni::ref<java::security::Provider> getProvider() { return call_method<"getProvider", jni::ref<java::security::Provider>>(); }
	void init(jni::ref<javax::xml::crypto::dsig::spec::TransformParameterSpec> p1) { return call_method<"init", void>(p1); }
	void marshalParams(jni::ref<javax::xml::crypto::XMLStructure> p1, jni::ref<javax::xml::crypto::XMLCryptoContext> p2) { return call_method<"marshalParams", void>(p1, p2); }
	void init(jni::ref<javax::xml::crypto::XMLStructure> p1, jni::ref<javax::xml::crypto::XMLCryptoContext> p2) { return call_method<"init", void>(p1, p2); }

protected:

	TransformService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_TRANSFORMSERVICE