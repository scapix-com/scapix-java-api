// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/awt/event/AWTEventListener.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_LIGHTWEIGHTDISPATCHER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_LIGHTWEIGHTDISPATCHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class LightweightDispatcher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::LightweightDispatcher>
{
	static constexpr fixed_string class_name = "java/awt/LightweightDispatcher";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable, scapix::java_api::java::awt::event::AWTEventListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_LIGHTWEIGHTDISPATCHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_LIGHTWEIGHTDISPATCHER)
#define SCAPIX_JAVA_API_JAVA_AWT_LIGHTWEIGHTDISPATCHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/AWTEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::awt::LightweightDispatcher : public jni::object_base<"java/awt/LightweightDispatcher",
	java::lang::Object,
	java::io::Serializable,
	java::awt::event::AWTEventListener>
{
public:

	void eventDispatched(jni::ref<java::awt::AWTEvent> p1) { return call_method<"eventDispatched", void>(p1); }

protected:

	LightweightDispatcher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_LIGHTWEIGHTDISPATCHER
