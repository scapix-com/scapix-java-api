// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_BROKENBARRIEREXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_BROKENBARRIEREXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class BrokenBarrierException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::BrokenBarrierException>
{
	static constexpr fixed_string class_name = "java/util/concurrent/BrokenBarrierException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_BROKENBARRIEREXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_BROKENBARRIEREXCEPTION)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_BROKENBARRIEREXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::BrokenBarrierException : public jni::object_base<"java/util/concurrent/BrokenBarrierException",
	java::lang::Exception>
{
public:

	static jni::ref<java::util::concurrent::BrokenBarrierException> new_object() { return base_::new_object(); }
	static jni::ref<java::util::concurrent::BrokenBarrierException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	BrokenBarrierException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_BROKENBARRIEREXCEPTION
