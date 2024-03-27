// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_VPNSERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_VPNSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class VpnService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::VpnService>
{
	static constexpr fixed_string class_name = "android/net/VpnService";
	using base_classes = std::tuple<scapix::java_api::android::app::Service>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_VPNSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_VPNSERVICE)
#define SCAPIX_JAVA_API_ANDROID_NET_VPNSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/net/Network.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/DatagramSocket.h>
#include <scapix/java_api/java/net/Socket.h>
#include <scapix/java_api/android/net/VpnService_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::VpnService : public jni::object_base<"android/net/VpnService",
	android::app::Service>
{
public:

	using Builder = VpnService_Builder;

	static jni::ref<java::lang::String> SERVICE_INTERFACE() { return get_static_field<"SERVICE_INTERFACE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SERVICE_META_DATA_SUPPORTS_ALWAYS_ON() { return get_static_field<"SERVICE_META_DATA_SUPPORTS_ALWAYS_ON", jni::ref<java::lang::String>>(); }

	static jni::ref<android::net::VpnService> new_object() { return base_::new_object(); }
	static jni::ref<android::content::Intent> prepare(jni::ref<android::content::Context> context) { return call_static_method<"prepare", jni::ref<android::content::Intent>>(context); }
	jboolean protect(jint socket) { return call_method<"protect", jboolean>(socket); }
	jboolean protect(jni::ref<java::net::Socket> socket) { return call_method<"protect", jboolean>(socket); }
	jboolean protect(jni::ref<java::net::DatagramSocket> socket) { return call_method<"protect", jboolean>(socket); }
	jboolean setUnderlyingNetworks(jni::ref<jni::array<android::net::Network>> networks) { return call_method<"setUnderlyingNetworks", jboolean>(networks); }
	jni::ref<android::os::IBinder> onBind(jni::ref<android::content::Intent> intent) { return call_method<"onBind", jni::ref<android::os::IBinder>>(intent); }
	void onRevoke() { return call_method<"onRevoke", void>(); }

protected:

	VpnService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_VPNSERVICE
