// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/Attribute.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_DEPRECATED_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_DEPRECATED_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::classfile { class Deprecated; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::classfile::Deprecated>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/classfile/Deprecated";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::bcel::internal::classfile::Attribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_DEPRECATED_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_DEPRECATED)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_DEPRECATED

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <scapix/java_api/java/io/DataOutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::classfile::Deprecated : public jni::object_base<"com/sun/org/apache/bcel/internal/classfile/Deprecated",
	com::sun::org::apache::bcel::internal::classfile::Attribute>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::classfile::Deprecated> new_object(jni::ref<com::sun::org::apache::bcel::internal::classfile::Deprecated> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::classfile::Deprecated> new_object(jint p1, jint p2, jni::ref<jni::array<jbyte>> p3, jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantPool> p4) { return base_::new_object(p1, p2, p3, p4); }
	void accept(jni::ref<com::sun::org::apache::bcel::internal::classfile::Visitor> p1) { return call_method<"accept", void>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::classfile::Attribute> copy(jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantPool> p1) { return call_method<"copy", jni::ref<com::sun::org::apache::bcel::internal::classfile::Attribute>>(p1); }
	void dump(jni::ref<java::io::DataOutputStream> p1) { return call_method<"dump", void>(p1); }
	jni::ref<jni::array<jbyte>> getBytes() { return call_method<"getBytes", jni::ref<jni::array<jbyte>>>(); }
	void setBytes(jni::ref<jni::array<jbyte>> p1) { return call_method<"setBytes", void>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Deprecated(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_DEPRECATED
