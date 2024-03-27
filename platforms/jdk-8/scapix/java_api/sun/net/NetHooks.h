// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_NETHOOKS_FWD
#define SCAPIX_JAVA_API_SUN_NET_NETHOOKS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net { class NetHooks; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::NetHooks>
{
	static constexpr fixed_string class_name = "sun/net/NetHooks";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_NETHOOKS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_NETHOOKS)
#define SCAPIX_JAVA_API_SUN_NET_NETHOOKS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/net/InetAddress.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::NetHooks : public jni::object_base<"sun/net/NetHooks",
	java::lang::Object>
{
public:

	static jni::ref<sun::net::NetHooks> new_object() { return base_::new_object(); }
	static void beforeTcpBind(jni::ref<java::io::FileDescriptor> p1, jni::ref<java::net::InetAddress> p2, jint p3) { return call_static_method<"beforeTcpBind", void>(p1, p2, p3); }
	static void beforeTcpConnect(jni::ref<java::io::FileDescriptor> p1, jni::ref<java::net::InetAddress> p2, jint p3) { return call_static_method<"beforeTcpConnect", void>(p1, p2, p3); }

protected:

	NetHooks(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_NETHOOKS
