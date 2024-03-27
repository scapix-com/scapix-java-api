// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/AllocationInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/StackProducer.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_NEWARRAY_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_NEWARRAY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::generic { class NEWARRAY; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::generic::NEWARRAY>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/generic/NEWARRAY";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::bcel::internal::generic::Instruction, scapix::java_api::com::sun::org::apache::bcel::internal::generic::AllocationInstruction, scapix::java_api::com::sun::org::apache::bcel::internal::generic::ExceptionThrower, scapix::java_api::com::sun::org::apache::bcel::internal::generic::StackProducer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_NEWARRAY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_NEWARRAY)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_NEWARRAY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/Type.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <scapix/java_api/java/io/DataOutputStream.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::generic::NEWARRAY : public jni::object_base<"com/sun/org/apache/bcel/internal/generic/NEWARRAY",
	com::sun::org::apache::bcel::internal::generic::Instruction,
	com::sun::org::apache::bcel::internal::generic::AllocationInstruction,
	com::sun::org::apache::bcel::internal::generic::ExceptionThrower,
	com::sun::org::apache::bcel::internal::generic::StackProducer>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::generic::NEWARRAY> new_object(jni::ref<com::sun::org::apache::bcel::internal::generic::BasicType> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::NEWARRAY> new_object(jbyte p1) { return base_::new_object(p1); }
	void accept(jni::ref<com::sun::org::apache::bcel::internal::generic::Visitor> p1) { return call_method<"accept", void>(p1); }
	void dump(jni::ref<java::io::DataOutputStream> p1) { return call_method<"dump", void>(p1); }
	jni::ref<jni::array<java::lang::Class>> getExceptions() { return call_method<"getExceptions", jni::ref<jni::array<java::lang::Class>>>(); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::Type> getType() { return call_method<"getType", jni::ref<com::sun::org::apache::bcel::internal::generic::Type>>(); }
	jbyte getTypecode() { return call_method<"getTypecode", jbyte>(); }
	jni::ref<java::lang::String> toString(jboolean p1) { return call_method<"toString", jni::ref<java::lang::String>>(p1); }

protected:

	NEWARRAY(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_NEWARRAY