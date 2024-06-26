// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/utils/PrefixResolver.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_PREFIXRESOLVERDEFAULT_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_PREFIXRESOLVERDEFAULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::utils { class PrefixResolverDefault; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::utils::PrefixResolverDefault>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/utils/PrefixResolverDefault";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xml::internal::utils::PrefixResolver>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_PREFIXRESOLVERDEFAULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_PREFIXRESOLVERDEFAULT)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_PREFIXRESOLVERDEFAULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::utils::PrefixResolverDefault : public jni::object_base<"com/sun/org/apache/xml/internal/utils/PrefixResolverDefault",
	java::lang::Object,
	com::sun::org::apache::xml::internal::utils::PrefixResolver>
{
public:

	static jni::ref<com::sun::org::apache::xml::internal::utils::PrefixResolverDefault> new_object(jni::ref<org::w3c::dom::Node> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> getNamespaceForPrefix(jni::ref<java::lang::String> p1) { return call_method<"getNamespaceForPrefix", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getNamespaceForPrefix(jni::ref<java::lang::String> p1, jni::ref<org::w3c::dom::Node> p2) { return call_method<"getNamespaceForPrefix", jni::ref<java::lang::String>>(p1, p2); }
	jni::ref<java::lang::String> getBaseIdentifier() { return call_method<"getBaseIdentifier", jni::ref<java::lang::String>>(); }
	jboolean handlesNullPrefixes() { return call_method<"handlesNullPrefixes", jboolean>(); }

protected:

	PrefixResolverDefault(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_PREFIXRESOLVERDEFAULT
