// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COMPARATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COMPARATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Comparator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Comparator>
{
	static constexpr fixed_string class_name = "java/util/Comparator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COMPARATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COMPARATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_COMPARATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/Function.h>
#include <scapix/java_api/java/util/function/ToDoubleFunction.h>
#include <scapix/java_api/java/util/function/ToIntFunction.h>
#include <scapix/java_api/java/util/function/ToLongFunction.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Comparator : public jni::object_base<"java/util/Comparator",
	java::lang::Object>
{
public:

	jint compare(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"compare", jint>(p1, p2); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<java::util::Comparator> reversed() { return call_method<"reversed", jni::ref<java::util::Comparator>>(); }
	jni::ref<java::util::Comparator> thenComparing(jni::ref<java::util::Comparator> p1) { return call_method<"thenComparing", jni::ref<java::util::Comparator>>(p1); }
	jni::ref<java::util::Comparator> thenComparing(jni::ref<java::util::function::Function> p1, jni::ref<java::util::Comparator> p2) { return call_method<"thenComparing", jni::ref<java::util::Comparator>>(p1, p2); }
	jni::ref<java::util::Comparator> thenComparing(jni::ref<java::util::function::Function> p1) { return call_method<"thenComparing", jni::ref<java::util::Comparator>>(p1); }
	jni::ref<java::util::Comparator> thenComparingInt(jni::ref<java::util::function::ToIntFunction> p1) { return call_method<"thenComparingInt", jni::ref<java::util::Comparator>>(p1); }
	jni::ref<java::util::Comparator> thenComparingLong(jni::ref<java::util::function::ToLongFunction> p1) { return call_method<"thenComparingLong", jni::ref<java::util::Comparator>>(p1); }
	jni::ref<java::util::Comparator> thenComparingDouble(jni::ref<java::util::function::ToDoubleFunction> p1) { return call_method<"thenComparingDouble", jni::ref<java::util::Comparator>>(p1); }
	static jni::ref<java::util::Comparator> reverseOrder() { return call_static_method<"reverseOrder", jni::ref<java::util::Comparator>>(); }
	static jni::ref<java::util::Comparator> naturalOrder() { return call_static_method<"naturalOrder", jni::ref<java::util::Comparator>>(); }
	static jni::ref<java::util::Comparator> nullsFirst(jni::ref<java::util::Comparator> p1) { return call_static_method<"nullsFirst", jni::ref<java::util::Comparator>>(p1); }
	static jni::ref<java::util::Comparator> nullsLast(jni::ref<java::util::Comparator> p1) { return call_static_method<"nullsLast", jni::ref<java::util::Comparator>>(p1); }
	static jni::ref<java::util::Comparator> comparing(jni::ref<java::util::function::Function> p1, jni::ref<java::util::Comparator> p2) { return call_static_method<"comparing", jni::ref<java::util::Comparator>>(p1, p2); }
	static jni::ref<java::util::Comparator> comparing(jni::ref<java::util::function::Function> p1) { return call_static_method<"comparing", jni::ref<java::util::Comparator>>(p1); }
	static jni::ref<java::util::Comparator> comparingInt(jni::ref<java::util::function::ToIntFunction> p1) { return call_static_method<"comparingInt", jni::ref<java::util::Comparator>>(p1); }
	static jni::ref<java::util::Comparator> comparingLong(jni::ref<java::util::function::ToLongFunction> p1) { return call_static_method<"comparingLong", jni::ref<java::util::Comparator>>(p1); }
	static jni::ref<java::util::Comparator> comparingDouble(jni::ref<java::util::function::ToDoubleFunction> p1) { return call_static_method<"comparingDouble", jni::ref<java::util::Comparator>>(p1); }

protected:

	Comparator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COMPARATOR