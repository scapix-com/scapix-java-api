// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/Type.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_RETURNADDRESSTYPE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_RETURNADDRESSTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::generic { class ReturnaddressType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::generic::ReturnaddressType>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/generic/ReturnaddressType";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::bcel::internal::generic::Type>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_RETURNADDRESSTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_RETURNADDRESSTYPE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_RETURNADDRESSTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::generic::ReturnaddressType : public jni::object_base<"com/sun/org/apache/bcel/internal/generic/ReturnaddressType",
	com::sun::org::apache::bcel::internal::generic::Type>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::generic::ReturnaddressType> NO_TARGET() { return get_static_field<"NO_TARGET", jni::ref<com::sun::org::apache::bcel::internal::generic::ReturnaddressType>>(); }

	static jni::ref<com::sun::org::apache::bcel::internal::generic::ReturnaddressType> new_object(jni::ref<com::sun::org::apache::bcel::internal::generic::InstructionHandle> p1) { return base_::new_object(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::InstructionHandle> getTarget() { return call_method<"getTarget", jni::ref<com::sun::org::apache::bcel::internal::generic::InstructionHandle>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	ReturnaddressType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_RETURNADDRESSTYPE
