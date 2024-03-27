// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/StackConsumer.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_IFINSTRUCTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_IFINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::generic { class IfInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::generic::IfInstruction>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/generic/IfInstruction";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::bcel::internal::generic::BranchInstruction, scapix::java_api::com::sun::org::apache::bcel::internal::generic::StackConsumer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_IFINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_IFINSTRUCTION)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_IFINSTRUCTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::generic::IfInstruction : public jni::object_base<"com/sun/org/apache/bcel/internal/generic/IfInstruction",
	com::sun::org::apache::bcel::internal::generic::BranchInstruction,
	com::sun::org::apache::bcel::internal::generic::StackConsumer>
{
public:

	jni::ref<com::sun::org::apache::bcel::internal::generic::IfInstruction> negate() { return call_method<"negate", jni::ref<com::sun::org::apache::bcel::internal::generic::IfInstruction>>(); }

protected:

	IfInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_IFINSTRUCTION
