// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_DOMSERIALIZER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_DOMSERIALIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::serialize { class DOMSerializer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::serialize::DOMSerializer>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/serialize/DOMSerializer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_DOMSERIALIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_DOMSERIALIZER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_DOMSERIALIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/w3c/dom/Document.h>
#include <scapix/java_api/org/w3c/dom/DocumentFragment.h>
#include <scapix/java_api/org/w3c/dom/Element.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::serialize::DOMSerializer : public jni::object_base<"com/sun/org/apache/xml/internal/serialize/DOMSerializer",
	java::lang::Object>
{
public:

	void serialize(jni::ref<org::w3c::dom::Element> p1) { return call_method<"serialize", void>(p1); }
	void serialize(jni::ref<org::w3c::dom::Document> p1) { return call_method<"serialize", void>(p1); }
	void serialize(jni::ref<org::w3c::dom::DocumentFragment> p1) { return call_method<"serialize", void>(p1); }

protected:

	DOMSerializer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_DOMSERIALIZER
