// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_EAP_EAPSESSIONCONFIG_EAPAKAOPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_EAP_EAPSESSIONCONFIG_EAPAKAOPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::eap { class EapSessionConfig_EapAkaOption; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::eap::EapSessionConfig_EapAkaOption>
{
	static constexpr fixed_string class_name = "android/net/eap/EapSessionConfig$EapAkaOption";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_EAP_EAPSESSIONCONFIG_EAPAKAOPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_EAP_EAPSESSIONCONFIG_EAPAKAOPTION)
#define SCAPIX_JAVA_API_ANDROID_NET_EAP_EAPSESSIONCONFIG_EAPAKAOPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/eap/EapSessionConfig_EapAkaOption_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::eap::EapSessionConfig_EapAkaOption : public jni::object_base<"android/net/eap/EapSessionConfig$EapAkaOption",
	java::lang::Object>
{
public:

	using Builder = EapSessionConfig_EapAkaOption_Builder;

	jni::ref<jni::array<jbyte>> getReauthId() { return call_method<"getReauthId", jni::ref<jni::array<jbyte>>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }

protected:

	EapSessionConfig_EapAkaOption(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_EAP_EAPSESSIONCONFIG_EAPAKAOPTION
