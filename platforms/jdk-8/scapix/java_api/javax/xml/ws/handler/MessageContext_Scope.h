// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_WS_HANDLER_MESSAGECONTEXT_SCOPE_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_WS_HANDLER_MESSAGECONTEXT_SCOPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::ws::handler { class MessageContext_Scope; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::ws::handler::MessageContext_Scope>
{
	static constexpr fixed_string class_name = "javax/xml/ws/handler/MessageContext$Scope";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_WS_HANDLER_MESSAGECONTEXT_SCOPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_WS_HANDLER_MESSAGECONTEXT_SCOPE)
#define SCAPIX_JAVA_API_JAVAX_XML_WS_HANDLER_MESSAGECONTEXT_SCOPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::ws::handler::MessageContext_Scope : public jni::object_base<"javax/xml/ws/handler/MessageContext$Scope",
	java::lang::Enum>
{
public:

	static jni::ref<javax::xml::ws::handler::MessageContext_Scope> APPLICATION() { return get_static_field<"APPLICATION", jni::ref<javax::xml::ws::handler::MessageContext_Scope>>(); }
	static jni::ref<javax::xml::ws::handler::MessageContext_Scope> HANDLER() { return get_static_field<"HANDLER", jni::ref<javax::xml::ws::handler::MessageContext_Scope>>(); }

	static jni::ref<jni::array<javax::xml::ws::handler::MessageContext_Scope>> values() { return call_static_method<"values", jni::ref<jni::array<javax::xml::ws::handler::MessageContext_Scope>>>(); }
	static jni::ref<javax::xml::ws::handler::MessageContext_Scope> valueOf(jni::ref<java::lang::String> p1) { return call_static_method<"valueOf", jni::ref<javax::xml::ws::handler::MessageContext_Scope>>(p1); }

protected:

	MessageContext_Scope(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_WS_HANDLER_MESSAGECONTEXT_SCOPE
