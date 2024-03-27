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

	static jni::ref<java::util::concurrent::atomic::AtomicMarkableReference> new_object(jni::ref<java::lang::Object> initialRef, jboolean initialMark) { return base_::new_object(initialRef, initialMark); }
	jni::ref<java::lang::Object> getReference() { return call_method<"getReference", jni::ref<java::lang::Object>>(); }
	jboolean isMarked() { return call_method<"isMarked", jboolean>(); }
	jni::ref<java::lang::Object> get(jni::ref<jni::array<jboolean>> markHolder) { return call_method<"get", jni::ref<java::lang::Object>>(markHolder); }
	jboolean weakCompareAndSet(jni::ref<java::lang::Object> expectedReference, jni::ref<java::lang::Object> newReference, jboolean expectedMark, jboolean newMark) { return call_method<"weakCompareAndSet", jboolean>(expectedReference, newReference, expectedMark, newMark); }
	jboolean compareAndSet(jni::ref<java::lang::Object> expectedReference, jni::ref<java::lang::Object> newReference, jboolean expectedMark, jboolean newMark) { return call_method<"compareAndSet", jboolean>(expectedReference, newReference, expectedMark, newMark); }
	void set(jni::ref<java::lang::Object> newReference, jboolean newMark) { return call_method<"set", void>(newReference, newMark); }
	jboolean attemptMark(jni::ref<java::lang::Object> expectedReference, jboolean newMark) { return call_method<"attemptMark", jboolean>(expectedReference, newMark); }

protected:

	AtomicMarkableReference(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICMARKABLEREFERENCE
