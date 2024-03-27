// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INVOKESPECIAL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INVOKESPECIAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::generic { class INVOKESPECIAL; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::bcel::internal::generic::InvokeInstruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INVOKESPECIAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INVOKESPECIAL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INVOKESPECIAL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <scapix/java_api/java/io/DataOutputStream.h>
#include <scapix/java_api/java/lang/Class.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL : public jni::object_base<"com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL",
	com::sun::org::apache::bcel::internal::generic::InvokeInstruction>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL> new_object(jint p1) { return base_::new_object(p1); }
	void accept(jni::ref<com::sun::org::apache::bcel::internal::generic::Visitor> p1) { return call_method<"accept", void>(p1); }
	void dump(jni::ref<java::io::DataOutputStream> p1) { return call_method<"dump", void>(p1); }
	jni::ref<jni::array<java::lang::Class>> getExceptions() { return call_method<"getExceptions", jni::ref<jni::array<java::lang::Class>>>(); }

protected:

	INVOKESPECIAL(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INVOKESPECIAL