// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENTMODIFICATIONEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENTMODIFICATIONEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ConcurrentModificationException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ConcurrentModificationException>
{
	static constexpr fixed_string class_name = "java/util/ConcurrentModificationException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENTMODIFICATIONEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENTMODIFICATIONEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENTMODIFICATIONEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::ConcurrentModificationException : public jni::object_base<"java/util/ConcurrentModificationException",
	java::lang::RuntimeException>
{
public:

	static jni::ref<java::util::ConcurrentModificationException> new_object() { return base_::new_object(); }
	static jni::ref<java::util::ConcurrentModificationException> new_object(jni::ref<java::lang::String> detailMessage) { return base_::new_object(detailMessage); }
	static jni::ref<java::util::ConcurrentModificationException> new_object(jni::ref<java::lang::String> detailMessage, jni::ref<java::lang::Throwable> cause) { return base_::new_object(detailMessage, cause); }
	static jni::ref<java::util::ConcurrentModificationException> new_object(jni::ref<java::lang::Throwable> cause) { return base_::new_object(cause); }

protected:

	ConcurrentModificationException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENTMODIFICATIONEXCEPTION
