// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_FIELDINSTRUCTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_FIELDINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::generic { class FieldInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::generic::FieldInstruction>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/generic/FieldInstruction";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::bcel::internal::generic::FieldOrMethod>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_FIELDINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_FIELDINSTRUCTION)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_FIELDINSTRUCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/Type.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::generic::FieldInstruction : public jni::object_base<"com/sun/org/apache/bcel/internal/generic/FieldInstruction",
	com::sun::org::apache::bcel::internal::generic::FieldOrMethod>
{
public:

	jni::ref<java::lang::String> getFieldName(jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen> p1) { return call_method<"getFieldName", jni::ref<java::lang::String>>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::Type> getFieldType(jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen> p1) { return call_method<"getFieldType", jni::ref<com::sun::org::apache::bcel::internal::generic::Type>>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::Type> getType(jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen> p1) { return call_method<"getType", jni::ref<com::sun::org::apache::bcel::internal::generic::Type>>(p1); }
	jni::ref<java::lang::String> toString(jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantPool> p1) { return call_method<"toString", jni::ref<java::lang::String>>(p1); }

protected:

	FieldInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_FIELDINSTRUCTION
