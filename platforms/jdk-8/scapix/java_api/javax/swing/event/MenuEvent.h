// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/EventObject.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MENUEVENT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MENUEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::event { class MenuEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::event::MenuEvent>
{
	static constexpr fixed_string class_name = "javax/swing/event/MenuEvent";
	using base_classes = std::tuple<scapix::java_api::java::util::EventObject>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MENUEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MENUEVENT)
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MENUEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::event::MenuEvent : public jni::object_base<"javax/swing/event/MenuEvent",
	java::util::EventObject>
{
public:

	static jni::ref<javax::swing::event::MenuEvent> new_object(jni::ref<java::lang::Object> p1) { return base_::new_object(p1); }

protected:

	MenuEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MENUEVENT
