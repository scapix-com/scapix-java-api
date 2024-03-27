// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_PARSER_SIGNATUREPARSER_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_PARSER_SIGNATUREPARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect::generics::parser { class SignatureParser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::generics::parser::SignatureParser>
{
	static constexpr fixed_string class_name = "sun/reflect/generics/parser/SignatureParser";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_PARSER_SIGNATUREPARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_PARSER_SIGNATUREPARSER)
#define SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_PARSER_SIGNATUREPARSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/reflect/generics/tree/ClassSignature.h>
#include <scapix/java_api/sun/reflect/generics/tree/MethodTypeSignature.h>
#include <scapix/java_api/sun/reflect/generics/tree/TypeSignature.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::reflect::generics::parser::SignatureParser : public jni::object_base<"sun/reflect/generics/parser/SignatureParser",
	java::lang::Object>
{
public:

	static jni::ref<sun::reflect::generics::parser::SignatureParser> make() { return call_static_method<"make", jni::ref<sun::reflect::generics::parser::SignatureParser>>(); }
	jni::ref<sun::reflect::generics::tree::ClassSignature> parseClassSig(jni::ref<java::lang::String> p1) { return call_method<"parseClassSig", jni::ref<sun::reflect::generics::tree::ClassSignature>>(p1); }
	jni::ref<sun::reflect::generics::tree::MethodTypeSignature> parseMethodSig(jni::ref<java::lang::String> p1) { return call_method<"parseMethodSig", jni::ref<sun::reflect::generics::tree::MethodTypeSignature>>(p1); }
	jni::ref<sun::reflect::generics::tree::TypeSignature> parseTypeSig(jni::ref<java::lang::String> p1) { return call_method<"parseTypeSig", jni::ref<sun::reflect::generics::tree::TypeSignature>>(p1); }

protected:

	SignatureParser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_GENERICS_PARSER_SIGNATUREPARSER