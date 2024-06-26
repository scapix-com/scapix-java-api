// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/crypto/XMLStructure.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_XMLOBJECT_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_XMLOBJECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::crypto::dsig { class XMLObject; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::crypto::dsig::XMLObject>
{
	static constexpr fixed_string class_name = "javax/xml/crypto/dsig/XMLObject";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::crypto::XMLStructure>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_XMLOBJECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_XMLOBJECT)
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_XMLOBJECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::crypto::dsig::XMLObject : public jni::object_base<"javax/xml/crypto/dsig/XMLObject",
	java::lang::Object,
	javax::xml::crypto::XMLStructure>
{
public:

	static jni::ref<java::lang::String> TYPE() { return get_static_field<"TYPE", jni::ref<java::lang::String>>(); }

	jni::ref<java::util::List> getContent() { return call_method<"getContent", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::String> getId() { return call_method<"getId", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getMimeType() { return call_method<"getMimeType", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getEncoding() { return call_method<"getEncoding", jni::ref<java::lang::String>>(); }

protected:

	XMLObject(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_XMLOBJECT
