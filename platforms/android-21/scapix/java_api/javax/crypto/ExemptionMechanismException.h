// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/GeneralSecurityException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_CRYPTO_EXEMPTIONMECHANISMEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_EXEMPTIONMECHANISMEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::crypto { class ExemptionMechanismException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::crypto::ExemptionMechanismException>
{
	static constexpr fixed_string class_name = "javax/crypto/ExemptionMechanismException";
	using base_classes = std::tuple<scapix::java_api::java::security::GeneralSecurityException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_EXEMPTIONMECHANISMEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_CRYPTO_EXEMPTIONMECHANISMEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_EXEMPTIONMECHANISMEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::crypto::ExemptionMechanismException : public jni::object_base<"javax/crypto/ExemptionMechanismException",
	java::security::GeneralSecurityException>
{
public:

	static jni::ref<javax::crypto::ExemptionMechanismException> new_object(jni::ref<java::lang::String> msg) { return base_::new_object(msg); }
	static jni::ref<javax::crypto::ExemptionMechanismException> new_object() { return base_::new_object(); }

protected:

	ExemptionMechanismException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_EXEMPTIONMECHANISMEXCEPTION