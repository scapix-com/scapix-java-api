// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/EventListener.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_EVENT_ADJUSTMENTLISTENER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_EVENT_ADJUSTMENTLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::event { class AdjustmentListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::event::AdjustmentListener>
{
	static constexpr fixed_string class_name = "java/awt/event/AdjustmentListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::EventListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENT_ADJUSTMENTLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_EVENT_ADJUSTMENTLISTENER)
#define SCAPIX_JAVA_API_JAVA_AWT_EVENT_ADJUSTMENTLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/AdjustmentEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::event::AdjustmentListener : public jni::object_base<"java/awt/event/AdjustmentListener",
	java::lang::Object,
	java::util::EventListener>
{
public:

	void adjustmentValueChanged(jni::ref<java::awt::event::AdjustmentEvent> p1) { return call_method<"adjustmentValueChanged", void>(p1); }

protected:

	AdjustmentListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENT_ADJUSTMENTLISTENER