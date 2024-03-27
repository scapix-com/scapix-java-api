// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_IPCONFIGURATION_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_IPCONFIGURATION_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class IpConfiguration_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::IpConfiguration_Builder>
{
	static constexpr fixed_string class_name = "android/net/IpConfiguration$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IPCONFIGURATION_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_IPCONFIGURATION_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_NET_IPCONFIGURATION_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/IpConfiguration.h>
#include <scapix/java_api/android/net/ProxyInfo.h>
#include <scapix/java_api/android/net/StaticIpConfiguration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::IpConfiguration_Builder : public jni::object_base<"android/net/IpConfiguration$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::net::IpConfiguration_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::net::IpConfiguration_Builder> setStaticIpConfiguration(jni::ref<android::net::StaticIpConfiguration> config) { return call_method<"setStaticIpConfiguration", jni::ref<android::net::IpConfiguration_Builder>>(config); }
	jni::ref<android::net::IpConfiguration_Builder> setHttpProxy(jni::ref<android::net::ProxyInfo> proxyInfo) { return call_method<"setHttpProxy", jni::ref<android::net::IpConfiguration_Builder>>(proxyInfo); }
	jni::ref<android::net::IpConfiguration> build() { return call_method<"build", jni::ref<android::net::IpConfiguration>>(); }

protected:

	IpConfiguration_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IPCONFIGURATION_BUILDER