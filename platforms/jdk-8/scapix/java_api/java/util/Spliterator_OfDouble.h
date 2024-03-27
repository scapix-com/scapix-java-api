// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Spliterator_OfPrimitive.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATOR_OFDOUBLE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATOR_OFDOUBLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Spliterator_OfDouble; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Spliterator_OfDouble>
{
	static constexpr fixed_string class_name = "java/util/Spliterator$OfDouble";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Spliterator_OfPrimitive>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATOR_OFDOUBLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATOR_OFDOUBLE)
#define SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATOR_OFDOUBLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/DoubleConsumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Spliterator_OfDouble : public jni::object_base<"java/util/Spliterator$OfDouble",
	java::lang::Object,
	java::util::Spliterator_OfPrimitive>
{
public:

	jni::ref<java::util::Spliterator_OfDouble> trySplit() { return call_method<"trySplit", jni::ref<java::util::Spliterator_OfDouble>>(); }
	jboolean tryAdvance(jni::ref<java::util::function::DoubleConsumer> p1) { return call_method<"tryAdvance", jboolean>(p1); }
	void forEachRemaining(jni::ref<java::util::function::DoubleConsumer> p1) { return call_method<"forEachRemaining", void>(p1); }
	jboolean tryAdvance(jni::ref<java::util::function::Consumer> p1) { return call_method<"tryAdvance", jboolean>(p1); }
	void forEachRemaining(jni::ref<java::util::function::Consumer> p1) { return call_method<"forEachRemaining", void>(p1); }

protected:

	Spliterator_OfDouble(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATOR_OFDOUBLE