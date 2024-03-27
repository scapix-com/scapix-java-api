// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/ClassFile_Option.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSFILE_CLASSHIERARCHYRESOLVEROPTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSFILE_CLASSHIERARCHYRESOLVEROPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile { class ClassFile_ClassHierarchyResolverOption; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::ClassFile_ClassHierarchyResolverOption>
{
	static constexpr fixed_string class_name = "java/lang/classfile/ClassFile$ClassHierarchyResolverOption";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::ClassFile_Option>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSFILE_CLASSHIERARCHYRESOLVEROPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSFILE_CLASSHIERARCHYRESOLVEROPTION)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSFILE_CLASSHIERARCHYRESOLVEROPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/ClassHierarchyResolver.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::ClassFile_ClassHierarchyResolverOption : public jni::object_base<"java/lang/classfile/ClassFile$ClassHierarchyResolverOption",
	java::lang::Object,
	java::lang::classfile::ClassFile_Option>
{
public:

	static jni::ref<java::lang::classfile::ClassFile_ClassHierarchyResolverOption> of(jni::ref<java::lang::classfile::ClassHierarchyResolver> classHierarchyResolver) { return call_static_method<"of", jni::ref<java::lang::classfile::ClassFile_ClassHierarchyResolverOption>>(classHierarchyResolver); }
	jni::ref<java::lang::classfile::ClassHierarchyResolver> classHierarchyResolver() { return call_method<"classHierarchyResolver", jni::ref<java::lang::classfile::ClassHierarchyResolver>>(); }

protected:

	ClassFile_ClassHierarchyResolverOption(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSFILE_CLASSHIERARCHYRESOLVEROPTION
