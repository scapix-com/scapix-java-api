// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Thread.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_LAYOUTQUEUE_LAYOUTTHREAD_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_LAYOUTQUEUE_LAYOUTTHREAD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class LayoutQueue_LayoutThread; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::LayoutQueue_LayoutThread>
{
	static constexpr fixed_string class_name = "javax/swing/text/LayoutQueue$LayoutThread";
	using base_classes = std::tuple<scapix::java_api::java::lang::Thread>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_LAYOUTQUEUE_LAYOUTTHREAD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_LAYOUTQUEUE_LAYOUTTHREAD)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_LAYOUTQUEUE_LAYOUTTHREAD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::LayoutQueue_LayoutThread : public jni::object_base<"javax/swing/text/LayoutQueue$LayoutThread",
	java::lang::Thread>
{
public:

	void run() { return call_method<"run", void>(); }

protected:

	LayoutQueue_LayoutThread(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_LAYOUTQUEUE_LAYOUTTHREAD
