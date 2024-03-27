// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_OPTIONALINT_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_OPTIONALINT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class OptionalInt; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::OptionalInt>
{
	static constexpr fixed_string class_name = "java/util/OptionalInt";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_OPTIONALINT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_OPTIONALINT)
#define SCAPIX_JAVA_API_JAVA_UTIL_OPTIONALINT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/function/IntConsumer.h>
#include <scapix/java_api/java/util/function/IntSupplier.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::OptionalInt : public jni::object_base<"java/util/OptionalInt",
	java::lang::Object>
{
public:

	static jni::ref<java::util::OptionalInt> empty() { return call_static_method<"empty", jni::ref<java::util::OptionalInt>>(); }
	static jni::ref<java::util::OptionalInt> of(jint value) { return call_static_method<"of", jni::ref<java::util::OptionalInt>>(value); }
	jint getAsInt() { return call_method<"getAsInt", jint>(); }
	jboolean isPresent() { return call_method<"isPresent", jboolean>(); }
	void ifPresent(jni::ref<java::util::function::IntConsumer> consumer) { return call_method<"ifPresent", void>(consumer); }
	jint orElse(jint other) { return call_method<"orElse", jint>(other); }
	jint orElseGet(jni::ref<java::util::function::IntSupplier> other) { return call_method<"orElseGet", jint>(other); }
	jint orElseThrow(jni::ref<java::util::function::Supplier> exceptionSupplier) { return call_method<"orElseThrow", jint>(exceptionSupplier); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	OptionalInt(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_OPTIONALINT