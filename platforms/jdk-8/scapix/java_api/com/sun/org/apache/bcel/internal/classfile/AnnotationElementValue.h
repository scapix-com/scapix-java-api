// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/ElementValue.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ANNOTATIONELEMENTVALUE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ANNOTATIONELEMENTVALUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::classfile { class AnnotationElementValue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::classfile::AnnotationElementValue>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/classfile/AnnotationElementValue";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::bcel::internal::classfile::ElementValue>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ANNOTATIONELEMENTVALUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ANNOTATIONELEMENTVALUE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ANNOTATIONELEMENTVALUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/AnnotationEntry.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <scapix/java_api/java/io/DataOutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::classfile::AnnotationElementValue : public jni::object_base<"com/sun/org/apache/bcel/internal/classfile/AnnotationElementValue",
	com::sun::org::apache::bcel::internal::classfile::ElementValue>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::classfile::AnnotationElementValue> new_object(jint p1, jni::ref<com::sun::org::apache::bcel::internal::classfile::AnnotationEntry> p2, jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantPool> p3) { return base_::new_object(p1, p2, p3); }
	void dump(jni::ref<java::io::DataOutputStream> p1) { return call_method<"dump", void>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::classfile::AnnotationEntry> getAnnotationEntry() { return call_method<"getAnnotationEntry", jni::ref<com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>>(); }
	jni::ref<java::lang::String> stringifyValue() { return call_method<"stringifyValue", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AnnotationElementValue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ANNOTATIONELEMENTVALUE