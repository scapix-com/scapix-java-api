// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_JAXPNAMESPACECONTEXTWRAPPER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_JAXPNAMESPACECONTEXTWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::util { class JAXPNamespaceContextWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::util::JAXPNamespaceContextWrapper>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/util/JAXPNamespaceContextWrapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::xni::NamespaceContext>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_JAXPNAMESPACECONTEXTWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_JAXPNAMESPACECONTEXTWRAPPER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_JAXPNAMESPACECONTEXTWRAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/javax/xml/namespace/NamespaceContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::util::JAXPNamespaceContextWrapper : public jni::object_base<"com/sun/org/apache/xerces/internal/util/JAXPNamespaceContextWrapper",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::xni::NamespaceContext>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::util::JAXPNamespaceContextWrapper> new_object(jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> p1) { return base_::new_object(p1); }
	void setNamespaceContext(jni::ref<javax::xml::namespace_::NamespaceContext> p1) { return call_method<"setNamespaceContext", void>(p1); }
	jni::ref<javax::xml::namespace_::NamespaceContext> getNamespaceContext() { return call_method<"getNamespaceContext", jni::ref<javax::xml::namespace_::NamespaceContext>>(); }
	void setSymbolTable(jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> p1) { return call_method<"setSymbolTable", void>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> getSymbolTable() { return call_method<"getSymbolTable", jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable>>(); }
	void setDeclaredPrefixes(jni::ref<java::util::List> p1) { return call_method<"setDeclaredPrefixes", void>(p1); }
	jni::ref<java::util::List> getDeclaredPrefixes() { return call_method<"getDeclaredPrefixes", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::String> getURI(jni::ref<java::lang::String> p1) { return call_method<"getURI", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getPrefix(jni::ref<java::lang::String> p1) { return call_method<"getPrefix", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::util::Enumeration> getAllPrefixes() { return call_method<"getAllPrefixes", jni::ref<java::util::Enumeration>>(); }
	void pushContext() { return call_method<"pushContext", void>(); }
	void popContext() { return call_method<"popContext", void>(); }
	jboolean declarePrefix(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"declarePrefix", jboolean>(p1, p2); }
	jint getDeclaredPrefixCount() { return call_method<"getDeclaredPrefixCount", jint>(); }
	jni::ref<java::lang::String> getDeclaredPrefixAt(jint p1) { return call_method<"getDeclaredPrefixAt", jni::ref<java::lang::String>>(p1); }
	void reset() { return call_method<"reset", void>(); }

protected:

	JAXPNamespaceContextWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_JAXPNAMESPACECONTEXTWRAPPER
