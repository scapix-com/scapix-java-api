// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Collections_CheckedCollection.h>
#include <scapix/java_api/java/util/Queue.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDQUEUE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDQUEUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Collections_CheckedQueue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Collections_CheckedQueue>
{
	static constexpr fixed_string class_name = "java/util/Collections$CheckedQueue";
	using base_classes = std::tuple<scapix::java_api::java::util::Collections_CheckedCollection, scapix::java_api::java::util::Queue, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDQUEUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDQUEUE)
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDQUEUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Collections_CheckedQueue : public jni::object_base<"java/util/Collections$CheckedQueue",
	java::util::Collections_CheckedCollection,
	java::util::Queue,
	java::io::Serializable>
{
public:

	jni::ref<java::lang::Object> element() { return call_method<"element", jni::ref<java::lang::Object>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::Object> peek() { return call_method<"peek", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> poll() { return call_method<"poll", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> remove() { return call_method<"remove", jni::ref<java::lang::Object>>(); }
	jboolean offer(jni::ref<java::lang::Object> e) { return call_method<"offer", jboolean>(e); }

protected:

	Collections_CheckedQueue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDQUEUE
