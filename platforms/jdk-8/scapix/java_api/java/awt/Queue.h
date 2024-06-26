// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_QUEUE_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_QUEUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class Queue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::Queue>
{
	static constexpr fixed_string class_name = "java/awt/Queue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_QUEUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_QUEUE)
#define SCAPIX_JAVA_API_JAVA_AWT_QUEUE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::awt::Queue : public jni::object_base<"java/awt/Queue",
	java::lang::Object>
{
public:


protected:

	Queue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_QUEUE
