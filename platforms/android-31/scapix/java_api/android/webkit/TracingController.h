// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_TRACINGCONTROLLER_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_TRACINGCONTROLLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class TracingController; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::TracingController>
{
	static constexpr fixed_string class_name = "android/webkit/TracingController";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_TRACINGCONTROLLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_TRACINGCONTROLLER)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_TRACINGCONTROLLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/webkit/TracingConfig.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::TracingController : public jni::object_base<"android/webkit/TracingController",
	java::lang::Object>
{
public:

	static jni::ref<android::webkit::TracingController> new_object() { return base_::new_object(); }
	static jni::ref<android::webkit::TracingController> getInstance() { return call_static_method<"getInstance", jni::ref<android::webkit::TracingController>>(); }
	void start(jni::ref<android::webkit::TracingConfig> p1) { return call_method<"start", void>(p1); }
	jboolean stop(jni::ref<java::io::OutputStream> p1, jni::ref<java::util::concurrent::Executor> p2) { return call_method<"stop", jboolean>(p1, p2); }
	jboolean isTracing() { return call_method<"isTracing", jboolean>(); }

protected:

	TracingController(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_TRACINGCONTROLLER