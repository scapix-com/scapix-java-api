// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/Constant.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_CONSTANTMETHODTYPE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_CONSTANTMETHODTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::classfile { class ConstantMethodType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::classfile::ConstantMethodType>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/classfile/ConstantMethodType";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::bcel::internal::classfile::Constant>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_CONSTANTMETHODTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_CONSTANTMETHODTYPE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_CONSTANTMETHODTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <scapix/java_api/java/io/DataOutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::classfile::ConstantMethodType : public jni::object_base<"com/sun/org/apache/bcel/internal/classfile/ConstantMethodType",
	com::sun::org::apache::bcel::internal::classfile::Constant>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantMethodType> new_object(jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantMethodType> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantMethodType> new_object(jint p1) { return base_::new_object(p1); }
	void accept(jni::ref<com::sun::org::apache::bcel::internal::classfile::Visitor> p1) { return call_method<"accept", void>(p1); }
	void dump(jni::ref<java::io::DataOutputStream> p1) { return call_method<"dump", void>(p1); }
	jint getDescriptorIndex() { return call_method<"getDescriptorIndex", jint>(); }
	void setDescriptorIndex(jint p1) { return call_method<"setDescriptorIndex", void>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ConstantMethodType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_CONSTANTMETHODTYPE
