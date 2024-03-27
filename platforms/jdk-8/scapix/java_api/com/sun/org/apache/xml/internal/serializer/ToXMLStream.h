// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xml/internal/serializer/ToStream.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_TOXMLSTREAM_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_TOXMLSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::serializer { class ToXMLStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::serializer::ToXMLStream>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/serializer/ToXMLStream";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xml::internal::serializer::ToStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_TOXMLSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_TOXMLSTREAM)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_TOXMLSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::serializer::ToXMLStream : public jni::object_base<"com/sun/org/apache/xml/internal/serializer/ToXMLStream",
	com::sun::org::apache::xml::internal::serializer::ToStream>
{
public:

	static jni::ref<com::sun::org::apache::xml::internal::serializer::ToXMLStream> new_object() { return base_::new_object(); }
	void CopyFrom(jni::ref<com::sun::org::apache::xml::internal::serializer::ToXMLStream> p1) { return call_method<"CopyFrom", void>(p1); }
	void startDocumentInternal() { return call_method<"startDocumentInternal", void>(); }
	void endDocument() { return call_method<"endDocument", void>(); }
	void startPreserving() { return call_method<"startPreserving", void>(); }
	void endPreserving() { return call_method<"endPreserving", void>(); }
	void processingInstruction(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"processingInstruction", void>(p1, p2); }
	void entityReference(jni::ref<java::lang::String> p1) { return call_method<"entityReference", void>(p1); }
	void addUniqueAttribute(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jint p3) { return call_method<"addUniqueAttribute", void>(p1, p2, p3); }
	void addAttribute(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4, jni::ref<java::lang::String> p5, jboolean p6) { return call_method<"addAttribute", void>(p1, p2, p3, p4, p5, p6); }
	void endElement(jni::ref<java::lang::String> p1) { return call_method<"endElement", void>(p1); }
	void namespaceAfterStartElement(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"namespaceAfterStartElement", void>(p1, p2); }
	jboolean reset() { return call_method<"reset", jboolean>(); }

protected:

	ToXMLStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_TOXMLSTREAM