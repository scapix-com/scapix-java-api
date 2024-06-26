// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/Attribute.h>
#include <scapix/java_api/jdk/internal/classfile/FieldElement.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_CONSTANTVALUEATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_CONSTANTVALUEATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::attribute { class ConstantValueAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::attribute::ConstantValueAttribute>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/attribute/ConstantValueAttribute";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::Attribute, scapix::java_api::jdk::internal::classfile::FieldElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_CONSTANTVALUEATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_CONSTANTVALUEATTRIBUTE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_CONSTANTVALUEATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/constant/ConstantDesc.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ConstantValueEntry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::attribute::ConstantValueAttribute : public jni::object_base<"jdk/internal/classfile/attribute/ConstantValueAttribute",
	java::lang::Object,
	jdk::internal::classfile::Attribute,
	jdk::internal::classfile::FieldElement>
{
public:

	jni::ref<jdk::internal::classfile::constantpool::ConstantValueEntry> constant() { return call_method<"constant", jni::ref<jdk::internal::classfile::constantpool::ConstantValueEntry>>(); }
	static jni::ref<jdk::internal::classfile::attribute::ConstantValueAttribute> of(jni::ref<jdk::internal::classfile::constantpool::ConstantValueEntry> value) { return call_static_method<"of", jni::ref<jdk::internal::classfile::attribute::ConstantValueAttribute>>(value); }
	static jni::ref<jdk::internal::classfile::attribute::ConstantValueAttribute> of(jni::ref<java::lang::constant::ConstantDesc> value) { return call_static_method<"of", jni::ref<jdk::internal::classfile::attribute::ConstantValueAttribute>>(value); }

protected:

	ConstantValueAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_CONSTANTVALUEATTRIBUTE
