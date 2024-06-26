// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterOutputStream.h>
#include <scapix/java_api/java/lang/Appendable.h>
#include <scapix/java_api/java/io/Closeable.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_PRINTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_IO_PRINTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class PrintStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::PrintStream>
{
	static constexpr fixed_string class_name = "java/io/PrintStream";
	using base_classes = std::tuple<scapix::java_api::java::io::FilterOutputStream, scapix::java_api::java::lang::Appendable, scapix::java_api::java::io::Closeable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_PRINTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_PRINTSTREAM)
#define SCAPIX_JAVA_API_JAVA_IO_PRINTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::PrintStream : public jni::object_base<"java/io/PrintStream",
	java::io::FilterOutputStream,
	java::lang::Appendable,
	java::io::Closeable>
{
public:

	static jni::ref<java::io::PrintStream> new_object(jni::ref<java::io::OutputStream> out) { return base_::new_object(out); }
	static jni::ref<java::io::PrintStream> new_object(jni::ref<java::io::OutputStream> out, jboolean autoFlush) { return base_::new_object(out, autoFlush); }
	static jni::ref<java::io::PrintStream> new_object(jni::ref<java::io::OutputStream> out, jboolean autoFlush, jni::ref<java::lang::String> charsetName) { return base_::new_object(out, autoFlush, charsetName); }
	static jni::ref<java::io::PrintStream> new_object(jni::ref<java::io::File> file) { return base_::new_object(file); }
	static jni::ref<java::io::PrintStream> new_object(jni::ref<java::io::File> file, jni::ref<java::lang::String> charsetName) { return base_::new_object(file, charsetName); }
	static jni::ref<java::io::PrintStream> new_object(jni::ref<java::lang::String> fileName) { return base_::new_object(fileName); }
	static jni::ref<java::io::PrintStream> new_object(jni::ref<java::lang::String> fileName, jni::ref<java::lang::String> charsetName) { return base_::new_object(fileName, charsetName); }
	jboolean checkError() { return call_method<"checkError", jboolean>(); }
	void close() { return call_method<"close", void>(); }
	void flush() { return call_method<"flush", void>(); }
	jni::ref<java::io::PrintStream> format(jni::ref<java::lang::String> format, jni::ref<jni::array<java::lang::Object>> args) { return call_method<"format", jni::ref<java::io::PrintStream>>(format, args); }
	jni::ref<java::io::PrintStream> format(jni::ref<java::util::Locale> l, jni::ref<java::lang::String> format, jni::ref<jni::array<java::lang::Object>> args) { return call_method<"format", jni::ref<java::io::PrintStream>>(l, format, args); }
	jni::ref<java::io::PrintStream> printf(jni::ref<java::lang::String> format, jni::ref<jni::array<java::lang::Object>> args) { return call_method<"printf", jni::ref<java::io::PrintStream>>(format, args); }
	jni::ref<java::io::PrintStream> printf(jni::ref<java::util::Locale> l, jni::ref<java::lang::String> format, jni::ref<jni::array<java::lang::Object>> args) { return call_method<"printf", jni::ref<java::io::PrintStream>>(l, format, args); }
	void print(jni::ref<jni::array<jchar>> chars) { return call_method<"print", void>(chars); }
	void print(jchar c) { return call_method<"print", void>(c); }
	void print(jdouble d) { return call_method<"print", void>(d); }
	void print(jfloat f) { return call_method<"print", void>(f); }
	void print(jint i) { return call_method<"print", void>(i); }
	void print(jlong l) { return call_method<"print", void>(l); }
	void print(jni::ref<java::lang::Object> o) { return call_method<"print", void>(o); }
	void print(jni::ref<java::lang::String> str) { return call_method<"print", void>(str); }
	void print(jboolean b) { return call_method<"print", void>(b); }
	void println() { return call_method<"println", void>(); }
	void println(jni::ref<jni::array<jchar>> chars) { return call_method<"println", void>(chars); }
	void println(jchar c) { return call_method<"println", void>(c); }
	void println(jdouble d) { return call_method<"println", void>(d); }
	void println(jfloat f) { return call_method<"println", void>(f); }
	void println(jint i) { return call_method<"println", void>(i); }
	void println(jlong l) { return call_method<"println", void>(l); }
	void println(jni::ref<java::lang::Object> o) { return call_method<"println", void>(o); }
	void println(jni::ref<java::lang::String> str) { return call_method<"println", void>(str); }
	void println(jboolean b) { return call_method<"println", void>(b); }
	void write(jni::ref<jni::array<jbyte>> buffer, jint offset, jint length) { return call_method<"write", void>(buffer, offset, length); }
	void write(jint oneByte) { return call_method<"write", void>(oneByte); }
	jni::ref<java::io::PrintStream> append(jchar c) { return call_method<"append", jni::ref<java::io::PrintStream>>(c); }
	jni::ref<java::io::PrintStream> append(jni::ref<java::lang::CharSequence> charSequence) { return call_method<"append", jni::ref<java::io::PrintStream>>(charSequence); }
	jni::ref<java::io::PrintStream> append(jni::ref<java::lang::CharSequence> charSequence, jint start, jint end) { return call_method<"append", jni::ref<java::io::PrintStream>>(charSequence, start, end); }

protected:

	PrintStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_PRINTSTREAM
