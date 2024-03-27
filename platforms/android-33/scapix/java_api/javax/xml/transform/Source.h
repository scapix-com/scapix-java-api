// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_SOURCE_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_SOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::transform { class Source; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::transform::Source>
{
	static constexpr fixed_string class_name = "javax/xml/transform/Source";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_SOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_SOURCE)
#define SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_SOURCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::transform::Source : public jni::object_base<"javax/xml/transform/Source",
	java::lang::Object>
{
public:

	void setSystemId(jni::ref<java::lang::String> p1) { return call_method<"setSystemId", void>(p1); }
	jni::ref<java::lang::String> getSystemId() { return call_method<"getSystemId", jni::ref<java::lang::String>>(); }

protected:

	Source(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_SOURCE
