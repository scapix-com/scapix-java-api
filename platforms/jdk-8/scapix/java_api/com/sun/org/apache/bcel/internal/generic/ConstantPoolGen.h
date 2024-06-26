// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CONSTANTPOOLGEN_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CONSTANTPOOLGEN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::generic { class ConstantPoolGen; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/generic/ConstantPoolGen";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CONSTANTPOOLGEN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CONSTANTPOOLGEN)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CONSTANTPOOLGEN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ArrayType.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/MethodGen.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::generic::ConstantPoolGen : public jni::object_base<"com/sun/org/apache/bcel/internal/generic/ConstantPoolGen",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen> new_object(jni::ref<jni::array<com::sun::org::apache::bcel::internal::classfile::Constant>> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen> new_object(jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantPool> p1) { return base_::new_object(p1); }
	jint addArrayClass(jni::ref<com::sun::org::apache::bcel::internal::generic::ArrayType> p1) { return call_method<"addArrayClass", jint>(p1); }
	jint addClass(jni::ref<com::sun::org::apache::bcel::internal::generic::ObjectType> p1) { return call_method<"addClass", jint>(p1); }
	jint addClass(jni::ref<java::lang::String> p1) { return call_method<"addClass", jint>(p1); }
	jint addConstant(jni::ref<com::sun::org::apache::bcel::internal::classfile::Constant> p1, jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen> p2) { return call_method<"addConstant", jint>(p1, p2); }
	jint addDouble(jdouble p1) { return call_method<"addDouble", jint>(p1); }
	jint addFieldref(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"addFieldref", jint>(p1, p2, p3); }
	jint addFloat(jfloat p1) { return call_method<"addFloat", jint>(p1); }
	jint addInteger(jint p1) { return call_method<"addInteger", jint>(p1); }
	jint addInterfaceMethodref(jni::ref<com::sun::org::apache::bcel::internal::generic::MethodGen> p1) { return call_method<"addInterfaceMethodref", jint>(p1); }
	jint addInterfaceMethodref(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"addInterfaceMethodref", jint>(p1, p2, p3); }
	jint addLong(jlong p1) { return call_method<"addLong", jint>(p1); }
	jint addMethodref(jni::ref<com::sun::org::apache::bcel::internal::generic::MethodGen> p1) { return call_method<"addMethodref", jint>(p1); }
	jint addMethodref(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"addMethodref", jint>(p1, p2, p3); }
	jint addNameAndType(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"addNameAndType", jint>(p1, p2); }
	jint addString(jni::ref<java::lang::String> p1) { return call_method<"addString", jint>(p1); }
	jint addUtf8(jni::ref<java::lang::String> p1) { return call_method<"addUtf8", jint>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::classfile::Constant> getConstant(jint p1) { return call_method<"getConstant", jni::ref<com::sun::org::apache::bcel::internal::classfile::Constant>>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantPool> getConstantPool() { return call_method<"getConstantPool", jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantPool>>(); }
	jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantPool> getFinalConstantPool() { return call_method<"getFinalConstantPool", jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantPool>>(); }
	jint getSize() { return call_method<"getSize", jint>(); }
	jint lookupClass(jni::ref<java::lang::String> p1) { return call_method<"lookupClass", jint>(p1); }
	jint lookupDouble(jdouble p1) { return call_method<"lookupDouble", jint>(p1); }
	jint lookupFieldref(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"lookupFieldref", jint>(p1, p2, p3); }
	jint lookupFloat(jfloat p1) { return call_method<"lookupFloat", jint>(p1); }
	jint lookupInteger(jint p1) { return call_method<"lookupInteger", jint>(p1); }
	jint lookupInterfaceMethodref(jni::ref<com::sun::org::apache::bcel::internal::generic::MethodGen> p1) { return call_method<"lookupInterfaceMethodref", jint>(p1); }
	jint lookupInterfaceMethodref(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"lookupInterfaceMethodref", jint>(p1, p2, p3); }
	jint lookupLong(jlong p1) { return call_method<"lookupLong", jint>(p1); }
	jint lookupMethodref(jni::ref<com::sun::org::apache::bcel::internal::generic::MethodGen> p1) { return call_method<"lookupMethodref", jint>(p1); }
	jint lookupMethodref(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"lookupMethodref", jint>(p1, p2, p3); }
	jint lookupNameAndType(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"lookupNameAndType", jint>(p1, p2); }
	jint lookupString(jni::ref<java::lang::String> p1) { return call_method<"lookupString", jint>(p1); }
	jint lookupUtf8(jni::ref<java::lang::String> p1) { return call_method<"lookupUtf8", jint>(p1); }
	void setConstant(jint p1, jni::ref<com::sun::org::apache::bcel::internal::classfile::Constant> p2) { return call_method<"setConstant", void>(p1, p2); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ConstantPoolGen(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CONSTANTPOOLGEN
