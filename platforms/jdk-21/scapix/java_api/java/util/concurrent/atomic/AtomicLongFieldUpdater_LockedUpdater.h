// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/atomic/AtomicLongFieldUpdater.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER_LOCKEDUPDATER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER_LOCKEDUPDATER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::atomic { class AtomicLongFieldUpdater_LockedUpdater; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::atomic::AtomicLongFieldUpdater_LockedUpdater>
{
	static constexpr fixed_string class_name = "java/util/concurrent/atomic/AtomicLongFieldUpdater$LockedUpdater";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::atomic::AtomicLongFieldUpdater>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER_LOCKEDUPDATER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER_LOCKEDUPDATER)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER_LOCKEDUPDATER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::atomic::AtomicLongFieldUpdater_LockedUpdater : public jni::object_base<"java/util/concurrent/atomic/AtomicLongFieldUpdater$LockedUpdater",
	java::util::concurrent::atomic::AtomicLongFieldUpdater>
{
public:

	jboolean compareAndSet(jni::ref<java::lang::Object> obj, jlong expect, jlong p3) { return call_method<"compareAndSet", jboolean>(obj, expect, p3); }
	jboolean weakCompareAndSet(jni::ref<java::lang::Object> obj, jlong expect, jlong p3) { return call_method<"weakCompareAndSet", jboolean>(obj, expect, p3); }
	void set(jni::ref<java::lang::Object> obj, jlong newValue) { return call_method<"set", void>(obj, newValue); }
	void lazySet(jni::ref<java::lang::Object> obj, jlong newValue) { return call_method<"lazySet", void>(obj, newValue); }
	jlong get(jni::ref<java::lang::Object> obj) { return call_method<"get", jlong>(obj); }

protected:

	AtomicLongFieldUpdater_LockedUpdater(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER_LOCKEDUPDATER