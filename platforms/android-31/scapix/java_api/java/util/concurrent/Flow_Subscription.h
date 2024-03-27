// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FLOW_SUBSCRIPTION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FLOW_SUBSCRIPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class Flow_Subscription; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::Flow_Subscription>
{
	static constexpr fixed_string class_name = "java/util/concurrent/Flow$Subscription";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FLOW_SUBSCRIPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FLOW_SUBSCRIPTION)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FLOW_SUBSCRIPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::Flow_Subscription : public jni::object_base<"java/util/concurrent/Flow$Subscription",
	java::lang::Object>
{
public:

	void request(jlong p1) { return call_method<"request", void>(p1); }
	void cancel() { return call_method<"cancel", void>(); }

protected:

	Flow_Subscription(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_FLOW_SUBSCRIPTION
