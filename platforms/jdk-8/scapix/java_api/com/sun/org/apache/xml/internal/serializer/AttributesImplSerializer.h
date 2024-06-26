// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/xml/sax/helpers/AttributesImpl.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_ATTRIBUTESIMPLSERIALIZER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_ATTRIBUTESIMPLSERIALIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::serializer { class AttributesImplSerializer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::serializer::AttributesImplSerializer>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/serializer/AttributesImplSerializer";
	using base_classes = std::tuple<scapix::java_api::org::xml::sax::helpers::AttributesImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_ATTRIBUTESIMPLSERIALIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_ATTRIBUTESIMPLSERIALIZER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_ATTRIBUTESIMPLSERIALIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xml/sax/Attributes.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::serializer::AttributesImplSerializer : public jni::object_base<"com/sun/org/apache/xml/internal/serializer/AttributesImplSerializer",
	org::xml::sax::helpers::AttributesImpl>
{
public:

	static jni::ref<com::sun::org::apache::xml::internal::serializer::AttributesImplSerializer> new_object() { return base_::new_object(); }
	jint getIndex(jni::ref<java::lang::String> p1) { return call_method<"getIndex", jint>(p1); }
	void addAttribute(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4, jni::ref<java::lang::String> p5) { return call_method<"addAttribute", void>(p1, p2, p3, p4, p5); }
	void clear() { return call_method<"clear", void>(); }
	void setAttributes(jni::ref<org::xml::sax::Attributes> p1) { return call_method<"setAttributes", void>(p1); }
	jint getIndex(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getIndex", jint>(p1, p2); }

protected:

	AttributesImplSerializer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_ATTRIBUTESIMPLSERIALIZER
