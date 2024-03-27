// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_DUALPIVOTQUICKSORT_SORTOPERATION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_DUALPIVOTQUICKSORT_SORTOPERATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class DualPivotQuicksort_SortOperation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::DualPivotQuicksort_SortOperation>
{
	static constexpr fixed_string class_name = "java/util/DualPivotQuicksort$SortOperation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_DUALPIVOTQUICKSORT_SORTOPERATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_DUALPIVOTQUICKSORT_SORTOPERATION)
#define SCAPIX_JAVA_API_JAVA_UTIL_DUALPIVOTQUICKSORT_SORTOPERATION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::DualPivotQuicksort_SortOperation : public jni::object_base<"java/util/DualPivotQuicksort$SortOperation",
	java::lang::Object>
{
public:

	void sort(jni::ref<java::lang::Object> p1, jint p2, jint p3) { return call_method<"sort", void>(p1, p2, p3); }

protected:

	DualPivotQuicksort_SortOperation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_DUALPIVOTQUICKSORT_SORTOPERATION
