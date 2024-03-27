// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/UnboundAttribute.h>
#include <scapix/java_api/java/lang/classfile/attribute/LocalVariableTypeTableAttribute.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDLOCALVARIABLETYPETABLEATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDLOCALVARIABLETYPETABLEATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class UnboundAttribute_UnboundLocalVariableTypeTableAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::UnboundAttribute_UnboundLocalVariableTypeTableAttribute>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/UnboundAttribute$UnboundLocalVariableTypeTableAttribute";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::UnboundAttribute, scapix::java_api::java::lang::classfile::attribute::LocalVariableTypeTableAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDLOCALVARIABLETYPETABLEATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDLOCALVARIABLETYPETABLEATTRIBUTE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDLOCALVARIABLETYPETABLEATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::UnboundAttribute_UnboundLocalVariableTypeTableAttribute : public jni::object_base<"jdk/internal/classfile/impl/UnboundAttribute$UnboundLocalVariableTypeTableAttribute",
	jdk::internal::classfile::impl::UnboundAttribute,
	java::lang::classfile::attribute::LocalVariableTypeTableAttribute>
{
public:

	static jni::ref<jdk::internal::classfile::impl::UnboundAttribute_UnboundLocalVariableTypeTableAttribute> new_object(jni::ref<java::util::List> locals) { return base_::new_object(locals); }
	jni::ref<java::util::List> localVariableTypes() { return call_method<"localVariableTypes", jni::ref<java::util::List>>(); }

protected:

	UnboundAttribute_UnboundLocalVariableTypeTableAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDLOCALVARIABLETYPETABLEATTRIBUTE
