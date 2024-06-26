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
#include <scapix/java_api/java/nio/charset/Charset.h>
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
	static jni::ref<java::io::PrintStream> new_object(jni::ref<java::io::OutputStream> out, jboolean autoFlush, jni::ref<java::lang::String> encoding) { return base_::new_object(out, autoFlush, encoding); }
	static jni::ref<java::io::PrintStream> new_object(jni::ref<java::io::OutputStream> out, jboolean autoFlush, jni::ref<java::nio::charset::Charset> charset) { return base_::new_object(out, autoFlush, charset); }
	static jni::ref<java::io::PrintStream> new_object(jni::ref<java::lang::String> fileName) { return base_::new_object(fileName); }
	static jni::ref<java::io::PrintStream> new_object(jni::ref<java::lang::String> fileName, jni::ref<java::lang::String> csn) { return base_::new_object(fileName, csn); }
	static jni::ref<java::io::PrintStream> new_object(jni::ref<java::lang::String> fileName, jni::ref<java::nio::charset::Charset> charset) { return base_::new_object(fileName, charset); }
	static jni::ref<java::io::PrintStream> new_object(jni::ref<java::io::File> file) { return base_::new_object(file); }
	static jni::ref<java::io::PrintStream> new_object(jni::ref<java::io::File> file, jni::ref<java::lang::String> csn) { return base_::new_object(file, csn); }
	static jni::ref<java::io::PrintStream> new_object(jni::ref<java::io::File> file, jni::ref<java::nio::charset::Charset> charset) { return base_::new_object(file, charset); }
	void flush() { return call_method<"flush", void>(); }
	void close() { return call_method<"close", void>(); }
	jboolean checkError() { return call_method<"checkError", jboolean>(); }
	void write(jint b) { return call_method<"write", void>(b); }
	void write(jni::ref<jni::array<jbyte>> buf, jint off, jint len) { return call_method<"write", void>(buf, off, len); }
	void write(jni::ref<jni::array<jbyte>> buf) { return call_method<"write", void>(buf); }
	void writeBytes(jni::ref<jni::array<jbyte>> buf) { return call_method<"writeBytes", void>(buf); }
	void print(jboolean b) { return call_method<"print", void>(b); }
	void print(jchar c) { return call_method<"print", void>(c); }
	void print(jint i) { return call_method<"print", void>(i); }
	void print(jlong l) { return call_method<"print", void>(l); }
	void print(jfloat f) { return call_method<"print", void>(f); }
	void print(jdouble d) { return call_method<"print", void>(d); }
	void print(jni::ref<jni::array<jchar>> s) { return call_method<"print", void>(s); }
	void print(jni::ref<java::lang::String> s) { return call_method<"print", void>(s); }
	void print(jni::ref<java::lang::Object> obj) { return call_method<"print", void>(obj); }
	void println() { return call_method<"println", void>(); }
	void println(jboolean x) { return call_method<"println", void>(x); }
	void println(jchar x) { return call_method<"println", void>(x); }
	void println(jint x) { return call_method<"println", void>(x); }
	void println(jlong x) { return call_method<"println", void>(x); }
	void println(jfloat x) { return call_method<"println", void>(x); }
	void println(jdouble x) { return call_method<"println", void>(x); }
	void println(jni::ref<jni::array<jchar>> x) { return call_method<"println", void>(x); }
	void println(jni::ref<java::lang::String> x) { return call_method<"println", void>(x); }
	void println(jni::ref<java::lang::Object> x) { return call_method<"println", void>(x); }
	jni::ref<java::io::PrintStream> printf(jni::ref<java::lang::String> format, jni::ref<jni::array<java::lang::Object>> args) { return call_method<"printf", jni::ref<java::io::PrintStream>>(format, args); }
	jni::ref<java::io::PrintStream> printf(jni::ref<java::util::Locale> l, jni::ref<java::lang::String> format, jni::ref<jni::array<java::lang::Object>> args) { return call_method<"printf", jni::ref<java::io::PrintStream>>(l, format, args); }
	jni::ref<java::io::PrintStream> format(jni::ref<java::lang::String> format, jni::ref<jni::array<java::lang::Object>> args) { return call_method<"format", jni::ref<java::io::PrintStream>>(format, args); }
	jni::ref<java::io::PrintStream> format(jni::ref<java::util::Locale> l, jni::ref<java::lang::String> format, jni::ref<jni::array<java::lang::Object>> args) { return call_method<"format", jni::ref<java::io::PrintStream>>(l, format, args); }
	jni::ref<java::io::PrintStream> append(jni::ref<java::lang::CharSequence> csq) { return call_method<"append", jni::ref<java::io::PrintStream>>(csq); }
	jni::ref<java::io::PrintStream> append(jni::ref<java::lang::CharSequence> csq, jint start, jint end) { return call_method<"append", jni::ref<java::io::PrintStream>>(csq, start, end); }
	jni::ref<java::io::PrintStream> append(jchar c) { return call_method<"append", jni::ref<java::io::PrintStream>>(c); }

protected:

	PrintStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_PRINTSTREAM
