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

	static jni::ref<java::io::PrintStream> new_object(jni::ref<java::io::OutputStream> p1) { return base_::new_object(p1); }
	static jni::ref<java::io::PrintStream> new_object(jni::ref<java::io::OutputStream> p1, jboolean p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::io::PrintStream> new_object(jni::ref<java::io::OutputStream> p1, jboolean p2, jni::ref<java::lang::String> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<java::io::PrintStream> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<java::io::PrintStream> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::io::PrintStream> new_object(jni::ref<java::io::File> p1) { return base_::new_object(p1); }
	static jni::ref<java::io::PrintStream> new_object(jni::ref<java::io::File> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	void flush() { return call_method<"flush", void>(); }
	void close() { return call_method<"close", void>(); }
	jboolean checkError() { return call_method<"checkError", jboolean>(); }
	void write(jint p1) { return call_method<"write", void>(p1); }
	void write(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"write", void>(p1, p2, p3); }
	void print(jboolean p1) { return call_method<"print", void>(p1); }
	void print(jchar p1) { return call_method<"print", void>(p1); }
	void print(jint p1) { return call_method<"print", void>(p1); }
	void print(jlong p1) { return call_method<"print", void>(p1); }
	void print(jfloat p1) { return call_method<"print", void>(p1); }
	void print(jdouble p1) { return call_method<"print", void>(p1); }
	void print(jni::ref<jni::array<jchar>> p1) { return call_method<"print", void>(p1); }
	void print(jni::ref<java::lang::String> p1) { return call_method<"print", void>(p1); }
	void print(jni::ref<java::lang::Object> p1) { return call_method<"print", void>(p1); }
	void println() { return call_method<"println", void>(); }
	void println(jboolean p1) { return call_method<"println", void>(p1); }
	void println(jchar p1) { return call_method<"println", void>(p1); }
	void println(jint p1) { return call_method<"println", void>(p1); }
	void println(jlong p1) { return call_method<"println", void>(p1); }
	void println(jfloat p1) { return call_method<"println", void>(p1); }
	void println(jdouble p1) { return call_method<"println", void>(p1); }
	void println(jni::ref<jni::array<jchar>> p1) { return call_method<"println", void>(p1); }
	void println(jni::ref<java::lang::String> p1) { return call_method<"println", void>(p1); }
	void println(jni::ref<java::lang::Object> p1) { return call_method<"println", void>(p1); }
	jni::ref<java::io::PrintStream> printf(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::Object>> p2) { return call_method<"printf", jni::ref<java::io::PrintStream>>(p1, p2); }
	jni::ref<java::io::PrintStream> printf(jni::ref<java::util::Locale> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<java::lang::Object>> p3) { return call_method<"printf", jni::ref<java::io::PrintStream>>(p1, p2, p3); }
	jni::ref<java::io::PrintStream> format(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::Object>> p2) { return call_method<"format", jni::ref<java::io::PrintStream>>(p1, p2); }
	jni::ref<java::io::PrintStream> format(jni::ref<java::util::Locale> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<java::lang::Object>> p3) { return call_method<"format", jni::ref<java::io::PrintStream>>(p1, p2, p3); }
	jni::ref<java::io::PrintStream> append(jni::ref<java::lang::CharSequence> p1) { return call_method<"append", jni::ref<java::io::PrintStream>>(p1); }
	jni::ref<java::io::PrintStream> append(jni::ref<java::lang::CharSequence> p1, jint p2, jint p3) { return call_method<"append", jni::ref<java::io::PrintStream>>(p1, p2, p3); }
	jni::ref<java::io::PrintStream> append(jchar p1) { return call_method<"append", jni::ref<java::io::PrintStream>>(p1); }

protected:

	PrintStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_PRINTSTREAM
