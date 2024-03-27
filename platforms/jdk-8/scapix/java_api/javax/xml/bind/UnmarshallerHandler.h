// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_UNMARSHALLERHANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_UNMARSHALLERHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind { class UnmarshallerHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::UnmarshallerHandler>
{
	static constexpr fixed_string class_name = "javax/xml/bind/UnmarshallerHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::xml::sax::ContentHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_UNMARSHALLERHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_UNMARSHALLERHANDLER)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_UNMARSHALLERHANDLER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::bind::UnmarshallerHandler : public jni::object_base<"javax/xml/bind/UnmarshallerHandler",
	java::lang::Object,
	org::xml::sax::ContentHandler>
{
public:

	jni::ref<java::lang::Object> getResult() { return call_method<"getResult", jni::ref<java::lang::Object>>(); }

protected:

	UnmarshallerHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_UNMARSHALLERHANDLER