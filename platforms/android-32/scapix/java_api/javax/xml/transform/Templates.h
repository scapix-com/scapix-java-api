// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_TEMPLATES_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_TEMPLATES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::transform { class Templates; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::transform::Templates>
{
	static constexpr fixed_string class_name = "javax/xml/transform/Templates";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_TEMPLATES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_TEMPLATES)
#define SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_TEMPLATES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Properties.h>
#include <scapix/java_api/javax/xml/transform/Transformer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::transform::Templates : public jni::object_base<"javax/xml/transform/Templates",
	java::lang::Object>
{
public:

	jni::ref<javax::xml::transform::Transformer> newTransformer() { return call_method<"newTransformer", jni::ref<javax::xml::transform::Transformer>>(); }
	jni::ref<java::util::Properties> getOutputProperties() { return call_method<"getOutputProperties", jni::ref<java::util::Properties>>(); }

protected:

	Templates(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_TEMPLATES