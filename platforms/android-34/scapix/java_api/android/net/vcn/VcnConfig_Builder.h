// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNCONFIG_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNCONFIG_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::vcn { class VcnConfig_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::vcn::VcnConfig_Builder>
{
	static constexpr fixed_string class_name = "android/net/vcn/VcnConfig$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNCONFIG_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNCONFIG_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNCONFIG_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/net/vcn/VcnConfig.h>
#include <scapix/java_api/android/net/vcn/VcnGatewayConnectionConfig.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::vcn::VcnConfig_Builder : public jni::object_base<"android/net/vcn/VcnConfig$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::net::vcn::VcnConfig_Builder> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	jni::ref<android::net::vcn::VcnConfig_Builder> addGatewayConnectionConfig(jni::ref<android::net::vcn::VcnGatewayConnectionConfig> gatewayConnectionConfig) { return call_method<"addGatewayConnectionConfig", jni::ref<android::net::vcn::VcnConfig_Builder>>(gatewayConnectionConfig); }
	jni::ref<android::net::vcn::VcnConfig_Builder> setRestrictedUnderlyingNetworkTransports(jni::ref<java::util::Set> transports) { return call_method<"setRestrictedUnderlyingNetworkTransports", jni::ref<android::net::vcn::VcnConfig_Builder>>(transports); }
	jni::ref<android::net::vcn::VcnConfig> build() { return call_method<"build", jni::ref<android::net::vcn::VcnConfig>>(); }

protected:

	VcnConfig_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_VCN_VCNCONFIG_BUILDER