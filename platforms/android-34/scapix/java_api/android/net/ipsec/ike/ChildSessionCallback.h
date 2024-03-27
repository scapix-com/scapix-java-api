// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_CHILDSESSIONCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_CHILDSESSIONCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::ipsec::ike { class ChildSessionCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::ipsec::ike::ChildSessionCallback>
{
	static constexpr fixed_string class_name = "android/net/ipsec/ike/ChildSessionCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_CHILDSESSIONCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_CHILDSESSIONCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_CHILDSESSIONCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/IpSecTransform.h>
#include <scapix/java_api/android/net/ipsec/ike/ChildSessionConfiguration.h>
#include <scapix/java_api/android/net/ipsec/ike/exceptions/IkeException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::ipsec::ike::ChildSessionCallback : public jni::object_base<"android/net/ipsec/ike/ChildSessionCallback",
	java::lang::Object>
{
public:

	void onOpened(jni::ref<android::net::ipsec::ike::ChildSessionConfiguration> p1) { return call_method<"onOpened", void>(p1); }
	void onClosed() { return call_method<"onClosed", void>(); }
	void onClosedWithException(jni::ref<android::net::ipsec::ike::exceptions::IkeException> exception) { return call_method<"onClosedWithException", void>(exception); }
	void onIpSecTransformCreated(jni::ref<android::net::IpSecTransform> p1, jint p2) { return call_method<"onIpSecTransformCreated", void>(p1, p2); }
	void onIpSecTransformDeleted(jni::ref<android::net::IpSecTransform> p1, jint p2) { return call_method<"onIpSecTransformDeleted", void>(p1, p2); }

protected:

	ChildSessionCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_CHILDSESSIONCALLBACK