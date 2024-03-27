// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/AWTEvent.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_EVENT_HIERARCHYEVENT_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_EVENT_HIERARCHYEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::event { class HierarchyEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::event::HierarchyEvent>
{
	static constexpr fixed_string class_name = "java/awt/event/HierarchyEvent";
	using base_classes = std::tuple<scapix::java_api::java::awt::AWTEvent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENT_HIERARCHYEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_EVENT_HIERARCHYEVENT)
#define SCAPIX_JAVA_API_JAVA_AWT_EVENT_HIERARCHYEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Container.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::event::HierarchyEvent : public jni::object_base<"java/awt/event/HierarchyEvent",
	java::awt::AWTEvent>
{
public:

	static jint HIERARCHY_FIRST() { return get_static_field<"HIERARCHY_FIRST", jint>(); }
	static jint HIERARCHY_CHANGED() { return get_static_field<"HIERARCHY_CHANGED", jint>(); }
	static jint ANCESTOR_MOVED() { return get_static_field<"ANCESTOR_MOVED", jint>(); }
	static jint ANCESTOR_RESIZED() { return get_static_field<"ANCESTOR_RESIZED", jint>(); }
	static jint HIERARCHY_LAST() { return get_static_field<"HIERARCHY_LAST", jint>(); }
	static jint PARENT_CHANGED() { return get_static_field<"PARENT_CHANGED", jint>(); }
	static jint DISPLAYABILITY_CHANGED() { return get_static_field<"DISPLAYABILITY_CHANGED", jint>(); }
	static jint SHOWING_CHANGED() { return get_static_field<"SHOWING_CHANGED", jint>(); }

	static jni::ref<java::awt::event::HierarchyEvent> new_object(jni::ref<java::awt::Component> p1, jint p2, jni::ref<java::awt::Component> p3, jni::ref<java::awt::Container> p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<java::awt::event::HierarchyEvent> new_object(jni::ref<java::awt::Component> p1, jint p2, jni::ref<java::awt::Component> p3, jni::ref<java::awt::Container> p4, jlong p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	jni::ref<java::awt::Component> getComponent() { return call_method<"getComponent", jni::ref<java::awt::Component>>(); }
	jni::ref<java::awt::Component> getChanged() { return call_method<"getChanged", jni::ref<java::awt::Component>>(); }
	jni::ref<java::awt::Container> getChangedParent() { return call_method<"getChangedParent", jni::ref<java::awt::Container>>(); }
	jlong getChangeFlags() { return call_method<"getChangeFlags", jlong>(); }
	jni::ref<java::lang::String> paramString() { return call_method<"paramString", jni::ref<java::lang::String>>(); }

protected:

	HierarchyEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENT_HIERARCHYEVENT
