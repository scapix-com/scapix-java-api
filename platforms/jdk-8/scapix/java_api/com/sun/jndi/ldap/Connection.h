// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Runnable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_CONNECTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_CONNECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::ldap { class Connection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::ldap::Connection>
{
	static constexpr fixed_string class_name = "com/sun/jndi/ldap/Connection";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Runnable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_CONNECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_CONNECTION)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_CONNECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/Socket.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jndi::ldap::Connection : public jni::object_base<"com/sun/jndi/ldap/Connection",
	java::lang::Object,
	java::lang::Runnable>
{
public:

	jni::ref<java::lang::String> host() { return get_field<"host", jni::ref<java::lang::String>>(); }
	jint port() { return get_field<"port", jint>(); }
	jni::ref<java::io::InputStream> inStream() { return get_field<"inStream", jni::ref<java::io::InputStream>>(); }
	void inStream(jni::ref<java::io::InputStream> v) { set_field<"inStream", jni::ref<java::io::InputStream>>(v); }
	jni::ref<java::io::OutputStream> outStream() { return get_field<"outStream", jni::ref<java::io::OutputStream>>(); }
	void outStream(jni::ref<java::io::OutputStream> v) { set_field<"outStream", jni::ref<java::io::OutputStream>>(v); }
	jni::ref<java::net::Socket> sock() { return get_field<"sock", jni::ref<java::net::Socket>>(); }
	void sock(jni::ref<java::net::Socket> v) { set_field<"sock", jni::ref<java::net::Socket>>(v); }

	void replaceStreams(jni::ref<java::io::InputStream> p1, jni::ref<java::io::OutputStream> p2) { return call_method<"replaceStreams", void>(p1, p2); }
	void replaceStreams(jni::ref<java::io::InputStream> p1, jni::ref<java::io::OutputStream> p2, jboolean p3) { return call_method<"replaceStreams", void>(p1, p2, p3); }
	jboolean isUpgradedToStartTls() { return call_method<"isUpgradedToStartTls", jboolean>(); }
	void run() { return call_method<"run", void>(); }

protected:

	Connection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_CONNECTION