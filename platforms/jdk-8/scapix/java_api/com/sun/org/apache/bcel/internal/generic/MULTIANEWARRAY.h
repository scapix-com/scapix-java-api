// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/LoadClass.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/AllocationInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_MULTIANEWARRAY_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_MULTIANEWARRAY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::generic { class MULTIANEWARRAY; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::generic::MULTIANEWARRAY>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/generic/MULTIANEWARRAY";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::bcel::internal::generic::CPInstruction, scapix::java_api::com::sun::org::apache::bcel::internal::generic::LoadClass, scapix::java_api::com::sun::org::apache::bcel::internal::generic::AllocationInstruction, scapix::java_api::com::sun::org::apache::bcel::internal::generic::ExceptionThrower>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_MULTIANEWARRAY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_MULTIANEWARRAY)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_MULTIANEWARRAY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <scapix/java_api/java/io/DataOutputStream.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::generic::MULTIANEWARRAY : public jni::object_base<"com/sun/org/apache/bcel/internal/generic/MULTIANEWARRAY",
	com::sun::org::apache::bcel::internal::generic::CPInstruction,
	com::sun::org::apache::bcel::internal::generic::LoadClass,
	com::sun::org::apache::bcel::internal::generic::AllocationInstruction,
	com::sun::org::apache::bcel::internal::generic::ExceptionThrower>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::generic::MULTIANEWARRAY> new_object(jint p1, jshort p2) { return base_::new_object(p1, p2); }
	void accept(jni::ref<com::sun::org::apache::bcel::internal::generic::Visitor> p1) { return call_method<"accept", void>(p1); }
	jint consumeStack(jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen> p1) { return call_method<"consumeStack", jint>(p1); }
	void dump(jni::ref<java::io::DataOutputStream> p1) { return call_method<"dump", void>(p1); }
	jshort getDimensions() { return call_method<"getDimensions", jshort>(); }
	jni::ref<jni::array<java::lang::Class>> getExceptions() { return call_method<"getExceptions", jni::ref<jni::array<java::lang::Class>>>(); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::ObjectType> getLoadClassType(jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen> p1) { return call_method<"getLoadClassType", jni::ref<com::sun::org::apache::bcel::internal::generic::ObjectType>>(p1); }
	jni::ref<java::lang::String> toString(jboolean p1) { return call_method<"toString", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> toString(jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantPool> p1) { return call_method<"toString", jni::ref<java::lang::String>>(p1); }

protected:

	MULTIANEWARRAY(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_MULTIANEWARRAY
