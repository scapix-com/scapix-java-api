// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <scapix/java_api/java/lang/Iterable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ANNOTATIONS_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ANNOTATIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::classfile { class Annotations; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::classfile::Annotations>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/classfile/Annotations";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::bcel::internal::classfile::Attribute, scapix::java_api::java::lang::Iterable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ANNOTATIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ANNOTATIONS)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ANNOTATIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/AnnotationEntry.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::classfile::Annotations : public jni::object_base<"com/sun/org/apache/bcel/internal/classfile/Annotations",
	com::sun::org::apache::bcel::internal::classfile::Attribute,
	java::lang::Iterable>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::classfile::Annotations> new_object(jbyte p1, jint p2, jint p3, jni::ref<jni::array<com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>> p4, jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantPool> p5, jboolean p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	void accept(jni::ref<com::sun::org::apache::bcel::internal::classfile::Visitor> p1) { return call_method<"accept", void>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::classfile::Attribute> copy(jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantPool> p1) { return call_method<"copy", jni::ref<com::sun::org::apache::bcel::internal::classfile::Attribute>>(p1); }
	jni::ref<jni::array<com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>> getAnnotationEntries() { return call_method<"getAnnotationEntries", jni::ref<jni::array<com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>>>(); }
	jint getNumAnnotations() { return call_method<"getNumAnnotations", jint>(); }
	jboolean isRuntimeVisible() { return call_method<"isRuntimeVisible", jboolean>(); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	void setAnnotationTable(jni::ref<jni::array<com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>> p1) { return call_method<"setAnnotationTable", void>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Annotations(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ANNOTATIONS
