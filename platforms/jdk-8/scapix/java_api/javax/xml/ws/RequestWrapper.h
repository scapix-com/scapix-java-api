// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_WS_REQUESTWRAPPER_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_WS_REQUESTWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::ws { class RequestWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::ws::RequestWrapper>
{
	static constexpr fixed_string class_name = "javax/xml/ws/RequestWrapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_WS_REQUESTWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_WS_REQUESTWRAPPER)
#define SCAPIX_JAVA_API_JAVAX_XML_WS_REQUESTWRAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::ws::RequestWrapper : public jni::object_base<"javax/xml/ws/RequestWrapper",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	jni::ref<java::lang::String> localName() { return call_method<"localName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> targetNamespace() { return call_method<"targetNamespace", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> className() { return call_method<"className", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> partName() { return call_method<"partName", jni::ref<java::lang::String>>(); }

protected:

	RequestWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_WS_REQUESTWRAPPER
