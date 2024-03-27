// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_EVENTS_DOCUMENTEVENT_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_EVENTS_DOCUMENTEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::events { class DocumentEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::events::DocumentEvent>
{
	static constexpr fixed_string class_name = "org/w3c/dom/events/DocumentEvent";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_EVENTS_DOCUMENTEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_EVENTS_DOCUMENTEVENT)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_EVENTS_DOCUMENTEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/events/Event.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::events::DocumentEvent : public jni::object_base<"org/w3c/dom/events/DocumentEvent",
	java::lang::Object>
{
public:

	jni::ref<org::w3c::dom::events::Event> createEvent(jni::ref<java::lang::String> p1) { return call_method<"createEvent", jni::ref<org::w3c::dom::events::Event>>(p1); }

protected:

	DocumentEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_EVENTS_DOCUMENTEVENT
