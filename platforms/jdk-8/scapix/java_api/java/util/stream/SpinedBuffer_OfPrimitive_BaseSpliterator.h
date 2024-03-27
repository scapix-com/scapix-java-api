// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Spliterator_OfPrimitive.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SPINEDBUFFER_OFPRIMITIVE_BASESPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SPINEDBUFFER_OFPRIMITIVE_BASESPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class SpinedBuffer_OfPrimitive_BaseSpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::SpinedBuffer_OfPrimitive_BaseSpliterator>
{
	static constexpr fixed_string class_name = "java/util/stream/SpinedBuffer$OfPrimitive$BaseSpliterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Spliterator_OfPrimitive>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SPINEDBUFFER_OFPRIMITIVE_BASESPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SPINEDBUFFER_OFPRIMITIVE_BASESPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SPINEDBUFFER_OFPRIMITIVE_BASESPLITERATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::SpinedBuffer_OfPrimitive_BaseSpliterator : public jni::object_base<"java/util/stream/SpinedBuffer$OfPrimitive$BaseSpliterator",
	java::lang::Object,
	java::util::Spliterator_OfPrimitive>
{
public:

	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }
	jint characteristics() { return call_method<"characteristics", jint>(); }
	jboolean tryAdvance(jni::ref<java::lang::Object> p1) { return call_method<"tryAdvance", jboolean>(p1); }
	void forEachRemaining(jni::ref<java::lang::Object> p1) { return call_method<"forEachRemaining", void>(p1); }
	jni::ref<java::util::Spliterator_OfPrimitive> trySplit() { return call_method<"trySplit", jni::ref<java::util::Spliterator_OfPrimitive>>(); }

protected:

	SpinedBuffer_OfPrimitive_BaseSpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SPINEDBUFFER_OFPRIMITIVE_BASESPLITERATOR
