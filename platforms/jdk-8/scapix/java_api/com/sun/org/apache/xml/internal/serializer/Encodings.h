// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_ENCODINGS_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_ENCODINGS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::serializer { class Encodings; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::serializer::Encodings>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/serializer/Encodings";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_ENCODINGS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_ENCODINGS)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_ENCODINGS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::serializer::Encodings : public jni::object_base<"com/sun/org/apache/xml/internal/serializer/Encodings",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xml::internal::serializer::Encodings> new_object() { return base_::new_object(); }
	static jint getLastPrintable() { return call_static_method<"getLastPrintable", jint>(); }
	static jboolean isRecognizedEncoding(jni::ref<java::lang::String> p1) { return call_static_method<"isRecognizedEncoding", jboolean>(p1); }
	static jni::ref<java::lang::String> convertMime2JavaEncoding(jni::ref<java::lang::String> p1) { return call_static_method<"convertMime2JavaEncoding", jni::ref<java::lang::String>>(p1); }

protected:

	Encodings(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_ENCODINGS
