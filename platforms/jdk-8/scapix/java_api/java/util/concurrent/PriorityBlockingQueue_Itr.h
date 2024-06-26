// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_PRIORITYBLOCKINGQUEUE_ITR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_PRIORITYBLOCKINGQUEUE_ITR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class PriorityBlockingQueue_Itr; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::PriorityBlockingQueue_Itr>
{
	static constexpr fixed_string class_name = "java/util/concurrent/PriorityBlockingQueue$Itr";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Iterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_PRIORITYBLOCKINGQUEUE_ITR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_PRIORITYBLOCKINGQUEUE_ITR)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_PRIORITYBLOCKINGQUEUE_ITR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::PriorityBlockingQueue_Itr : public jni::object_base<"java/util/concurrent/PriorityBlockingQueue$Itr",
	java::lang::Object,
	java::util::Iterator>
{
public:

	jboolean hasNext() { return call_method<"hasNext", jboolean>(); }
	jni::ref<java::lang::Object> next() { return call_method<"next", jni::ref<java::lang::Object>>(); }
	void remove() { return call_method<"remove", void>(); }

protected:

	PriorityBlockingQueue_Itr(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_PRIORITYBLOCKINGQUEUE_ITR
