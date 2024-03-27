// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_STAXSCHEMAPARSER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_STAXSCHEMAPARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::traversers { class StAXSchemaParser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::traversers::StAXSchemaParser>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/traversers/StAXSchemaParser";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_STAXSCHEMAPARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_STAXSCHEMAPARSER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_STAXSCHEMAPARSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOMParser.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <scapix/java_api/javax/xml/stream/XMLEventReader.h>
#include <scapix/java_api/javax/xml/stream/XMLStreamReader.h>
#include <scapix/java_api/org/w3c/dom/Document.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xerces::internal::impl::xs::traversers::StAXSchemaParser : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/traversers/StAXSchemaParser",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::traversers::StAXSchemaParser> new_object() { return base_::new_object(); }
	void reset(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOMParser> p1, jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> p2) { return call_method<"reset", void>(p1, p2); }
	jni::ref<org::w3c::dom::Document> getDocument() { return call_method<"getDocument", jni::ref<org::w3c::dom::Document>>(); }
	void parse(jni::ref<javax::xml::stream::XMLEventReader> p1) { return call_method<"parse", void>(p1); }
	void parse(jni::ref<javax::xml::stream::XMLStreamReader> p1) { return call_method<"parse", void>(p1); }

protected:

	StAXSchemaParser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_TRAVERSERS_STAXSCHEMAPARSER
