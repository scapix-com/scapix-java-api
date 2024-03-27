// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_XPATH_AXIS_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_XPATH_AXIS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xpath { class XPath_Axis; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xpath::XPath_Axis>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xpath/XPath$Axis";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_XPATH_AXIS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_XPATH_AXIS)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_XPATH_AXIS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xpath::XPath_Axis : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xpath/XPath$Axis",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	static jshort CHILD() { return get_static_field<"CHILD", jshort>(); }
	static jshort ATTRIBUTE() { return get_static_field<"ATTRIBUTE", jshort>(); }
	static jshort SELF() { return get_static_field<"SELF", jshort>(); }
	static jshort DESCENDANT() { return get_static_field<"DESCENDANT", jshort>(); }
	jshort type() { return get_field<"type", jshort>(); }

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xpath::XPath_Axis> new_object(jshort p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	XPath_Axis(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_XPATH_AXIS