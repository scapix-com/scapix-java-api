// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNGATEWAYCONNECTIONCONFIG_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNGATEWAYCONNECTIONCONFIG_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::vcn { class VcnGatewayConnectionConfig_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::vcn::VcnGatewayConnectionConfig_Builder>
{
	static constexpr fixed_string class_name = "android/net/vcn/VcnGatewayConnectionConfig$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNGATEWAYCONNECTIONCONFIG_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNGATEWAYCONNECTIONCONFIG_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNGATEWAYCONNECTIONCONFIG_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/ipsec/ike/IkeTunnelConnectionParams.h>
#include <scapix/java_api/android/net/vcn/VcnGatewayConnectionConfig.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::vcn::VcnGatewayConnectionConfig_Builder : public jni::object_base<"android/net/vcn/VcnGatewayConnectionConfig$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::net::vcn::VcnGatewayConnectionConfig_Builder> new_object(jni::ref<java::lang::String> gatewayConnectionName, jni::ref<android::net::ipsec::ike::IkeTunnelConnectionParams> tunnelConnectionParams) { return base_::new_object(gatewayConnectionName, tunnelConnectionParams); }
	jni::ref<android::net::vcn::VcnGatewayConnectionConfig_Builder> addExposedCapability(jint exposedCapability) { return call_method<"addExposedCapability", jni::ref<android::net::vcn::VcnGatewayConnectionConfig_Builder>>(exposedCapability); }
	jni::ref<android::net::vcn::VcnGatewayConnectionConfig_Builder> removeExposedCapability(jint exposedCapability) { return call_method<"removeExposedCapability", jni::ref<android::net::vcn::VcnGatewayConnectionConfig_Builder>>(exposedCapability); }
	jni::ref<android::net::vcn::VcnGatewayConnectionConfig_Builder> setRetryIntervalsMillis(jni::ref<jni::array<jlong>> retryIntervalsMs) { return call_method<"setRetryIntervalsMillis", jni::ref<android::net::vcn::VcnGatewayConnectionConfig_Builder>>(retryIntervalsMs); }
	jni::ref<android::net::vcn::VcnGatewayConnectionConfig_Builder> setMaxMtu(jint maxMtu) { return call_method<"setMaxMtu", jni::ref<android::net::vcn::VcnGatewayConnectionConfig_Builder>>(maxMtu); }
	jni::ref<android::net::vcn::VcnGatewayConnectionConfig> build() { return call_method<"build", jni::ref<android::net::vcn::VcnGatewayConnectionConfig>>(); }

protected:

	VcnGatewayConnectionConfig_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNGATEWAYCONNECTIONCONFIG_BUILDER
