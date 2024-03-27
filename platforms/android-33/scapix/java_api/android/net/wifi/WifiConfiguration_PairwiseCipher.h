// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_PAIRWISECIPHER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_PAIRWISECIPHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi { class WifiConfiguration_PairwiseCipher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::WifiConfiguration_PairwiseCipher>
{
	static constexpr fixed_string class_name = "android/net/wifi/WifiConfiguration$PairwiseCipher";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_PAIRWISECIPHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_PAIRWISECIPHER)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_PAIRWISECIPHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::WifiConfiguration_PairwiseCipher : public jni::object_base<"android/net/wifi/WifiConfiguration$PairwiseCipher",
	java::lang::Object>
{
public:

	static jint CCMP() { return get_static_field<"CCMP", jint>(); }
	static jint GCMP_128() { return get_static_field<"GCMP_128", jint>(); }
	static jint GCMP_256() { return get_static_field<"GCMP_256", jint>(); }
	static jint NONE() { return get_static_field<"NONE", jint>(); }
	static jint SMS4() { return get_static_field<"SMS4", jint>(); }
	static jint TKIP() { return get_static_field<"TKIP", jint>(); }
	static jni::ref<jni::array<java::lang::String>> strings() { return get_static_field<"strings", jni::ref<jni::array<java::lang::String>>>(); }
	static jni::ref<java::lang::String> varName() { return get_static_field<"varName", jni::ref<java::lang::String>>(); }


protected:

	WifiConfiguration_PairwiseCipher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_WIFICONFIGURATION_PAIRWISECIPHER
