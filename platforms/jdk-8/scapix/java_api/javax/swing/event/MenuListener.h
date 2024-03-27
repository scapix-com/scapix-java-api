// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/EventListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MENULISTENER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MENULISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::event { class MenuListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::event::MenuListener>
{
	static constexpr fixed_string class_name = "javax/swing/event/MenuListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::EventListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MENULISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MENULISTENER)
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MENULISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/event/MenuEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::event::MenuListener : public jni::object_base<"javax/swing/event/MenuListener",
	java::lang::Object,
	java::util::EventListener>
{
public:

	void menuSelected(jni::ref<javax::swing::event::MenuEvent> p1) { return call_method<"menuSelected", void>(p1); }
	void menuDeselected(jni::ref<javax::swing::event::MenuEvent> p1) { return call_method<"menuDeselected", void>(p1); }
	void menuCanceled(jni::ref<javax::swing::event::MenuEvent> p1) { return call_method<"menuCanceled", void>(p1); }

protected:

	MenuListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_MENULISTENER
