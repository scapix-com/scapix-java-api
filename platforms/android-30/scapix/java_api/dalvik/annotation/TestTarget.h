// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_DALVIK_ANNOTATION_TESTTARGET_FWD
#define SCAPIX_JAVA_API_DALVIK_ANNOTATION_TESTTARGET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::dalvik::annotation { class TestTarget; }

template<>
struct scapix::jni::object_traits<scapix::java_api::dalvik::annotation::TestTarget>
{
	static constexpr fixed_string class_name = "dalvik/annotation/TestTarget";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_DALVIK_ANNOTATION_TESTTARGET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_DALVIK_ANNOTATION_TESTTARGET)
#define SCAPIX_JAVA_API_DALVIK_ANNOTATION_TESTTARGET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class dalvik::annotation::TestTarget : public jni::object_base<"dalvik/annotation/TestTarget",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	jni::ref<java::lang::String> methodName() { return call_method<"methodName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> conceptName() { return call_method<"conceptName", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::lang::Class>> methodArgs() { return call_method<"methodArgs", jni::ref<jni::array<java::lang::Class>>>(); }

protected:

	TestTarget(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_DALVIK_ANNOTATION_TESTTARGET
