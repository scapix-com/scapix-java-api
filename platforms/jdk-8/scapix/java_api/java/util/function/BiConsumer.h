// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_BICONSUMER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_BICONSUMER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::function { class BiConsumer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::function::BiConsumer>
{
	static constexpr fixed_string class_name = "java/util/function/BiConsumer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_BICONSUMER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_BICONSUMER)
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_BICONSUMER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::function::BiConsumer : public jni::object_base<"java/util/function/BiConsumer",
	java::lang::Object>
{
public:

	void accept(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"accept", void>(p1, p2); }
	jni::ref<java::util::function::BiConsumer> andThen(jni::ref<java::util::function::BiConsumer> p1) { return call_method<"andThen", jni::ref<java::util::function::BiConsumer>>(p1); }

protected:

	BiConsumer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_BICONSUMER
