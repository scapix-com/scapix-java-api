// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/net/ipsec/ike/exceptions/IkeProtocolException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_EXCEPTIONS_INVALIDKEEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_EXCEPTIONS_INVALIDKEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::ipsec::ike::exceptions { class InvalidKeException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::ipsec::ike::exceptions::InvalidKeException>
{
	static constexpr fixed_string class_name = "android/net/ipsec/ike/exceptions/InvalidKeException";
	using base_classes = std::tuple<scapix::java_api::android::net::ipsec::ike::exceptions::IkeProtocolException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_EXCEPTIONS_INVALIDKEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_EXCEPTIONS_INVALIDKEEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_EXCEPTIONS_INVALIDKEEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::ipsec::ike::exceptions::InvalidKeException : public jni::object_base<"android/net/ipsec/ike/exceptions/InvalidKeException",
	android::net::ipsec::ike::exceptions::IkeProtocolException>
{
public:

	static jni::ref<android::net::ipsec::ike::exceptions::InvalidKeException> new_object(jint dhGroup) { return base_::new_object(dhGroup); }
	jint getDhGroup() { return call_method<"getDhGroup", jint>(); }

protected:

	InvalidKeException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_EXCEPTIONS_INVALIDKEEXCEPTION