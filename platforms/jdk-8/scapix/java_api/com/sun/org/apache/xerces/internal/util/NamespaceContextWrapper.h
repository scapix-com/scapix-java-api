// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/namespace/NamespaceContext.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_NAMESPACECONTEXTWRAPPER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_NAMESPACECONTEXTWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::util { class NamespaceContextWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::util::NamespaceContextWrapper>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/util/NamespaceContextWrapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::namespace_::NamespaceContext>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_NAMESPACECONTEXTWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_NAMESPACECONTEXTWRAPPER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_NAMESPACECONTEXTWRAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::util::NamespaceContextWrapper : public jni::object_base<"com/sun/org/apache/xerces/internal/util/NamespaceContextWrapper",
	java::lang::Object,
	javax::xml::namespace_::NamespaceContext>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::util::NamespaceContextWrapper> new_object(jni::ref<com::sun::org::apache::xerces::internal::util::NamespaceSupport> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> getNamespaceURI(jni::ref<java::lang::String> p1) { return call_method<"getNamespaceURI", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getPrefix(jni::ref<java::lang::String> p1) { return call_method<"getPrefix", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::util::Iterator> getPrefixes(jni::ref<java::lang::String> p1) { return call_method<"getPrefixes", jni::ref<java::util::Iterator>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::NamespaceContext> getNamespaceContext() { return call_method<"getNamespaceContext", jni::ref<com::sun::org::apache::xerces::internal::xni::NamespaceContext>>(); }

protected:

	NamespaceContextWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_NAMESPACECONTEXTWRAPPER
