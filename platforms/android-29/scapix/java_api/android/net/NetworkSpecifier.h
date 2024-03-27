// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_NETWORKSPECIFIER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_NETWORKSPECIFIER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class NetworkSpecifier; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::NetworkSpecifier>
{
	static constexpr fixed_string class_name = "android/net/NetworkSpecifier";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_NETWORKSPECIFIER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_NETWORKSPECIFIER)
#define SCAPIX_JAVA_API_ANDROID_NET_NETWORKSPECIFIER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::NetworkSpecifier : public jni::object_base<"android/net/NetworkSpecifier",
	java::lang::Object>
{
public:

	static jni::ref<android::net::NetworkSpecifier> new_object() { return base_::new_object(); }

protected:

	NetworkSpecifier(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_NETWORKSPECIFIER
