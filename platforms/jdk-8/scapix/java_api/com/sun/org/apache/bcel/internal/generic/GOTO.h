// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/VariableLengthInstruction.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_GOTO_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_GOTO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::generic { class GOTO; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::generic::GOTO>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/generic/GOTO";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::bcel::internal::generic::GotoInstruction, scapix::java_api::com::sun::org::apache::bcel::internal::generic::VariableLengthInstruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_GOTO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_GOTO)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_GOTO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <scapix/java_api/java/io/DataOutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::generic::GOTO : public jni::object_base<"com/sun/org/apache/bcel/internal/generic/GOTO",
	com::sun::org::apache::bcel::internal::generic::GotoInstruction,
	com::sun::org::apache::bcel::internal::generic::VariableLengthInstruction>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::generic::GOTO> new_object(jni::ref<com::sun::org::apache::bcel::internal::generic::InstructionHandle> p1) { return base_::new_object(p1); }
	void accept(jni::ref<com::sun::org::apache::bcel::internal::generic::Visitor> p1) { return call_method<"accept", void>(p1); }
	void dump(jni::ref<java::io::DataOutputStream> p1) { return call_method<"dump", void>(p1); }

protected:

	GOTO(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_GOTO
