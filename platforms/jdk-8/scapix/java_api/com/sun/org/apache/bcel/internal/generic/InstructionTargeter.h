// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INSTRUCTIONTARGETER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INSTRUCTIONTARGETER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::generic { class InstructionTargeter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::generic::InstructionTargeter>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/generic/InstructionTargeter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INSTRUCTIONTARGETER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INSTRUCTIONTARGETER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INSTRUCTIONTARGETER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::generic::InstructionTargeter : public jni::object_base<"com/sun/org/apache/bcel/internal/generic/InstructionTargeter",
	java::lang::Object>
{
public:

	jboolean containsTarget(jni::ref<com::sun::org::apache::bcel::internal::generic::InstructionHandle> p1) { return call_method<"containsTarget", jboolean>(p1); }
	void updateTarget(jni::ref<com::sun::org::apache::bcel::internal::generic::InstructionHandle> p1, jni::ref<com::sun::org::apache::bcel::internal::generic::InstructionHandle> p2) { return call_method<"updateTarget", void>(p1, p2); }

protected:

	InstructionTargeter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INSTRUCTIONTARGETER
