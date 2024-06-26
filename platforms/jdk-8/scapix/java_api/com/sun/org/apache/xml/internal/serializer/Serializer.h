// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_SERIALIZER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_SERIALIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::serializer { class Serializer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::serializer::Serializer>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/serializer/Serializer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_SERIALIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_SERIALIZER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_SERIALIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/serializer/DOMSerializer.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/io/Writer.h>
#include <scapix/java_api/java/util/Properties.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::serializer::Serializer : public jni::object_base<"com/sun/org/apache/xml/internal/serializer/Serializer",
	java::lang::Object>
{
public:

	void setOutputStream(jni::ref<java::io::OutputStream> p1) { return call_method<"setOutputStream", void>(p1); }
	jni::ref<java::io::OutputStream> getOutputStream() { return call_method<"getOutputStream", jni::ref<java::io::OutputStream>>(); }
	void setWriter(jni::ref<java::io::Writer> p1) { return call_method<"setWriter", void>(p1); }
	jni::ref<java::io::Writer> getWriter() { return call_method<"getWriter", jni::ref<java::io::Writer>>(); }
	void setOutputFormat(jni::ref<java::util::Properties> p1) { return call_method<"setOutputFormat", void>(p1); }
	jni::ref<java::util::Properties> getOutputFormat() { return call_method<"getOutputFormat", jni::ref<java::util::Properties>>(); }
	jni::ref<org::xml::sax::ContentHandler> asContentHandler() { return call_method<"asContentHandler", jni::ref<org::xml::sax::ContentHandler>>(); }
	jni::ref<com::sun::org::apache::xml::internal::serializer::DOMSerializer> asDOMSerializer() { return call_method<"asDOMSerializer", jni::ref<com::sun::org::apache::xml::internal::serializer::DOMSerializer>>(); }
	jboolean reset() { return call_method<"reset", jboolean>(); }
	jni::ref<java::lang::Object> asDOM3Serializer() { return call_method<"asDOM3Serializer", jni::ref<java::lang::Object>>(); }

protected:

	Serializer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_SERIALIZER
