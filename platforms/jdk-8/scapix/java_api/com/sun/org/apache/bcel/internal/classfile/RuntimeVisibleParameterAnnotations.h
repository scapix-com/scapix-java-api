// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/ParameterAnnotations.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_RUNTIMEVISIBLEPARAMETERANNOTATIONS_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_RUNTIMEVISIBLEPARAMETERANNOTATIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::classfile { class RuntimeVisibleParameterAnnotations; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::classfile::RuntimeVisibleParameterAnnotations>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/classfile/RuntimeVisibleParameterAnnotations";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotations>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_RUNTIMEVISIBLEPARAMETERANNOTATIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_RUNTIMEVISIBLEPARAMETERANNOTATIONS)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_RUNTIMEVISIBLEPARAMETERANNOTATIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <scapix/java_api/java/io/DataInput.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::classfile::RuntimeVisibleParameterAnnotations : public jni::object_base<"com/sun/org/apache/bcel/internal/classfile/RuntimeVisibleParameterAnnotations",
	com::sun::org::apache::bcel::internal::classfile::ParameterAnnotations>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::classfile::RuntimeVisibleParameterAnnotations> new_object(jint p1, jint p2, jni::ref<java::io::DataInput> p3, jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantPool> p4) { return base_::new_object(p1, p2, p3, p4); }

protected:

	RuntimeVisibleParameterAnnotations(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_RUNTIMEVISIBLEPARAMETERANNOTATIONS
