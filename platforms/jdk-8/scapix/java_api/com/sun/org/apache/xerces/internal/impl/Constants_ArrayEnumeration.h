// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Enumeration.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_CONSTANTS_ARRAYENUMERATION_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_CONSTANTS_ARRAYENUMERATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl { class Constants_ArrayEnumeration; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::Constants_ArrayEnumeration>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/Constants$ArrayEnumeration";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Enumeration>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_CONSTANTS_ARRAYENUMERATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_CONSTANTS_ARRAYENUMERATION)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_CONSTANTS_ARRAYENUMERATION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xerces::internal::impl::Constants_ArrayEnumeration : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/Constants$ArrayEnumeration",
	java::lang::Object,
	java::util::Enumeration>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::Constants_ArrayEnumeration> new_object(jni::ref<jni::array<java::lang::Object>> p1) { return base_::new_object(p1); }
	jboolean hasMoreElements() { return call_method<"hasMoreElements", jboolean>(); }
	jni::ref<java::lang::Object> nextElement() { return call_method<"nextElement", jni::ref<java::lang::Object>>(); }

protected:

	Constants_ArrayEnumeration(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_CONSTANTS_ARRAYENUMERATION
