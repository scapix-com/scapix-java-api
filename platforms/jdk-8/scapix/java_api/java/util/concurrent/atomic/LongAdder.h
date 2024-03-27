// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/atomic/Striped64.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_LONGADDER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_LONGADDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::atomic { class LongAdder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::atomic::LongAdder>
{
	static constexpr fixed_string class_name = "java/util/concurrent/atomic/LongAdder";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::atomic::Striped64, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_LONGADDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_LONGADDER)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_LONGADDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::atomic::LongAdder : public jni::object_base<"java/util/concurrent/atomic/LongAdder",
	java::util::concurrent::atomic::Striped64,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::concurrent::atomic::LongAdder> new_object() { return base_::new_object(); }
	void add(jlong p1) { return call_method<"add", void>(p1); }
	void increment() { return call_method<"increment", void>(); }
	void decrement() { return call_method<"decrement", void>(); }
	jlong sum() { return call_method<"sum", jlong>(); }
	void reset() { return call_method<"reset", void>(); }
	jlong sumThenReset() { return call_method<"sumThenReset", jlong>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jlong longValue() { return call_method<"longValue", jlong>(); }
	jint intValue() { return call_method<"intValue", jint>(); }
	jfloat floatValue() { return call_method<"floatValue", jfloat>(); }
	jdouble doubleValue() { return call_method<"doubleValue", jdouble>(); }

protected:

	LongAdder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_LONGADDER
