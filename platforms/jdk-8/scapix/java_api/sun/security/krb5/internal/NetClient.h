// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_NETCLIENT_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_NETCLIENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal { class NetClient; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::NetClient>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/NetClient";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::AutoCloseable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_NETCLIENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_NETCLIENT)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_NETCLIENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::internal::NetClient : public jni::object_base<"sun/security/krb5/internal/NetClient",
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	static jni::ref<sun::security::krb5::internal::NetClient> new_object() { return base_::new_object(); }
	static jni::ref<sun::security::krb5::internal::NetClient> getInstance(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jint p3, jint p4) { return call_static_method<"getInstance", jni::ref<sun::security::krb5::internal::NetClient>>(p1, p2, p3, p4); }
	void send(jni::ref<jni::array<jbyte>> p1) { return call_method<"send", void>(p1); }
	jni::ref<jni::array<jbyte>> receive() { return call_method<"receive", jni::ref<jni::array<jbyte>>>(); }
	void close() { return call_method<"close", void>(); }

protected:

	NetClient(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_NETCLIENT
