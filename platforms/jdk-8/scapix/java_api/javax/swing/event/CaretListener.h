// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/EventListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_EVENT_CARETLISTENER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_CARETLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::event { class CaretListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::event::CaretListener>
{
	static constexpr fixed_string class_name = "javax/swing/event/CaretListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::EventListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_CARETLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_EVENT_CARETLISTENER)
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_CARETLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/event/CaretEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::event::CaretListener : public jni::object_base<"javax/swing/event/CaretListener",
	java::lang::Object,
	java::util::EventListener>
{
public:

	void caretUpdate(jni::ref<javax::swing::event::CaretEvent> p1) { return call_method<"caretUpdate", void>(p1); }

protected:

	CaretListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_CARETLISTENER
