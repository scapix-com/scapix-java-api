// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_EVENTS_EVENTTARGET_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_EVENTS_EVENTTARGET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::events { class EventTarget; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::events::EventTarget>
{
	static constexpr fixed_string class_name = "org/w3c/dom/events/EventTarget";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_EVENTS_EVENTTARGET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_EVENTS_EVENTTARGET)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_EVENTS_EVENTTARGET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/events/Event.h>
#include <scapix/java_api/org/w3c/dom/events/EventListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::events::EventTarget : public jni::object_base<"org/w3c/dom/events/EventTarget",
	java::lang::Object>
{
public:

	void addEventListener(jni::ref<java::lang::String> p1, jni::ref<org::w3c::dom::events::EventListener> p2, jboolean p3) { return call_method<"addEventListener", void>(p1, p2, p3); }
	void removeEventListener(jni::ref<java::lang::String> p1, jni::ref<org::w3c::dom::events::EventListener> p2, jboolean p3) { return call_method<"removeEventListener", void>(p1, p2, p3); }
	jboolean dispatchEvent(jni::ref<org::w3c::dom::events::Event> p1) { return call_method<"dispatchEvent", jboolean>(p1); }

protected:

	EventTarget(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_EVENTS_EVENTTARGET
