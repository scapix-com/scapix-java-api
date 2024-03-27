// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_ELEMENTVALUEGEN_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_ELEMENTVALUEGEN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::generic { class ElementValueGen; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::generic::ElementValueGen>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/generic/ElementValueGen";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_ELEMENTVALUEGEN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_ELEMENTVALUEGEN)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_ELEMENTVALUEGEN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/ElementValue.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <scapix/java_api/java/io/DataInput.h>
#include <scapix/java_api/java/io/DataOutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::generic::ElementValueGen : public jni::object_base<"com/sun/org/apache/bcel/internal/generic/ElementValueGen",
	java::lang::Object>
{
public:

	static jint STRING() { return get_static_field<"STRING", jint>(); }
	static jint ENUM_CONSTANT() { return get_static_field<"ENUM_CONSTANT", jint>(); }
	static jint CLASS() { return get_static_field<"CLASS", jint>(); }
	static jint ANNOTATION() { return get_static_field<"ANNOTATION", jint>(); }
	static jint ARRAY() { return get_static_field<"ARRAY", jint>(); }
	static jint PRIMITIVE_INT() { return get_static_field<"PRIMITIVE_INT", jint>(); }
	static jint PRIMITIVE_BYTE() { return get_static_field<"PRIMITIVE_BYTE", jint>(); }
	static jint PRIMITIVE_CHAR() { return get_static_field<"PRIMITIVE_CHAR", jint>(); }
	static jint PRIMITIVE_DOUBLE() { return get_static_field<"PRIMITIVE_DOUBLE", jint>(); }
	static jint PRIMITIVE_FLOAT() { return get_static_field<"PRIMITIVE_FLOAT", jint>(); }
	static jint PRIMITIVE_LONG() { return get_static_field<"PRIMITIVE_LONG", jint>(); }
	static jint PRIMITIVE_SHORT() { return get_static_field<"PRIMITIVE_SHORT", jint>(); }
	static jint PRIMITIVE_BOOLEAN() { return get_static_field<"PRIMITIVE_BOOLEAN", jint>(); }

	static jni::ref<com::sun::org::apache::bcel::internal::generic::ElementValueGen> copy(jni::ref<com::sun::org::apache::bcel::internal::classfile::ElementValue> p1, jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen> p2, jboolean p3) { return call_static_method<"copy", jni::ref<com::sun::org::apache::bcel::internal::generic::ElementValueGen>>(p1, p2, p3); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ElementValueGen> readElementValue(jni::ref<java::io::DataInput> p1, jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen> p2) { return call_static_method<"readElementValue", jni::ref<com::sun::org::apache::bcel::internal::generic::ElementValueGen>>(p1, p2); }
	void dump(jni::ref<java::io::DataOutputStream> p1) { return call_method<"dump", void>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::classfile::ElementValue> getElementValue() { return call_method<"getElementValue", jni::ref<com::sun::org::apache::bcel::internal::classfile::ElementValue>>(); }
	jint getElementValueType() { return call_method<"getElementValueType", jint>(); }
	jni::ref<java::lang::String> stringifyValue() { return call_method<"stringifyValue", jni::ref<java::lang::String>>(); }

protected:

	ElementValueGen(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_ELEMENTVALUEGEN