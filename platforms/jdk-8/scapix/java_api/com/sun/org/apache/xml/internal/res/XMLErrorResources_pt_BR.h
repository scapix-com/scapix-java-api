// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_RES_XMLERRORRESOURCES_PT_BR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_RES_XMLERRORRESOURCES_PT_BR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::res { class XMLErrorResources_pt_BR; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::res::XMLErrorResources_pt_BR>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/res/XMLErrorResources_pt_BR";
	using base_classes = std::tuple<scapix::java_api::java::util::ListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_RES_XMLERRORRESOURCES_PT_BR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_RES_XMLERRORRESOURCES_PT_BR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_RES_XMLERRORRESOURCES_PT_BR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::res::XMLErrorResources_pt_BR : public jni::object_base<"com/sun/org/apache/xml/internal/res/XMLErrorResources_pt_BR",
	java::util::ListResourceBundle>
{
public:

	static jint MAX_CODE() { return get_static_field<"MAX_CODE", jint>(); }
	static jint MAX_WARNING() { return get_static_field<"MAX_WARNING", jint>(); }
	static jint MAX_OTHERS() { return get_static_field<"MAX_OTHERS", jint>(); }
	static jint MAX_MESSAGES() { return get_static_field<"MAX_MESSAGES", jint>(); }
	static jni::ref<java::lang::String> ER_FUNCTION_NOT_SUPPORTED() { return get_static_field<"ER_FUNCTION_NOT_SUPPORTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CANNOT_OVERWRITE_CAUSE() { return get_static_field<"ER_CANNOT_OVERWRITE_CAUSE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NO_DEFAULT_IMPL() { return get_static_field<"ER_NO_DEFAULT_IMPL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CHUNKEDINTARRAY_NOT_SUPPORTED() { return get_static_field<"ER_CHUNKEDINTARRAY_NOT_SUPPORTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_OFFSET_BIGGER_THAN_SLOT() { return get_static_field<"ER_OFFSET_BIGGER_THAN_SLOT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_COROUTINE_NOT_AVAIL() { return get_static_field<"ER_COROUTINE_NOT_AVAIL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_COROUTINE_CO_EXIT() { return get_static_field<"ER_COROUTINE_CO_EXIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_COJOINROUTINESET_FAILED() { return get_static_field<"ER_COJOINROUTINESET_FAILED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_COROUTINE_PARAM() { return get_static_field<"ER_COROUTINE_PARAM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_PARSER_DOTERMINATE_ANSWERS() { return get_static_field<"ER_PARSER_DOTERMINATE_ANSWERS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NO_PARSE_CALL_WHILE_PARSING() { return get_static_field<"ER_NO_PARSE_CALL_WHILE_PARSING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED() { return get_static_field<"ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_ITERATOR_AXIS_NOT_IMPLEMENTED() { return get_static_field<"ER_ITERATOR_AXIS_NOT_IMPLEMENTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_ITERATOR_CLONE_NOT_SUPPORTED() { return get_static_field<"ER_ITERATOR_CLONE_NOT_SUPPORTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_UNKNOWN_AXIS_TYPE() { return get_static_field<"ER_UNKNOWN_AXIS_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_AXIS_NOT_SUPPORTED() { return get_static_field<"ER_AXIS_NOT_SUPPORTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NO_DTMIDS_AVAIL() { return get_static_field<"ER_NO_DTMIDS_AVAIL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NOT_SUPPORTED() { return get_static_field<"ER_NOT_SUPPORTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NODE_NON_NULL() { return get_static_field<"ER_NODE_NON_NULL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_COULD_NOT_RESOLVE_NODE() { return get_static_field<"ER_COULD_NOT_RESOLVE_NODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_STARTPARSE_WHILE_PARSING() { return get_static_field<"ER_STARTPARSE_WHILE_PARSING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_STARTPARSE_NEEDS_SAXPARSER() { return get_static_field<"ER_STARTPARSE_NEEDS_SAXPARSER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_COULD_NOT_INIT_PARSER() { return get_static_field<"ER_COULD_NOT_INIT_PARSER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_EXCEPTION_CREATING_POOL() { return get_static_field<"ER_EXCEPTION_CREATING_POOL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE() { return get_static_field<"ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_SCHEME_REQUIRED() { return get_static_field<"ER_SCHEME_REQUIRED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NO_SCHEME_IN_URI() { return get_static_field<"ER_NO_SCHEME_IN_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NO_SCHEME_INURI() { return get_static_field<"ER_NO_SCHEME_INURI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_PATH_INVALID_CHAR() { return get_static_field<"ER_PATH_INVALID_CHAR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_SCHEME_FROM_NULL_STRING() { return get_static_field<"ER_SCHEME_FROM_NULL_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_SCHEME_NOT_CONFORMANT() { return get_static_field<"ER_SCHEME_NOT_CONFORMANT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_HOST_ADDRESS_NOT_WELLFORMED() { return get_static_field<"ER_HOST_ADDRESS_NOT_WELLFORMED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_PORT_WHEN_HOST_NULL() { return get_static_field<"ER_PORT_WHEN_HOST_NULL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_INVALID_PORT() { return get_static_field<"ER_INVALID_PORT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_FRAG_FOR_GENERIC_URI() { return get_static_field<"ER_FRAG_FOR_GENERIC_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_FRAG_WHEN_PATH_NULL() { return get_static_field<"ER_FRAG_WHEN_PATH_NULL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_FRAG_INVALID_CHAR() { return get_static_field<"ER_FRAG_INVALID_CHAR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_PARSER_IN_USE() { return get_static_field<"ER_PARSER_IN_USE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CANNOT_CHANGE_WHILE_PARSING() { return get_static_field<"ER_CANNOT_CHANGE_WHILE_PARSING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_SELF_CAUSATION_NOT_PERMITTED() { return get_static_field<"ER_SELF_CAUSATION_NOT_PERMITTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NO_USERINFO_IF_NO_HOST() { return get_static_field<"ER_NO_USERINFO_IF_NO_HOST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NO_PORT_IF_NO_HOST() { return get_static_field<"ER_NO_PORT_IF_NO_HOST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NO_QUERY_STRING_IN_PATH() { return get_static_field<"ER_NO_QUERY_STRING_IN_PATH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NO_FRAGMENT_STRING_IN_PATH() { return get_static_field<"ER_NO_FRAGMENT_STRING_IN_PATH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CANNOT_INIT_URI_EMPTY_PARMS() { return get_static_field<"ER_CANNOT_INIT_URI_EMPTY_PARMS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_METHOD_NOT_SUPPORTED() { return get_static_field<"ER_METHOD_NOT_SUPPORTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_INCRSAXSRCFILTER_NOT_RESTARTABLE() { return get_static_field<"ER_INCRSAXSRCFILTER_NOT_RESTARTABLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_XMLRDR_NOT_BEFORE_STARTPARSE() { return get_static_field<"ER_XMLRDR_NOT_BEFORE_STARTPARSE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_AXIS_TRAVERSER_NOT_SUPPORTED() { return get_static_field<"ER_AXIS_TRAVERSER_NOT_SUPPORTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER() { return get_static_field<"ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_SYSTEMID_UNKNOWN() { return get_static_field<"ER_SYSTEMID_UNKNOWN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_LOCATION_UNKNOWN() { return get_static_field<"ER_LOCATION_UNKNOWN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_PREFIX_MUST_RESOLVE() { return get_static_field<"ER_PREFIX_MUST_RESOLVE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CREATEDOCUMENT_NOT_SUPPORTED() { return get_static_field<"ER_CREATEDOCUMENT_NOT_SUPPORTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CHILD_HAS_NO_OWNER_DOCUMENT() { return get_static_field<"ER_CHILD_HAS_NO_OWNER_DOCUMENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT() { return get_static_field<"ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CANT_OUTPUT_TEXT_BEFORE_DOC() { return get_static_field<"ER_CANT_OUTPUT_TEXT_BEFORE_DOC", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CANT_HAVE_MORE_THAN_ONE_ROOT() { return get_static_field<"ER_CANT_HAVE_MORE_THAN_ONE_ROOT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_ARG_LOCALNAME_NULL() { return get_static_field<"ER_ARG_LOCALNAME_NULL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_ARG_LOCALNAME_INVALID() { return get_static_field<"ER_ARG_LOCALNAME_INVALID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_ARG_PREFIX_INVALID() { return get_static_field<"ER_ARG_PREFIX_INVALID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NAME_CANT_START_WITH_COLON() { return get_static_field<"ER_NAME_CANT_START_WITH_COLON", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_RESOURCE_COULD_NOT_FIND() { return get_static_field<"ER_RESOURCE_COULD_NOT_FIND", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_RESOURCE_COULD_NOT_LOAD() { return get_static_field<"ER_RESOURCE_COULD_NOT_LOAD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_BUFFER_SIZE_LESSTHAN_ZERO() { return get_static_field<"ER_BUFFER_SIZE_LESSTHAN_ZERO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_INVALID_UTF16_SURROGATE() { return get_static_field<"ER_INVALID_UTF16_SURROGATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_OIERROR() { return get_static_field<"ER_OIERROR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NAMESPACE_PREFIX() { return get_static_field<"ER_NAMESPACE_PREFIX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_STRAY_ATTRIBUTE() { return get_static_field<"ER_STRAY_ATTRIBUTE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_STRAY_NAMESPACE() { return get_static_field<"ER_STRAY_NAMESPACE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_COULD_NOT_LOAD_RESOURCE() { return get_static_field<"ER_COULD_NOT_LOAD_RESOURCE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_COULD_NOT_LOAD_METHOD_PROPERTY() { return get_static_field<"ER_COULD_NOT_LOAD_METHOD_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_SERIALIZER_NOT_CONTENTHANDLER() { return get_static_field<"ER_SERIALIZER_NOT_CONTENTHANDLER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_ILLEGAL_ATTRIBUTE_POSITION() { return get_static_field<"ER_ILLEGAL_ATTRIBUTE_POSITION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_ILLEGAL_CHARACTER() { return get_static_field<"ER_ILLEGAL_CHARACTER", jni::ref<java::lang::String>>(); }

	static jni::ref<com::sun::org::apache::xml::internal::res::XMLErrorResources_pt_BR> new_object() { return base_::new_object(); }

protected:

	XMLErrorResources_pt_BR(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_RES_XMLERRORRESOURCES_PT_BR
