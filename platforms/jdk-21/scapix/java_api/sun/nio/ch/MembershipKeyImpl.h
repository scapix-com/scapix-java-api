// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/channels/MembershipKey.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_MEMBERSHIPKEYIMPL_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_MEMBERSHIPKEYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class MembershipKeyImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::MembershipKeyImpl>
{
	static constexpr fixed_string class_name = "sun/nio/ch/MembershipKeyImpl";
	using base_classes = std::tuple<scapix::java_api::java::nio::channels::MembershipKey>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_MEMBERSHIPKEYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_MEMBERSHIPKEYIMPL)
#define SCAPIX_JAVA_API_SUN_NIO_CH_MEMBERSHIPKEYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/NetworkInterface.h>
#include <scapix/java_api/java/nio/channels/MulticastChannel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::MembershipKeyImpl : public jni::object_base<"sun/nio/ch/MembershipKeyImpl",
	java::nio::channels::MembershipKey>
{
public:

	jboolean isValid() { return call_method<"isValid", jboolean>(); }
	void drop() { return call_method<"drop", void>(); }
	jni::ref<java::nio::channels::MulticastChannel> channel() { return call_method<"channel", jni::ref<java::nio::channels::MulticastChannel>>(); }
	jni::ref<java::net::InetAddress> group() { return call_method<"group", jni::ref<java::net::InetAddress>>(); }
	jni::ref<java::net::NetworkInterface> networkInterface() { return call_method<"networkInterface", jni::ref<java::net::NetworkInterface>>(); }
	jni::ref<java::net::InetAddress> sourceAddress() { return call_method<"sourceAddress", jni::ref<java::net::InetAddress>>(); }
	jni::ref<java::nio::channels::MembershipKey> block(jni::ref<java::net::InetAddress> toBlock) { return call_method<"block", jni::ref<java::nio::channels::MembershipKey>>(toBlock); }
	jni::ref<java::nio::channels::MembershipKey> unblock(jni::ref<java::net::InetAddress> toUnblock) { return call_method<"unblock", jni::ref<java::nio::channels::MembershipKey>>(toUnblock); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	MembershipKeyImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_MEMBERSHIPKEYIMPL