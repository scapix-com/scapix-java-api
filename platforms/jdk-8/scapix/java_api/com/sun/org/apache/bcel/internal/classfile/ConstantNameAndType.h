// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/Constant.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_CONSTANTNAMEANDTYPE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_CONSTANTNAMEANDTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::classfile { class ConstantNameAndType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::classfile::ConstantNameAndType>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/classfile/ConstantNameAndType";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::bcel::internal::classfile::Constant>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_CONSTANTNAMEANDTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_CONSTANTNAMEANDTYPE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_CONSTANTNAMEANDTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <scapix/java_api/java/io/DataOutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::classfile::ConstantNameAndType : public jni::object_base<"com/sun/org/apache/bcel/internal/classfile/ConstantNameAndType",
	com::sun::org::apache::bcel::internal::classfile::Constant>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantNameAndType> new_object(jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantNameAndType> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantNameAndType> new_object(jint p1, jint p2) { return base_::new_object(p1, p2); }
	void accept(jni::ref<com::sun::org::apache::bcel::internal::classfile::Visitor> p1) { return call_method<"accept", void>(p1); }
	void dump(jni::ref<java::io::DataOutputStream> p1) { return call_method<"dump", void>(p1); }
	jni::ref<java::lang::String> getName(jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantPool> p1) { return call_method<"getName", jni::ref<java::lang::String>>(p1); }
	jint getNameIndex() { return call_method<"getNameIndex", jint>(); }
	jni::ref<java::lang::String> getSignature(jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantPool> p1) { return call_method<"getSignature", jni::ref<java::lang::String>>(p1); }
	jint getSignatureIndex() { return call_method<"getSignatureIndex", jint>(); }
	void setNameIndex(jint p1) { return call_method<"setNameIndex", void>(p1); }
	void setSignatureIndex(jint p1) { return call_method<"setSignatureIndex", void>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ConstantNameAndType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_CONSTANTNAMEANDTYPE
