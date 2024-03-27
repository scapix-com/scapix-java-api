// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_OUTPUTFORMAT_DEFAULTS_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_OUTPUTFORMAT_DEFAULTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::serialize { class OutputFormat_Defaults; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::serialize::OutputFormat_Defaults>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/serialize/OutputFormat$Defaults";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_OUTPUTFORMAT_DEFAULTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_OUTPUTFORMAT_DEFAULTS)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_OUTPUTFORMAT_DEFAULTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::serialize::OutputFormat_Defaults : public jni::object_base<"com/sun/org/apache/xml/internal/serialize/OutputFormat$Defaults",
	java::lang::Object>
{
public:

	static jint Indent() { return get_static_field<"Indent", jint>(); }
	static jni::ref<java::lang::String> Encoding() { return get_static_field<"Encoding", jni::ref<java::lang::String>>(); }
	static jint LineWidth() { return get_static_field<"LineWidth", jint>(); }

	static jni::ref<com::sun::org::apache::xml::internal::serialize::OutputFormat_Defaults> new_object() { return base_::new_object(); }

protected:

	OutputFormat_Defaults(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_OUTPUTFORMAT_DEFAULTS