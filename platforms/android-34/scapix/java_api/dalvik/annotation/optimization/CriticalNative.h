// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_DALVIK_ANNOTATION_OPTIMIZATION_CRITICALNATIVE_FWD
#define SCAPIX_JAVA_API_DALVIK_ANNOTATION_OPTIMIZATION_CRITICALNATIVE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::dalvik::annotation::optimization { class CriticalNative; }

template<>
struct scapix::jni::object_traits<scapix::java_api::dalvik::annotation::optimization::CriticalNative>
{
	static constexpr fixed_string class_name = "dalvik/annotation/optimization/CriticalNative";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_DALVIK_ANNOTATION_OPTIMIZATION_CRITICALNATIVE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_DALVIK_ANNOTATION_OPTIMIZATION_CRITICALNATIVE)
#define SCAPIX_JAVA_API_DALVIK_ANNOTATION_OPTIMIZATION_CRITICALNATIVE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class dalvik::annotation::optimization::CriticalNative : public jni::object_base<"dalvik/annotation/optimization/CriticalNative",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:


protected:

	CriticalNative(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_DALVIK_ANNOTATION_OPTIMIZATION_CRITICALNATIVE
