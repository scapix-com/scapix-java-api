// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_SCHEMASYMBOLS_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_SCHEMASYMBOLS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs { class SchemaSymbols; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_SCHEMASYMBOLS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_SCHEMASYMBOLS)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_SCHEMASYMBOLS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> URI_XSI() { return get_static_field<"URI_XSI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XSI_SCHEMALOCATION() { return get_static_field<"XSI_SCHEMALOCATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XSI_NONAMESPACESCHEMALOCATION() { return get_static_field<"XSI_NONAMESPACESCHEMALOCATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XSI_TYPE() { return get_static_field<"XSI_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XSI_NIL() { return get_static_field<"XSI_NIL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> URI_SCHEMAFORSCHEMA() { return get_static_field<"URI_SCHEMAFORSCHEMA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_ALL() { return get_static_field<"ELT_ALL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_ANNOTATION() { return get_static_field<"ELT_ANNOTATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_ANY() { return get_static_field<"ELT_ANY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_ANYATTRIBUTE() { return get_static_field<"ELT_ANYATTRIBUTE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_APPINFO() { return get_static_field<"ELT_APPINFO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_ATTRIBUTE() { return get_static_field<"ELT_ATTRIBUTE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_ATTRIBUTEGROUP() { return get_static_field<"ELT_ATTRIBUTEGROUP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_CHOICE() { return get_static_field<"ELT_CHOICE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_COMPLEXCONTENT() { return get_static_field<"ELT_COMPLEXCONTENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_COMPLEXTYPE() { return get_static_field<"ELT_COMPLEXTYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_DOCUMENTATION() { return get_static_field<"ELT_DOCUMENTATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_ELEMENT() { return get_static_field<"ELT_ELEMENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_ENUMERATION() { return get_static_field<"ELT_ENUMERATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_EXTENSION() { return get_static_field<"ELT_EXTENSION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_FIELD() { return get_static_field<"ELT_FIELD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_FRACTIONDIGITS() { return get_static_field<"ELT_FRACTIONDIGITS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_GROUP() { return get_static_field<"ELT_GROUP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_IMPORT() { return get_static_field<"ELT_IMPORT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_INCLUDE() { return get_static_field<"ELT_INCLUDE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_KEY() { return get_static_field<"ELT_KEY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_KEYREF() { return get_static_field<"ELT_KEYREF", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_LENGTH() { return get_static_field<"ELT_LENGTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_LIST() { return get_static_field<"ELT_LIST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_MAXEXCLUSIVE() { return get_static_field<"ELT_MAXEXCLUSIVE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_MAXINCLUSIVE() { return get_static_field<"ELT_MAXINCLUSIVE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_MAXLENGTH() { return get_static_field<"ELT_MAXLENGTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_MINEXCLUSIVE() { return get_static_field<"ELT_MINEXCLUSIVE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_MININCLUSIVE() { return get_static_field<"ELT_MININCLUSIVE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_MINLENGTH() { return get_static_field<"ELT_MINLENGTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_NOTATION() { return get_static_field<"ELT_NOTATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_PATTERN() { return get_static_field<"ELT_PATTERN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_REDEFINE() { return get_static_field<"ELT_REDEFINE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_RESTRICTION() { return get_static_field<"ELT_RESTRICTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_SCHEMA() { return get_static_field<"ELT_SCHEMA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_SELECTOR() { return get_static_field<"ELT_SELECTOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_SEQUENCE() { return get_static_field<"ELT_SEQUENCE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_SIMPLECONTENT() { return get_static_field<"ELT_SIMPLECONTENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_SIMPLETYPE() { return get_static_field<"ELT_SIMPLETYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_TOTALDIGITS() { return get_static_field<"ELT_TOTALDIGITS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_UNION() { return get_static_field<"ELT_UNION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_UNIQUE() { return get_static_field<"ELT_UNIQUE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ELT_WHITESPACE() { return get_static_field<"ELT_WHITESPACE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_ABSTRACT() { return get_static_field<"ATT_ABSTRACT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_ATTRIBUTEFORMDEFAULT() { return get_static_field<"ATT_ATTRIBUTEFORMDEFAULT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_BASE() { return get_static_field<"ATT_BASE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_BLOCK() { return get_static_field<"ATT_BLOCK", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_BLOCKDEFAULT() { return get_static_field<"ATT_BLOCKDEFAULT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_DEFAULT() { return get_static_field<"ATT_DEFAULT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_ELEMENTFORMDEFAULT() { return get_static_field<"ATT_ELEMENTFORMDEFAULT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_FINAL() { return get_static_field<"ATT_FINAL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_FINALDEFAULT() { return get_static_field<"ATT_FINALDEFAULT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_FIXED() { return get_static_field<"ATT_FIXED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_FORM() { return get_static_field<"ATT_FORM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_ID() { return get_static_field<"ATT_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_ITEMTYPE() { return get_static_field<"ATT_ITEMTYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_MAXOCCURS() { return get_static_field<"ATT_MAXOCCURS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_MEMBERTYPES() { return get_static_field<"ATT_MEMBERTYPES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_MINOCCURS() { return get_static_field<"ATT_MINOCCURS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_MIXED() { return get_static_field<"ATT_MIXED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_NAME() { return get_static_field<"ATT_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_NAMESPACE() { return get_static_field<"ATT_NAMESPACE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_NILLABLE() { return get_static_field<"ATT_NILLABLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_PROCESSCONTENTS() { return get_static_field<"ATT_PROCESSCONTENTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_REF() { return get_static_field<"ATT_REF", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_REFER() { return get_static_field<"ATT_REFER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_SCHEMALOCATION() { return get_static_field<"ATT_SCHEMALOCATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_SOURCE() { return get_static_field<"ATT_SOURCE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_SUBSTITUTIONGROUP() { return get_static_field<"ATT_SUBSTITUTIONGROUP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_SYSTEM() { return get_static_field<"ATT_SYSTEM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_PUBLIC() { return get_static_field<"ATT_PUBLIC", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_TARGETNAMESPACE() { return get_static_field<"ATT_TARGETNAMESPACE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_TYPE() { return get_static_field<"ATT_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_USE() { return get_static_field<"ATT_USE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_VALUE() { return get_static_field<"ATT_VALUE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_VERSION() { return get_static_field<"ATT_VERSION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_XML_LANG() { return get_static_field<"ATT_XML_LANG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATT_XPATH() { return get_static_field<"ATT_XPATH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_TWOPOUNDANY() { return get_static_field<"ATTVAL_TWOPOUNDANY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_TWOPOUNDLOCAL() { return get_static_field<"ATTVAL_TWOPOUNDLOCAL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_TWOPOUNDOTHER() { return get_static_field<"ATTVAL_TWOPOUNDOTHER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_TWOPOUNDTARGETNS() { return get_static_field<"ATTVAL_TWOPOUNDTARGETNS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_POUNDALL() { return get_static_field<"ATTVAL_POUNDALL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_FALSE_0() { return get_static_field<"ATTVAL_FALSE_0", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_TRUE_1() { return get_static_field<"ATTVAL_TRUE_1", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_ANYSIMPLETYPE() { return get_static_field<"ATTVAL_ANYSIMPLETYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_ANYTYPE() { return get_static_field<"ATTVAL_ANYTYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_ANYURI() { return get_static_field<"ATTVAL_ANYURI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_BASE64BINARY() { return get_static_field<"ATTVAL_BASE64BINARY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_BOOLEAN() { return get_static_field<"ATTVAL_BOOLEAN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_BYTE() { return get_static_field<"ATTVAL_BYTE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_COLLAPSE() { return get_static_field<"ATTVAL_COLLAPSE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_DATE() { return get_static_field<"ATTVAL_DATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_DATETIME() { return get_static_field<"ATTVAL_DATETIME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_DAY() { return get_static_field<"ATTVAL_DAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_DECIMAL() { return get_static_field<"ATTVAL_DECIMAL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_DOUBLE() { return get_static_field<"ATTVAL_DOUBLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_DURATION() { return get_static_field<"ATTVAL_DURATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_ENTITY() { return get_static_field<"ATTVAL_ENTITY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_ENTITIES() { return get_static_field<"ATTVAL_ENTITIES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_EXTENSION() { return get_static_field<"ATTVAL_EXTENSION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_FALSE() { return get_static_field<"ATTVAL_FALSE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_FLOAT() { return get_static_field<"ATTVAL_FLOAT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_HEXBINARY() { return get_static_field<"ATTVAL_HEXBINARY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_ID() { return get_static_field<"ATTVAL_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_IDREF() { return get_static_field<"ATTVAL_IDREF", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_IDREFS() { return get_static_field<"ATTVAL_IDREFS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_INT() { return get_static_field<"ATTVAL_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_INTEGER() { return get_static_field<"ATTVAL_INTEGER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_LANGUAGE() { return get_static_field<"ATTVAL_LANGUAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_LAX() { return get_static_field<"ATTVAL_LAX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_LIST() { return get_static_field<"ATTVAL_LIST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_LONG() { return get_static_field<"ATTVAL_LONG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_NAME() { return get_static_field<"ATTVAL_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_NEGATIVEINTEGER() { return get_static_field<"ATTVAL_NEGATIVEINTEGER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_MONTH() { return get_static_field<"ATTVAL_MONTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_MONTHDAY() { return get_static_field<"ATTVAL_MONTHDAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_NCNAME() { return get_static_field<"ATTVAL_NCNAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_NMTOKEN() { return get_static_field<"ATTVAL_NMTOKEN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_NMTOKENS() { return get_static_field<"ATTVAL_NMTOKENS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_NONNEGATIVEINTEGER() { return get_static_field<"ATTVAL_NONNEGATIVEINTEGER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_NONPOSITIVEINTEGER() { return get_static_field<"ATTVAL_NONPOSITIVEINTEGER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_NORMALIZEDSTRING() { return get_static_field<"ATTVAL_NORMALIZEDSTRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_NOTATION() { return get_static_field<"ATTVAL_NOTATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_OPTIONAL() { return get_static_field<"ATTVAL_OPTIONAL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_POSITIVEINTEGER() { return get_static_field<"ATTVAL_POSITIVEINTEGER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_PRESERVE() { return get_static_field<"ATTVAL_PRESERVE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_PROHIBITED() { return get_static_field<"ATTVAL_PROHIBITED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_QNAME() { return get_static_field<"ATTVAL_QNAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_QUALIFIED() { return get_static_field<"ATTVAL_QUALIFIED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_REPLACE() { return get_static_field<"ATTVAL_REPLACE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_REQUIRED() { return get_static_field<"ATTVAL_REQUIRED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_RESTRICTION() { return get_static_field<"ATTVAL_RESTRICTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_SHORT() { return get_static_field<"ATTVAL_SHORT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_SKIP() { return get_static_field<"ATTVAL_SKIP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_STRICT() { return get_static_field<"ATTVAL_STRICT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_STRING() { return get_static_field<"ATTVAL_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_SUBSTITUTION() { return get_static_field<"ATTVAL_SUBSTITUTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_TIME() { return get_static_field<"ATTVAL_TIME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_TOKEN() { return get_static_field<"ATTVAL_TOKEN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_TRUE() { return get_static_field<"ATTVAL_TRUE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_UNBOUNDED() { return get_static_field<"ATTVAL_UNBOUNDED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_UNION() { return get_static_field<"ATTVAL_UNION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_UNQUALIFIED() { return get_static_field<"ATTVAL_UNQUALIFIED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_UNSIGNEDBYTE() { return get_static_field<"ATTVAL_UNSIGNEDBYTE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_UNSIGNEDINT() { return get_static_field<"ATTVAL_UNSIGNEDINT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_UNSIGNEDLONG() { return get_static_field<"ATTVAL_UNSIGNEDLONG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_UNSIGNEDSHORT() { return get_static_field<"ATTVAL_UNSIGNEDSHORT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_YEAR() { return get_static_field<"ATTVAL_YEAR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTVAL_YEARMONTH() { return get_static_field<"ATTVAL_YEARMONTH", jni::ref<java::lang::String>>(); }
	static jshort FORM_UNQUALIFIED() { return get_static_field<"FORM_UNQUALIFIED", jshort>(); }
	static jshort FORM_QUALIFIED() { return get_static_field<"FORM_QUALIFIED", jshort>(); }
	static jshort USE_OPTIONAL() { return get_static_field<"USE_OPTIONAL", jshort>(); }
	static jshort USE_REQUIRED() { return get_static_field<"USE_REQUIRED", jshort>(); }
	static jshort USE_PROHIBITED() { return get_static_field<"USE_PROHIBITED", jshort>(); }
	static jint OCCURRENCE_UNBOUNDED() { return get_static_field<"OCCURRENCE_UNBOUNDED", jint>(); }

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols> new_object() { return base_::new_object(); }

protected:

	SchemaSymbols(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_SCHEMASYMBOLS
