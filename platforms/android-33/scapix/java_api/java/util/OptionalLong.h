// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_OPTIONALLONG_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_OPTIONALLONG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class OptionalLong; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::OptionalLong>
{
	static constexpr fixed_string class_name = "java/util/OptionalLong";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_OPTIONALLONG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_OPTIONALLONG)
#define SCAPIX_JAVA_API_JAVA_UTIL_OPTIONALLONG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/function/LongConsumer.h>
#include <scapix/java_api/java/util/function/LongSupplier.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#include <scapix/java_api/java/util/stream/LongStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::OptionalLong : public jni::object_base<"java/util/OptionalLong",
	java::lang::Object>
{
public:

	static jni::ref<java::util::OptionalLong> empty() { return call_static_method<"empty", jni::ref<java::util::OptionalLong>>(); }
	static jni::ref<java::util::OptionalLong> of(jlong value) { return call_static_method<"of", jni::ref<java::util::OptionalLong>>(value); }
	jlong getAsLong() { return call_method<"getAsLong", jlong>(); }
	jboolean isPresent() { return call_method<"isPresent", jboolean>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	void ifPresent(jni::ref<java::util::function::LongConsumer> action) { return call_method<"ifPresent", void>(action); }
	void ifPresentOrElse(jni::ref<java::util::function::LongConsumer> action, jni::ref<java::lang::Runnable> emptyAction) { return call_method<"ifPresentOrElse", void>(action, emptyAction); }
	jni::ref<java::util::stream::LongStream> stream() { return call_method<"stream", jni::ref<java::util::stream::LongStream>>(); }
	jlong orElse(jlong other) { return call_method<"orElse", jlong>(other); }
	jlong orElseGet(jni::ref<java::util::function::LongSupplier> supplier) { return call_method<"orElseGet", jlong>(supplier); }
	jlong orElseThrow() { return call_method<"orElseThrow", jlong>(); }
	jlong orElseThrow(jni::ref<java::util::function::Supplier> exceptionSupplier) { return call_method<"orElseThrow", jlong>(exceptionSupplier); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	OptionalLong(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_OPTIONALLONG
