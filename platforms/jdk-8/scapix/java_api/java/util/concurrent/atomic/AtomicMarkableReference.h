// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICMARKABLEREFERENCE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICMARKABLEREFERENCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::atomic { class AtomicMarkableReference; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::atomic::AtomicMarkableReference>
{
	static constexpr fixed_string class_name = "java/util/concurrent/atomic/AtomicMarkableReference";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICMARKABLEREFERENCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICMARKABLEREFERENCE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICMARKABLEREFERENCE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::atomic::AtomicMarkableReference : public jni::object_base<"java/util/concurrent/atomic/AtomicMarkableReference",
	java::lang::Object>
{
public:

	static jni::ref<java::util::concurrent::atomic::AtomicMarkableReference> new_object(jni::ref<java::lang::Object> p1, jboolean p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::Object> getReference() { return call_method<"getReference", jni::ref<java::lang::Object>>(); }
	jboolean isMarked() { return call_method<"isMarked", jboolean>(); }
	jni::ref<java::lang::Object> get(jni::ref<jni::array<jboolean>> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jboolean weakCompareAndSet(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2, jboolean p3, jboolean p4) { return call_method<"weakCompareAndSet", jboolean>(p1, p2, p3, p4); }
	jboolean compareAndSet(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2, jboolean p3, jboolean p4) { return call_method<"compareAndSet", jboolean>(p1, p2, p3, p4); }
	void set(jni::ref<java::lang::Object> p1, jboolean p2) { return call_method<"set", void>(p1, p2); }
	jboolean attemptMark(jni::ref<java::lang::Object> p1, jboolean p2) { return call_method<"attemptMark", jboolean>(p1, p2); }

protected:

	AtomicMarkableReference(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICMARKABLEREFERENCE