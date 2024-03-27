// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/CompoundElement.h>
#include <scapix/java_api/java/lang/classfile/AttributedElement.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSMODEL_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSMODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile { class ClassModel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::ClassModel>
{
	static constexpr fixed_string class_name = "java/lang/classfile/ClassModel";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::CompoundElement, scapix::java_api::java::lang::classfile::AttributedElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSMODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSMODEL)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSMODEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/AccessFlags.h>
#include <scapix/java_api/java/lang/classfile/constantpool/ClassEntry.h>
#include <scapix/java_api/java/lang/classfile/constantpool/ConstantPool.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Optional.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::ClassModel : public jni::object_base<"java/lang/classfile/ClassModel",
	java::lang::Object,
	java::lang::classfile::CompoundElement,
	java::lang::classfile::AttributedElement>
{
public:

	jni::ref<java::lang::classfile::constantpool::ConstantPool> constantPool() { return call_method<"constantPool", jni::ref<java::lang::classfile::constantpool::ConstantPool>>(); }
	jni::ref<java::lang::classfile::AccessFlags> flags() { return call_method<"flags", jni::ref<java::lang::classfile::AccessFlags>>(); }
	jni::ref<java::lang::classfile::constantpool::ClassEntry> thisClass() { return call_method<"thisClass", jni::ref<java::lang::classfile::constantpool::ClassEntry>>(); }
	jint majorVersion() { return call_method<"majorVersion", jint>(); }
	jint minorVersion() { return call_method<"minorVersion", jint>(); }
	jni::ref<java::util::List> fields() { return call_method<"fields", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> methods() { return call_method<"methods", jni::ref<java::util::List>>(); }
	jni::ref<java::util::Optional> superclass() { return call_method<"superclass", jni::ref<java::util::Optional>>(); }
	jni::ref<java::util::List> interfaces() { return call_method<"interfaces", jni::ref<java::util::List>>(); }
	jboolean isModuleInfo() { return call_method<"isModuleInfo", jboolean>(); }

protected:

	ClassModel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSMODEL