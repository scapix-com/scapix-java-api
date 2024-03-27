// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_SERIALIZERTRACE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_SERIALIZERTRACE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::serializer { class SerializerTrace; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::serializer::SerializerTrace>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/serializer/SerializerTrace";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_SERIALIZERTRACE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_SERIALIZERTRACE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_SERIALIZERTRACE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xml/sax/Attributes.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::serializer::SerializerTrace : public jni::object_base<"com/sun/org/apache/xml/internal/serializer/SerializerTrace",
	java::lang::Object>
{
public:

	static jint EVENTTYPE_STARTDOCUMENT() { return get_static_field<"EVENTTYPE_STARTDOCUMENT", jint>(); }
	static jint EVENTTYPE_ENDDOCUMENT() { return get_static_field<"EVENTTYPE_ENDDOCUMENT", jint>(); }
	static jint EVENTTYPE_STARTELEMENT() { return get_static_field<"EVENTTYPE_STARTELEMENT", jint>(); }
	static jint EVENTTYPE_ENDELEMENT() { return get_static_field<"EVENTTYPE_ENDELEMENT", jint>(); }
	static jint EVENTTYPE_CHARACTERS() { return get_static_field<"EVENTTYPE_CHARACTERS", jint>(); }
	static jint EVENTTYPE_IGNORABLEWHITESPACE() { return get_static_field<"EVENTTYPE_IGNORABLEWHITESPACE", jint>(); }
	static jint EVENTTYPE_PI() { return get_static_field<"EVENTTYPE_PI", jint>(); }
	static jint EVENTTYPE_COMMENT() { return get_static_field<"EVENTTYPE_COMMENT", jint>(); }
	static jint EVENTTYPE_ENTITYREF() { return get_static_field<"EVENTTYPE_ENTITYREF", jint>(); }
	static jint EVENTTYPE_CDATA() { return get_static_field<"EVENTTYPE_CDATA", jint>(); }
	static jint EVENTTYPE_OUTPUT_PSEUDO_CHARACTERS() { return get_static_field<"EVENTTYPE_OUTPUT_PSEUDO_CHARACTERS", jint>(); }
	static jint EVENTTYPE_OUTPUT_CHARACTERS() { return get_static_field<"EVENTTYPE_OUTPUT_CHARACTERS", jint>(); }

	jboolean hasTraceListeners() { return call_method<"hasTraceListeners", jboolean>(); }
	void fireGenerateEvent(jint p1) { return call_method<"fireGenerateEvent", void>(p1); }
	void fireGenerateEvent(jint p1, jni::ref<java::lang::String> p2, jni::ref<org::xml::sax::Attributes> p3) { return call_method<"fireGenerateEvent", void>(p1, p2, p3); }
	void fireGenerateEvent(jint p1, jni::ref<jni::array<jchar>> p2, jint p3, jint p4) { return call_method<"fireGenerateEvent", void>(p1, p2, p3, p4); }
	void fireGenerateEvent(jint p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"fireGenerateEvent", void>(p1, p2, p3); }
	void fireGenerateEvent(jint p1, jni::ref<java::lang::String> p2) { return call_method<"fireGenerateEvent", void>(p1, p2); }

protected:

	SerializerTrace(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_SERIALIZERTRACE
