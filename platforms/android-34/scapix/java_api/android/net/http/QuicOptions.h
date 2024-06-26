// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_HTTP_QUICOPTIONS_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_HTTP_QUICOPTIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::http { class QuicOptions; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::http::QuicOptions>
{
	static constexpr fixed_string class_name = "android/net/http/QuicOptions";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_HTTP_QUICOPTIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_HTTP_QUICOPTIONS)
#define SCAPIX_JAVA_API_ANDROID_NET_HTTP_QUICOPTIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Duration.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/android/net/http/QuicOptions_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::http::QuicOptions : public jni::object_base<"android/net/http/QuicOptions",
	java::lang::Object>
{
public:

	using Builder = QuicOptions_Builder;

	jni::ref<java::util::Set> getAllowedQuicHosts() { return call_method<"getAllowedQuicHosts", jni::ref<java::util::Set>>(); }
	jboolean hasInMemoryServerConfigsCacheSize() { return call_method<"hasInMemoryServerConfigsCacheSize", jboolean>(); }
	jint getInMemoryServerConfigsCacheSize() { return call_method<"getInMemoryServerConfigsCacheSize", jint>(); }
	jni::ref<java::lang::String> getHandshakeUserAgent() { return call_method<"getHandshakeUserAgent", jni::ref<java::lang::String>>(); }
	jni::ref<java::time::Duration> getIdleConnectionTimeout() { return call_method<"getIdleConnectionTimeout", jni::ref<java::time::Duration>>(); }

protected:

	QuicOptions(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_HTTP_QUICOPTIONS
