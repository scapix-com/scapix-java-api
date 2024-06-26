// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_DND_SUNDROPTARGETCONTEXTPEER_EVENTDISPATCHER_FWD
#define SCAPIX_JAVA_API_SUN_AWT_DND_SUNDROPTARGETCONTEXTPEER_EVENTDISPATCHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::dnd { class SunDropTargetContextPeer_EventDispatcher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::dnd::SunDropTargetContextPeer_EventDispatcher>
{
	static constexpr fixed_string class_name = "sun/awt/dnd/SunDropTargetContextPeer$EventDispatcher";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_DND_SUNDROPTARGETCONTEXTPEER_EVENTDISPATCHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_DND_SUNDROPTARGETCONTEXTPEER_EVENTDISPATCHER)
#define SCAPIX_JAVA_API_SUN_AWT_DND_SUNDROPTARGETCONTEXTPEER_EVENTDISPATCHER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::dnd::SunDropTargetContextPeer_EventDispatcher : public jni::object_base<"sun/awt/dnd/SunDropTargetContextPeer$EventDispatcher",
	java::lang::Object>
{
public:

	void unregisterAllEvents() { return call_method<"unregisterAllEvents", void>(); }

protected:

	SunDropTargetContextPeer_EventDispatcher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_DND_SUNDROPTARGETCONTEXTPEER_EVENTDISPATCHER
