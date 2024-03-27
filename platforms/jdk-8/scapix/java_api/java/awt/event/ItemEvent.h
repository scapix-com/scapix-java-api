// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/AWTEvent.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_EVENT_ITEMEVENT_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_EVENT_ITEMEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::event { class ItemEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::event::ItemEvent>
{
	static constexpr fixed_string class_name = "java/awt/event/ItemEvent";
	using base_classes = std::tuple<scapix::java_api::java::awt::AWTEvent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENT_ITEMEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_EVENT_ITEMEVENT)
#define SCAPIX_JAVA_API_JAVA_AWT_EVENT_ITEMEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/ItemSelectable.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::event::ItemEvent : public jni::object_base<"java/awt/event/ItemEvent",
	java::awt::AWTEvent>
{
public:

	static jint ITEM_FIRST() { return get_static_field<"ITEM_FIRST", jint>(); }
	static jint ITEM_LAST() { return get_static_field<"ITEM_LAST", jint>(); }
	static jint ITEM_STATE_CHANGED() { return get_static_field<"ITEM_STATE_CHANGED", jint>(); }
	static jint SELECTED() { return get_static_field<"SELECTED", jint>(); }
	static jint DESELECTED() { return get_static_field<"DESELECTED", jint>(); }

	static jni::ref<java::awt::event::ItemEvent> new_object(jni::ref<java::awt::ItemSelectable> p1, jint p2, jni::ref<java::lang::Object> p3, jint p4) { return base_::new_object(p1, p2, p3, p4); }
	jni::ref<java::awt::ItemSelectable> getItemSelectable() { return call_method<"getItemSelectable", jni::ref<java::awt::ItemSelectable>>(); }
	jni::ref<java::lang::Object> getItem() { return call_method<"getItem", jni::ref<java::lang::Object>>(); }
	jint getStateChange() { return call_method<"getStateChange", jint>(); }
	jni::ref<java::lang::String> paramString() { return call_method<"paramString", jni::ref<java::lang::String>>(); }

protected:

	ItemEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENT_ITEMEVENT