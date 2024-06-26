// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_HTTP_QUICOPTIONS_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_HTTP_QUICOPTIONS_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::http { class QuicOptions_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::http::QuicOptions_Builder>
{
	static constexpr fixed_string class_name = "android/net/http/QuicOptions$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_HTTP_QUICOPTIONS_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_HTTP_QUICOPTIONS_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_NET_HTTP_QUICOPTIONS_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/http/QuicOptions.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Duration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::http::QuicOptions_Builder : public jni::object_base<"android/net/http/QuicOptions$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::net::http::QuicOptions_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::net::http::QuicOptions_Builder> addAllowedQuicHost(jni::ref<java::lang::String> quicHost) { return call_method<"addAllowedQuicHost", jni::ref<android::net::http::QuicOptions_Builder>>(quicHost); }
	jni::ref<android::net::http::QuicOptions_Builder> setInMemoryServerConfigsCacheSize(jint inMemoryServerConfigsCacheSize) { return call_method<"setInMemoryServerConfigsCacheSize", jni::ref<android::net::http::QuicOptions_Builder>>(inMemoryServerConfigsCacheSize); }
	jni::ref<android::net::http::QuicOptions_Builder> setHandshakeUserAgent(jni::ref<java::lang::String> handshakeUserAgent) { return call_method<"setHandshakeUserAgent", jni::ref<android::net::http::QuicOptions_Builder>>(handshakeUserAgent); }
	jni::ref<android::net::http::QuicOptions_Builder> setIdleConnectionTimeout(jni::ref<java::time::Duration> idleConnectionTimeout) { return call_method<"setIdleConnectionTimeout", jni::ref<android::net::http::QuicOptions_Builder>>(idleConnectionTimeout); }
	jni::ref<android::net::http::QuicOptions> build() { return call_method<"build", jni::ref<android::net::http::QuicOptions>>(); }

protected:

	QuicOptions_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_HTTP_QUICOPTIONS_BUILDER
