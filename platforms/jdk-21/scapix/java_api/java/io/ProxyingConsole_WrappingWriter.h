// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/PrintWriter.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_PROXYINGCONSOLE_WRAPPINGWRITER_FWD
#define SCAPIX_JAVA_API_JAVA_IO_PROXYINGCONSOLE_WRAPPINGWRITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class ProxyingConsole_WrappingWriter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::ProxyingConsole_WrappingWriter>
{
	static constexpr fixed_string class_name = "java/io/ProxyingConsole$WrappingWriter";
	using base_classes = std::tuple<scapix::java_api::java::io::PrintWriter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_PROXYINGCONSOLE_WRAPPINGWRITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_PROXYINGCONSOLE_WRAPPINGWRITER)
#define SCAPIX_JAVA_API_JAVA_IO_PROXYINGCONSOLE_WRAPPINGWRITER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::ProxyingConsole_WrappingWriter : public jni::object_base<"java/io/ProxyingConsole$WrappingWriter",
	java::io::PrintWriter>
{
public:

	static jni::ref<java::io::ProxyingConsole_WrappingWriter> new_object(jni::ref<java::io::PrintWriter> pw, jni::ref<java::lang::Object> lock) { return base_::new_object(pw, lock); }
	void write(jni::ref<jni::array<jchar>> cbuf, jint off, jint len) { return call_method<"write", void>(cbuf, off, len); }
	void flush() { return call_method<"flush", void>(); }
	void close() { return call_method<"close", void>(); }

protected:

	ProxyingConsole_WrappingWriter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_PROXYINGCONSOLE_WRAPPINGWRITER