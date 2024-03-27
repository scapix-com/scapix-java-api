// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/PopInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_PUTFIELD_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_PUTFIELD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::generic { class PUTFIELD; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::generic::PUTFIELD>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/generic/PUTFIELD";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::bcel::internal::generic::FieldInstruction, scapix::java_api::com::sun::org::apache::bcel::internal::generic::PopInstruction, scapix::java_api::com::sun::org::apache::bcel::internal::generic::ExceptionThrower>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_PUTFIELD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_PUTFIELD)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_PUTFIELD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <scapix/java_api/java/lang/Class.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::generic::PUTFIELD : public jni::object_base<"com/sun/org/apache/bcel/internal/generic/PUTFIELD",
	com::sun::org::apache::bcel::internal::generic::FieldInstruction,
	com::sun::org::apache::bcel::internal::generic::PopInstruction,
	com::sun::org::apache::bcel::internal::generic::ExceptionThrower>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::generic::PUTFIELD> new_object(jint p1) { return base_::new_object(p1); }
	void accept(jni::ref<com::sun::org::apache::bcel::internal::generic::Visitor> p1) { return call_method<"accept", void>(p1); }
	jint consumeStack(jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen> p1) { return call_method<"consumeStack", jint>(p1); }
	jni::ref<jni::array<java::lang::Class>> getExceptions() { return call_method<"getExceptions", jni::ref<jni::array<java::lang::Class>>>(); }

protected:

	PUTFIELD(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_PUTFIELD
