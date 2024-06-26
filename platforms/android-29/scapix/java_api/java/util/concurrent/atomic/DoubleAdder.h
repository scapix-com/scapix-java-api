// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEADDER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEADDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::atomic { class DoubleAdder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::atomic::DoubleAdder>
{
	static constexpr fixed_string class_name = "java/util/concurrent/atomic/DoubleAdder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Number, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEADDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEADDER)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEADDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::atomic::DoubleAdder : public jni::object_base<"java/util/concurrent/atomic/DoubleAdder",
	java::lang::Number,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::concurrent::atomic::DoubleAdder> new_object() { return base_::new_object(); }
	void add(jdouble x) { return call_method<"add", void>(x); }
	jdouble sum() { return call_method<"sum", jdouble>(); }
	void reset() { return call_method<"reset", void>(); }
	jdouble sumThenReset() { return call_method<"sumThenReset", jdouble>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jdouble doubleValue() { return call_method<"doubleValue", jdouble>(); }
	jlong longValue() { return call_method<"longValue", jlong>(); }
	jint intValue() { return call_method<"intValue", jint>(); }
	jfloat floatValue() { return call_method<"floatValue", jfloat>(); }

protected:

	DoubleAdder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEADDER
