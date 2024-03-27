// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_SECURERANDOMSPI_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_SECURERANDOMSPI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class SecureRandomSpi; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::SecureRandomSpi>
{
	static constexpr fixed_string class_name = "java/security/SecureRandomSpi";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SECURERANDOMSPI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_SECURERANDOMSPI)
#define SCAPIX_JAVA_API_JAVA_SECURITY_SECURERANDOMSPI

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::SecureRandomSpi : public jni::object_base<"java/security/SecureRandomSpi",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::security::SecureRandomSpi> new_object() { return base_::new_object(); }

protected:

	SecureRandomSpi(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SECURERANDOMSPI