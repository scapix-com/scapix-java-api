// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_DNSRESOLVER_CALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_DNSRESOLVER_CALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class DnsResolver_Callback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::DnsResolver_Callback>
{
	static constexpr fixed_string class_name = "android/net/DnsResolver$Callback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_DNSRESOLVER_CALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_DNSRESOLVER_CALLBACK)
#define SCAPIX_JAVA_API_ANDROID_NET_DNSRESOLVER_CALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/DnsResolver_DnsException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::DnsResolver_Callback : public jni::object_base<"android/net/DnsResolver$Callback",
	java::lang::Object>
{
public:

	void onAnswer(jni::ref<java::lang::Object> p1, jint p2) { return call_method<"onAnswer", void>(p1, p2); }
	void onError(jni::ref<android::net::DnsResolver_DnsException> p1) { return call_method<"onError", void>(p1); }

protected:

	DnsResolver_Callback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_DNSRESOLVER_CALLBACK