// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/apache/http/impl/io/AbstractSessionOutputBuffer.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_SOCKETOUTPUTBUFFER_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_SOCKETOUTPUTBUFFER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::io { class SocketOutputBuffer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::io::SocketOutputBuffer>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/io/SocketOutputBuffer";
	using base_classes = std::tuple<scapix::java_api::org::apache::http::impl::io::AbstractSessionOutputBuffer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_SOCKETOUTPUTBUFFER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_SOCKETOUTPUTBUFFER)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_SOCKETOUTPUTBUFFER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/net/Socket.h>
#include <scapix/java_api/org/apache/http/params/HttpParams.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::io::SocketOutputBuffer : public jni::object_base<"org/apache/http/impl/io/SocketOutputBuffer",
	org::apache::http::impl::io::AbstractSessionOutputBuffer>
{
public:

	static jni::ref<org::apache::http::impl::io::SocketOutputBuffer> new_object(jni::ref<java::net::Socket> socket, jint buffersize, jni::ref<org::apache::http::params::HttpParams> params) { return base_::new_object(socket, buffersize, params); }

protected:

	SocketOutputBuffer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_IO_SOCKETOUTPUTBUFFER
