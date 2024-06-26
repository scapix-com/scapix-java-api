// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_DOMENTITYRESOLVERWRAPPER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_DOMENTITYRESOLVERWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::util { class DOMEntityResolverWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::util::DOMEntityResolverWrapper>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/util/DOMEntityResolverWrapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_DOMENTITYRESOLVERWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_DOMENTITYRESOLVERWRAPPER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_DOMENTITYRESOLVERWRAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <scapix/java_api/org/w3c/dom/ls/LSResourceResolver.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::util::DOMEntityResolverWrapper : public jni::object_base<"com/sun/org/apache/xerces/internal/util/DOMEntityResolverWrapper",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::util::DOMEntityResolverWrapper> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xerces::internal::util::DOMEntityResolverWrapper> new_object(jni::ref<org::w3c::dom::ls::LSResourceResolver> p1) { return base_::new_object(p1); }
	void setEntityResolver(jni::ref<org::w3c::dom::ls::LSResourceResolver> p1) { return call_method<"setEntityResolver", void>(p1); }
	jni::ref<org::w3c::dom::ls::LSResourceResolver> getEntityResolver() { return call_method<"getEntityResolver", jni::ref<org::w3c::dom::ls::LSResourceResolver>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource> resolveEntity(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier> p1) { return call_method<"resolveEntity", jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource>>(p1); }

protected:

	DOMEntityResolverWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_UTIL_DOMENTITYRESOLVERWRAPPER
