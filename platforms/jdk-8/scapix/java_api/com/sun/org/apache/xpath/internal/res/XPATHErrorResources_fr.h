// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_RES_XPATHERRORRESOURCES_FR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_RES_XPATHERRORRESOURCES_FR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::res { class XPATHErrorResources_fr; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::res::XPATHErrorResources_fr>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/res/XPATHErrorResources_fr";
	using base_classes = std::tuple<scapix::java_api::java::util::ListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_RES_XPATHERRORRESOURCES_FR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_RES_XPATHERRORRESOURCES_FR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_RES_XPATHERRORRESOURCES_FR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::res::XPATHErrorResources_fr : public jni::object_base<"com/sun/org/apache/xpath/internal/res/XPATHErrorResources_fr",
	java::util::ListResourceBundle>
{
public:

	static jni::ref<java::lang::String> ERROR0000() { return get_static_field<"ERROR0000", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CURRENT_NOT_ALLOWED_IN_MATCH() { return get_static_field<"ER_CURRENT_NOT_ALLOWED_IN_MATCH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CURRENT_TAKES_NO_ARGS() { return get_static_field<"ER_CURRENT_TAKES_NO_ARGS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_DOCUMENT_REPLACED() { return get_static_field<"ER_DOCUMENT_REPLACED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CONTEXT_HAS_NO_OWNERDOC() { return get_static_field<"ER_CONTEXT_HAS_NO_OWNERDOC", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_LOCALNAME_HAS_TOO_MANY_ARGS() { return get_static_field<"ER_LOCALNAME_HAS_TOO_MANY_ARGS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NAMESPACEURI_HAS_TOO_MANY_ARGS() { return get_static_field<"ER_NAMESPACEURI_HAS_TOO_MANY_ARGS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS() { return get_static_field<"ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NUMBER_HAS_TOO_MANY_ARGS() { return get_static_field<"ER_NUMBER_HAS_TOO_MANY_ARGS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NAME_HAS_TOO_MANY_ARGS() { return get_static_field<"ER_NAME_HAS_TOO_MANY_ARGS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_STRING_HAS_TOO_MANY_ARGS() { return get_static_field<"ER_STRING_HAS_TOO_MANY_ARGS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_STRINGLENGTH_HAS_TOO_MANY_ARGS() { return get_static_field<"ER_STRINGLENGTH_HAS_TOO_MANY_ARGS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_TRANSLATE_TAKES_3_ARGS() { return get_static_field<"ER_TRANSLATE_TAKES_3_ARGS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_UNPARSEDENTITYURI_TAKES_1_ARG() { return get_static_field<"ER_UNPARSEDENTITYURI_TAKES_1_ARG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NAMESPACEAXIS_NOT_IMPLEMENTED() { return get_static_field<"ER_NAMESPACEAXIS_NOT_IMPLEMENTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_UNKNOWN_AXIS() { return get_static_field<"ER_UNKNOWN_AXIS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_UNKNOWN_MATCH_OPERATION() { return get_static_field<"ER_UNKNOWN_MATCH_OPERATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_INCORRECT_ARG_LENGTH() { return get_static_field<"ER_INCORRECT_ARG_LENGTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CANT_CONVERT_TO_NUMBER() { return get_static_field<"ER_CANT_CONVERT_TO_NUMBER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER() { return get_static_field<"ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CANT_CONVERT_TO_NODELIST() { return get_static_field<"ER_CANT_CONVERT_TO_NODELIST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CANT_CONVERT_TO_MUTABLENODELIST() { return get_static_field<"ER_CANT_CONVERT_TO_MUTABLENODELIST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CANT_CONVERT_TO_TYPE() { return get_static_field<"ER_CANT_CONVERT_TO_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_EXPECTED_MATCH_PATTERN() { return get_static_field<"ER_EXPECTED_MATCH_PATTERN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_COULDNOT_GET_VAR_NAMED() { return get_static_field<"ER_COULDNOT_GET_VAR_NAMED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_UNKNOWN_OPCODE() { return get_static_field<"ER_UNKNOWN_OPCODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_EXTRA_ILLEGAL_TOKENS() { return get_static_field<"ER_EXTRA_ILLEGAL_TOKENS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_EXPECTED_DOUBLE_QUOTE() { return get_static_field<"ER_EXPECTED_DOUBLE_QUOTE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_EXPECTED_SINGLE_QUOTE() { return get_static_field<"ER_EXPECTED_SINGLE_QUOTE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_EMPTY_EXPRESSION() { return get_static_field<"ER_EMPTY_EXPRESSION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_EXPECTED_BUT_FOUND() { return get_static_field<"ER_EXPECTED_BUT_FOUND", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_INCORRECT_PROGRAMMER_ASSERTION() { return get_static_field<"ER_INCORRECT_PROGRAMMER_ASSERTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL() { return get_static_field<"ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG() { return get_static_field<"ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG() { return get_static_field<"ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_PREDICATE_ILLEGAL_SYNTAX() { return get_static_field<"ER_PREDICATE_ILLEGAL_SYNTAX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_PREDICATE_TOO_MANY_OPEN() { return get_static_field<"ER_PREDICATE_TOO_MANY_OPEN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_COMPILATION_TOO_MANY_OPERATION() { return get_static_field<"ER_COMPILATION_TOO_MANY_OPERATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_ILLEGAL_AXIS_NAME() { return get_static_field<"ER_ILLEGAL_AXIS_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_UNKNOWN_NODETYPE() { return get_static_field<"ER_UNKNOWN_NODETYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_PATTERN_LITERAL_NEEDS_BE_QUOTED() { return get_static_field<"ER_PATTERN_LITERAL_NEEDS_BE_QUOTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_COULDNOT_BE_FORMATTED_TO_NUMBER() { return get_static_field<"ER_COULDNOT_BE_FORMATTED_TO_NUMBER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_COULDNOT_CREATE_XMLPROCESSORLIAISON() { return get_static_field<"ER_COULDNOT_CREATE_XMLPROCESSORLIAISON", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_DIDNOT_FIND_XPATH_SELECT_EXP() { return get_static_field<"ER_DIDNOT_FIND_XPATH_SELECT_EXP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH() { return get_static_field<"ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_ERROR_OCCURED() { return get_static_field<"ER_ERROR_OCCURED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_ILLEGAL_VARIABLE_REFERENCE() { return get_static_field<"ER_ILLEGAL_VARIABLE_REFERENCE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_AXES_NOT_ALLOWED() { return get_static_field<"ER_AXES_NOT_ALLOWED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_KEY_HAS_TOO_MANY_ARGS() { return get_static_field<"ER_KEY_HAS_TOO_MANY_ARGS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_COUNT_TAKES_1_ARG() { return get_static_field<"ER_COUNT_TAKES_1_ARG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_COULDNOT_FIND_FUNCTION() { return get_static_field<"ER_COULDNOT_FIND_FUNCTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_UNSUPPORTED_ENCODING() { return get_static_field<"ER_UNSUPPORTED_ENCODING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_PROBLEM_IN_DTM_NEXTSIBLING() { return get_static_field<"ER_PROBLEM_IN_DTM_NEXTSIBLING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL() { return get_static_field<"ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_SETDOMFACTORY_NOT_SUPPORTED() { return get_static_field<"ER_SETDOMFACTORY_NOT_SUPPORTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_PREFIX_MUST_RESOLVE() { return get_static_field<"ER_PREFIX_MUST_RESOLVE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_PARSE_NOT_SUPPORTED() { return get_static_field<"ER_PARSE_NOT_SUPPORTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_SAX_API_NOT_HANDLED() { return get_static_field<"ER_SAX_API_NOT_HANDLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_IGNORABLE_WHITESPACE_NOT_HANDLED() { return get_static_field<"ER_IGNORABLE_WHITESPACE_NOT_HANDLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_DTM_CANNOT_HANDLE_NODES() { return get_static_field<"ER_DTM_CANNOT_HANDLE_NODES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_XERCES_CANNOT_HANDLE_NODES() { return get_static_field<"ER_XERCES_CANNOT_HANDLE_NODES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_XERCES_PARSE_ERROR_DETAILS() { return get_static_field<"ER_XERCES_PARSE_ERROR_DETAILS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_XERCES_PARSE_ERROR() { return get_static_field<"ER_XERCES_PARSE_ERROR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_INVALID_UTF16_SURROGATE() { return get_static_field<"ER_INVALID_UTF16_SURROGATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_OIERROR() { return get_static_field<"ER_OIERROR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CANNOT_CREATE_URL() { return get_static_field<"ER_CANNOT_CREATE_URL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_XPATH_READOBJECT() { return get_static_field<"ER_XPATH_READOBJECT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_FUNCTION_TOKEN_NOT_FOUND() { return get_static_field<"ER_FUNCTION_TOKEN_NOT_FOUND", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CANNOT_DEAL_XPATH_TYPE() { return get_static_field<"ER_CANNOT_DEAL_XPATH_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NODESET_NOT_MUTABLE() { return get_static_field<"ER_NODESET_NOT_MUTABLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NODESETDTM_NOT_MUTABLE() { return get_static_field<"ER_NODESETDTM_NOT_MUTABLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_VAR_NOT_RESOLVABLE() { return get_static_field<"ER_VAR_NOT_RESOLVABLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NULL_ERROR_HANDLER() { return get_static_field<"ER_NULL_ERROR_HANDLER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_PROG_ASSERT_UNKNOWN_OPCODE() { return get_static_field<"ER_PROG_ASSERT_UNKNOWN_OPCODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_ZERO_OR_ONE() { return get_static_field<"ER_ZERO_OR_ONE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER() { return get_static_field<"ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER() { return get_static_field<"ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS() { return get_static_field<"ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_COULD_NOT_FIND_VAR() { return get_static_field<"ER_COULD_NOT_FIND_VAR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING() { return get_static_field<"ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_FASTSTRINGBUFFER_CANNOT_BE_NULL() { return get_static_field<"ER_FASTSTRINGBUFFER_CANNOT_BE_NULL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_TWO_OR_THREE() { return get_static_field<"ER_TWO_OR_THREE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_VARIABLE_ACCESSED_BEFORE_BIND() { return get_static_field<"ER_VARIABLE_ACCESSED_BEFORE_BIND", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_FSB_CANNOT_TAKE_STRING() { return get_static_field<"ER_FSB_CANNOT_TAKE_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_SETTING_WALKER_ROOT_TO_NULL() { return get_static_field<"ER_SETTING_WALKER_ROOT_TO_NULL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NODESETDTM_CANNOT_ITERATE() { return get_static_field<"ER_NODESETDTM_CANNOT_ITERATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NODESET_CANNOT_ITERATE() { return get_static_field<"ER_NODESET_CANNOT_ITERATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NODESETDTM_CANNOT_INDEX() { return get_static_field<"ER_NODESETDTM_CANNOT_INDEX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NODESET_CANNOT_INDEX() { return get_static_field<"ER_NODESET_CANNOT_INDEX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CANNOT_CALL_SETSHOULDCACHENODE() { return get_static_field<"ER_CANNOT_CALL_SETSHOULDCACHENODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_ONLY_ALLOWS() { return get_static_field<"ER_ONLY_ALLOWS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_UNKNOWN_STEP() { return get_static_field<"ER_UNKNOWN_STEP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_EXPECTED_REL_LOC_PATH() { return get_static_field<"ER_EXPECTED_REL_LOC_PATH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_EXPECTED_LOC_PATH() { return get_static_field<"ER_EXPECTED_LOC_PATH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_EXPECTED_LOC_PATH_AT_END_EXPR() { return get_static_field<"ER_EXPECTED_LOC_PATH_AT_END_EXPR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_EXPECTED_LOC_STEP() { return get_static_field<"ER_EXPECTED_LOC_STEP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_EXPECTED_NODE_TEST() { return get_static_field<"ER_EXPECTED_NODE_TEST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_EXPECTED_STEP_PATTERN() { return get_static_field<"ER_EXPECTED_STEP_PATTERN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_EXPECTED_REL_PATH_PATTERN() { return get_static_field<"ER_EXPECTED_REL_PATH_PATTERN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CANT_CONVERT_TO_BOOLEAN() { return get_static_field<"ER_CANT_CONVERT_TO_BOOLEAN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CANT_CONVERT_TO_SINGLENODE() { return get_static_field<"ER_CANT_CONVERT_TO_SINGLENODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CANT_GET_SNAPSHOT_LENGTH() { return get_static_field<"ER_CANT_GET_SNAPSHOT_LENGTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NON_ITERATOR_TYPE() { return get_static_field<"ER_NON_ITERATOR_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_DOC_MUTATED() { return get_static_field<"ER_DOC_MUTATED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_INVALID_XPATH_TYPE() { return get_static_field<"ER_INVALID_XPATH_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_EMPTY_XPATH_RESULT() { return get_static_field<"ER_EMPTY_XPATH_RESULT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_INCOMPATIBLE_TYPES() { return get_static_field<"ER_INCOMPATIBLE_TYPES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NULL_RESOLVER() { return get_static_field<"ER_NULL_RESOLVER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_CANT_CONVERT_TO_STRING() { return get_static_field<"ER_CANT_CONVERT_TO_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NON_SNAPSHOT_TYPE() { return get_static_field<"ER_NON_SNAPSHOT_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_WRONG_DOCUMENT() { return get_static_field<"ER_WRONG_DOCUMENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_WRONG_NODETYPE() { return get_static_field<"ER_WRONG_NODETYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_XPATH_ERROR() { return get_static_field<"ER_XPATH_ERROR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED() { return get_static_field<"ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_RESOLVE_VARIABLE_RETURNS_NULL() { return get_static_field<"ER_RESOLVE_VARIABLE_RETURNS_NULL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_UNSUPPORTED_RETURN_TYPE() { return get_static_field<"ER_UNSUPPORTED_RETURN_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL() { return get_static_field<"ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_ARG_CANNOT_BE_NULL() { return get_static_field<"ER_ARG_CANNOT_BE_NULL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_OBJECT_MODEL_NULL() { return get_static_field<"ER_OBJECT_MODEL_NULL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_OBJECT_MODEL_EMPTY() { return get_static_field<"ER_OBJECT_MODEL_EMPTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_FEATURE_NAME_NULL() { return get_static_field<"ER_FEATURE_NAME_NULL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_FEATURE_UNKNOWN() { return get_static_field<"ER_FEATURE_UNKNOWN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_GETTING_NULL_FEATURE() { return get_static_field<"ER_GETTING_NULL_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_GETTING_UNKNOWN_FEATURE() { return get_static_field<"ER_GETTING_UNKNOWN_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_SECUREPROCESSING_FEATURE() { return get_static_field<"ER_SECUREPROCESSING_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NULL_XPATH_FUNCTION_RESOLVER() { return get_static_field<"ER_NULL_XPATH_FUNCTION_RESOLVER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NULL_XPATH_VARIABLE_RESOLVER() { return get_static_field<"ER_NULL_XPATH_VARIABLE_RESOLVER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WG_LOCALE_NAME_NOT_HANDLED() { return get_static_field<"WG_LOCALE_NAME_NOT_HANDLED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WG_PROPERTY_NOT_SUPPORTED() { return get_static_field<"WG_PROPERTY_NOT_SUPPORTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WG_DONT_DO_ANYTHING_WITH_NS() { return get_static_field<"WG_DONT_DO_ANYTHING_WITH_NS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WG_SECURITY_EXCEPTION() { return get_static_field<"WG_SECURITY_EXCEPTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WG_QUO_NO_LONGER_DEFINED() { return get_static_field<"WG_QUO_NO_LONGER_DEFINED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST() { return get_static_field<"WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WG_FUNCTION_TOKEN_NOT_FOUND() { return get_static_field<"WG_FUNCTION_TOKEN_NOT_FOUND", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WG_COULDNOT_FIND_FUNCTION() { return get_static_field<"WG_COULDNOT_FIND_FUNCTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WG_CANNOT_MAKE_URL_FROM() { return get_static_field<"WG_CANNOT_MAKE_URL_FROM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WG_EXPAND_ENTITIES_NOT_SUPPORTED() { return get_static_field<"WG_EXPAND_ENTITIES_NOT_SUPPORTED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WG_ILLEGAL_VARIABLE_REFERENCE() { return get_static_field<"WG_ILLEGAL_VARIABLE_REFERENCE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WG_UNSUPPORTED_ENCODING() { return get_static_field<"WG_UNSUPPORTED_ENCODING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER() { return get_static_field<"ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER() { return get_static_field<"ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER() { return get_static_field<"ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER() { return get_static_field<"ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BAD_CODE() { return get_static_field<"BAD_CODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FORMAT_FAILED() { return get_static_field<"FORMAT_FAILED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ERROR_RESOURCES() { return get_static_field<"ERROR_RESOURCES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ERROR_STRING() { return get_static_field<"ERROR_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ERROR_HEADER() { return get_static_field<"ERROR_HEADER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WARNING_HEADER() { return get_static_field<"WARNING_HEADER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XSL_HEADER() { return get_static_field<"XSL_HEADER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XML_HEADER() { return get_static_field<"XML_HEADER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> QUERY_HEADER() { return get_static_field<"QUERY_HEADER", jni::ref<java::lang::String>>(); }

	static jni::ref<com::sun::org::apache::xpath::internal::res::XPATHErrorResources_fr> new_object() { return base_::new_object(); }
	jni::ref<jni::array<jni::array<java::lang::Object>>> getContents() { return call_method<"getContents", jni::ref<jni::array<jni::array<java::lang::Object>>>>(); }

protected:

	XPATHErrorResources_fr(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_RES_XPATHERRORRESOURCES_FR
