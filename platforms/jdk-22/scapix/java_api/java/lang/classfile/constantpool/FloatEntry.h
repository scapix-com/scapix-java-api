// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/constantpool/AnnotationConstantValueEntry.h>
#include <scapix/java_api/java/lang/classfile/constantpool/ConstantValueEntry.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_FLOATENTRY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_FLOATENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::constantpool { class FloatEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::constantpool::FloatEntry>
{
	static constexpr fixed_string class_name = "java/lang/classfile/constantpool/FloatEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::constantpool::AnnotationConstantValueEntry, scapix::java_api::java::lang::classfile::constantpool::ConstantValueEntry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_FLOATENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_FLOATENTRY)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_FLOATENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/TypeKind.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::constantpool::FloatEntry : public jni::object_base<"java/lang/classfile/constantpool/FloatEntry",
	java::lang::Object,
	java::lang::classfile::constantpool::AnnotationConstantValueEntry,
	java::lang::classfile::constantpool::ConstantValueEntry>
{
public:

	jfloat floatValue() { return call_method<"floatValue", jfloat>(); }
	jni::ref<java::lang::classfile::TypeKind> typeKind() { return call_method<"typeKind", jni::ref<java::lang::classfile::TypeKind>>(); }

protected:

	FloatEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_FLOATENTRY