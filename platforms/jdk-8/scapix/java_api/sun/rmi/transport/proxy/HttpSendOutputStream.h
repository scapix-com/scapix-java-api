// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterOutputStream.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_HTTPSENDOUTPUTSTREAM_FWD
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_HTTPSENDOUTPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::transport::proxy { class HttpSendOutputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::transport::proxy::HttpSendOutputStream>
{
	static constexpr fixed_string class_name = "sun/rmi/transport/proxy/HttpSendOutputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::FilterOutputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_HTTPSENDOUTPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_HTTPSENDOUTPUTSTREAM)
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_HTTPSENDOUTPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/sun/rmi/transport/proxy/HttpSendSocket.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::rmi::transport::proxy::HttpSendOutputStream : public jni::object_base<"sun/rmi/transport/proxy/HttpSendOutputStream",
	java::io::FilterOutputStream>
{
public:

	static jni::ref<sun::rmi::transport::proxy::HttpSendOutputStream> new_object(jni::ref<java::io::OutputStream> p1, jni::ref<sun::rmi::transport::proxy::HttpSendSocket> p2) { return base_::new_object(p1, p2); }
	void deactivate() { return call_method<"deactivate", void>(); }
	void write(jint p1) { return call_method<"write", void>(p1); }
	void write(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"write", void>(p1, p2, p3); }
	void flush() { return call_method<"flush", void>(); }
	void close() { return call_method<"close", void>(); }

protected:

	HttpSendOutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_HTTPSENDOUTPUTSTREAM
