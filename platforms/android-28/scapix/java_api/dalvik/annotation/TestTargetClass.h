// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_DALVIK_ANNOTATION_TESTTARGETCLASS_FWD
#define SCAPIX_JAVA_API_DALVIK_ANNOTATION_TESTTARGETCLASS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::dalvik::annotation { class TestTargetClass; }

template<>
struct scapix::jni::object_traits<scapix::java_api::dalvik::annotation::TestTargetClass>
{
	static constexpr fixed_string class_name = "dalvik/annotation/TestTargetClass";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_DALVIK_ANNOTATION_TESTTARGETCLASS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_DALVIK_ANNOTATION_TESTTARGETCLASS)
#define SCAPIX_JAVA_API_DALVIK_ANNOTATION_TESTTARGETCLASS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class dalvik::annotation::TestTargetClass : public jni::object_base<"dalvik/annotation/TestTargetClass",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	jni::ref<java::lang::Class> value() { return call_method<"value", jni::ref<java::lang::Class>>(); }

protected:

	TestTargetClass(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_DALVIK_ANNOTATION_TESTTARGETCLASS
