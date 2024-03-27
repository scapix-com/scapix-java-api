// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Error.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_TRANSFORMERFACTORYCONFIGURATIONERROR_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_TRANSFORMERFACTORYCONFIGURATIONERROR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::transform { class TransformerFactoryConfigurationError; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::transform::TransformerFactoryConfigurationError>
{
	static constexpr fixed_string class_name = "javax/xml/transform/TransformerFactoryConfigurationError";
	using base_classes = std::tuple<scapix::java_api::java::lang::Error>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_TRANSFORMERFACTORYCONFIGURATIONERROR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_TRANSFORMERFACTORYCONFIGURATIONERROR)
#define SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_TRANSFORMERFACTORYCONFIGURATIONERROR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Exception.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::transform::TransformerFactoryConfigurationError : public jni::object_base<"javax/xml/transform/TransformerFactoryConfigurationError",
	java::lang::Error>
{
public:

	static jni::ref<javax::xml::transform::TransformerFactoryConfigurationError> new_object() { return base_::new_object(); }
	static jni::ref<javax::xml::transform::TransformerFactoryConfigurationError> new_object(jni::ref<java::lang::String> msg) { return base_::new_object(msg); }
	static jni::ref<javax::xml::transform::TransformerFactoryConfigurationError> new_object(jni::ref<java::lang::Exception> e) { return base_::new_object(e); }
	static jni::ref<javax::xml::transform::TransformerFactoryConfigurationError> new_object(jni::ref<java::lang::Exception> e, jni::ref<java::lang::String> msg) { return base_::new_object(e, msg); }
	jni::ref<java::lang::String> getMessage() { return call_method<"getMessage", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Exception> getException() { return call_method<"getException", jni::ref<java::lang::Exception>>(); }

protected:

	TransformerFactoryConfigurationError(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_TRANSFORMERFACTORYCONFIGURATIONERROR