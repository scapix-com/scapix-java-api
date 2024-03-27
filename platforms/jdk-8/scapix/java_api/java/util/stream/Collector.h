// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_COLLECTOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_COLLECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Collector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Collector>
{
	static constexpr fixed_string class_name = "java/util/stream/Collector";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_COLLECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_COLLECTOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_COLLECTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/function/BiConsumer.h>
#include <scapix/java_api/java/util/function/BinaryOperator.h>
#include <scapix/java_api/java/util/function/Function.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#include <scapix/java_api/java/util/stream/Collector_Characteristics.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::stream::Collector : public jni::object_base<"java/util/stream/Collector",
	java::lang::Object>
{
public:

	using Characteristics = Collector_Characteristics;

	jni::ref<java::util::function::Supplier> supplier() { return call_method<"supplier", jni::ref<java::util::function::Supplier>>(); }
	jni::ref<java::util::function::BiConsumer> accumulator() { return call_method<"accumulator", jni::ref<java::util::function::BiConsumer>>(); }
	jni::ref<java::util::function::BinaryOperator> combiner() { return call_method<"combiner", jni::ref<java::util::function::BinaryOperator>>(); }
	jni::ref<java::util::function::Function> finisher() { return call_method<"finisher", jni::ref<java::util::function::Function>>(); }
	jni::ref<java::util::Set> characteristics() { return call_method<"characteristics", jni::ref<java::util::Set>>(); }
	static jni::ref<java::util::stream::Collector> of(jni::ref<java::util::function::Supplier> p1, jni::ref<java::util::function::BiConsumer> p2, jni::ref<java::util::function::BinaryOperator> p3, jni::ref<jni::array<java::util::stream::Collector_Characteristics>> p4) { return call_static_method<"of", jni::ref<java::util::stream::Collector>>(p1, p2, p3, p4); }
	static jni::ref<java::util::stream::Collector> of(jni::ref<java::util::function::Supplier> p1, jni::ref<java::util::function::BiConsumer> p2, jni::ref<java::util::function::BinaryOperator> p3, jni::ref<java::util::function::Function> p4, jni::ref<jni::array<java::util::stream::Collector_Characteristics>> p5) { return call_static_method<"of", jni::ref<java::util::stream::Collector>>(p1, p2, p3, p4, p5); }

protected:

	Collector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_COLLECTOR