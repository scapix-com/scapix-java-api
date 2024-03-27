// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_NATIVE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_NATIVE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::annotation { class Native; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::annotation::Native>
{
	static constexpr fixed_string class_name = "java/lang/annotation/Native";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_NATIVE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_NATIVE)
#define SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_NATIVE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::annotation::Native : public jni::object_base<"java/lang/annotation/Native",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:


protected:

	Native(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_NATIVE
