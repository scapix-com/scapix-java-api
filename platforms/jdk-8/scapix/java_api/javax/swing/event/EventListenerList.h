// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_EVENT_EVENTLISTENERLIST_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_EVENTLISTENERLIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::event { class EventListenerList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::event::EventListenerList>
{
	static constexpr fixed_string class_name = "javax/swing/event/EventListenerList";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_EVENTLISTENERLIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_EVENT_EVENTLISTENERLIST)
#define SCAPIX_JAVA_API_JAVAX_SWING_EVENT_EVENTLISTENERLIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/EventListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::event::EventListenerList : public jni::object_base<"javax/swing/event/EventListenerList",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<javax::swing::event::EventListenerList> new_object() { return base_::new_object(); }
	jni::ref<jni::array<java::lang::Object>> getListenerList() { return call_method<"getListenerList", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::util::EventListener>> getListeners(jni::ref<java::lang::Class> p1) { return call_method<"getListeners", jni::ref<jni::array<java::util::EventListener>>>(p1); }
	jint getListenerCount() { return call_method<"getListenerCount", jint>(); }
	jint getListenerCount(jni::ref<java::lang::Class> p1) { return call_method<"getListenerCount", jint>(p1); }
	void add(jni::ref<java::lang::Class> p1, jni::ref<java::util::EventListener> p2) { return call_method<"add", void>(p1, p2); }
	void remove(jni::ref<java::lang::Class> p1, jni::ref<java::util::EventListener> p2) { return call_method<"remove", void>(p1, p2); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	EventListenerList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_EVENT_EVENTLISTENERLIST