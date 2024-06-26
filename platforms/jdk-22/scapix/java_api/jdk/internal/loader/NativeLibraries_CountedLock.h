// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/locks/ReentrantLock.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_NATIVELIBRARIES_COUNTEDLOCK_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_NATIVELIBRARIES_COUNTEDLOCK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::loader { class NativeLibraries_CountedLock; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::loader::NativeLibraries_CountedLock>
{
	static constexpr fixed_string class_name = "jdk/internal/loader/NativeLibraries$CountedLock";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::locks::ReentrantLock>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_NATIVELIBRARIES_COUNTEDLOCK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_NATIVELIBRARIES_COUNTEDLOCK)
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_NATIVELIBRARIES_COUNTEDLOCK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::loader::NativeLibraries_CountedLock : public jni::object_base<"jdk/internal/loader/NativeLibraries$CountedLock",
	java::util::concurrent::locks::ReentrantLock>
{
public:

	void increment() { return call_method<"increment", void>(); }
	void decrement() { return call_method<"decrement", void>(); }
	jint getCounter() { return call_method<"getCounter", jint>(); }

protected:

	NativeLibraries_CountedLock(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_NATIVELIBRARIES_COUNTEDLOCK
