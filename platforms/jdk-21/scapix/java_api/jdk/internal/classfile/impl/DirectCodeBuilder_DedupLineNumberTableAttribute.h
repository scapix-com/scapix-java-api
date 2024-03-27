// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/UnboundAttribute_AdHocAttribute.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCODEBUILDER_DEDUPLINENUMBERTABLEATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCODEBUILDER_DEDUPLINENUMBERTABLEATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class DirectCodeBuilder_DedupLineNumberTableAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::DirectCodeBuilder_DedupLineNumberTableAttribute>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/DirectCodeBuilder$DedupLineNumberTableAttribute";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::UnboundAttribute_AdHocAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCODEBUILDER_DEDUPLINENUMBERTABLEATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCODEBUILDER_DEDUPLINENUMBERTABLEATTRIBUTE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCODEBUILDER_DEDUPLINENUMBERTABLEATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/classfile/BufWriter.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ConstantPoolBuilder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::classfile::impl::DirectCodeBuilder_DedupLineNumberTableAttribute : public jni::object_base<"jdk/internal/classfile/impl/DirectCodeBuilder$DedupLineNumberTableAttribute",
	jdk::internal::classfile::impl::UnboundAttribute_AdHocAttribute>
{
public:

	static jni::ref<jdk::internal::classfile::impl::DirectCodeBuilder_DedupLineNumberTableAttribute> new_object(jni::ref<jdk::internal::classfile::constantpool::ConstantPoolBuilder> constantPool) { return base_::new_object(constantPool); }
	void writeLineNumber(jint pc, jint lineNo) { return call_method<"writeLineNumber", void>(pc, lineNo); }
	void writeBody(jni::ref<jdk::internal::classfile::BufWriter> b) { return call_method<"writeBody", void>(b); }
	void writeTo(jni::ref<jdk::internal::classfile::BufWriter> b) { return call_method<"writeTo", void>(b); }

protected:

	DirectCodeBuilder_DedupLineNumberTableAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCODEBUILDER_DEDUPLINENUMBERTABLEATTRIBUTE