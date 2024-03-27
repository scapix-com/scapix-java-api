// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/Streams_AbstractStreamBuilderImpl.h>
#include <scapix/java_api/java/util/stream/DoubleStream_Builder.h>
#include <scapix/java_api/java/util/Spliterator_OfDouble.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_DOUBLESTREAMBUILDERIMPL_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_DOUBLESTREAMBUILDERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Streams_DoubleStreamBuilderImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Streams_DoubleStreamBuilderImpl>
{
	static constexpr fixed_string class_name = "java/util/stream/Streams$DoubleStreamBuilderImpl";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::Streams_AbstractStreamBuilderImpl, scapix::java_api::java::util::stream::DoubleStream_Builder, scapix::java_api::java::util::Spliterator_OfDouble>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_DOUBLESTREAMBUILDERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_DOUBLESTREAMBUILDERIMPL)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_DOUBLESTREAMBUILDERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/DoubleConsumer.h>
#include <scapix/java_api/java/util/stream/DoubleStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::Streams_DoubleStreamBuilderImpl : public jni::object_base<"java/util/stream/Streams$DoubleStreamBuilderImpl",
	java::util::stream::Streams_AbstractStreamBuilderImpl,
	java::util::stream::DoubleStream_Builder,
	java::util::Spliterator_OfDouble>
{
public:

	void accept(jdouble t) { return call_method<"accept", void>(t); }
	jni::ref<java::util::stream::DoubleStream> build() { return call_method<"build", jni::ref<java::util::stream::DoubleStream>>(); }
	jboolean tryAdvance(jni::ref<java::util::function::DoubleConsumer> action) { return call_method<"tryAdvance", jboolean>(action); }
	void forEachRemaining(jni::ref<java::util::function::DoubleConsumer> action) { return call_method<"forEachRemaining", void>(action); }

protected:

	Streams_DoubleStreamBuilderImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMS_DOUBLESTREAMBUILDERIMPL
