// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBINTROSPECTOR_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBINTROSPECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind { class JAXBIntrospector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::JAXBIntrospector>
{
	static constexpr fixed_string class_name = "javax/xml/bind/JAXBIntrospector";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBINTROSPECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBINTROSPECTOR)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBINTROSPECTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/xml/namespace/QName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::bind::JAXBIntrospector : public jni::object_base<"javax/xml/bind/JAXBIntrospector",
	java::lang::Object>
{
public:

	static jni::ref<javax::xml::bind::JAXBIntrospector> new_object() { return base_::new_object(); }
	jboolean isElement(jni::ref<java::lang::Object> p1) { return call_method<"isElement", jboolean>(p1); }
	jni::ref<javax::xml::namespace_::QName> getElementName(jni::ref<java::lang::Object> p1) { return call_method<"getElementName", jni::ref<javax::xml::namespace_::QName>>(p1); }
	static jni::ref<java::lang::Object> getValue(jni::ref<java::lang::Object> p1) { return call_static_method<"getValue", jni::ref<java::lang::Object>>(p1); }

protected:

	JAXBIntrospector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBINTROSPECTOR
