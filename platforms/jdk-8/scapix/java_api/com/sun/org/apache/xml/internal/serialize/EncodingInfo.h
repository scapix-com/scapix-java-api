// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_ENCODINGINFO_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_ENCODINGINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::serialize { class EncodingInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::serialize::EncodingInfo>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/serialize/EncodingInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_ENCODINGINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_ENCODINGINFO)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_ENCODINGINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/io/Writer.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::serialize::EncodingInfo : public jni::object_base<"com/sun/org/apache/xml/internal/serialize/EncodingInfo",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xml::internal::serialize::EncodingInfo> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jint p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<java::lang::String> getIANAName() { return call_method<"getIANAName", jni::ref<java::lang::String>>(); }
	jni::ref<java::io::Writer> getWriter(jni::ref<java::io::OutputStream> p1) { return call_method<"getWriter", jni::ref<java::io::Writer>>(p1); }
	jboolean isPrintable(jchar p1) { return call_method<"isPrintable", jboolean>(p1); }
	static void testJavaEncodingName(jni::ref<java::lang::String> p1) { return call_static_method<"testJavaEncodingName", void>(p1); }

protected:

	EncodingInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_ENCODINGINFO
