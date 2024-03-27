// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/Writer.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/serializer/WriterChain.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_WRITERTOASCI_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_WRITERTOASCI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::serializer { class WriterToASCI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::serializer::WriterToASCI>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/serializer/WriterToASCI";
	using base_classes = std::tuple<scapix::java_api::java::io::Writer, scapix::java_api::com::sun::org::apache::xml::internal::serializer::WriterChain>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_WRITERTOASCI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_WRITERTOASCI)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_WRITERTOASCI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xml::internal::serializer::WriterToASCI : public jni::object_base<"com/sun/org/apache/xml/internal/serializer/WriterToASCI",
	java::io::Writer,
	com::sun::org::apache::xml::internal::serializer::WriterChain>
{
public:

	static jni::ref<com::sun::org::apache::xml::internal::serializer::WriterToASCI> new_object(jni::ref<java::io::OutputStream> p1) { return base_::new_object(p1); }
	void write(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"write", void>(p1, p2, p3); }
	void write(jint p1) { return call_method<"write", void>(p1); }
	void write(jni::ref<java::lang::String> p1) { return call_method<"write", void>(p1); }
	void flush() { return call_method<"flush", void>(); }
	void close() { return call_method<"close", void>(); }
	jni::ref<java::io::OutputStream> getOutputStream() { return call_method<"getOutputStream", jni::ref<java::io::OutputStream>>(); }
	jni::ref<java::io::Writer> getWriter() { return call_method<"getWriter", jni::ref<java::io::Writer>>(); }

protected:

	WriterToASCI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_WRITERTOASCI
