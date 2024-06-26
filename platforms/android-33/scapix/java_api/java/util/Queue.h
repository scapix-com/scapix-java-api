// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_QUEUE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_QUEUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Queue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Queue>
{
	static constexpr fixed_string class_name = "java/util/Queue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Collection>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_QUEUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_QUEUE)
#define SCAPIX_JAVA_API_JAVA_UTIL_QUEUE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Queue : public jni::object_base<"java/util/Queue",
	java::lang::Object,
	java::util::Collection>
{
public:

	jboolean add(jni::ref<java::lang::Object> p1) { return call_method<"add", jboolean>(p1); }
	jboolean offer(jni::ref<java::lang::Object> p1) { return call_method<"offer", jboolean>(p1); }
	jni::ref<java::lang::Object> remove() { return call_method<"remove", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> poll() { return call_method<"poll", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> element() { return call_method<"element", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> peek() { return call_method<"peek", jni::ref<java::lang::Object>>(); }

protected:

	Queue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_QUEUE
