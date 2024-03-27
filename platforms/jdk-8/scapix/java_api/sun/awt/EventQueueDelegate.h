// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_EVENTQUEUEDELEGATE_FWD
#define SCAPIX_JAVA_API_SUN_AWT_EVENTQUEUEDELEGATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class EventQueueDelegate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::EventQueueDelegate>
{
	static constexpr fixed_string class_name = "sun/awt/EventQueueDelegate";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_EVENTQUEUEDELEGATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_EVENTQUEUEDELEGATE)
#define SCAPIX_JAVA_API_SUN_AWT_EVENTQUEUEDELEGATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/awt/EventQueueDelegate_Delegate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::EventQueueDelegate : public jni::object_base<"sun/awt/EventQueueDelegate",
	java::lang::Object>
{
public:

	using Delegate = EventQueueDelegate_Delegate;

	static jni::ref<sun::awt::EventQueueDelegate> new_object() { return base_::new_object(); }
	static void setDelegate(jni::ref<sun::awt::EventQueueDelegate_Delegate> p1) { return call_static_method<"setDelegate", void>(p1); }
	static jni::ref<sun::awt::EventQueueDelegate_Delegate> getDelegate() { return call_static_method<"getDelegate", jni::ref<sun::awt::EventQueueDelegate_Delegate>>(); }

protected:

	EventQueueDelegate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_EVENTQUEUEDELEGATE
