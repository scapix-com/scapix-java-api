// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/PushInstruction.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_LOADINSTRUCTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_LOADINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::generic { class LoadInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::generic::LoadInstruction>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/generic/LoadInstruction";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction, scapix::java_api::com::sun::org::apache::bcel::internal::generic::PushInstruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_LOADINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_LOADINSTRUCTION)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_LOADINSTRUCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/Visitor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::generic::LoadInstruction : public jni::object_base<"com/sun/org/apache/bcel/internal/generic/LoadInstruction",
	com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction,
	com::sun::org::apache::bcel::internal::generic::PushInstruction>
{
public:

	void accept(jni::ref<com::sun::org::apache::bcel::internal::generic::Visitor> p1) { return call_method<"accept", void>(p1); }

protected:

	LoadInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_LOADINSTRUCTION
