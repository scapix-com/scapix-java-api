// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/PrintStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_RMI_SERVER_LOGSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_RMI_SERVER_LOGSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::rmi::server { class LogStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::rmi::server::LogStream>
{
	static constexpr fixed_string class_name = "java/rmi/server/LogStream";
	using base_classes = std::tuple<scapix::java_api::java::io::PrintStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_SERVER_LOGSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_RMI_SERVER_LOGSTREAM)
#define SCAPIX_JAVA_API_JAVA_RMI_SERVER_LOGSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::rmi::server::LogStream : public jni::object_base<"java/rmi/server/LogStream",
	java::io::PrintStream>
{
public:

	static jint SILENT() { return get_static_field<"SILENT", jint>(); }
	static jint BRIEF() { return get_static_field<"BRIEF", jint>(); }
	static jint VERBOSE() { return get_static_field<"VERBOSE", jint>(); }

	static jni::ref<java::rmi::server::LogStream> log(jni::ref<java::lang::String> p1) { return call_static_method<"log", jni::ref<java::rmi::server::LogStream>>(p1); }
	static jni::ref<java::io::PrintStream> getDefaultStream() { return call_static_method<"getDefaultStream", jni::ref<java::io::PrintStream>>(); }
	static void setDefaultStream(jni::ref<java::io::PrintStream> p1) { return call_static_method<"setDefaultStream", void>(p1); }
	jni::ref<java::io::OutputStream> getOutputStream() { return call_method<"getOutputStream", jni::ref<java::io::OutputStream>>(); }
	void setOutputStream(jni::ref<java::io::OutputStream> p1) { return call_method<"setOutputStream", void>(p1); }
	void write(jint p1) { return call_method<"write", void>(p1); }
	void write(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"write", void>(p1, p2, p3); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jint parseLevel(jni::ref<java::lang::String> p1) { return call_static_method<"parseLevel", jint>(p1); }

protected:

	LogStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_RMI_SERVER_LOGSTREAM
