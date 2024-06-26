// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterOutputStream.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_SASL_SASLOUTPUTSTREAM_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_SASL_SASLOUTPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::ldap::sasl { class SaslOutputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::ldap::sasl::SaslOutputStream>
{
	static constexpr fixed_string class_name = "com/sun/jndi/ldap/sasl/SaslOutputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::FilterOutputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_SASL_SASLOUTPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_SASL_SASLOUTPUTSTREAM)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_SASL_SASLOUTPUTSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jndi::ldap::sasl::SaslOutputStream : public jni::object_base<"com/sun/jndi/ldap/sasl/SaslOutputStream",
	java::io::FilterOutputStream>
{
public:

	void write(jint p1) { return call_method<"write", void>(p1); }
	void write(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"write", void>(p1, p2, p3); }
	void close() { return call_method<"close", void>(); }

protected:

	SaslOutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_SASL_SASLOUTPUTSTREAM
