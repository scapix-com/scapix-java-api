// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Flushable.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_CONSOLE_FWD
#define SCAPIX_JAVA_API_JAVA_IO_CONSOLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class Console; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::Console>
{
	static constexpr fixed_string class_name = "java/io/Console";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Flushable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_CONSOLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_CONSOLE)
#define SCAPIX_JAVA_API_JAVA_IO_CONSOLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/PrintWriter.h>
#include <scapix/java_api/java/io/Reader.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::Console : public jni::object_base<"java/io/Console",
	java::lang::Object,
	java::io::Flushable>
{
public:

	void flush() { return call_method<"flush", void>(); }
	jni::ref<java::io::Console> format(jni::ref<java::lang::String> format, jni::ref<jni::array<java::lang::Object>> args) { return call_method<"format", jni::ref<java::io::Console>>(format, args); }
	jni::ref<java::io::Console> printf(jni::ref<java::lang::String> format, jni::ref<jni::array<java::lang::Object>> args) { return call_method<"printf", jni::ref<java::io::Console>>(format, args); }
	jni::ref<java::io::Reader> reader() { return call_method<"reader", jni::ref<java::io::Reader>>(); }
	jni::ref<java::lang::String> readLine() { return call_method<"readLine", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> readLine(jni::ref<java::lang::String> format, jni::ref<jni::array<java::lang::Object>> args) { return call_method<"readLine", jni::ref<java::lang::String>>(format, args); }
	jni::ref<jni::array<jchar>> readPassword() { return call_method<"readPassword", jni::ref<jni::array<jchar>>>(); }
	jni::ref<jni::array<jchar>> readPassword(jni::ref<java::lang::String> format, jni::ref<jni::array<java::lang::Object>> args) { return call_method<"readPassword", jni::ref<jni::array<jchar>>>(format, args); }
	jni::ref<java::io::PrintWriter> writer() { return call_method<"writer", jni::ref<java::io::PrintWriter>>(); }

protected:

	Console(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_CONSOLE
