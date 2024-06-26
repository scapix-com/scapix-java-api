// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/OutputStream.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_LOG_LOGOUTPUTSTREAM_FWD
#define SCAPIX_JAVA_API_SUN_RMI_LOG_LOGOUTPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::log { class LogOutputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::log::LogOutputStream>
{
	static constexpr fixed_string class_name = "sun/rmi/log/LogOutputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::OutputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_LOG_LOGOUTPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_LOG_LOGOUTPUTSTREAM)
#define SCAPIX_JAVA_API_SUN_RMI_LOG_LOGOUTPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/RandomAccessFile.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::rmi::log::LogOutputStream : public jni::object_base<"sun/rmi/log/LogOutputStream",
	java::io::OutputStream>
{
public:

	static jni::ref<sun::rmi::log::LogOutputStream> new_object(jni::ref<java::io::RandomAccessFile> p1) { return base_::new_object(p1); }
	void write(jint p1) { return call_method<"write", void>(p1); }
	void write(jni::ref<jni::array<jbyte>> p1) { return call_method<"write", void>(p1); }
	void write(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"write", void>(p1, p2, p3); }
	void close() { return call_method<"close", void>(); }

protected:

	LogOutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_LOG_LOGOUTPUTSTREAM
