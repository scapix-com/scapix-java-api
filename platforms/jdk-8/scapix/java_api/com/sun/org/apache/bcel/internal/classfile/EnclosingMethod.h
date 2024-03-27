// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/Attribute.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ENCLOSINGMETHOD_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ENCLOSINGMETHOD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::classfile { class EnclosingMethod; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::classfile::EnclosingMethod>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/classfile/EnclosingMethod";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::bcel::internal::classfile::Attribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ENCLOSINGMETHOD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ENCLOSINGMETHOD)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ENCLOSINGMETHOD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/ConstantClass.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/ConstantNameAndType.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <scapix/java_api/java/io/DataOutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::classfile::EnclosingMethod : public jni::object_base<"com/sun/org/apache/bcel/internal/classfile/EnclosingMethod",
	com::sun::org::apache::bcel::internal::classfile::Attribute>
{
public:

	void accept(jni::ref<com::sun::org::apache::bcel::internal::classfile::Visitor> p1) { return call_method<"accept", void>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::classfile::Attribute> copy(jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantPool> p1) { return call_method<"copy", jni::ref<com::sun::org::apache::bcel::internal::classfile::Attribute>>(p1); }
	void dump(jni::ref<java::io::DataOutputStream> p1) { return call_method<"dump", void>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantClass> getEnclosingClass() { return call_method<"getEnclosingClass", jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantClass>>(); }
	jint getEnclosingClassIndex() { return call_method<"getEnclosingClassIndex", jint>(); }
	jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantNameAndType> getEnclosingMethod() { return call_method<"getEnclosingMethod", jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantNameAndType>>(); }
	jint getEnclosingMethodIndex() { return call_method<"getEnclosingMethodIndex", jint>(); }
	void setEnclosingClassIndex(jint p1) { return call_method<"setEnclosingClassIndex", void>(p1); }
	void setEnclosingMethodIndex(jint p1) { return call_method<"setEnclosingMethodIndex", void>(p1); }

protected:

	EnclosingMethod(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_ENCLOSINGMETHOD