// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/xml/transform/sax/SAXResult.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_UTIL_JAXBRESULT_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_UTIL_JAXBRESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind::util { class JAXBResult; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::util::JAXBResult>
{
	static constexpr fixed_string class_name = "javax/xml/bind/util/JAXBResult";
	using base_classes = std::tuple<scapix::java_api::javax::xml::transform::sax::SAXResult>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_UTIL_JAXBRESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_UTIL_JAXBRESULT)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_UTIL_JAXBRESULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/bind/JAXBContext.h>
#include <scapix/java_api/javax/xml/bind/Unmarshaller.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::bind::util::JAXBResult : public jni::object_base<"javax/xml/bind/util/JAXBResult",
	javax::xml::transform::sax::SAXResult>
{
public:

	static jni::ref<javax::xml::bind::util::JAXBResult> new_object(jni::ref<javax::xml::bind::JAXBContext> p1) { return base_::new_object(p1); }
	static jni::ref<javax::xml::bind::util::JAXBResult> new_object(jni::ref<javax::xml::bind::Unmarshaller> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::Object> getResult() { return call_method<"getResult", jni::ref<java::lang::Object>>(); }

protected:

	JAXBResult(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_UTIL_JAXBRESULT