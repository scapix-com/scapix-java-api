// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/event/ContainerListener.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_CONTAINER_ACCESSIBLEAWTCONTAINER_ACCESSIBLECONTAINERHANDLER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_CONTAINER_ACCESSIBLEAWTCONTAINER_ACCESSIBLECONTAINERHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class Container_AccessibleAWTContainer_AccessibleContainerHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::Container_AccessibleAWTContainer_AccessibleContainerHandler>
{
	static constexpr fixed_string class_name = "java/awt/Container$AccessibleAWTContainer$AccessibleContainerHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::event::ContainerListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_CONTAINER_ACCESSIBLEAWTCONTAINER_ACCESSIBLECONTAINERHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_CONTAINER_ACCESSIBLEAWTCONTAINER_ACCESSIBLECONTAINERHANDLER)
#define SCAPIX_JAVA_API_JAVA_AWT_CONTAINER_ACCESSIBLEAWTCONTAINER_ACCESSIBLECONTAINERHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ContainerEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::Container_AccessibleAWTContainer_AccessibleContainerHandler : public jni::object_base<"java/awt/Container$AccessibleAWTContainer$AccessibleContainerHandler",
	java::lang::Object,
	java::awt::event::ContainerListener>
{
public:

	void componentAdded(jni::ref<java::awt::event::ContainerEvent> p1) { return call_method<"componentAdded", void>(p1); }
	void componentRemoved(jni::ref<java::awt::event::ContainerEvent> p1) { return call_method<"componentRemoved", void>(p1); }

protected:

	Container_AccessibleAWTContainer_AccessibleContainerHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_CONTAINER_ACCESSIBLEAWTCONTAINER_ACCESSIBLECONTAINERHANDLER
