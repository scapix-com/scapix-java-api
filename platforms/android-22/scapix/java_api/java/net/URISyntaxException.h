// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_URISYNTAXEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_NET_URISYNTAXEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class URISyntaxException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::URISyntaxException>
{
	static constexpr fixed_string class_name = "java/net/URISyntaxException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_URISYNTAXEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_URISYNTAXEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_NET_URISYNTAXEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::URISyntaxException : public jni::object_base<"java/net/URISyntaxException",
	java::lang::Exception>
{
public:

	static jni::ref<java::net::URISyntaxException> new_object(jni::ref<java::lang::String> input, jni::ref<java::lang::String> reason, jint index) { return base_::new_object(input, reason, index); }
	static jni::ref<java::net::URISyntaxException> new_object(jni::ref<java::lang::String> input, jni::ref<java::lang::String> reason) { return base_::new_object(input, reason); }
	jint getIndex() { return call_method<"getIndex", jint>(); }
	jni::ref<java::lang::String> getReason() { return call_method<"getReason", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getInput() { return call_method<"getInput", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getMessage() { return call_method<"getMessage", jni::ref<java::lang::String>>(); }

protected:

	URISyntaxException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_URISYNTAXEXCEPTION
