// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/CountedCompleter.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ARRAYSPARALLELSORTHELPERS_FJBYTE_SORTER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ARRAYSPARALLELSORTHELPERS_FJBYTE_SORTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ArraysParallelSortHelpers_FJByte_Sorter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ArraysParallelSortHelpers_FJByte_Sorter>
{
	static constexpr fixed_string class_name = "java/util/ArraysParallelSortHelpers$FJByte$Sorter";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::CountedCompleter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ARRAYSPARALLELSORTHELPERS_FJBYTE_SORTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ARRAYSPARALLELSORTHELPERS_FJBYTE_SORTER)
#define SCAPIX_JAVA_API_JAVA_UTIL_ARRAYSPARALLELSORTHELPERS_FJBYTE_SORTER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::ArraysParallelSortHelpers_FJByte_Sorter : public jni::object_base<"java/util/ArraysParallelSortHelpers$FJByte$Sorter",
	java::util::concurrent::CountedCompleter>
{
public:

	void compute() { return call_method<"compute", void>(); }

protected:

	ArraysParallelSortHelpers_FJByte_Sorter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ARRAYSPARALLELSORTHELPERS_FJBYTE_SORTER
