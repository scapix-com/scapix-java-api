// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/CountedCompleter.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ARRAYSPARALLELSORTHELPERS_FJLONG_MERGER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ARRAYSPARALLELSORTHELPERS_FJLONG_MERGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ArraysParallelSortHelpers_FJLong_Merger; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ArraysParallelSortHelpers_FJLong_Merger>
{
	static constexpr fixed_string class_name = "java/util/ArraysParallelSortHelpers$FJLong$Merger";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::CountedCompleter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ARRAYSPARALLELSORTHELPERS_FJLONG_MERGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ARRAYSPARALLELSORTHELPERS_FJLONG_MERGER)
#define SCAPIX_JAVA_API_JAVA_UTIL_ARRAYSPARALLELSORTHELPERS_FJLONG_MERGER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::ArraysParallelSortHelpers_FJLong_Merger : public jni::object_base<"java/util/ArraysParallelSortHelpers$FJLong$Merger",
	java::util::concurrent::CountedCompleter>
{
public:

	void compute() { return call_method<"compute", void>(); }

protected:

	ArraysParallelSortHelpers_FJLong_Merger(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ARRAYSPARALLELSORTHELPERS_FJLONG_MERGER
