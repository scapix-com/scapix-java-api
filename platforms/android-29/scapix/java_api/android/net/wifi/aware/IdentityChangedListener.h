// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_IDENTITYCHANGEDLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_IDENTITYCHANGEDLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi::aware { class IdentityChangedListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::aware::IdentityChangedListener>
{
	static constexpr fixed_string class_name = "android/net/wifi/aware/IdentityChangedListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_IDENTITYCHANGEDLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_IDENTITYCHANGEDLISTENER)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_IDENTITYCHANGEDLISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::aware::IdentityChangedListener : public jni::object_base<"android/net/wifi/aware/IdentityChangedListener",
	java::lang::Object>
{
public:

	static jni::ref<android::net::wifi::aware::IdentityChangedListener> new_object() { return base_::new_object(); }
	void onIdentityChanged(jni::ref<jni::array<jbyte>> mac) { return call_method<"onIdentityChanged", void>(mac); }

protected:

	IdentityChangedListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_IDENTITYCHANGEDLISTENER
