// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/SpinedBuffer_OfPrimitive.h>
#include <scapix/java_api/java/util/function/LongConsumer.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SPINEDBUFFER_OFLONG_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SPINEDBUFFER_OFLONG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class SpinedBuffer_OfLong; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::SpinedBuffer_OfLong>
{
	static constexpr fixed_string class_name = "java/util/stream/SpinedBuffer$OfLong";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::SpinedBuffer_OfPrimitive, scapix::java_api::java::util::function::LongConsumer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SPINEDBUFFER_OFLONG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SPINEDBUFFER_OFLONG)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SPINEDBUFFER_OFLONG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/PrimitiveIterator_OfLong.h>
#include <scapix/java_api/java/util/Spliterator_OfLong.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::SpinedBuffer_OfLong : public jni::object_base<"java/util/stream/SpinedBuffer$OfLong",
	java::util::stream::SpinedBuffer_OfPrimitive,
	java::util::function::LongConsumer>
{
public:

	void forEach(jni::ref<java::util::function::Consumer> consumer) { return call_method<"forEach", void>(consumer); }
	jni::ref<jni::array<jlong>> newArray(jint size) { return call_method<"newArray", jni::ref<jni::array<jlong>>>(size); }
	void accept(jlong i) { return call_method<"accept", void>(i); }
	jlong get(jlong index) { return call_method<"get", jlong>(index); }
	jni::ref<java::util::PrimitiveIterator_OfLong> iterator() { return call_method<"iterator", jni::ref<java::util::PrimitiveIterator_OfLong>>(); }
	jni::ref<java::util::Spliterator_OfLong> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator_OfLong>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	SpinedBuffer_OfLong(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SPINEDBUFFER_OFLONG