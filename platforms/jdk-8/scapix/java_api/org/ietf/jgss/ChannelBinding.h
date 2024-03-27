// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_IETF_JGSS_CHANNELBINDING_FWD
#define SCAPIX_JAVA_API_ORG_IETF_JGSS_CHANNELBINDING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::ietf::jgss { class ChannelBinding; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::ietf::jgss::ChannelBinding>
{
	static constexpr fixed_string class_name = "org/ietf/jgss/ChannelBinding";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_IETF_JGSS_CHANNELBINDING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_IETF_JGSS_CHANNELBINDING)
#define SCAPIX_JAVA_API_ORG_IETF_JGSS_CHANNELBINDING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/net/InetAddress.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::ietf::jgss::ChannelBinding : public jni::object_base<"org/ietf/jgss/ChannelBinding",
	java::lang::Object>
{
public:

	static jni::ref<org::ietf::jgss::ChannelBinding> new_object(jni::ref<java::net::InetAddress> p1, jni::ref<java::net::InetAddress> p2, jni::ref<jni::array<jbyte>> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<org::ietf::jgss::ChannelBinding> new_object(jni::ref<jni::array<jbyte>> p1) { return base_::new_object(p1); }
	jni::ref<java::net::InetAddress> getInitiatorAddress() { return call_method<"getInitiatorAddress", jni::ref<java::net::InetAddress>>(); }
	jni::ref<java::net::InetAddress> getAcceptorAddress() { return call_method<"getAcceptorAddress", jni::ref<java::net::InetAddress>>(); }
	jni::ref<jni::array<jbyte>> getApplicationData() { return call_method<"getApplicationData", jni::ref<jni::array<jbyte>>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	ChannelBinding(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_IETF_JGSS_CHANNELBINDING
