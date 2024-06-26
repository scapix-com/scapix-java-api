// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/RecursiveTask.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_DUALPIVOTQUICKSORT_RUNMERGER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_DUALPIVOTQUICKSORT_RUNMERGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class DualPivotQuicksort_RunMerger; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::DualPivotQuicksort_RunMerger>
{
	static constexpr fixed_string class_name = "java/util/DualPivotQuicksort$RunMerger";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::RecursiveTask>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_DUALPIVOTQUICKSORT_RUNMERGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_DUALPIVOTQUICKSORT_RUNMERGER)
#define SCAPIX_JAVA_API_JAVA_UTIL_DUALPIVOTQUICKSORT_RUNMERGER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::DualPivotQuicksort_RunMerger : public jni::object_base<"java/util/DualPivotQuicksort$RunMerger",
	java::util::concurrent::RecursiveTask>
{
public:


protected:

	DualPivotQuicksort_RunMerger(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_DUALPIVOTQUICKSORT_RUNMERGER
