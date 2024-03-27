// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/AWTEvent.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_EVENT_ADJUSTMENTEVENT_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_EVENT_ADJUSTMENTEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::event { class AdjustmentEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::event::AdjustmentEvent>
{
	static constexpr fixed_string class_name = "java/awt/event/AdjustmentEvent";
	using base_classes = std::tuple<scapix::java_api::java::awt::AWTEvent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENT_ADJUSTMENTEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_EVENT_ADJUSTMENTEVENT)
#define SCAPIX_JAVA_API_JAVA_AWT_EVENT_ADJUSTMENTEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Adjustable.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::event::AdjustmentEvent : public jni::object_base<"java/awt/event/AdjustmentEvent",
	java::awt::AWTEvent>
{
public:

	static jint ADJUSTMENT_FIRST() { return get_static_field<"ADJUSTMENT_FIRST", jint>(); }
	static jint ADJUSTMENT_LAST() { return get_static_field<"ADJUSTMENT_LAST", jint>(); }
	static jint ADJUSTMENT_VALUE_CHANGED() { return get_static_field<"ADJUSTMENT_VALUE_CHANGED", jint>(); }
	static jint UNIT_INCREMENT() { return get_static_field<"UNIT_INCREMENT", jint>(); }
	static jint UNIT_DECREMENT() { return get_static_field<"UNIT_DECREMENT", jint>(); }
	static jint BLOCK_DECREMENT() { return get_static_field<"BLOCK_DECREMENT", jint>(); }
	static jint BLOCK_INCREMENT() { return get_static_field<"BLOCK_INCREMENT", jint>(); }
	static jint TRACK() { return get_static_field<"TRACK", jint>(); }

	static jni::ref<java::awt::event::AdjustmentEvent> new_object(jni::ref<java::awt::Adjustable> p1, jint p2, jint p3, jint p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<java::awt::event::AdjustmentEvent> new_object(jni::ref<java::awt::Adjustable> p1, jint p2, jint p3, jint p4, jboolean p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	jni::ref<java::awt::Adjustable> getAdjustable() { return call_method<"getAdjustable", jni::ref<java::awt::Adjustable>>(); }
	jint getValue() { return call_method<"getValue", jint>(); }
	jint getAdjustmentType() { return call_method<"getAdjustmentType", jint>(); }
	jboolean getValueIsAdjusting() { return call_method<"getValueIsAdjusting", jboolean>(); }
	jni::ref<java::lang::String> paramString() { return call_method<"paramString", jni::ref<java::lang::String>>(); }

protected:

	AdjustmentEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENT_ADJUSTMENTEVENT