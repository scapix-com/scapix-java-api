// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_EVENTLISTENERAGGREGATE_FWD
#define SCAPIX_JAVA_API_SUN_AWT_EVENTLISTENERAGGREGATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class EventListenerAggregate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::EventListenerAggregate>
{
	static constexpr fixed_string class_name = "sun/awt/EventListenerAggregate";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_EVENTLISTENERAGGREGATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_EVENTLISTENERAGGREGATE)
#define SCAPIX_JAVA_API_SUN_AWT_EVENTLISTENERAGGREGATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/util/EventListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::EventListenerAggregate : public jni::object_base<"sun/awt/EventListenerAggregate",
	java::lang::Object>
{
public:

	static jni::ref<sun::awt::EventListenerAggregate> new_object(jni::ref<java::lang::Class> p1) { return base_::new_object(p1); }
	void add(jni::ref<java::util::EventListener> p1) { return call_method<"add", void>(p1); }
	jboolean remove(jni::ref<java::util::EventListener> p1) { return call_method<"remove", jboolean>(p1); }
	jni::ref<jni::array<java::util::EventListener>> getListenersInternal() { return call_method<"getListenersInternal", jni::ref<jni::array<java::util::EventListener>>>(); }
	jni::ref<jni::array<java::util::EventListener>> getListenersCopy() { return call_method<"getListenersCopy", jni::ref<jni::array<java::util::EventListener>>>(); }
	jint size() { return call_method<"size", jint>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }

protected:

	EventListenerAggregate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_EVENTLISTENERAGGREGATE