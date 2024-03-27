// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETIONEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETIONEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class CompletionException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::CompletionException>
{
	static constexpr fixed_string class_name = "java/util/concurrent/CompletionException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETIONEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETIONEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETIONEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::CompletionException : public jni::object_base<"java/util/concurrent/CompletionException",
	java::lang::RuntimeException>
{
public:

	static jni::ref<java::util::concurrent::CompletionException> new_object(jni::ref<java::lang::String> message, jni::ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }
	static jni::ref<java::util::concurrent::CompletionException> new_object(jni::ref<java::lang::Throwable> cause) { return base_::new_object(cause); }

protected:

	CompletionException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETIONEXCEPTION
