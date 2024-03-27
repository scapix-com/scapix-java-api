// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/net/ipsec/ike/ChildSessionParams.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_TRANSPORTMODECHILDSESSIONPARAMS_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_TRANSPORTMODECHILDSESSIONPARAMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::ipsec::ike { class TransportModeChildSessionParams; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::ipsec::ike::TransportModeChildSessionParams>
{
	static constexpr fixed_string class_name = "android/net/ipsec/ike/TransportModeChildSessionParams";
	using base_classes = std::tuple<scapix::java_api::android::net::ipsec::ike::ChildSessionParams>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_TRANSPORTMODECHILDSESSIONPARAMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_TRANSPORTMODECHILDSESSIONPARAMS)
#define SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_TRANSPORTMODECHILDSESSIONPARAMS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/ipsec/ike/TransportModeChildSessionParams_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::ipsec::ike::TransportModeChildSessionParams : public jni::object_base<"android/net/ipsec/ike/TransportModeChildSessionParams",
	android::net::ipsec::ike::ChildSessionParams>
{
public:

	using Builder = TransportModeChildSessionParams_Builder;


protected:

	TransportModeChildSessionParams(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_TRANSPORTMODECHILDSESSIONPARAMS
