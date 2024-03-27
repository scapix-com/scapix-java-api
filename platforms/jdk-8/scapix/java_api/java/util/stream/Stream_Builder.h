// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/function/Consumer.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAM_BUILDER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAM_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Stream_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Stream_Builder>
{
	static constexpr fixed_string class_name = "java/util/stream/Stream$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::function::Consumer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAM_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAM_BUILDER)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAM_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/stream/Stream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::stream::Stream_Builder : public jni::object_base<"java/util/stream/Stream$Builder",
	java::lang::Object,
	java::util::function::Consumer>
{
public:

	void accept(jni::ref<java::lang::Object> p1) { return call_method<"accept", void>(p1); }
	jni::ref<java::util::stream::Stream_Builder> add(jni::ref<java::lang::Object> p1) { return call_method<"add", jni::ref<java::util::stream::Stream_Builder>>(p1); }
	jni::ref<java::util::stream::Stream> build() { return call_method<"build", jni::ref<java::util::stream::Stream>>(); }

protected:

	Stream_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAM_BUILDER
