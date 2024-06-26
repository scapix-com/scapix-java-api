// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/ClassFile_Option.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSFILE_ATTRIBUTEMAPPEROPTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSFILE_ATTRIBUTEMAPPEROPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile { class ClassFile_AttributeMapperOption; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::ClassFile_AttributeMapperOption>
{
	static constexpr fixed_string class_name = "java/lang/classfile/ClassFile$AttributeMapperOption";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::ClassFile_Option>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSFILE_ATTRIBUTEMAPPEROPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSFILE_ATTRIBUTEMAPPEROPTION)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSFILE_ATTRIBUTEMAPPEROPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/Function.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::ClassFile_AttributeMapperOption : public jni::object_base<"java/lang/classfile/ClassFile$AttributeMapperOption",
	java::lang::Object,
	java::lang::classfile::ClassFile_Option>
{
public:

	static jni::ref<java::lang::classfile::ClassFile_AttributeMapperOption> of(jni::ref<java::util::function::Function> attributeMapper) { return call_static_method<"of", jni::ref<java::lang::classfile::ClassFile_AttributeMapperOption>>(attributeMapper); }
	jni::ref<java::util::function::Function> attributeMapper() { return call_method<"attributeMapper", jni::ref<java::util::function::Function>>(); }

protected:

	ClassFile_AttributeMapperOption(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSFILE_ATTRIBUTEMAPPEROPTION
