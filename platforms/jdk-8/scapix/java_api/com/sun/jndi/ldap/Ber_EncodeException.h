// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_BER_ENCODEEXCEPTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_BER_ENCODEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jndi::ldap { class Ber_EncodeException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jndi::ldap::Ber_EncodeException>
{
	static constexpr fixed_string class_name = "com/sun/jndi/ldap/Ber$EncodeException";
	using base_classes = std::tuple<scapix::java_api::java::io::IOException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_BER_ENCODEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_BER_ENCODEEXCEPTION)
#define SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_BER_ENCODEEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jndi::ldap::Ber_EncodeException : public jni::object_base<"com/sun/jndi/ldap/Ber$EncodeException",
	java::io::IOException>
{
public:


protected:

	Ber_EncodeException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JNDI_LDAP_BER_ENCODEEXCEPTION
