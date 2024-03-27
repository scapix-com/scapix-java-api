// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SYNCHRONOUSQUEUE_TRANSFERER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SYNCHRONOUSQUEUE_TRANSFERER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class SynchronousQueue_Transferer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::SynchronousQueue_Transferer>
{
	static constexpr fixed_string class_name = "java/util/concurrent/SynchronousQueue$Transferer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SYNCHRONOUSQUEUE_TRANSFERER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SYNCHRONOUSQUEUE_TRANSFERER)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SYNCHRONOUSQUEUE_TRANSFERER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::SynchronousQueue_Transferer : public jni::object_base<"java/util/concurrent/SynchronousQueue$Transferer",
	java::lang::Object>
{
public:


protected:

	SynchronousQueue_Transferer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SYNCHRONOUSQUEUE_TRANSFERER
