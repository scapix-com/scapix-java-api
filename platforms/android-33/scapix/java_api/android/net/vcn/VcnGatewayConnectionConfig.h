// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNGATEWAYCONNECTIONCONFIG_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNGATEWAYCONNECTIONCONFIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::vcn { class VcnGatewayConnectionConfig; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::vcn::VcnGatewayConnectionConfig>
{
	static constexpr fixed_string class_name = "android/net/vcn/VcnGatewayConnectionConfig";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNGATEWAYCONNECTIONCONFIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNGATEWAYCONNECTIONCONFIG)
#define SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNGATEWAYCONNECTIONCONFIG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/net/vcn/VcnGatewayConnectionConfig_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::vcn::VcnGatewayConnectionConfig : public jni::object_base<"android/net/vcn/VcnGatewayConnectionConfig",
	java::lang::Object>
{
public:

	using Builder = VcnGatewayConnectionConfig_Builder;

	jni::ref<java::lang::String> getGatewayConnectionName() { return call_method<"getGatewayConnectionName", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<jint>> getExposedCapabilities() { return call_method<"getExposedCapabilities", jni::ref<jni::array<jint>>>(); }
	jni::ref<java::util::List> getVcnUnderlyingNetworkPriorities() { return call_method<"getVcnUnderlyingNetworkPriorities", jni::ref<java::util::List>>(); }
	jni::ref<jni::array<jlong>> getRetryIntervalsMillis() { return call_method<"getRetryIntervalsMillis", jni::ref<jni::array<jlong>>>(); }
	jint getMaxMtu() { return call_method<"getMaxMtu", jint>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }

protected:

	VcnGatewayConnectionConfig(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNGATEWAYCONNECTIONCONFIG
