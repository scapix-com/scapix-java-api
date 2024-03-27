// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_EVENTFILTER_FILTERACTION_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_EVENTFILTER_FILTERACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class EventFilter_FilterAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::EventFilter_FilterAction>
{
	static constexpr fixed_string class_name = "java/awt/EventFilter$FilterAction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENTFILTER_FILTERACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_EVENTFILTER_FILTERACTION)
#define SCAPIX_JAVA_API_JAVA_AWT_EVENTFILTER_FILTERACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::EventFilter_FilterAction : public jni::object_base<"java/awt/EventFilter$FilterAction",
	java::lang::Enum>
{
public:

	static jni::ref<java::awt::EventFilter_FilterAction> ACCEPT() { return get_static_field<"ACCEPT", jni::ref<java::awt::EventFilter_FilterAction>>(); }
	static jni::ref<java::awt::EventFilter_FilterAction> REJECT() { return get_static_field<"REJECT", jni::ref<java::awt::EventFilter_FilterAction>>(); }
	static jni::ref<java::awt::EventFilter_FilterAction> ACCEPT_IMMEDIATELY() { return get_static_field<"ACCEPT_IMMEDIATELY", jni::ref<java::awt::EventFilter_FilterAction>>(); }

	static jni::ref<jni::array<java::awt::EventFilter_FilterAction>> values() { return call_static_method<"values", jni::ref<jni::array<java::awt::EventFilter_FilterAction>>>(); }
	static jni::ref<java::awt::EventFilter_FilterAction> valueOf(jni::ref<java::lang::String> p1) { return call_static_method<"valueOf", jni::ref<java::awt::EventFilter_FilterAction>>(p1); }

protected:

	EventFilter_FilterAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENTFILTER_FILTERACTION