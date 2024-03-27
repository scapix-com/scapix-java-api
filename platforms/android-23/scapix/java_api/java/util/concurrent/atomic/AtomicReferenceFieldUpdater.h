// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEFIELDUPDATER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEFIELDUPDATER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::atomic { class AtomicReferenceFieldUpdater; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::atomic::AtomicReferenceFieldUpdater>
{
	static constexpr fixed_string class_name = "java/util/concurrent/atomic/AtomicReferenceFieldUpdater";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEFIELDUPDATER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEFIELDUPDATER)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEFIELDUPDATER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::atomic::AtomicReferenceFieldUpdater : public jni::object_base<"java/util/concurrent/atomic/AtomicReferenceFieldUpdater",
	java::lang::Object>
{
public:

	static jni::ref<java::util::concurrent::atomic::AtomicReferenceFieldUpdater> newUpdater(jni::ref<java::lang::Class> tclass, jni::ref<java::lang::Class> vclass, jni::ref<java::lang::String> fieldName) { return call_static_method<"newUpdater", jni::ref<java::util::concurrent::atomic::AtomicReferenceFieldUpdater>>(tclass, vclass, fieldName); }
	jboolean compareAndSet(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::Object> p3) { return call_method<"compareAndSet", jboolean>(p1, p2, p3); }
	jboolean weakCompareAndSet(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::Object> p3) { return call_method<"weakCompareAndSet", jboolean>(p1, p2, p3); }
	void set(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"set", void>(p1, p2); }
	void lazySet(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"lazySet", void>(p1, p2); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> getAndSet(jni::ref<java::lang::Object> obj, jni::ref<java::lang::Object> newValue) { return call_method<"getAndSet", jni::ref<java::lang::Object>>(obj, newValue); }

protected:

	AtomicReferenceFieldUpdater(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEFIELDUPDATER
