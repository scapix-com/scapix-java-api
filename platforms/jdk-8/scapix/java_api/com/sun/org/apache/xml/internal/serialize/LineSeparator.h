// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_LINESEPARATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_LINESEPARATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::serialize { class LineSeparator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::serialize::LineSeparator>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/serialize/LineSeparator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_LINESEPARATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_LINESEPARATOR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_LINESEPARATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::serialize::LineSeparator : public jni::object_base<"com/sun/org/apache/xml/internal/serialize/LineSeparator",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> Unix() { return get_static_field<"Unix", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> Windows() { return get_static_field<"Windows", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> Macintosh() { return get_static_field<"Macintosh", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> Web() { return get_static_field<"Web", jni::ref<java::lang::String>>(); }

	static jni::ref<com::sun::org::apache::xml::internal::serialize::LineSeparator> new_object() { return base_::new_object(); }

protected:

	LineSeparator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZE_LINESEPARATOR
