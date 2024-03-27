// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_HTTP_URLREQUEST_CALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_HTTP_URLREQUEST_CALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::http { class UrlRequest_Callback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::http::UrlRequest_Callback>
{
	static constexpr fixed_string class_name = "android/net/http/UrlRequest$Callback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_HTTP_URLREQUEST_CALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_HTTP_URLREQUEST_CALLBACK)
#define SCAPIX_JAVA_API_ANDROID_NET_HTTP_URLREQUEST_CALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/http/HttpException.h>
#include <scapix/java_api/android/net/http/UrlRequest.h>
#include <scapix/java_api/android/net/http/UrlResponseInfo.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::http::UrlRequest_Callback : public jni::object_base<"android/net/http/UrlRequest$Callback",
	java::lang::Object>
{
public:

	void onRedirectReceived(jni::ref<android::net::http::UrlRequest> p1, jni::ref<android::net::http::UrlResponseInfo> p2, jni::ref<java::lang::String> p3) { return call_method<"onRedirectReceived", void>(p1, p2, p3); }
	void onResponseStarted(jni::ref<android::net::http::UrlRequest> p1, jni::ref<android::net::http::UrlResponseInfo> p2) { return call_method<"onResponseStarted", void>(p1, p2); }
	void onReadCompleted(jni::ref<android::net::http::UrlRequest> p1, jni::ref<android::net::http::UrlResponseInfo> p2, jni::ref<java::nio::ByteBuffer> p3) { return call_method<"onReadCompleted", void>(p1, p2, p3); }
	void onSucceeded(jni::ref<android::net::http::UrlRequest> p1, jni::ref<android::net::http::UrlResponseInfo> p2) { return call_method<"onSucceeded", void>(p1, p2); }
	void onFailed(jni::ref<android::net::http::UrlRequest> p1, jni::ref<android::net::http::UrlResponseInfo> p2, jni::ref<android::net::http::HttpException> p3) { return call_method<"onFailed", void>(p1, p2, p3); }
	void onCanceled(jni::ref<android::net::http::UrlRequest> p1, jni::ref<android::net::http::UrlResponseInfo> p2) { return call_method<"onCanceled", void>(p1, p2); }

protected:

	UrlRequest_Callback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_HTTP_URLREQUEST_CALLBACK