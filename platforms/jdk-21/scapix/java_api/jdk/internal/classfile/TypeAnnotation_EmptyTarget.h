// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/TypeAnnotation_TargetInfo.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_EMPTYTARGET_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_EMPTYTARGET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile { class TypeAnnotation_EmptyTarget; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::TypeAnnotation_EmptyTarget>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/TypeAnnotation$EmptyTarget";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::TypeAnnotation_TargetInfo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_EMPTYTARGET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_EMPTYTARGET)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_EMPTYTARGET

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::TypeAnnotation_EmptyTarget : public jni::object_base<"jdk/internal/classfile/TypeAnnotation$EmptyTarget",
	java::lang::Object,
	jdk::internal::classfile::TypeAnnotation_TargetInfo>
{
public:


protected:

	TypeAnnotation_EmptyTarget(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_EMPTYTARGET
