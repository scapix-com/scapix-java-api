// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_PARSER_DTDCONSTANTS_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_PARSER_DTDCONSTANTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html::parser { class DTDConstants; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::parser::DTDConstants>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/parser/DTDConstants";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_PARSER_DTDCONSTANTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_PARSER_DTDCONSTANTS)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_PARSER_DTDCONSTANTS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::html::parser::DTDConstants : public jni::object_base<"javax/swing/text/html/parser/DTDConstants",
	java::lang::Object>
{
public:

	static jint CDATA() { return get_static_field<"CDATA", jint>(); }
	static jint ENTITY() { return get_static_field<"ENTITY", jint>(); }
	static jint ENTITIES() { return get_static_field<"ENTITIES", jint>(); }
	static jint ID() { return get_static_field<"ID", jint>(); }
	static jint IDREF() { return get_static_field<"IDREF", jint>(); }
	static jint IDREFS() { return get_static_field<"IDREFS", jint>(); }
	static jint NAME() { return get_static_field<"NAME", jint>(); }
	static jint NAMES() { return get_static_field<"NAMES", jint>(); }
	static jint NMTOKEN() { return get_static_field<"NMTOKEN", jint>(); }
	static jint NMTOKENS() { return get_static_field<"NMTOKENS", jint>(); }
	static jint NOTATION() { return get_static_field<"NOTATION", jint>(); }
	static jint NUMBER() { return get_static_field<"NUMBER", jint>(); }
	static jint NUMBERS() { return get_static_field<"NUMBERS", jint>(); }
	static jint NUTOKEN() { return get_static_field<"NUTOKEN", jint>(); }
	static jint NUTOKENS() { return get_static_field<"NUTOKENS", jint>(); }
	static jint RCDATA() { return get_static_field<"RCDATA", jint>(); }
	static jint EMPTY() { return get_static_field<"EMPTY", jint>(); }
	static jint MODEL() { return get_static_field<"MODEL", jint>(); }
	static jint ANY() { return get_static_field<"ANY", jint>(); }
	static jint FIXED() { return get_static_field<"FIXED", jint>(); }
	static jint REQUIRED() { return get_static_field<"REQUIRED", jint>(); }
	static jint CURRENT() { return get_static_field<"CURRENT", jint>(); }
	static jint CONREF() { return get_static_field<"CONREF", jint>(); }
	static jint IMPLIED() { return get_static_field<"IMPLIED", jint>(); }
	static jint PUBLIC() { return get_static_field<"PUBLIC", jint>(); }
	static jint SDATA() { return get_static_field<"SDATA", jint>(); }
	static jint PI() { return get_static_field<"PI", jint>(); }
	static jint STARTTAG() { return get_static_field<"STARTTAG", jint>(); }
	static jint ENDTAG() { return get_static_field<"ENDTAG", jint>(); }
	static jint MS() { return get_static_field<"MS", jint>(); }
	static jint MD() { return get_static_field<"MD", jint>(); }
	static jint SYSTEM() { return get_static_field<"SYSTEM", jint>(); }
	static jint GENERAL() { return get_static_field<"GENERAL", jint>(); }
	static jint DEFAULT() { return get_static_field<"DEFAULT", jint>(); }
	static jint PARAMETER() { return get_static_field<"PARAMETER", jint>(); }


protected:

	DTDConstants(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_PARSER_DTDCONSTANTS
