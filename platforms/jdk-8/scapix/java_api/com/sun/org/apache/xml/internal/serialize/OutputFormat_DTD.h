// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_OUTPUTFORMAT_DTD_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_OUTPUTFORMAT_DTD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::serialize { class OutputFormat_DTD; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::serialize::OutputFormat_DTD>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/serialize/OutputFormat$DTD";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_OUTPUTFORMAT_DTD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_OUTPUTFORMAT_DTD)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_OUTPUTFORMAT_DTD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::serialize::OutputFormat_DTD : public jni::object_base<"com/sun/org/apache/xml/internal/serialize/OutputFormat$DTD",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> HTMLPublicId() { return get_static_field<"HTMLPublicId", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HTMLSystemId() { return get_static_field<"HTMLSystemId", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XHTMLPublicId() { return get_static_field<"XHTMLPublicId", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XHTMLSystemId() { return get_static_field<"XHTMLSystemId", jni::ref<java::lang::String>>(); }

	static jni::ref<com::sun::org::apache::xml::internal::serialize::OutputFormat_DTD> new_object() { return base_::new_object(); }

protected:

	OutputFormat_DTD(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_OUTPUTFORMAT_DTD
