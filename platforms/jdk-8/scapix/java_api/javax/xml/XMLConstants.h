// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_XMLCONSTANTS_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_XMLCONSTANTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml { class XMLConstants; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::XMLConstants>
{
	static constexpr fixed_string class_name = "javax/xml/XMLConstants";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_XMLCONSTANTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_XMLCONSTANTS)
#define SCAPIX_JAVA_API_JAVAX_XML_XMLCONSTANTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::XMLConstants : public jni::object_base<"javax/xml/XMLConstants",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> NULL_NS_URI() { return get_static_field<"NULL_NS_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DEFAULT_NS_PREFIX() { return get_static_field<"DEFAULT_NS_PREFIX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XML_NS_URI() { return get_static_field<"XML_NS_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XML_NS_PREFIX() { return get_static_field<"XML_NS_PREFIX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XMLNS_ATTRIBUTE_NS_URI() { return get_static_field<"XMLNS_ATTRIBUTE_NS_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XMLNS_ATTRIBUTE() { return get_static_field<"XMLNS_ATTRIBUTE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> W3C_XML_SCHEMA_NS_URI() { return get_static_field<"W3C_XML_SCHEMA_NS_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> W3C_XML_SCHEMA_INSTANCE_NS_URI() { return get_static_field<"W3C_XML_SCHEMA_INSTANCE_NS_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> W3C_XPATH_DATATYPE_NS_URI() { return get_static_field<"W3C_XPATH_DATATYPE_NS_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XML_DTD_NS_URI() { return get_static_field<"XML_DTD_NS_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RELAXNG_NS_URI() { return get_static_field<"RELAXNG_NS_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_SECURE_PROCESSING() { return get_static_field<"FEATURE_SECURE_PROCESSING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESS_EXTERNAL_DTD() { return get_static_field<"ACCESS_EXTERNAL_DTD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESS_EXTERNAL_SCHEMA() { return get_static_field<"ACCESS_EXTERNAL_SCHEMA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESS_EXTERNAL_STYLESHEET() { return get_static_field<"ACCESS_EXTERNAL_STYLESHEET", jni::ref<java::lang::String>>(); }


protected:

	XMLConstants(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_XMLCONSTANTS
