// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DATA_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::crypto { class Data; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::crypto::Data>
{
	static constexpr fixed_string class_name = "javax/xml/crypto/Data";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DATA)
#define SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DATA

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::crypto::Data : public jni::object_base<"javax/xml/crypto/Data",
	java::lang::Object>
{
public:


protected:

	Data(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_CRYPTO_DATA