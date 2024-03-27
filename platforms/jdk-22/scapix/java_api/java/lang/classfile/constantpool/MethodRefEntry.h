// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/constantpool/MemberRefEntry.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_METHODREFENTRY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_METHODREFENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::constantpool { class MethodRefEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::constantpool::MethodRefEntry>
{
	static constexpr fixed_string class_name = "java/lang/classfile/constantpool/MethodRefEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::constantpool::MemberRefEntry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_METHODREFENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_METHODREFENTRY)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_METHODREFENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/constant/MethodTypeDesc.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::constantpool::MethodRefEntry : public jni::object_base<"java/lang/classfile/constantpool/MethodRefEntry",
	java::lang::Object,
	java::lang::classfile::constantpool::MemberRefEntry>
{
public:

	jni::ref<java::lang::constant::MethodTypeDesc> typeSymbol() { return call_method<"typeSymbol", jni::ref<java::lang::constant::MethodTypeDesc>>(); }

protected:

	MethodRefEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_METHODREFENTRY