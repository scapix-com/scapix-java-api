// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/xml/ws/WebServiceFeature.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_WS_SOAP_MTOMFEATURE_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_WS_SOAP_MTOMFEATURE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::ws::soap { class MTOMFeature; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::ws::soap::MTOMFeature>
{
	static constexpr fixed_string class_name = "javax/xml/ws/soap/MTOMFeature";
	using base_classes = std::tuple<scapix::java_api::javax::xml::ws::WebServiceFeature>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_WS_SOAP_MTOMFEATURE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_WS_SOAP_MTOMFEATURE)
#define SCAPIX_JAVA_API_JAVAX_XML_WS_SOAP_MTOMFEATURE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::ws::soap::MTOMFeature : public jni::object_base<"javax/xml/ws/soap/MTOMFeature",
	javax::xml::ws::WebServiceFeature>
{
public:

	static jni::ref<java::lang::String> ID() { return get_static_field<"ID", jni::ref<java::lang::String>>(); }

	static jni::ref<javax::xml::ws::soap::MTOMFeature> new_object() { return base_::new_object(); }
	static jni::ref<javax::xml::ws::soap::MTOMFeature> new_object(jboolean p1) { return base_::new_object(p1); }
	static jni::ref<javax::xml::ws::soap::MTOMFeature> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<javax::xml::ws::soap::MTOMFeature> new_object(jboolean p1, jint p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> getID() { return call_method<"getID", jni::ref<java::lang::String>>(); }
	jint getThreshold() { return call_method<"getThreshold", jint>(); }

protected:

	MTOMFeature(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_WS_SOAP_MTOMFEATURE
