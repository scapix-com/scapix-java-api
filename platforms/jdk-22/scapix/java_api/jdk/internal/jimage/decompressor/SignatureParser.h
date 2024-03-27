// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_DECOMPRESSOR_SIGNATUREPARSER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_DECOMPRESSOR_SIGNATUREPARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::jimage::decompressor { class SignatureParser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::jimage::decompressor::SignatureParser>
{
	static constexpr fixed_string class_name = "jdk/internal/jimage/decompressor/SignatureParser";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_DECOMPRESSOR_SIGNATUREPARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_DECOMPRESSOR_SIGNATUREPARSER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_DECOMPRESSOR_SIGNATUREPARSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/jdk/internal/jimage/decompressor/SignatureParser_ParseResult.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::jimage::decompressor::SignatureParser : public jni::object_base<"jdk/internal/jimage/decompressor/SignatureParser",
	java::lang::Object>
{
public:

	using ParseResult = SignatureParser_ParseResult;

	static jni::ref<java::lang::String> reconstruct(jni::ref<java::lang::String> formatted, jni::ref<java::util::List> arguments) { return call_static_method<"reconstruct", jni::ref<java::lang::String>>(formatted, arguments); }
	static jni::ref<jdk::internal::jimage::decompressor::SignatureParser_ParseResult> parseSignatureDescriptor(jni::ref<java::lang::String> str) { return call_static_method<"parseSignatureDescriptor", jni::ref<jdk::internal::jimage::decompressor::SignatureParser_ParseResult>>(str); }

protected:

	SignatureParser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_DECOMPRESSOR_SIGNATUREPARSER
