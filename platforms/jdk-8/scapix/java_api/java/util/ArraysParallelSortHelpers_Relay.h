// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/CountedCompleter.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ARRAYSPARALLELSORTHELPERS_RELAY_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ARRAYSPARALLELSORTHELPERS_RELAY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ArraysParallelSortHelpers_Relay; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ArraysParallelSortHelpers_Relay>
{
	static constexpr fixed_string class_name = "java/util/ArraysParallelSortHelpers$Relay";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::CountedCompleter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ARRAYSPARALLELSORTHELPERS_RELAY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ARRAYSPARALLELSORTHELPERS_RELAY)
#define SCAPIX_JAVA_API_JAVA_UTIL_ARRAYSPARALLELSORTHELPERS_RELAY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::ArraysParallelSortHelpers_Relay : public jni::object_base<"java/util/ArraysParallelSortHelpers$Relay",
	java::util::concurrent::CountedCompleter>
{
public:

	void compute() { return call_method<"compute", void>(); }
	void onCompletion(jni::ref<java::util::concurrent::CountedCompleter> p1) { return call_method<"onCompletion", void>(p1); }

protected:

	ArraysParallelSortHelpers_Relay(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ARRAYSPARALLELSORTHELPERS_RELAY