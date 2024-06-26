// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/UnconditionalBranch.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_GOTOINSTRUCTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_GOTOINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::generic { class GotoInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::generic::GotoInstruction>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/generic/GotoInstruction";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::bcel::internal::generic::BranchInstruction, scapix::java_api::com::sun::org::apache::bcel::internal::generic::UnconditionalBranch>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_GOTOINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_GOTOINSTRUCTION)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_GOTOINSTRUCTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::generic::GotoInstruction : public jni::object_base<"com/sun/org/apache/bcel/internal/generic/GotoInstruction",
	com::sun::org::apache::bcel::internal::generic::BranchInstruction,
	com::sun::org::apache::bcel::internal::generic::UnconditionalBranch>
{
public:


protected:

	GotoInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_GOTOINSTRUCTION
