// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/StackProducer.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_IALOAD_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_IALOAD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::generic { class IALOAD; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::generic::IALOAD>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/generic/IALOAD";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::bcel::internal::generic::ArrayInstruction, scapix::java_api::com::sun::org::apache::bcel::internal::generic::StackProducer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_IALOAD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_IALOAD)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_IALOAD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/Visitor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::generic::IALOAD : public jni::object_base<"com/sun/org/apache/bcel/internal/generic/IALOAD",
	com::sun::org::apache::bcel::internal::generic::ArrayInstruction,
	com::sun::org::apache::bcel::internal::generic::StackProducer>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::generic::IALOAD> new_object() { return base_::new_object(); }
	void accept(jni::ref<com::sun::org::apache::bcel::internal::generic::Visitor> p1) { return call_method<"accept", void>(p1); }

protected:

	IALOAD(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_IALOAD
