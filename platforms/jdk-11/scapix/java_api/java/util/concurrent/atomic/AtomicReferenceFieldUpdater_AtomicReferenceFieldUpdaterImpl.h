// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/atomic/AtomicReferenceFieldUpdater.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEFIELDUPDATER_ATOMICREFERENCEFIELDUPDATERIMPL_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEFIELDUPDATER_ATOMICREFERENCEFIELDUPDATERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::atomic { class AtomicReferenceFieldUpdater_AtomicReferenceFieldUpdaterImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::atomic::AtomicReferenceFieldUpdater_AtomicReferenceFieldUpdaterImpl>
{
	static constexpr fixed_string class_name = "java/util/concurrent/atomic/AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::atomic::AtomicReferenceFieldUpdater>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEFIELDUPDATER_ATOMICREFERENCEFIELDUPDATERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEFIELDUPDATER_ATOMICREFERENCEFIELDUPDATERIMPL)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEFIELDUPDATER_ATOMICREFERENCEFIELDUPDATERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::atomic::AtomicReferenceFieldUpdater_AtomicReferenceFieldUpdaterImpl : public jni::object_base<"java/util/concurrent/atomic/AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl",
	java::util::concurrent::atomic::AtomicReferenceFieldUpdater>
{
public:

	jboolean compareAndSet(jni::ref<java::lang::Object> obj, jni::ref<java::lang::Object> expect, jni::ref<java::lang::Object> update) { return call_method<"compareAndSet", jboolean>(obj, expect, update); }
	jboolean weakCompareAndSet(jni::ref<java::lang::Object> obj, jni::ref<java::lang::Object> expect, jni::ref<java::lang::Object> update) { return call_method<"weakCompareAndSet", jboolean>(obj, expect, update); }
	void set(jni::ref<java::lang::Object> obj, jni::ref<java::lang::Object> newValue) { return call_method<"set", void>(obj, newValue); }
	void lazySet(jni::ref<java::lang::Object> obj, jni::ref<java::lang::Object> newValue) { return call_method<"lazySet", void>(obj, newValue); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> obj) { return call_method<"get", jni::ref<java::lang::Object>>(obj); }
	jni::ref<java::lang::Object> getAndSet(jni::ref<java::lang::Object> obj, jni::ref<java::lang::Object> newValue) { return call_method<"getAndSet", jni::ref<java::lang::Object>>(obj, newValue); }

protected:

	AtomicReferenceFieldUpdater_AtomicReferenceFieldUpdaterImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEFIELDUPDATER_ATOMICREFERENCEFIELDUPDATERIMPL
