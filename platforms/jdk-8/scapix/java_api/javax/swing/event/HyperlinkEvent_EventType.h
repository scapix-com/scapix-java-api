// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_EVENT_HYPERLINKEVENT_EVENTTYPE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_HYPERLINKEVENT_EVENTTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::event { class HyperlinkEvent_EventType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::event::HyperlinkEvent_EventType>
{
	static constexpr fixed_string class_name = "javax/swing/event/HyperlinkEvent$EventType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_HYPERLINKEVENT_EVENTTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_EVENT_HYPERLINKEVENT_EVENTTYPE)
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_HYPERLINKEVENT_EVENTTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::event::HyperlinkEvent_EventType : public jni::object_base<"javax/swing/event/HyperlinkEvent$EventType",
	java::lang::Object>
{
public:

	static jni::ref<javax::swing::event::HyperlinkEvent_EventType> ENTERED() { return get_static_field<"ENTERED", jni::ref<javax::swing::event::HyperlinkEvent_EventType>>(); }
	static jni::ref<javax::swing::event::HyperlinkEvent_EventType> EXITED() { return get_static_field<"EXITED", jni::ref<javax::swing::event::HyperlinkEvent_EventType>>(); }
	static jni::ref<javax::swing::event::HyperlinkEvent_EventType> ACTIVATED() { return get_static_field<"ACTIVATED", jni::ref<javax::swing::event::HyperlinkEvent_EventType>>(); }

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	HyperlinkEvent_EventType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_HYPERLINKEVENT_EVENTTYPE