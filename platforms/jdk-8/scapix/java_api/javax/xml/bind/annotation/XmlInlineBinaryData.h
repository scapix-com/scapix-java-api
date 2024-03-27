// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_XMLINLINEBINARYDATA_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_XMLINLINEBINARYDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind::annotation { class XmlInlineBinaryData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::annotation::XmlInlineBinaryData>
{
	static constexpr fixed_string class_name = "javax/xml/bind/annotation/XmlInlineBinaryData";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_XMLINLINEBINARYDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_XMLINLINEBINARYDATA)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_XMLINLINEBINARYDATA

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::bind::annotation::XmlInlineBinaryData : public jni::object_base<"javax/xml/bind/annotation/XmlInlineBinaryData",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:


protected:

	XmlInlineBinaryData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_XMLINLINEBINARYDATA
