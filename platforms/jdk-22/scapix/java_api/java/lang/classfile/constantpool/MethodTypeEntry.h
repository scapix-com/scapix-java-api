// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/constantpool/LoadableConstantEntry.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_METHODTYPEENTRY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_METHODTYPEENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::constantpool { class MethodTypeEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::constantpool::MethodTypeEntry>
{
	static constexpr fixed_string class_name = "java/lang/classfile/constantpool/MethodTypeEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::constantpool::LoadableConstantEntry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_METHODTYPEENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_METHODTYPEENTRY)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_METHODTYPEENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/constantpool/Utf8Entry.h>
#include <scapix/java_api/java/lang/constant/ConstantDesc.h>
#include <scapix/java_api/java/lang/constant/MethodTypeDesc.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::constantpool::MethodTypeEntry : public jni::object_base<"java/lang/classfile/constantpool/MethodTypeEntry",
	java::lang::Object,
	java::lang::classfile::constantpool::LoadableConstantEntry>
{
public:

	jni::ref<java::lang::constant::ConstantDesc> constantValue() { return call_method<"constantValue", jni::ref<java::lang::constant::ConstantDesc>>(); }
	jni::ref<java::lang::classfile::constantpool::Utf8Entry> descriptor() { return call_method<"descriptor", jni::ref<java::lang::classfile::constantpool::Utf8Entry>>(); }
	jni::ref<java::lang::constant::MethodTypeDesc> asSymbol() { return call_method<"asSymbol", jni::ref<java::lang::constant::MethodTypeDesc>>(); }

protected:

	MethodTypeEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_METHODTYPEENTRY
