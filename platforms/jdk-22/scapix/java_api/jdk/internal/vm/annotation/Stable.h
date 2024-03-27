// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_VM_ANNOTATION_STABLE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_ANNOTATION_STABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::vm::annotation { class Stable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::vm::annotation::Stable>
{
	static constexpr fixed_string class_name = "jdk/internal/vm/annotation/Stable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_ANNOTATION_STABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_VM_ANNOTATION_STABLE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_ANNOTATION_STABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::vm::annotation::Stable : public jni::object_base<"jdk/internal/vm/annotation/Stable",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:


protected:

	Stable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_ANNOTATION_STABLE
