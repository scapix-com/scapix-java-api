// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/AccessFlags.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CLASSGEN_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CLASSGEN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::generic { class ClassGen; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::generic::ClassGen>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/generic/ClassGen";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::bcel::internal::classfile::AccessFlags, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CLASSGEN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CLASSGEN)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CLASSGEN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/Field.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/Method.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/AnnotationEntryGen.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ClassObserver.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/util/BCELComparator.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::generic::ClassGen : public jni::object_base<"com/sun/org/apache/bcel/internal/generic/ClassGen",
	com::sun::org::apache::bcel::internal::classfile::AccessFlags,
	java::lang::Cloneable>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::util::BCELComparator> getComparator() { return call_static_method<"getComparator", jni::ref<com::sun::org::apache::bcel::internal::util::BCELComparator>>(); }
	static void setComparator(jni::ref<com::sun::org::apache::bcel::internal::util::BCELComparator> p1) { return call_static_method<"setComparator", void>(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ClassGen> new_object(jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ClassGen> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jint p4, jni::ref<jni::array<java::lang::String>> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ClassGen> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jint p4, jni::ref<jni::array<java::lang::String>> p5, jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen> p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	void addAnnotationEntry(jni::ref<com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen> p1) { return call_method<"addAnnotationEntry", void>(p1); }
	void addAttribute(jni::ref<com::sun::org::apache::bcel::internal::classfile::Attribute> p1) { return call_method<"addAttribute", void>(p1); }
	void addEmptyConstructor(jint p1) { return call_method<"addEmptyConstructor", void>(p1); }
	void addField(jni::ref<com::sun::org::apache::bcel::internal::classfile::Field> p1) { return call_method<"addField", void>(p1); }
	void addInterface(jni::ref<java::lang::String> p1) { return call_method<"addInterface", void>(p1); }
	void addMethod(jni::ref<com::sun::org::apache::bcel::internal::classfile::Method> p1) { return call_method<"addMethod", void>(p1); }
	void addObserver(jni::ref<com::sun::org::apache::bcel::internal::generic::ClassObserver> p1) { return call_method<"addObserver", void>(p1); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jboolean containsField(jni::ref<com::sun::org::apache::bcel::internal::classfile::Field> p1) { return call_method<"containsField", jboolean>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::classfile::Field> containsField(jni::ref<java::lang::String> p1) { return call_method<"containsField", jni::ref<com::sun::org::apache::bcel::internal::classfile::Field>>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::classfile::Method> containsMethod(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"containsMethod", jni::ref<com::sun::org::apache::bcel::internal::classfile::Method>>(p1, p2); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<jni::array<com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen>> getAnnotationEntries() { return call_method<"getAnnotationEntries", jni::ref<jni::array<com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen>>>(); }
	jni::ref<jni::array<com::sun::org::apache::bcel::internal::classfile::Attribute>> getAttributes() { return call_method<"getAttributes", jni::ref<jni::array<com::sun::org::apache::bcel::internal::classfile::Attribute>>>(); }
	jni::ref<java::lang::String> getClassName() { return call_method<"getClassName", jni::ref<java::lang::String>>(); }
	jint getClassNameIndex() { return call_method<"getClassNameIndex", jint>(); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen> getConstantPool() { return call_method<"getConstantPool", jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen>>(); }
	jni::ref<jni::array<com::sun::org::apache::bcel::internal::classfile::Field>> getFields() { return call_method<"getFields", jni::ref<jni::array<com::sun::org::apache::bcel::internal::classfile::Field>>>(); }
	jni::ref<java::lang::String> getFileName() { return call_method<"getFileName", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::lang::String>> getInterfaceNames() { return call_method<"getInterfaceNames", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<jint>> getInterfaces() { return call_method<"getInterfaces", jni::ref<jni::array<jint>>>(); }
	jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass> getJavaClass() { return call_method<"getJavaClass", jni::ref<com::sun::org::apache::bcel::internal::classfile::JavaClass>>(); }
	jint getMajor() { return call_method<"getMajor", jint>(); }
	jni::ref<com::sun::org::apache::bcel::internal::classfile::Method> getMethodAt(jint p1) { return call_method<"getMethodAt", jni::ref<com::sun::org::apache::bcel::internal::classfile::Method>>(p1); }
	jni::ref<jni::array<com::sun::org::apache::bcel::internal::classfile::Method>> getMethods() { return call_method<"getMethods", jni::ref<jni::array<com::sun::org::apache::bcel::internal::classfile::Method>>>(); }
	jint getMinor() { return call_method<"getMinor", jint>(); }
	jni::ref<java::lang::String> getSuperclassName() { return call_method<"getSuperclassName", jni::ref<java::lang::String>>(); }
	jint getSuperclassNameIndex() { return call_method<"getSuperclassNameIndex", jint>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	void removeAttribute(jni::ref<com::sun::org::apache::bcel::internal::classfile::Attribute> p1) { return call_method<"removeAttribute", void>(p1); }
	void removeField(jni::ref<com::sun::org::apache::bcel::internal::classfile::Field> p1) { return call_method<"removeField", void>(p1); }
	void removeInterface(jni::ref<java::lang::String> p1) { return call_method<"removeInterface", void>(p1); }
	void removeMethod(jni::ref<com::sun::org::apache::bcel::internal::classfile::Method> p1) { return call_method<"removeMethod", void>(p1); }
	void removeObserver(jni::ref<com::sun::org::apache::bcel::internal::generic::ClassObserver> p1) { return call_method<"removeObserver", void>(p1); }
	void replaceField(jni::ref<com::sun::org::apache::bcel::internal::classfile::Field> p1, jni::ref<com::sun::org::apache::bcel::internal::classfile::Field> p2) { return call_method<"replaceField", void>(p1, p2); }
	void replaceMethod(jni::ref<com::sun::org::apache::bcel::internal::classfile::Method> p1, jni::ref<com::sun::org::apache::bcel::internal::classfile::Method> p2) { return call_method<"replaceMethod", void>(p1, p2); }
	void setClassName(jni::ref<java::lang::String> p1) { return call_method<"setClassName", void>(p1); }
	void setClassNameIndex(jint p1) { return call_method<"setClassNameIndex", void>(p1); }
	void setConstantPool(jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen> p1) { return call_method<"setConstantPool", void>(p1); }
	void setMajor(jint p1) { return call_method<"setMajor", void>(p1); }
	void setMethodAt(jni::ref<com::sun::org::apache::bcel::internal::classfile::Method> p1, jint p2) { return call_method<"setMethodAt", void>(p1, p2); }
	void setMethods(jni::ref<jni::array<com::sun::org::apache::bcel::internal::classfile::Method>> p1) { return call_method<"setMethods", void>(p1); }
	void setMinor(jint p1) { return call_method<"setMinor", void>(p1); }
	void setSuperclassName(jni::ref<java::lang::String> p1) { return call_method<"setSuperclassName", void>(p1); }
	void setSuperclassNameIndex(jint p1) { return call_method<"setSuperclassNameIndex", void>(p1); }
	void update() { return call_method<"update", void>(); }

protected:

	ClassGen(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CLASSGEN
