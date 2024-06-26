// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CLASSGENEXCEPTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CLASSGENEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::generic { class ClassGenException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::generic::ClassGenException>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/generic/ClassGenException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CLASSGENEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CLASSGENEXCEPTION)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CLASSGENEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::generic::ClassGenException : public jni::object_base<"com/sun/org/apache/bcel/internal/generic/ClassGenException",
	java::lang::RuntimeException>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::generic::ClassGenException> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ClassGenException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ClassGenException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Throwable> p2) { return base_::new_object(p1, p2); }

protected:

	ClassGenException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_CLASSGENEXCEPTION
