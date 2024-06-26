// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_DOM3SERIALIZER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_DOM3SERIALIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::serializer { class DOM3Serializer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::serializer::DOM3Serializer>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/serializer/DOM3Serializer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_DOM3SERIALIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_DOM3SERIALIZER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_DOM3SERIALIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/DOMErrorHandler.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#include <scapix/java_api/org/w3c/dom/ls/LSSerializerFilter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::serializer::DOM3Serializer : public jni::object_base<"com/sun/org/apache/xml/internal/serializer/DOM3Serializer",
	java::lang::Object>
{
public:

	void serializeDOM3(jni::ref<org::w3c::dom::Node> p1) { return call_method<"serializeDOM3", void>(p1); }
	void setErrorHandler(jni::ref<org::w3c::dom::DOMErrorHandler> p1) { return call_method<"setErrorHandler", void>(p1); }
	jni::ref<org::w3c::dom::DOMErrorHandler> getErrorHandler() { return call_method<"getErrorHandler", jni::ref<org::w3c::dom::DOMErrorHandler>>(); }
	void setNodeFilter(jni::ref<org::w3c::dom::ls::LSSerializerFilter> p1) { return call_method<"setNodeFilter", void>(p1); }
	jni::ref<org::w3c::dom::ls::LSSerializerFilter> getNodeFilter() { return call_method<"getNodeFilter", jni::ref<org::w3c::dom::ls::LSSerializerFilter>>(); }
	void setNewLine(jni::ref<java::lang::String> p1) { return call_method<"setNewLine", void>(p1); }

protected:

	DOM3Serializer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_DOM3SERIALIZER
