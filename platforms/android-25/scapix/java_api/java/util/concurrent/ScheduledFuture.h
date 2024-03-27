// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/concurrent/Delayed.h>
#include <scapix/java_api/java/util/concurrent/Future.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SCHEDULEDFUTURE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SCHEDULEDFUTURE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ScheduledFuture; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ScheduledFuture>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ScheduledFuture";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::concurrent::Delayed, scapix::java_api::java::util::concurrent::Future>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SCHEDULEDFUTURE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SCHEDULEDFUTURE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SCHEDULEDFUTURE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::ScheduledFuture : public jni::object_base<"java/util/concurrent/ScheduledFuture",
	java::lang::Object,
	java::util::concurrent::Delayed,
	java::util::concurrent::Future>
{
public:


protected:

	ScheduledFuture(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SCHEDULEDFUTURE
