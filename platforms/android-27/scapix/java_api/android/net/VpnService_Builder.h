// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_VPNSERVICE_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_VPNSERVICE_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class VpnService_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::VpnService_Builder>
{
	static constexpr fixed_string class_name = "android/net/VpnService$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_VPNSERVICE_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_VPNSERVICE_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_NET_VPNSERVICE_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/net/Network.h>
#include <scapix/java_api/android/net/VpnService.h>
#include <scapix/java_api/android/os/ParcelFileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::VpnService_Builder : public jni::object_base<"android/net/VpnService$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::net::VpnService_Builder> new_object(jni::ref<android::net::VpnService> this_0) { return base_::new_object(this_0); }
	jni::ref<android::net::VpnService_Builder> setSession(jni::ref<java::lang::String> session) { return call_method<"setSession", jni::ref<android::net::VpnService_Builder>>(session); }
	jni::ref<android::net::VpnService_Builder> setConfigureIntent(jni::ref<android::app::PendingIntent> intent) { return call_method<"setConfigureIntent", jni::ref<android::net::VpnService_Builder>>(intent); }
	jni::ref<android::net::VpnService_Builder> setMtu(jint mtu) { return call_method<"setMtu", jni::ref<android::net::VpnService_Builder>>(mtu); }
	jni::ref<android::net::VpnService_Builder> addAddress(jni::ref<java::net::InetAddress> address, jint prefixLength) { return call_method<"addAddress", jni::ref<android::net::VpnService_Builder>>(address, prefixLength); }
	jni::ref<android::net::VpnService_Builder> addAddress(jni::ref<java::lang::String> address, jint prefixLength) { return call_method<"addAddress", jni::ref<android::net::VpnService_Builder>>(address, prefixLength); }
	jni::ref<android::net::VpnService_Builder> addRoute(jni::ref<java::net::InetAddress> address, jint prefixLength) { return call_method<"addRoute", jni::ref<android::net::VpnService_Builder>>(address, prefixLength); }
	jni::ref<android::net::VpnService_Builder> addRoute(jni::ref<java::lang::String> address, jint prefixLength) { return call_method<"addRoute", jni::ref<android::net::VpnService_Builder>>(address, prefixLength); }
	jni::ref<android::net::VpnService_Builder> addDnsServer(jni::ref<java::net::InetAddress> address) { return call_method<"addDnsServer", jni::ref<android::net::VpnService_Builder>>(address); }
	jni::ref<android::net::VpnService_Builder> addDnsServer(jni::ref<java::lang::String> address) { return call_method<"addDnsServer", jni::ref<android::net::VpnService_Builder>>(address); }
	jni::ref<android::net::VpnService_Builder> addSearchDomain(jni::ref<java::lang::String> domain) { return call_method<"addSearchDomain", jni::ref<android::net::VpnService_Builder>>(domain); }
	jni::ref<android::net::VpnService_Builder> allowFamily(jint family) { return call_method<"allowFamily", jni::ref<android::net::VpnService_Builder>>(family); }
	jni::ref<android::net::VpnService_Builder> addAllowedApplication(jni::ref<java::lang::String> packageName) { return call_method<"addAllowedApplication", jni::ref<android::net::VpnService_Builder>>(packageName); }
	jni::ref<android::net::VpnService_Builder> addDisallowedApplication(jni::ref<java::lang::String> packageName) { return call_method<"addDisallowedApplication", jni::ref<android::net::VpnService_Builder>>(packageName); }
	jni::ref<android::net::VpnService_Builder> allowBypass() { return call_method<"allowBypass", jni::ref<android::net::VpnService_Builder>>(); }
	jni::ref<android::net::VpnService_Builder> setBlocking(jboolean blocking) { return call_method<"setBlocking", jni::ref<android::net::VpnService_Builder>>(blocking); }
	jni::ref<android::net::VpnService_Builder> setUnderlyingNetworks(jni::ref<jni::array<android::net::Network>> networks) { return call_method<"setUnderlyingNetworks", jni::ref<android::net::VpnService_Builder>>(networks); }
	jni::ref<android::os::ParcelFileDescriptor> establish() { return call_method<"establish", jni::ref<android::os::ParcelFileDescriptor>>(); }

protected:

	VpnService_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_VPNSERVICE_BUILDER
