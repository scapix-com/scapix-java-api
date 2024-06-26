// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_OUTPUTPROPERTYUTILS_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_OUTPUTPROPERTYUTILS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::serializer { class OutputPropertyUtils; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::serializer::OutputPropertyUtils>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/serializer/OutputPropertyUtils";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_OUTPUTPROPERTYUTILS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_OUTPUTPROPERTYUTILS)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_OUTPUTPROPERTYUTILS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Properties.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::serializer::OutputPropertyUtils : public jni::object_base<"com/sun/org/apache/xml/internal/serializer/OutputPropertyUtils",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xml::internal::serializer::OutputPropertyUtils> new_object() { return base_::new_object(); }
	static jboolean getBooleanProperty(jni::ref<java::lang::String> p1, jni::ref<java::util::Properties> p2) { return call_static_method<"getBooleanProperty", jboolean>(p1, p2); }
	static jint getIntProperty(jni::ref<java::lang::String> p1, jni::ref<java::util::Properties> p2) { return call_static_method<"getIntProperty", jint>(p1, p2); }

protected:

	OutputPropertyUtils(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_OUTPUTPROPERTYUTILS
