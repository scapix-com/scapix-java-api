// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/ws/Binding.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_WS_HTTP_HTTPBINDING_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_WS_HTTP_HTTPBINDING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::ws::http { class HTTPBinding; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::ws::http::HTTPBinding>
{
	static constexpr fixed_string class_name = "javax/xml/ws/http/HTTPBinding";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::ws::Binding>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_WS_HTTP_HTTPBINDING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_WS_HTTP_HTTPBINDING)
#define SCAPIX_JAVA_API_JAVAX_XML_WS_HTTP_HTTPBINDING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::ws::http::HTTPBinding : public jni::object_base<"javax/xml/ws/http/HTTPBinding",
	java::lang::Object,
	javax::xml::ws::Binding>
{
public:

	static jni::ref<java::lang::String> HTTP_BINDING() { return get_static_field<"HTTP_BINDING", jni::ref<java::lang::String>>(); }


protected:

	HTTPBinding(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_WS_HTTP_HTTPBINDING
