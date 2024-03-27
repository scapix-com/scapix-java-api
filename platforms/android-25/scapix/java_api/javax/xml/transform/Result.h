// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_RESULT_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_RESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::transform { class Result; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::transform::Result>
{
	static constexpr fixed_string class_name = "javax/xml/transform/Result";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_RESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_RESULT)
#define SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_RESULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::transform::Result : public jni::object_base<"javax/xml/transform/Result",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> PI_DISABLE_OUTPUT_ESCAPING() { return get_static_field<"PI_DISABLE_OUTPUT_ESCAPING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PI_ENABLE_OUTPUT_ESCAPING() { return get_static_field<"PI_ENABLE_OUTPUT_ESCAPING", jni::ref<java::lang::String>>(); }

	void setSystemId(jni::ref<java::lang::String> p1) { return call_method<"setSystemId", void>(p1); }
	jni::ref<java::lang::String> getSystemId() { return call_method<"getSystemId", jni::ref<java::lang::String>>(); }

protected:

	Result(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_RESULT
