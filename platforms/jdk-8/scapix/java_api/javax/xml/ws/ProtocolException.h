// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/xml/ws/WebServiceException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_WS_PROTOCOLEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_WS_PROTOCOLEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::ws { class ProtocolException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::ws::ProtocolException>
{
	static constexpr fixed_string class_name = "javax/xml/ws/ProtocolException";
	using base_classes = std::tuple<scapix::java_api::javax::xml::ws::WebServiceException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_WS_PROTOCOLEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_WS_PROTOCOLEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_XML_WS_PROTOCOLEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::ws::ProtocolException : public jni::object_base<"javax/xml/ws/ProtocolException",
	javax::xml::ws::WebServiceException>
{
public:

	static jni::ref<javax::xml::ws::ProtocolException> new_object() { return base_::new_object(); }
	static jni::ref<javax::xml::ws::ProtocolException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::xml::ws::ProtocolException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Throwable> p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::xml::ws::ProtocolException> new_object(jni::ref<java::lang::Throwable> p1) { return base_::new_object(p1); }

protected:

	ProtocolException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_WS_PROTOCOLEXCEPTION
