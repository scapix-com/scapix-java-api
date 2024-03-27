// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_XMLSTRINGFACTORY_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_XMLSTRINGFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::utils { class XMLStringFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::utils::XMLStringFactory>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/utils/XMLStringFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_XMLSTRINGFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_XMLSTRINGFACTORY)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_XMLSTRINGFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/utils/FastStringBuffer.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::utils::XMLStringFactory : public jni::object_base<"com/sun/org/apache/xml/internal/utils/XMLStringFactory",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xml::internal::utils::XMLStringFactory> new_object() { return base_::new_object(); }
	jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> newstr(jni::ref<java::lang::String> p1) { return call_method<"newstr", jni::ref<com::sun::org::apache::xml::internal::utils::XMLString>>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> newstr(jni::ref<com::sun::org::apache::xml::internal::utils::FastStringBuffer> p1, jint p2, jint p3) { return call_method<"newstr", jni::ref<com::sun::org::apache::xml::internal::utils::XMLString>>(p1, p2, p3); }
	jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> newstr(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"newstr", jni::ref<com::sun::org::apache::xml::internal::utils::XMLString>>(p1, p2, p3); }
	jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> emptystr() { return call_method<"emptystr", jni::ref<com::sun::org::apache::xml::internal::utils::XMLString>>(); }

protected:

	XMLStringFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_XMLSTRINGFACTORY
