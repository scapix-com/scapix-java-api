// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_CRYPTO_EXEMPTIONMECHANISMSPI_FWD
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_EXEMPTIONMECHANISMSPI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::crypto { class ExemptionMechanismSpi; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::crypto::ExemptionMechanismSpi>
{
	static constexpr fixed_string class_name = "javax/crypto/ExemptionMechanismSpi";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_EXEMPTIONMECHANISMSPI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_CRYPTO_EXEMPTIONMECHANISMSPI)
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_EXEMPTIONMECHANISMSPI

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::crypto::ExemptionMechanismSpi : public jni::object_base<"javax/crypto/ExemptionMechanismSpi",
	java::lang::Object>
{
public:

	static jni::ref<javax::crypto::ExemptionMechanismSpi> new_object() { return base_::new_object(); }

protected:

	ExemptionMechanismSpi(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_EXEMPTIONMECHANISMSPI
