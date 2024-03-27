// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_NETWORKREQUEST_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_NETWORKREQUEST_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class NetworkRequest_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::NetworkRequest_Builder>
{
	static constexpr fixed_string class_name = "android/net/NetworkRequest$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_NETWORKREQUEST_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_NETWORKREQUEST_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_NET_NETWORKREQUEST_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/NetworkRequest.h>
#include <scapix/java_api/android/net/NetworkSpecifier.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::NetworkRequest_Builder : public jni::object_base<"android/net/NetworkRequest$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::net::NetworkRequest_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::net::NetworkRequest> build() { return call_method<"build", jni::ref<android::net::NetworkRequest>>(); }
	jni::ref<android::net::NetworkRequest_Builder> addCapability(jint capability) { return call_method<"addCapability", jni::ref<android::net::NetworkRequest_Builder>>(capability); }
	jni::ref<android::net::NetworkRequest_Builder> removeCapability(jint capability) { return call_method<"removeCapability", jni::ref<android::net::NetworkRequest_Builder>>(capability); }
	jni::ref<android::net::NetworkRequest_Builder> clearCapabilities() { return call_method<"clearCapabilities", jni::ref<android::net::NetworkRequest_Builder>>(); }
	jni::ref<android::net::NetworkRequest_Builder> addTransportType(jint transportType) { return call_method<"addTransportType", jni::ref<android::net::NetworkRequest_Builder>>(transportType); }
	jni::ref<android::net::NetworkRequest_Builder> removeTransportType(jint transportType) { return call_method<"removeTransportType", jni::ref<android::net::NetworkRequest_Builder>>(transportType); }
	jni::ref<android::net::NetworkRequest_Builder> setNetworkSpecifier(jni::ref<java::lang::String> networkSpecifier) { return call_method<"setNetworkSpecifier", jni::ref<android::net::NetworkRequest_Builder>>(networkSpecifier); }
	jni::ref<android::net::NetworkRequest_Builder> setNetworkSpecifier(jni::ref<android::net::NetworkSpecifier> networkSpecifier) { return call_method<"setNetworkSpecifier", jni::ref<android::net::NetworkRequest_Builder>>(networkSpecifier); }

protected:

	NetworkRequest_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_NETWORKREQUEST_BUILDER
