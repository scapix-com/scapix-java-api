// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_DELAYQUEUE_ITR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_DELAYQUEUE_ITR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class DelayQueue_Itr; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::DelayQueue_Itr>
{
	static constexpr fixed_string class_name = "java/util/concurrent/DelayQueue$Itr";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Iterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_DELAYQUEUE_ITR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_DELAYQUEUE_ITR)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_DELAYQUEUE_ITR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/concurrent/Delayed.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::DelayQueue_Itr : public jni::object_base<"java/util/concurrent/DelayQueue$Itr",
	java::lang::Object,
	java::util::Iterator>
{
public:

	jboolean hasNext() { return call_method<"hasNext", jboolean>(); }
	jni::ref<java::util::concurrent::Delayed> next() { return call_method<"next", jni::ref<java::util::concurrent::Delayed>>(); }
	void remove() { return call_method<"remove", void>(); }

protected:

	DelayQueue_Itr(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_DELAYQUEUE_ITR
