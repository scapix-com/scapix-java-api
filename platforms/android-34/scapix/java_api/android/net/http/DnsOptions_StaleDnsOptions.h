// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_HTTP_DNSOPTIONS_STALEDNSOPTIONS_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_HTTP_DNSOPTIONS_STALEDNSOPTIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::http { class DnsOptions_StaleDnsOptions; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::http::DnsOptions_StaleDnsOptions>
{
	static constexpr fixed_string class_name = "android/net/http/DnsOptions$StaleDnsOptions";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_HTTP_DNSOPTIONS_STALEDNSOPTIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_HTTP_DNSOPTIONS_STALEDNSOPTIONS)
#define SCAPIX_JAVA_API_ANDROID_NET_HTTP_DNSOPTIONS_STALEDNSOPTIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/time/Duration.h>
#include <scapix/java_api/android/net/http/DnsOptions_StaleDnsOptions_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::http::DnsOptions_StaleDnsOptions : public jni::object_base<"android/net/http/DnsOptions$StaleDnsOptions",
	java::lang::Object>
{
public:

	using Builder = DnsOptions_StaleDnsOptions_Builder;

	jni::ref<java::time::Duration> getFreshLookupTimeout() { return call_method<"getFreshLookupTimeout", jni::ref<java::time::Duration>>(); }
	jni::ref<java::time::Duration> getMaxExpiredDelay() { return call_method<"getMaxExpiredDelay", jni::ref<java::time::Duration>>(); }
	jint getAllowCrossNetworkUsage() { return call_method<"getAllowCrossNetworkUsage", jint>(); }
	jint getUseStaleOnNameNotResolved() { return call_method<"getUseStaleOnNameNotResolved", jint>(); }

protected:

	DnsOptions_StaleDnsOptions(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_HTTP_DNSOPTIONS_STALEDNSOPTIONS
