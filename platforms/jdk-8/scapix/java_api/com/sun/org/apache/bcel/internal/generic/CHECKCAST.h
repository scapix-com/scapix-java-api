// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/LoadClass.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/StackConsumer.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CHECKCAST_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CHECKCAST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::generic { class CHECKCAST; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::generic::CHECKCAST>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/generic/CHECKCAST";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::bcel::internal::generic::CPInstruction, scapix::java_api::com::sun::org::apache::bcel::internal::generic::LoadClass, scapix::java_api::com::sun::org::apache::bcel::internal::generic::ExceptionThrower, scapix::java_api::com::sun::org::apache::bcel::internal::generic::StackProducer, scapix::java_api::com::sun::org::apache::bcel::internal::generic::StackConsumer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CHECKCAST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CHECKCAST)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CHECKCAST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <scapix/java_api/java/lang/Class.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::generic::CHECKCAST : public jni::object_base<"com/sun/org/apache/bcel/internal/generic/CHECKCAST",
	com::sun::org::apache::bcel::internal::generic::CPInstruction,
	com::sun::org::apache::bcel::internal::generic::LoadClass,
	com::sun::org::apache::bcel::internal::generic::ExceptionThrower,
	com::sun::org::apache::bcel::internal::generic::StackProducer,
	com::sun::org::apache::bcel::internal::generic::StackConsumer>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::generic::CHECKCAST> new_object(jint p1) { return base_::new_object(p1); }
	void accept(jni::ref<com::sun::org::apache::bcel::internal::generic::Visitor> p1) { return call_method<"accept", void>(p1); }
	jni::ref<jni::array<java::lang::Class>> getExceptions() { return call_method<"getExceptions", jni::ref<jni::array<java::lang::Class>>>(); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::ObjectType> getLoadClassType(jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen> p1) { return call_method<"getLoadClassType", jni::ref<com::sun::org::apache::bcel::internal::generic::ObjectType>>(p1); }

protected:

	CHECKCAST(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CHECKCAST
