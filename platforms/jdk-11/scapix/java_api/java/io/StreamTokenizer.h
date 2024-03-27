// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_STREAMTOKENIZER_FWD
#define SCAPIX_JAVA_API_JAVA_IO_STREAMTOKENIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class StreamTokenizer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::StreamTokenizer>
{
	static constexpr fixed_string class_name = "java/io/StreamTokenizer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_STREAMTOKENIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_STREAMTOKENIZER)
#define SCAPIX_JAVA_API_JAVA_IO_STREAMTOKENIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/Reader.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::StreamTokenizer : public jni::object_base<"java/io/StreamTokenizer",
	java::lang::Object>
{
public:

	jint ttype() { return get_field<"ttype", jint>(); }
	void ttype(jint v) { set_field<"ttype", jint>(v); }
	static jint TT_EOF() { return get_static_field<"TT_EOF", jint>(); }
	static jint TT_EOL() { return get_static_field<"TT_EOL", jint>(); }
	static jint TT_NUMBER() { return get_static_field<"TT_NUMBER", jint>(); }
	static jint TT_WORD() { return get_static_field<"TT_WORD", jint>(); }
	jni::ref<java::lang::String> sval() { return get_field<"sval", jni::ref<java::lang::String>>(); }
	void sval(jni::ref<java::lang::String> v) { set_field<"sval", jni::ref<java::lang::String>>(v); }
	jdouble nval() { return get_field<"nval", jdouble>(); }
	void nval(jdouble v) { set_field<"nval", jdouble>(v); }

	static jni::ref<java::io::StreamTokenizer> new_object(jni::ref<java::io::InputStream> is) { return base_::new_object(is); }
	static jni::ref<java::io::StreamTokenizer> new_object(jni::ref<java::io::Reader> r) { return base_::new_object(r); }
	void resetSyntax() { return call_method<"resetSyntax", void>(); }
	void wordChars(jint low, jint hi) { return call_method<"wordChars", void>(low, hi); }
	void whitespaceChars(jint low, jint hi) { return call_method<"whitespaceChars", void>(low, hi); }
	void ordinaryChars(jint low, jint hi) { return call_method<"ordinaryChars", void>(low, hi); }
	void ordinaryChar(jint ch) { return call_method<"ordinaryChar", void>(ch); }
	void commentChar(jint ch) { return call_method<"commentChar", void>(ch); }
	void quoteChar(jint ch) { return call_method<"quoteChar", void>(ch); }
	void parseNumbers() { return call_method<"parseNumbers", void>(); }
	void eolIsSignificant(jboolean flag) { return call_method<"eolIsSignificant", void>(flag); }
	void slashStarComments(jboolean flag) { return call_method<"slashStarComments", void>(flag); }
	void slashSlashComments(jboolean flag) { return call_method<"slashSlashComments", void>(flag); }
	void lowerCaseMode(jboolean fl) { return call_method<"lowerCaseMode", void>(fl); }
	jint nextToken() { return call_method<"nextToken", jint>(); }
	void pushBack() { return call_method<"pushBack", void>(); }
	jint lineno() { return call_method<"lineno", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	StreamTokenizer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_STREAMTOKENIZER
