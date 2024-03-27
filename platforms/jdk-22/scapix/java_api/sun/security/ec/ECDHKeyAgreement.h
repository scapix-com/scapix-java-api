// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/crypto/KeyAgreementSpi.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDHKEYAGREEMENT_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDHKEYAGREEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ec { class ECDHKeyAgreement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ec::ECDHKeyAgreement>
{
	static constexpr fixed_string class_name = "sun/security/ec/ECDHKeyAgreement";
	using base_classes = std::tuple<scapix::java_api::javax::crypto::KeyAgreementSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDHKEYAGREEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDHKEYAGREEMENT)
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDHKEYAGREEMENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::ec::ECDHKeyAgreement : public jni::object_base<"sun/security/ec/ECDHKeyAgreement",
	javax::crypto::KeyAgreementSpi>
{
public:

	static jni::ref<sun::security::ec::ECDHKeyAgreement> new_object() { return base_::new_object(); }

protected:

	ECDHKeyAgreement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ECDHKEYAGREEMENT
