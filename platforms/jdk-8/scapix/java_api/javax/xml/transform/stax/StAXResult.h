// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/transform/Result.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_STAX_STAXRESULT_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_STAX_STAXRESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::transform::stax { class StAXResult; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::transform::stax::StAXResult>
{
	static constexpr fixed_string class_name = "javax/xml/transform/stax/StAXResult";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::transform::Result>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_STAX_STAXRESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_STAX_STAXRESULT)
#define SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_STAX_STAXRESULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/stream/XMLEventWriter.h>
#include <scapix/java_api/javax/xml/stream/XMLStreamWriter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::transform::stax::StAXResult : public jni::object_base<"javax/xml/transform/stax/StAXResult",
	java::lang::Object,
	javax::xml::transform::Result>
{
public:

	static jni::ref<java::lang::String> FEATURE() { return get_static_field<"FEATURE", jni::ref<java::lang::String>>(); }

	static jni::ref<javax::xml::transform::stax::StAXResult> new_object(jni::ref<javax::xml::stream::XMLEventWriter> p1) { return base_::new_object(p1); }
	static jni::ref<javax::xml::transform::stax::StAXResult> new_object(jni::ref<javax::xml::stream::XMLStreamWriter> p1) { return base_::new_object(p1); }
	jni::ref<javax::xml::stream::XMLEventWriter> getXMLEventWriter() { return call_method<"getXMLEventWriter", jni::ref<javax::xml::stream::XMLEventWriter>>(); }
	jni::ref<javax::xml::stream::XMLStreamWriter> getXMLStreamWriter() { return call_method<"getXMLStreamWriter", jni::ref<javax::xml::stream::XMLStreamWriter>>(); }
	void setSystemId(jni::ref<java::lang::String> p1) { return call_method<"setSystemId", void>(p1); }
	jni::ref<java::lang::String> getSystemId() { return call_method<"getSystemId", jni::ref<java::lang::String>>(); }

protected:

	StAXResult(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_STAX_STAXRESULT