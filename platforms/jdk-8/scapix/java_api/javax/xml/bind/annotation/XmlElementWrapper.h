// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_XMLELEMENTWRAPPER_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_XMLELEMENTWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind::annotation { class XmlElementWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::annotation::XmlElementWrapper>
{
	static constexpr fixed_string class_name = "javax/xml/bind/annotation/XmlElementWrapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_XMLELEMENTWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_XMLELEMENTWRAPPER)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_XMLELEMENTWRAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::bind::annotation::XmlElementWrapper : public jni::object_base<"javax/xml/bind/annotation/XmlElementWrapper",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> namespace_() { return call_method<"namespace", jni::ref<java::lang::String>>(); }
	jboolean nillable() { return call_method<"nillable", jboolean>(); }
	jboolean required() { return call_method<"required", jboolean>(); }

protected:

	XmlElementWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_XMLELEMENTWRAPPER
