// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_HTTP_DNSOPTIONS_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_HTTP_DNSOPTIONS_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::http { class DnsOptions_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::http::DnsOptions_Builder>
{
	static constexpr fixed_string class_name = "android/net/http/DnsOptions$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_HTTP_DNSOPTIONS_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_HTTP_DNSOPTIONS_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_NET_HTTP_DNSOPTIONS_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/http/DnsOptions.h>
#include <scapix/java_api/android/net/http/DnsOptions_StaleDnsOptions.h>
#include <scapix/java_api/java/time/Duration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::http::DnsOptions_Builder : public jni::object_base<"android/net/http/DnsOptions$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::net::http::DnsOptions_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::net::http::DnsOptions_Builder> setUseHttpStackDnsResolver(jint state) { return call_method<"setUseHttpStackDnsResolver", jni::ref<android::net::http::DnsOptions_Builder>>(state); }
	jni::ref<android::net::http::DnsOptions_Builder> setStaleDns(jint state) { return call_method<"setStaleDns", jni::ref<android::net::http::DnsOptions_Builder>>(state); }
	jni::ref<android::net::http::DnsOptions_Builder> setStaleDnsOptions(jni::ref<android::net::http::DnsOptions_StaleDnsOptions> staleDnsOptions) { return call_method<"setStaleDnsOptions", jni::ref<android::net::http::DnsOptions_Builder>>(staleDnsOptions); }
	jni::ref<android::net::http::DnsOptions_Builder> setPreestablishConnectionsToStaleDnsResults(jint state) { return call_method<"setPreestablishConnectionsToStaleDnsResults", jni::ref<android::net::http::DnsOptions_Builder>>(state); }
	jni::ref<android::net::http::DnsOptions_Builder> setPersistHostCache(jint state) { return call_method<"setPersistHostCache", jni::ref<android::net::http::DnsOptions_Builder>>(state); }
	jni::ref<android::net::http::DnsOptions_Builder> setPersistHostCachePeriod(jni::ref<java::time::Duration> persistHostCachePeriod) { return call_method<"setPersistHostCachePeriod", jni::ref<android::net::http::DnsOptions_Builder>>(persistHostCachePeriod); }
	jni::ref<android::net::http::DnsOptions> build() { return call_method<"build", jni::ref<android::net::http::DnsOptions>>(); }

protected:

	DnsOptions_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_HTTP_DNSOPTIONS_BUILDER