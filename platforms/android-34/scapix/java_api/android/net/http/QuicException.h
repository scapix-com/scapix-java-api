// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/net/http/NetworkException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_HTTP_QUICEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_HTTP_QUICEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::http { class QuicException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::http::QuicException>
{
	static constexpr fixed_string class_name = "android/net/http/QuicException";
	using base_classes = std::tuple<scapix::java_api::android::net::http::NetworkException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_HTTP_QUICEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_HTTP_QUICEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_NET_HTTP_QUICEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::http::QuicException : public jni::object_base<"android/net/http/QuicException",
	android::net::http::NetworkException>
{
public:


protected:

	QuicException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_HTTP_QUICEXCEPTION
