// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_LAYOUTQUEUE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_LAYOUTQUEUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class LayoutQueue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::LayoutQueue>
{
	static constexpr fixed_string class_name = "javax/swing/text/LayoutQueue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_LAYOUTQUEUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_LAYOUTQUEUE)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_LAYOUTQUEUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Runnable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::LayoutQueue : public jni::object_base<"javax/swing/text/LayoutQueue",
	java::lang::Object>
{
public:

	static jni::ref<javax::swing::text::LayoutQueue> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::text::LayoutQueue> getDefaultQueue() { return call_static_method<"getDefaultQueue", jni::ref<javax::swing::text::LayoutQueue>>(); }
	static void setDefaultQueue(jni::ref<javax::swing::text::LayoutQueue> p1) { return call_static_method<"setDefaultQueue", void>(p1); }
	void addTask(jni::ref<java::lang::Runnable> p1) { return call_method<"addTask", void>(p1); }

protected:

	LayoutQueue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_LAYOUTQUEUE
