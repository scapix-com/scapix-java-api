// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Random.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADLOCALRANDOM_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADLOCALRANDOM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ThreadLocalRandom; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ThreadLocalRandom>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ThreadLocalRandom";
	using base_classes = std::tuple<scapix::java_api::java::util::Random>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADLOCALRANDOM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADLOCALRANDOM)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADLOCALRANDOM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::ThreadLocalRandom : public jni::object_base<"java/util/concurrent/ThreadLocalRandom",
	java::util::Random>
{
public:

	static jni::ref<java::util::concurrent::ThreadLocalRandom> current() { return call_static_method<"current", jni::ref<java::util::concurrent::ThreadLocalRandom>>(); }
	void setSeed(jlong seed) { return call_method<"setSeed", void>(seed); }
	jint nextInt(jint least, jint bound) { return call_method<"nextInt", jint>(least, bound); }
	jlong nextLong(jlong n) { return call_method<"nextLong", jlong>(n); }
	jlong nextLong(jlong least, jlong p2) { return call_method<"nextLong", jlong>(least, p2); }
	jdouble nextDouble(jdouble n) { return call_method<"nextDouble", jdouble>(n); }
	jdouble nextDouble(jdouble least, jdouble p2) { return call_method<"nextDouble", jdouble>(least, p2); }

protected:

	ThreadLocalRandom(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_THREADLOCALRANDOM
