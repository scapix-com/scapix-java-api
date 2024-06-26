// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAUTILCONCURRENTFJPACCESS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAUTILCONCURRENTFJPACCESS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::access { class JavaUtilConcurrentFJPAccess; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::access::JavaUtilConcurrentFJPAccess>
{
	static constexpr fixed_string class_name = "jdk/internal/access/JavaUtilConcurrentFJPAccess";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAUTILCONCURRENTFJPACCESS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAUTILCONCURRENTFJPACCESS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAUTILCONCURRENTFJPACCESS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/concurrent/ForkJoinPool.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::access::JavaUtilConcurrentFJPAccess : public jni::object_base<"jdk/internal/access/JavaUtilConcurrentFJPAccess",
	java::lang::Object>
{
public:

	jlong beginCompensatedBlock(jni::ref<java::util::concurrent::ForkJoinPool> p1) { return call_method<"beginCompensatedBlock", jlong>(p1); }
	void endCompensatedBlock(jni::ref<java::util::concurrent::ForkJoinPool> p1, jlong p2) { return call_method<"endCompensatedBlock", void>(p1, p2); }

protected:

	JavaUtilConcurrentFJPAccess(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAUTILCONCURRENTFJPACCESS
