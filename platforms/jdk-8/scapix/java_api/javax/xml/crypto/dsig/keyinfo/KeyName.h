// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/crypto/XMLStructure.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_KEYINFO_KEYNAME_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_KEYINFO_KEYNAME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::crypto::dsig::keyinfo { class KeyName; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::crypto::dsig::keyinfo::KeyName>
{
	static constexpr fixed_string class_name = "javax/xml/crypto/dsig/keyinfo/KeyName";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::crypto::XMLStructure>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_KEYINFO_KEYNAME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_KEYINFO_KEYNAME)
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_KEYINFO_KEYNAME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::crypto::dsig::keyinfo::KeyName : public jni::object_base<"javax/xml/crypto/dsig/keyinfo/KeyName",
	java::lang::Object,
	javax::xml::crypto::XMLStructure>
{
public:

	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }

protected:

	KeyName(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DSIG_KEYINFO_KEYNAME
