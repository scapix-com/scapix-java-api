// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_OPTIONALDOUBLE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_OPTIONALDOUBLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class OptionalDouble; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::OptionalDouble>
{
	static constexpr fixed_string class_name = "java/util/OptionalDouble";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_OPTIONALDOUBLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_OPTIONALDOUBLE)
#define SCAPIX_JAVA_API_JAVA_UTIL_OPTIONALDOUBLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/function/DoubleConsumer.h>
#include <scapix/java_api/java/util/function/DoubleSupplier.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::OptionalDouble : public jni::object_base<"java/util/OptionalDouble",
	java::lang::Object>
{
public:

	static jni::ref<java::util::OptionalDouble> empty() { return call_static_method<"empty", jni::ref<java::util::OptionalDouble>>(); }
	static jni::ref<java::util::OptionalDouble> of(jdouble p1) { return call_static_method<"of", jni::ref<java::util::OptionalDouble>>(p1); }
	jdouble getAsDouble() { return call_method<"getAsDouble", jdouble>(); }
	jboolean isPresent() { return call_method<"isPresent", jboolean>(); }
	void ifPresent(jni::ref<java::util::function::DoubleConsumer> p1) { return call_method<"ifPresent", void>(p1); }
	jdouble orElse(jdouble p1) { return call_method<"orElse", jdouble>(p1); }
	jdouble orElseGet(jni::ref<java::util::function::DoubleSupplier> p1) { return call_method<"orElseGet", jdouble>(p1); }
	jdouble orElseThrow(jni::ref<java::util::function::Supplier> p1) { return call_method<"orElseThrow", jdouble>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	OptionalDouble(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_OPTIONALDOUBLE
