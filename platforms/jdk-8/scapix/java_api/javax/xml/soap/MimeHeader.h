// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_SOAP_MIMEHEADER_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_SOAP_MIMEHEADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::soap { class MimeHeader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::soap::MimeHeader>
{
	static constexpr fixed_string class_name = "javax/xml/soap/MimeHeader";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_SOAP_MIMEHEADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_SOAP_MIMEHEADER)
#define SCAPIX_JAVA_API_JAVAX_XML_SOAP_MIMEHEADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::soap::MimeHeader : public jni::object_base<"javax/xml/soap/MimeHeader",
	java::lang::Object>
{
public:

	static jni::ref<javax::xml::soap::MimeHeader> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getValue() { return call_method<"getValue", jni::ref<java::lang::String>>(); }

protected:

	MimeHeader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_SOAP_MIMEHEADER
