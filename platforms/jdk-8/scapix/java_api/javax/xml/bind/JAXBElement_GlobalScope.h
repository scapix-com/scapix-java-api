// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBELEMENT_GLOBALSCOPE_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBELEMENT_GLOBALSCOPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind { class JAXBElement_GlobalScope; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::JAXBElement_GlobalScope>
{
	static constexpr fixed_string class_name = "javax/xml/bind/JAXBElement$GlobalScope";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBELEMENT_GLOBALSCOPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBELEMENT_GLOBALSCOPE)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBELEMENT_GLOBALSCOPE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::bind::JAXBElement_GlobalScope : public jni::object_base<"javax/xml/bind/JAXBElement$GlobalScope",
	java::lang::Object>
{
public:

	static jni::ref<javax::xml::bind::JAXBElement_GlobalScope> new_object() { return base_::new_object(); }

protected:

	JAXBElement_GlobalScope(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBELEMENT_GLOBALSCOPE
