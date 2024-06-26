// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/constantpool/AnnotationConstantValueEntry.h>
#include <scapix/java_api/java/lang/classfile/constantpool/ConstantValueEntry.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_INTEGERENTRY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_INTEGERENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::constantpool { class IntegerEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::constantpool::IntegerEntry>
{
	static constexpr fixed_string class_name = "java/lang/classfile/constantpool/IntegerEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::constantpool::AnnotationConstantValueEntry, scapix::java_api::java::lang::classfile::constantpool::ConstantValueEntry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_INTEGERENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_INTEGERENTRY)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_INTEGERENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/TypeKind.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::constantpool::IntegerEntry : public jni::object_base<"java/lang/classfile/constantpool/IntegerEntry",
	java::lang::Object,
	java::lang::classfile::constantpool::AnnotationConstantValueEntry,
	java::lang::classfile::constantpool::ConstantValueEntry>
{
public:

	jint intValue() { return call_method<"intValue", jint>(); }
	jni::ref<java::lang::classfile::TypeKind> typeKind() { return call_method<"typeKind", jni::ref<java::lang::classfile::TypeKind>>(); }

protected:

	IntegerEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_INTEGERENTRY
