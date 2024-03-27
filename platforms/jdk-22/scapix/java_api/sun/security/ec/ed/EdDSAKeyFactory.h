// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/KeyFactorySpi.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAKEYFACTORY_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAKEYFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ec::ed { class EdDSAKeyFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ec::ed::EdDSAKeyFactory>
{
	static constexpr fixed_string class_name = "sun/security/ec/ed/EdDSAKeyFactory";
	using base_classes = std::tuple<scapix::java_api::java::security::KeyFactorySpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAKEYFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAKEYFACTORY)
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAKEYFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/security/ec/ed/EdDSAKeyFactory_Ed448.h>
#include <scapix/java_api/sun/security/ec/ed/EdDSAKeyFactory_Ed25519.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::ec::ed::EdDSAKeyFactory : public jni::object_base<"sun/security/ec/ed/EdDSAKeyFactory",
	java::security::KeyFactorySpi>
{
public:

	using Ed448 = EdDSAKeyFactory_Ed448;
	using Ed25519 = EdDSAKeyFactory_Ed25519;

	static jni::ref<sun::security::ec::ed::EdDSAKeyFactory> new_object() { return base_::new_object(); }

protected:

	EdDSAKeyFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAKEYFACTORY