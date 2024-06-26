// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/utils/XMLString.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_XMLSTRINGDEFAULT_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_XMLSTRINGDEFAULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::utils { class XMLStringDefault; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::utils::XMLStringDefault>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/utils/XMLStringDefault";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xml::internal::utils::XMLString>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_XMLSTRINGDEFAULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_XMLSTRINGDEFAULT)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_XMLSTRINGDEFAULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>
#include <scapix/java_api/org/xml/sax/ext/LexicalHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::utils::XMLStringDefault : public jni::object_base<"com/sun/org/apache/xml/internal/utils/XMLStringDefault",
	java::lang::Object,
	com::sun::org::apache::xml::internal::utils::XMLString>
{
public:

	static jni::ref<com::sun::org::apache::xml::internal::utils::XMLStringDefault> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	void dispatchCharactersEvents(jni::ref<org::xml::sax::ContentHandler> p1) { return call_method<"dispatchCharactersEvents", void>(p1); }
	void dispatchAsComment(jni::ref<org::xml::sax::ext::LexicalHandler> p1) { return call_method<"dispatchAsComment", void>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> fixWhiteSpace(jboolean p1, jboolean p2, jboolean p3) { return call_method<"fixWhiteSpace", jni::ref<com::sun::org::apache::xml::internal::utils::XMLString>>(p1, p2, p3); }
	jint length() { return call_method<"length", jint>(); }
	jchar charAt(jint p1) { return call_method<"charAt", jchar>(p1); }
	void getChars(jint p1, jint p2, jni::ref<jni::array<jchar>> p3, jint p4) { return call_method<"getChars", void>(p1, p2, p3, p4); }
	jboolean equals(jni::ref<java::lang::String> p1) { return call_method<"equals", jboolean>(p1); }
	jboolean equals(jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> p1) { return call_method<"equals", jboolean>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jboolean equalsIgnoreCase(jni::ref<java::lang::String> p1) { return call_method<"equalsIgnoreCase", jboolean>(p1); }
	jint compareTo(jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> p1) { return call_method<"compareTo", jint>(p1); }
	jint compareToIgnoreCase(jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> p1) { return call_method<"compareToIgnoreCase", jint>(p1); }
	jboolean startsWith(jni::ref<java::lang::String> p1, jint p2) { return call_method<"startsWith", jboolean>(p1, p2); }
	jboolean startsWith(jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> p1, jint p2) { return call_method<"startsWith", jboolean>(p1, p2); }
	jboolean startsWith(jni::ref<java::lang::String> p1) { return call_method<"startsWith", jboolean>(p1); }
	jboolean startsWith(jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> p1) { return call_method<"startsWith", jboolean>(p1); }
	jboolean endsWith(jni::ref<java::lang::String> p1) { return call_method<"endsWith", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint indexOf(jint p1) { return call_method<"indexOf", jint>(p1); }
	jint indexOf(jint p1, jint p2) { return call_method<"indexOf", jint>(p1, p2); }
	jint lastIndexOf(jint p1) { return call_method<"lastIndexOf", jint>(p1); }
	jint lastIndexOf(jint p1, jint p2) { return call_method<"lastIndexOf", jint>(p1, p2); }
	jint indexOf(jni::ref<java::lang::String> p1) { return call_method<"indexOf", jint>(p1); }
	jint indexOf(jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> p1) { return call_method<"indexOf", jint>(p1); }
	jint indexOf(jni::ref<java::lang::String> p1, jint p2) { return call_method<"indexOf", jint>(p1, p2); }
	jint lastIndexOf(jni::ref<java::lang::String> p1) { return call_method<"lastIndexOf", jint>(p1); }
	jint lastIndexOf(jni::ref<java::lang::String> p1, jint p2) { return call_method<"lastIndexOf", jint>(p1, p2); }
	jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> substring(jint p1) { return call_method<"substring", jni::ref<com::sun::org::apache::xml::internal::utils::XMLString>>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> substring(jint p1, jint p2) { return call_method<"substring", jni::ref<com::sun::org::apache::xml::internal::utils::XMLString>>(p1, p2); }
	jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> concat(jni::ref<java::lang::String> p1) { return call_method<"concat", jni::ref<com::sun::org::apache::xml::internal::utils::XMLString>>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> toLowerCase(jni::ref<java::util::Locale> p1) { return call_method<"toLowerCase", jni::ref<com::sun::org::apache::xml::internal::utils::XMLString>>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> toLowerCase() { return call_method<"toLowerCase", jni::ref<com::sun::org::apache::xml::internal::utils::XMLString>>(); }
	jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> toUpperCase(jni::ref<java::util::Locale> p1) { return call_method<"toUpperCase", jni::ref<com::sun::org::apache::xml::internal::utils::XMLString>>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> toUpperCase() { return call_method<"toUpperCase", jni::ref<com::sun::org::apache::xml::internal::utils::XMLString>>(); }
	jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> trim() { return call_method<"trim", jni::ref<com::sun::org::apache::xml::internal::utils::XMLString>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean hasString() { return call_method<"hasString", jboolean>(); }
	jdouble toDouble() { return call_method<"toDouble", jdouble>(); }

protected:

	XMLStringDefault(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_XMLSTRINGDEFAULT
