// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/TypeAnnotation_TargetInfo.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_TYPEANNOTATION_LOCALVARTARGET_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_TYPEANNOTATION_LOCALVARTARGET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile { class TypeAnnotation_LocalVarTarget; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::TypeAnnotation_LocalVarTarget>
{
	static constexpr fixed_string class_name = "java/lang/classfile/TypeAnnotation$LocalVarTarget";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::TypeAnnotation_TargetInfo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_TYPEANNOTATION_LOCALVARTARGET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_TYPEANNOTATION_LOCALVARTARGET)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_TYPEANNOTATION_LOCALVARTARGET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::TypeAnnotation_LocalVarTarget : public jni::object_base<"java/lang/classfile/TypeAnnotation$LocalVarTarget",
	java::lang::Object,
	java::lang::classfile::TypeAnnotation_TargetInfo>
{
public:

	jni::ref<java::util::List> table() { return call_method<"table", jni::ref<java::util::List>>(); }

protected:

	TypeAnnotation_LocalVarTarget(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_TYPEANNOTATION_LOCALVARTARGET