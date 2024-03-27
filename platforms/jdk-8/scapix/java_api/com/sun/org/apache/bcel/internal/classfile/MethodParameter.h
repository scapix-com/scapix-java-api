// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/Node.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_METHODPARAMETER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_METHODPARAMETER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::classfile { class MethodParameter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::classfile::MethodParameter>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/classfile/MethodParameter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable, scapix::java_api::com::sun::org::apache::bcel::internal::classfile::Node>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_METHODPARAMETER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_METHODPARAMETER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_METHODPARAMETER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <scapix/java_api/java/io/DataOutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::classfile::MethodParameter : public jni::object_base<"com/sun/org/apache/bcel/internal/classfile/MethodParameter",
	java::lang::Object,
	java::lang::Cloneable,
	com::sun::org::apache::bcel::internal::classfile::Node>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::classfile::MethodParameter> new_object() { return base_::new_object(); }
	void accept(jni::ref<com::sun::org::apache::bcel::internal::classfile::Visitor> p1) { return call_method<"accept", void>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::classfile::MethodParameter> copy() { return call_method<"copy", jni::ref<com::sun::org::apache::bcel::internal::classfile::MethodParameter>>(); }
	void dump(jni::ref<java::io::DataOutputStream> p1) { return call_method<"dump", void>(p1); }
	jint getAccessFlags() { return call_method<"getAccessFlags", jint>(); }
	jint getNameIndex() { return call_method<"getNameIndex", jint>(); }
	jni::ref<java::lang::String> getParameterName(jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantPool> p1) { return call_method<"getParameterName", jni::ref<java::lang::String>>(p1); }
	jboolean isFinal() { return call_method<"isFinal", jboolean>(); }
	jboolean isMandated() { return call_method<"isMandated", jboolean>(); }
	jboolean isSynthetic() { return call_method<"isSynthetic", jboolean>(); }
	void setAccessFlags(jint p1) { return call_method<"setAccessFlags", void>(p1); }
	void setNameIndex(jint p1) { return call_method<"setNameIndex", void>(p1); }

protected:

	MethodParameter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_METHODPARAMETER
