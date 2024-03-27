// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/xml/transform/sax/SAXSource.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_UTIL_JAXBSOURCE_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_UTIL_JAXBSOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind::util { class JAXBSource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::util::JAXBSource>
{
	static constexpr fixed_string class_name = "javax/xml/bind/util/JAXBSource";
	using base_classes = std::tuple<scapix::java_api::javax::xml::transform::sax::SAXSource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_UTIL_JAXBSOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_UTIL_JAXBSOURCE)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_UTIL_JAXBSOURCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/bind/JAXBContext.h>
#include <scapix/java_api/javax/xml/bind/Marshaller.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::bind::util::JAXBSource : public jni::object_base<"javax/xml/bind/util/JAXBSource",
	javax::xml::transform::sax::SAXSource>
{
public:

	static jni::ref<javax::xml::bind::util::JAXBSource> new_object(jni::ref<javax::xml::bind::JAXBContext> p1, jni::ref<java::lang::Object> p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::xml::bind::util::JAXBSource> new_object(jni::ref<javax::xml::bind::Marshaller> p1, jni::ref<java::lang::Object> p2) { return base_::new_object(p1, p2); }

protected:

	JAXBSource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_UTIL_JAXBSOURCE