// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_COMPLETIONHANDLER_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_COMPLETIONHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::channels { class CompletionHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::channels::CompletionHandler>
{
	static constexpr fixed_string class_name = "java/nio/channels/CompletionHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_COMPLETIONHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_COMPLETIONHANDLER)
#define SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_COMPLETIONHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::channels::CompletionHandler : public jni::object_base<"java/nio/channels/CompletionHandler",
	java::lang::Object>
{
public:

	void completed(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"completed", void>(p1, p2); }
	void failed(jni::ref<java::lang::Throwable> p1, jni::ref<java::lang::Object> p2) { return call_method<"failed", void>(p1, p2); }

protected:

	CompletionHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHANNELS_COMPLETIONHANDLER