// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_WS_HANDLER_HANDLERRESOLVER_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_WS_HANDLER_HANDLERRESOLVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::ws::handler { class HandlerResolver; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::ws::handler::HandlerResolver>
{
	static constexpr fixed_string class_name = "javax/xml/ws/handler/HandlerResolver";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_WS_HANDLER_HANDLERRESOLVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_WS_HANDLER_HANDLERRESOLVER)
#define SCAPIX_JAVA_API_JAVAX_XML_WS_HANDLER_HANDLERRESOLVER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/javax/xml/ws/handler/PortInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::ws::handler::HandlerResolver : public jni::object_base<"javax/xml/ws/handler/HandlerResolver",
	java::lang::Object>
{
public:

	jni::ref<java::util::List> getHandlerChain(jni::ref<javax::xml::ws::handler::PortInfo> p1) { return call_method<"getHandlerChain", jni::ref<java::util::List>>(p1); }

protected:

	HandlerResolver(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_WS_HANDLER_HANDLERRESOLVER
