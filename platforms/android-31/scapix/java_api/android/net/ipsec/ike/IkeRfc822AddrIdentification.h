// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/net/ipsec/ike/IkeIdentification.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKERFC822ADDRIDENTIFICATION_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKERFC822ADDRIDENTIFICATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::ipsec::ike { class IkeRfc822AddrIdentification; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::ipsec::ike::IkeRfc822AddrIdentification>
{
	static constexpr fixed_string class_name = "android/net/ipsec/ike/IkeRfc822AddrIdentification";
	using base_classes = std::tuple<scapix::java_api::android::net::ipsec::ike::IkeIdentification>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKERFC822ADDRIDENTIFICATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKERFC822ADDRIDENTIFICATION)
#define SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKERFC822ADDRIDENTIFICATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::ipsec::ike::IkeRfc822AddrIdentification : public jni::object_base<"android/net/ipsec/ike/IkeRfc822AddrIdentification",
	android::net::ipsec::ike::IkeIdentification>
{
public:

	jni::ref<java::lang::String> rfc822Name() { return get_field<"rfc822Name", jni::ref<java::lang::String>>(); }

	static jni::ref<android::net::ipsec::ike::IkeRfc822AddrIdentification> new_object(jni::ref<java::lang::String> rfc822Name) { return base_::new_object(rfc822Name); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }

protected:

	IkeRfc822AddrIdentification(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IPSEC_IKE_IKERFC822ADDRIDENTIFICATION