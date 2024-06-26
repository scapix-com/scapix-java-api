// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_JAVAX_JWS_SOAP_SOAPBINDING_FWD
#define SCAPIX_JAVA_API_JAVAX_JWS_SOAP_SOAPBINDING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::jws::soap { class SOAPBinding; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::jws::soap::SOAPBinding>
{
	static constexpr fixed_string class_name = "javax/jws/soap/SOAPBinding";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_JWS_SOAP_SOAPBINDING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_JWS_SOAP_SOAPBINDING)
#define SCAPIX_JAVA_API_JAVAX_JWS_SOAP_SOAPBINDING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/jws/soap/SOAPBinding_ParameterStyle.h>
#include <scapix/java_api/javax/jws/soap/SOAPBinding_Style.h>
#include <scapix/java_api/javax/jws/soap/SOAPBinding_Use.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::jws::soap::SOAPBinding : public jni::object_base<"javax/jws/soap/SOAPBinding",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	using Style = SOAPBinding_Style;
	using Use = SOAPBinding_Use;
	using ParameterStyle = SOAPBinding_ParameterStyle;

	jni::ref<javax::jws::soap::SOAPBinding_Style> style() { return call_method<"style", jni::ref<javax::jws::soap::SOAPBinding_Style>>(); }
	jni::ref<javax::jws::soap::SOAPBinding_Use> use() { return call_method<"use", jni::ref<javax::jws::soap::SOAPBinding_Use>>(); }
	jni::ref<javax::jws::soap::SOAPBinding_ParameterStyle> parameterStyle() { return call_method<"parameterStyle", jni::ref<javax::jws::soap::SOAPBinding_ParameterStyle>>(); }

protected:

	SOAPBinding(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_JWS_SOAP_SOAPBINDING
