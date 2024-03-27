// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Error.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_PARSERS_FACTORYCONFIGURATIONERROR_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_PARSERS_FACTORYCONFIGURATIONERROR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::parsers { class FactoryConfigurationError; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::parsers::FactoryConfigurationError>
{
	static constexpr fixed_string class_name = "javax/xml/parsers/FactoryConfigurationError";
	using base_classes = std::tuple<scapix::java_api::java::lang::Error>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_PARSERS_FACTORYCONFIGURATIONERROR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_PARSERS_FACTORYCONFIGURATIONERROR)
#define SCAPIX_JAVA_API_JAVAX_XML_PARSERS_FACTORYCONFIGURATIONERROR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Exception.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::parsers::FactoryConfigurationError : public jni::object_base<"javax/xml/parsers/FactoryConfigurationError",
	java::lang::Error>
{
public:

	static jni::ref<javax::xml::parsers::FactoryConfigurationError> new_object() { return base_::new_object(); }
	static jni::ref<javax::xml::parsers::FactoryConfigurationError> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::xml::parsers::FactoryConfigurationError> new_object(jni::ref<java::lang::Exception> p1) { return base_::new_object(p1); }
	static jni::ref<javax::xml::parsers::FactoryConfigurationError> new_object(jni::ref<java::lang::Exception> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> getMessage() { return call_method<"getMessage", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Exception> getException() { return call_method<"getException", jni::ref<java::lang::Exception>>(); }
	jni::ref<java::lang::Throwable> getCause() { return call_method<"getCause", jni::ref<java::lang::Throwable>>(); }

protected:

	FactoryConfigurationError(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_PARSERS_FACTORYCONFIGURATIONERROR
