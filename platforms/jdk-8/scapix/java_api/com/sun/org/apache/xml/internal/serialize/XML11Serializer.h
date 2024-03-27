// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xml/internal/serialize/XMLSerializer.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_XML11SERIALIZER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_XML11SERIALIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::serialize { class XML11Serializer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::serialize::XML11Serializer>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/serialize/XML11Serializer";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xml::internal::serialize::XMLSerializer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_XML11SERIALIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_XML11SERIALIZER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_XML11SERIALIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/serialize/OutputFormat.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/io/Writer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::serialize::XML11Serializer : public jni::object_base<"com/sun/org/apache/xml/internal/serialize/XML11Serializer",
	com::sun::org::apache::xml::internal::serialize::XMLSerializer>
{
public:

	static jni::ref<com::sun::org::apache::xml::internal::serialize::XML11Serializer> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xml::internal::serialize::XML11Serializer> new_object(jni::ref<com::sun::org::apache::xml::internal::serialize::OutputFormat> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xml::internal::serialize::XML11Serializer> new_object(jni::ref<java::io::Writer> p1, jni::ref<com::sun::org::apache::xml::internal::serialize::OutputFormat> p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::org::apache::xml::internal::serialize::XML11Serializer> new_object(jni::ref<java::io::OutputStream> p1, jni::ref<com::sun::org::apache::xml::internal::serialize::OutputFormat> p2) { return base_::new_object(p1, p2); }
	void characters(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"characters", void>(p1, p2, p3); }
	jboolean reset() { return call_method<"reset", jboolean>(); }

protected:

	XML11Serializer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_XML11SERIALIZER