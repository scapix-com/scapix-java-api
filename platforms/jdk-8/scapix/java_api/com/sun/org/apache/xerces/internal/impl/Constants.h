// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_CONSTANTS_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_CONSTANTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl { class Constants; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::Constants>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/Constants";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_CONSTANTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_CONSTANTS)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_CONSTANTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::Constants : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/Constants",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> NS_XMLSCHEMA() { return get_static_field<"NS_XMLSCHEMA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NS_DTD() { return get_static_field<"NS_DTD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> W3C_XML_SCHEMA10_NS_URI() { return get_static_field<"W3C_XML_SCHEMA10_NS_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUN_SCHEMA_FEATURE_PREFIX() { return get_static_field<"SUN_SCHEMA_FEATURE_PREFIX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUN_REPORT_IGNORED_ELEMENT_CONTENT_WHITESPACE() { return get_static_field<"SUN_REPORT_IGNORED_ELEMENT_CONTENT_WHITESPACE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ZEPHYR_PROPERTY_PREFIX() { return get_static_field<"ZEPHYR_PROPERTY_PREFIX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STAX_PROPERTIES() { return get_static_field<"STAX_PROPERTIES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STAX_ENTITY_RESOLVER_PROPERTY() { return get_static_field<"STAX_ENTITY_RESOLVER_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STAX_REPORT_CDATA_EVENT() { return get_static_field<"STAX_REPORT_CDATA_EVENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> READER_IN_DEFINED_STATE() { return get_static_field<"READER_IN_DEFINED_STATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ADD_NAMESPACE_DECL_AS_ATTRIBUTE() { return get_static_field<"ADD_NAMESPACE_DECL_AS_ATTRIBUTE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ESCAPE_CHARACTERS() { return get_static_field<"ESCAPE_CHARACTERS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> REUSE_INSTANCE() { return get_static_field<"REUSE_INSTANCE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUN_DOM_PROPERTY_PREFIX() { return get_static_field<"SUN_DOM_PROPERTY_PREFIX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUN_DOM_ANCESTOR_CHECCK() { return get_static_field<"SUN_DOM_ANCESTOR_CHECCK", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IGNORE_EXTERNAL_DTD() { return get_static_field<"IGNORE_EXTERNAL_DTD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SAX_FEATURE_PREFIX() { return get_static_field<"SAX_FEATURE_PREFIX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAMESPACES_FEATURE() { return get_static_field<"NAMESPACES_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAMESPACE_PREFIXES_FEATURE() { return get_static_field<"NAMESPACE_PREFIXES_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_INTERNING_FEATURE() { return get_static_field<"STRING_INTERNING_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VALIDATION_FEATURE() { return get_static_field<"VALIDATION_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTERNAL_GENERAL_ENTITIES_FEATURE() { return get_static_field<"EXTERNAL_GENERAL_ENTITIES_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTERNAL_PARAMETER_ENTITIES_FEATURE() { return get_static_field<"EXTERNAL_PARAMETER_ENTITIES_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LEXICAL_HANDLER_PARAMETER_ENTITIES_FEATURE() { return get_static_field<"LEXICAL_HANDLER_PARAMETER_ENTITIES_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IS_STANDALONE_FEATURE() { return get_static_field<"IS_STANDALONE_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RESOLVE_DTD_URIS_FEATURE() { return get_static_field<"RESOLVE_DTD_URIS_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> USE_ATTRIBUTES2_FEATURE() { return get_static_field<"USE_ATTRIBUTES2_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> USE_LOCATOR2_FEATURE() { return get_static_field<"USE_LOCATOR2_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> USE_ENTITY_RESOLVER2_FEATURE() { return get_static_field<"USE_ENTITY_RESOLVER2_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> UNICODE_NORMALIZATION_CHECKING_FEATURE() { return get_static_field<"UNICODE_NORMALIZATION_CHECKING_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XMLNS_URIS_FEATURE() { return get_static_field<"XMLNS_URIS_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XML_11_FEATURE() { return get_static_field<"XML_11_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ALLOW_DTD_EVENTS_AFTER_ENDDTD_FEATURE() { return get_static_field<"ALLOW_DTD_EVENTS_AFTER_ENDDTD_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SAX_PROPERTY_PREFIX() { return get_static_field<"SAX_PROPERTY_PREFIX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DECLARATION_HANDLER_PROPERTY() { return get_static_field<"DECLARATION_HANDLER_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LEXICAL_HANDLER_PROPERTY() { return get_static_field<"LEXICAL_HANDLER_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_NODE_PROPERTY() { return get_static_field<"DOM_NODE_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XML_STRING_PROPERTY() { return get_static_field<"XML_STRING_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FEATURE_SECURE_PROCESSING() { return get_static_field<"FEATURE_SECURE_PROCESSING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ORACLE_FEATURE_SERVICE_MECHANISM() { return get_static_field<"ORACLE_FEATURE_SERVICE_MECHANISM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOCUMENT_XML_VERSION_PROPERTY() { return get_static_field<"DOCUMENT_XML_VERSION_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JAXP_PROPERTY_PREFIX() { return get_static_field<"JAXP_PROPERTY_PREFIX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCHEMA_SOURCE() { return get_static_field<"SCHEMA_SOURCE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCHEMA_LANGUAGE() { return get_static_field<"SCHEMA_LANGUAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JAXPAPI_PROPERTY_PREFIX() { return get_static_field<"JAXPAPI_PROPERTY_PREFIX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ORACLE_JAXP_PROPERTY_PREFIX() { return get_static_field<"ORACLE_JAXP_PROPERTY_PREFIX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XML_SECURITY_PROPERTY_MANAGER() { return get_static_field<"XML_SECURITY_PROPERTY_MANAGER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SP_ACCESS_EXTERNAL_DTD() { return get_static_field<"SP_ACCESS_EXTERNAL_DTD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SP_ACCESS_EXTERNAL_SCHEMA() { return get_static_field<"SP_ACCESS_EXTERNAL_SCHEMA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESS_EXTERNAL_ALL() { return get_static_field<"ACCESS_EXTERNAL_ALL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTERNAL_ACCESS_DEFAULT_FSP() { return get_static_field<"EXTERNAL_ACCESS_DEFAULT_FSP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTERNAL_ACCESS_DEFAULT() { return get_static_field<"EXTERNAL_ACCESS_DEFAULT", jni::ref<java::lang::String>>(); }
	static jboolean IS_JDK8_OR_ABOVE() { return get_static_field<"IS_JDK8_OR_ABOVE", jboolean>(); }
	static jni::ref<java::lang::String> JDK_ENTITY_EXPANSION_LIMIT() { return get_static_field<"JDK_ENTITY_EXPANSION_LIMIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JDK_ELEMENT_ATTRIBUTE_LIMIT() { return get_static_field<"JDK_ELEMENT_ATTRIBUTE_LIMIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JDK_MAX_OCCUR_LIMIT() { return get_static_field<"JDK_MAX_OCCUR_LIMIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JDK_TOTAL_ENTITY_SIZE_LIMIT() { return get_static_field<"JDK_TOTAL_ENTITY_SIZE_LIMIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JDK_GENERAL_ENTITY_SIZE_LIMIT() { return get_static_field<"JDK_GENERAL_ENTITY_SIZE_LIMIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JDK_ENTITY_REPLACEMENT_LIMIT() { return get_static_field<"JDK_ENTITY_REPLACEMENT_LIMIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JDK_PARAMETER_ENTITY_SIZE_LIMIT() { return get_static_field<"JDK_PARAMETER_ENTITY_SIZE_LIMIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JDK_XML_NAME_LIMIT() { return get_static_field<"JDK_XML_NAME_LIMIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JDK_MAX_ELEMENT_DEPTH() { return get_static_field<"JDK_MAX_ELEMENT_DEPTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JDK_ENTITY_COUNT_INFO() { return get_static_field<"JDK_ENTITY_COUNT_INFO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SP_ENTITY_EXPANSION_LIMIT() { return get_static_field<"SP_ENTITY_EXPANSION_LIMIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SP_ELEMENT_ATTRIBUTE_LIMIT() { return get_static_field<"SP_ELEMENT_ATTRIBUTE_LIMIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SP_MAX_OCCUR_LIMIT() { return get_static_field<"SP_MAX_OCCUR_LIMIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SP_TOTAL_ENTITY_SIZE_LIMIT() { return get_static_field<"SP_TOTAL_ENTITY_SIZE_LIMIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SP_GENERAL_ENTITY_SIZE_LIMIT() { return get_static_field<"SP_GENERAL_ENTITY_SIZE_LIMIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SP_ENTITY_REPLACEMENT_LIMIT() { return get_static_field<"SP_ENTITY_REPLACEMENT_LIMIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SP_PARAMETER_ENTITY_SIZE_LIMIT() { return get_static_field<"SP_PARAMETER_ENTITY_SIZE_LIMIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SP_XML_NAME_LIMIT() { return get_static_field<"SP_XML_NAME_LIMIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SP_MAX_ELEMENT_DEPTH() { return get_static_field<"SP_MAX_ELEMENT_DEPTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ENTITY_EXPANSION_LIMIT() { return get_static_field<"ENTITY_EXPANSION_LIMIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELEMENT_ATTRIBUTE_LIMIT() { return get_static_field<"ELEMENT_ATTRIBUTE_LIMIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MAX_OCCUR_LIMIT() { return get_static_field<"MAX_OCCUR_LIMIT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> JDK_YES() { return get_static_field<"JDK_YES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INCLUDE_COMMENTS_FEATURE() { return get_static_field<"INCLUDE_COMMENTS_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CREATE_CDATA_NODES_FEATURE() { return get_static_field<"CREATE_CDATA_NODES_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LOAD_AS_INFOSET() { return get_static_field<"LOAD_AS_INFOSET", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_CANONICAL_FORM() { return get_static_field<"DOM_CANONICAL_FORM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_CDATA_SECTIONS() { return get_static_field<"DOM_CDATA_SECTIONS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_COMMENTS() { return get_static_field<"DOM_COMMENTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_CHARSET_OVERRIDES_XML_ENCODING() { return get_static_field<"DOM_CHARSET_OVERRIDES_XML_ENCODING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_DATATYPE_NORMALIZATION() { return get_static_field<"DOM_DATATYPE_NORMALIZATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_ENTITIES() { return get_static_field<"DOM_ENTITIES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_INFOSET() { return get_static_field<"DOM_INFOSET", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_NAMESPACES() { return get_static_field<"DOM_NAMESPACES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_NAMESPACE_DECLARATIONS() { return get_static_field<"DOM_NAMESPACE_DECLARATIONS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_SUPPORTED_MEDIATYPES_ONLY() { return get_static_field<"DOM_SUPPORTED_MEDIATYPES_ONLY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_VALIDATE_IF_SCHEMA() { return get_static_field<"DOM_VALIDATE_IF_SCHEMA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_VALIDATE() { return get_static_field<"DOM_VALIDATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_ELEMENT_CONTENT_WHITESPACE() { return get_static_field<"DOM_ELEMENT_CONTENT_WHITESPACE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_DISCARD_DEFAULT_CONTENT() { return get_static_field<"DOM_DISCARD_DEFAULT_CONTENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_NORMALIZE_CHARACTERS() { return get_static_field<"DOM_NORMALIZE_CHARACTERS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_CHECK_CHAR_NORMALIZATION() { return get_static_field<"DOM_CHECK_CHAR_NORMALIZATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_WELLFORMED() { return get_static_field<"DOM_WELLFORMED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_SPLIT_CDATA() { return get_static_field<"DOM_SPLIT_CDATA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_FORMAT_PRETTY_PRINT() { return get_static_field<"DOM_FORMAT_PRETTY_PRINT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_XMLDECL() { return get_static_field<"DOM_XMLDECL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_UNKNOWNCHARS() { return get_static_field<"DOM_UNKNOWNCHARS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_CERTIFIED() { return get_static_field<"DOM_CERTIFIED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_DISALLOW_DOCTYPE() { return get_static_field<"DOM_DISALLOW_DOCTYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS() { return get_static_field<"DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_RESOURCE_RESOLVER() { return get_static_field<"DOM_RESOURCE_RESOLVER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_ERROR_HANDLER() { return get_static_field<"DOM_ERROR_HANDLER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_SCHEMA_TYPE() { return get_static_field<"DOM_SCHEMA_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_SCHEMA_LOCATION() { return get_static_field<"DOM_SCHEMA_LOCATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_ANCESTOR_CHECCK() { return get_static_field<"DOM_ANCESTOR_CHECCK", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_PSVI() { return get_static_field<"DOM_PSVI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XERCES_FEATURE_PREFIX() { return get_static_field<"XERCES_FEATURE_PREFIX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCHEMA_VALIDATION_FEATURE() { return get_static_field<"SCHEMA_VALIDATION_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCHEMA_NORMALIZED_VALUE() { return get_static_field<"SCHEMA_NORMALIZED_VALUE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCHEMA_ELEMENT_DEFAULT() { return get_static_field<"SCHEMA_ELEMENT_DEFAULT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCHEMA_FULL_CHECKING() { return get_static_field<"SCHEMA_FULL_CHECKING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCHEMA_AUGMENT_PSVI() { return get_static_field<"SCHEMA_AUGMENT_PSVI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DYNAMIC_VALIDATION_FEATURE() { return get_static_field<"DYNAMIC_VALIDATION_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WARN_ON_DUPLICATE_ATTDEF_FEATURE() { return get_static_field<"WARN_ON_DUPLICATE_ATTDEF_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WARN_ON_UNDECLARED_ELEMDEF_FEATURE() { return get_static_field<"WARN_ON_UNDECLARED_ELEMDEF_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WARN_ON_DUPLICATE_ENTITYDEF_FEATURE() { return get_static_field<"WARN_ON_DUPLICATE_ENTITYDEF_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ALLOW_JAVA_ENCODINGS_FEATURE() { return get_static_field<"ALLOW_JAVA_ENCODINGS_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISALLOW_DOCTYPE_DECL_FEATURE() { return get_static_field<"DISALLOW_DOCTYPE_DECL_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CONTINUE_AFTER_FATAL_ERROR_FEATURE() { return get_static_field<"CONTINUE_AFTER_FATAL_ERROR_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LOAD_DTD_GRAMMAR_FEATURE() { return get_static_field<"LOAD_DTD_GRAMMAR_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LOAD_EXTERNAL_DTD_FEATURE() { return get_static_field<"LOAD_EXTERNAL_DTD_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DEFER_NODE_EXPANSION_FEATURE() { return get_static_field<"DEFER_NODE_EXPANSION_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CREATE_ENTITY_REF_NODES_FEATURE() { return get_static_field<"CREATE_ENTITY_REF_NODES_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INCLUDE_IGNORABLE_WHITESPACE() { return get_static_field<"INCLUDE_IGNORABLE_WHITESPACE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DEFAULT_ATTRIBUTE_VALUES_FEATURE() { return get_static_field<"DEFAULT_ATTRIBUTE_VALUES_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VALIDATE_CONTENT_MODELS_FEATURE() { return get_static_field<"VALIDATE_CONTENT_MODELS_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VALIDATE_DATATYPES_FEATURE() { return get_static_field<"VALIDATE_DATATYPES_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BALANCE_SYNTAX_TREES() { return get_static_field<"BALANCE_SYNTAX_TREES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NOTIFY_CHAR_REFS_FEATURE() { return get_static_field<"NOTIFY_CHAR_REFS_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NOTIFY_BUILTIN_REFS_FEATURE() { return get_static_field<"NOTIFY_BUILTIN_REFS_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STANDARD_URI_CONFORMANT_FEATURE() { return get_static_field<"STANDARD_URI_CONFORMANT_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE() { return get_static_field<"GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VALIDATE_ANNOTATIONS_FEATURE() { return get_static_field<"VALIDATE_ANNOTATIONS_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HONOUR_ALL_SCHEMALOCATIONS_FEATURE() { return get_static_field<"HONOUR_ALL_SCHEMALOCATIONS_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAMESPACE_GROWTH_FEATURE() { return get_static_field<"NAMESPACE_GROWTH_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TOLERATE_DUPLICATES_FEATURE() { return get_static_field<"TOLERATE_DUPLICATES_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XINCLUDE_FEATURE() { return get_static_field<"XINCLUDE_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XINCLUDE_FIXUP_BASE_URIS_FEATURE() { return get_static_field<"XINCLUDE_FIXUP_BASE_URIS_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XINCLUDE_FIXUP_LANGUAGE_FEATURE() { return get_static_field<"XINCLUDE_FIXUP_LANGUAGE_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IGNORE_XSI_TYPE_FEATURE() { return get_static_field<"IGNORE_XSI_TYPE_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ID_IDREF_CHECKING_FEATURE() { return get_static_field<"ID_IDREF_CHECKING_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IDC_CHECKING_FEATURE() { return get_static_field<"IDC_CHECKING_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> UNPARSED_ENTITY_CHECKING_FEATURE() { return get_static_field<"UNPARSED_ENTITY_CHECKING_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> USE_GRAMMAR_POOL_ONLY_FEATURE() { return get_static_field<"USE_GRAMMAR_POOL_ONLY_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PARSER_SETTINGS() { return get_static_field<"PARSER_SETTINGS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XINCLUDE_AWARE() { return get_static_field<"XINCLUDE_AWARE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IGNORE_SCHEMA_LOCATION_HINTS() { return get_static_field<"IGNORE_SCHEMA_LOCATION_HINTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CHANGE_IGNORABLE_CHARACTERS_INTO_IGNORABLE_WHITESPACES() { return get_static_field<"CHANGE_IGNORABLE_CHARACTERS_INTO_IGNORABLE_WHITESPACES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XERCES_PROPERTY_PREFIX() { return get_static_field<"XERCES_PROPERTY_PREFIX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CURRENT_ELEMENT_NODE_PROPERTY() { return get_static_field<"CURRENT_ELEMENT_NODE_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOCUMENT_CLASS_NAME_PROPERTY() { return get_static_field<"DOCUMENT_CLASS_NAME_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SYMBOL_TABLE_PROPERTY() { return get_static_field<"SYMBOL_TABLE_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ERROR_REPORTER_PROPERTY() { return get_static_field<"ERROR_REPORTER_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ERROR_HANDLER_PROPERTY() { return get_static_field<"ERROR_HANDLER_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XINCLUDE_HANDLER_PROPERTY() { return get_static_field<"XINCLUDE_HANDLER_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XPOINTER_HANDLER_PROPERTY() { return get_static_field<"XPOINTER_HANDLER_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ENTITY_MANAGER_PROPERTY() { return get_static_field<"ENTITY_MANAGER_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BUFFER_SIZE_PROPERTY() { return get_static_field<"BUFFER_SIZE_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SECURITY_MANAGER_PROPERTY() { return get_static_field<"SECURITY_MANAGER_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LOCALE_PROPERTY() { return get_static_field<"LOCALE_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SECURITY_MANAGER() { return get_static_field<"SECURITY_MANAGER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ENTITY_RESOLVER_PROPERTY() { return get_static_field<"ENTITY_RESOLVER_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XMLGRAMMAR_POOL_PROPERTY() { return get_static_field<"XMLGRAMMAR_POOL_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DATATYPE_VALIDATOR_FACTORY_PROPERTY() { return get_static_field<"DATATYPE_VALIDATOR_FACTORY_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOCUMENT_SCANNER_PROPERTY() { return get_static_field<"DOCUMENT_SCANNER_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DTD_SCANNER_PROPERTY() { return get_static_field<"DTD_SCANNER_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DTD_PROCESSOR_PROPERTY() { return get_static_field<"DTD_PROCESSOR_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VALIDATOR_PROPERTY() { return get_static_field<"VALIDATOR_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DTD_VALIDATOR_PROPERTY() { return get_static_field<"DTD_VALIDATOR_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCHEMA_VALIDATOR_PROPERTY() { return get_static_field<"SCHEMA_VALIDATOR_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCHEMA_LOCATION() { return get_static_field<"SCHEMA_LOCATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCHEMA_NONS_LOCATION() { return get_static_field<"SCHEMA_NONS_LOCATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAMESPACE_BINDER_PROPERTY() { return get_static_field<"NAMESPACE_BINDER_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAMESPACE_CONTEXT_PROPERTY() { return get_static_field<"NAMESPACE_CONTEXT_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VALIDATION_MANAGER_PROPERTY() { return get_static_field<"VALIDATION_MANAGER_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ROOT_TYPE_DEFINITION_PROPERTY() { return get_static_field<"ROOT_TYPE_DEFINITION_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ROOT_ELEMENT_DECLARATION_PROPERTY() { return get_static_field<"ROOT_ELEMENT_DECLARATION_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XPOINTER_SCHEMA_PROPERTY() { return get_static_field<"XPOINTER_SCHEMA_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCHEMA_DV_FACTORY_PROPERTY() { return get_static_field<"SCHEMA_DV_FACTORY_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELEMENT_PSVI() { return get_static_field<"ELEMENT_PSVI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTRIBUTE_PSVI() { return get_static_field<"ATTRIBUTE_PSVI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTRIBUTE_DECLARED() { return get_static_field<"ATTRIBUTE_DECLARED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TYPEINFO() { return get_static_field<"TYPEINFO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ID_ATTRIBUTE() { return get_static_field<"ID_ATTRIBUTE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ENTITY_SKIPPED() { return get_static_field<"ENTITY_SKIPPED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CHAR_REF_PROBABLE_WS() { return get_static_field<"CHAR_REF_PROBABLE_WS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LAST_ENTITY() { return get_static_field<"LAST_ENTITY", jni::ref<java::lang::String>>(); }
	static jshort XML_VERSION_ERROR() { return get_static_field<"XML_VERSION_ERROR", jshort>(); }
	static jshort XML_VERSION_1_0() { return get_static_field<"XML_VERSION_1_0", jshort>(); }
	static jshort XML_VERSION_1_1() { return get_static_field<"XML_VERSION_1_1", jshort>(); }
	static jni::ref<java::lang::String> ANONYMOUS_TYPE_NAMESPACE() { return get_static_field<"ANONYMOUS_TYPE_NAMESPACE", jni::ref<java::lang::String>>(); }
	static jboolean SCHEMA_1_1_SUPPORT() { return get_static_field<"SCHEMA_1_1_SUPPORT", jboolean>(); }
	static jshort SCHEMA_VERSION_1_0() { return get_static_field<"SCHEMA_VERSION_1_0", jshort>(); }
	static jshort SCHEMA_VERSION_1_0_EXTENDED() { return get_static_field<"SCHEMA_VERSION_1_0_EXTENDED", jshort>(); }

	static jni::ref<java::util::Enumeration> getSAXFeatures() { return call_static_method<"getSAXFeatures", jni::ref<java::util::Enumeration>>(); }
	static jni::ref<java::util::Enumeration> getSAXProperties() { return call_static_method<"getSAXProperties", jni::ref<java::util::Enumeration>>(); }
	static jni::ref<java::util::Enumeration> getXercesFeatures() { return call_static_method<"getXercesFeatures", jni::ref<java::util::Enumeration>>(); }
	static jni::ref<java::util::Enumeration> getXercesProperties() { return call_static_method<"getXercesProperties", jni::ref<java::util::Enumeration>>(); }
	static jboolean isJavaVersionAtLeast(jint p1) { return call_static_method<"isJavaVersionAtLeast", jboolean>(p1); }
	static void main(jni::ref<jni::array<java::lang::String>> p1) { return call_static_method<"main", void>(p1); }

protected:

	Constants(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_CONSTANTS
