// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_NAMESPACEMAPPINGS_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_NAMESPACEMAPPINGS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::serializer { class NamespaceMappings; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::serializer::NamespaceMappings>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/serializer/NamespaceMappings";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_NAMESPACEMAPPINGS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_NAMESPACEMAPPINGS)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_NAMESPACEMAPPINGS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::serializer::NamespaceMappings : public jni::object_base<"com/sun/org/apache/xml/internal/serializer/NamespaceMappings",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xml::internal::serializer::NamespaceMappings> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> lookupNamespace(jni::ref<java::lang::String> p1) { return call_method<"lookupNamespace", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> lookupPrefix(jni::ref<java::lang::String> p1) { return call_method<"lookupPrefix", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> generateNextPrefix() { return call_method<"generateNextPrefix", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	NamespaceMappings(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_NAMESPACEMAPPINGS
