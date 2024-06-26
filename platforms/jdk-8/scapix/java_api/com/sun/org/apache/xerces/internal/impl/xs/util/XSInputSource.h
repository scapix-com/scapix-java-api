// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_UTIL_XSINPUTSOURCE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_UTIL_XSINPUTSOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::util { class XSInputSource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::util::XSInputSource>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/util/XSInputSource";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_UTIL_XSINPUTSOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_UTIL_XSINPUTSOURCE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_UTIL_XSINPUTSOURCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSObject.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xs::util::XSInputSource : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/util/XSInputSource",
	com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::util::XSInputSource> new_object(jni::ref<jni::array<com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::util::XSInputSource> new_object(jni::ref<jni::array<com::sun::org::apache::xerces::internal::xs::XSObject>> p1) { return base_::new_object(p1); }
	jni::ref<jni::array<com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>> getGrammars() { return call_method<"getGrammars", jni::ref<jni::array<com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>>>(); }
	void setGrammars(jni::ref<jni::array<com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>> p1) { return call_method<"setGrammars", void>(p1); }
	jni::ref<jni::array<com::sun::org::apache::xerces::internal::xs::XSObject>> getComponents() { return call_method<"getComponents", jni::ref<jni::array<com::sun::org::apache::xerces::internal::xs::XSObject>>>(); }
	void setComponents(jni::ref<jni::array<com::sun::org::apache::xerces::internal::xs::XSObject>> p1) { return call_method<"setComponents", void>(p1); }

protected:

	XSInputSource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_UTIL_XSINPUTSOURCE
