// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/net/eap/EapSessionConfig_EapMethodConfig.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_EAP_EAPSESSIONCONFIG_EAPSIMCONFIG_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_EAP_EAPSESSIONCONFIG_EAPSIMCONFIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::eap { class EapSessionConfig_EapSimConfig; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::eap::EapSessionConfig_EapSimConfig>
{
	static constexpr fixed_string class_name = "android/net/eap/EapSessionConfig$EapSimConfig";
	using base_classes = std::tuple<scapix::java_api::android::net::eap::EapSessionConfig_EapMethodConfig>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_EAP_EAPSESSIONCONFIG_EAPSIMCONFIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_EAP_EAPSESSIONCONFIG_EAPSIMCONFIG)
#define SCAPIX_JAVA_API_ANDROID_NET_EAP_EAPSESSIONCONFIG_EAPSIMCONFIG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::eap::EapSessionConfig_EapSimConfig : public jni::object_base<"android/net/eap/EapSessionConfig$EapSimConfig",
	android::net::eap::EapSessionConfig_EapMethodConfig>
{
public:

	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint getSubId() { return call_method<"getSubId", jint>(); }
	jint getAppType() { return call_method<"getAppType", jint>(); }

protected:

	EapSessionConfig_EapSimConfig(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_EAP_EAPSESSIONCONFIG_EAPSIMCONFIG