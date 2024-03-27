// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_JAXPCONSTANTS_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_JAXPCONSTANTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::jaxp { class JAXPConstants; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::jaxp::JAXPConstants>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/jaxp/JAXPConstants";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_JAXPCONSTANTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_JAXPCONSTANTS)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_JAXPCONSTANTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::jaxp::JAXPConstants : public jni::object_base<"com/sun/org/apache/xerces/internal/jaxp/JAXPConstants",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> JAXP_SCHEMA_LANGUAGE() { return get_static_field<"JAXP_SCHEMA_LANGUAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> W3C_XML_SCHEMA() { return get_static_field<"W3C_XML_SCHEMA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JAXP_SCHEMA_SOURCE() { return get_static_field<"JAXP_SCHEMA_SOURCE", jni::ref<java::lang::String>>(); }


protected:

	JAXPConstants(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_JAXPCONSTANTS