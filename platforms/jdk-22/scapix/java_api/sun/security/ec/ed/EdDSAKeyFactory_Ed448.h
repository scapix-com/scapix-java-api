// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ec/ed/EdDSAKeyFactory.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAKEYFACTORY_ED448_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAKEYFACTORY_ED448_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ec::ed { class EdDSAKeyFactory_Ed448; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ec::ed::EdDSAKeyFactory_Ed448>
{
	static constexpr fixed_string class_name = "sun/security/ec/ed/EdDSAKeyFactory$Ed448";
	using base_classes = std::tuple<scapix::java_api::sun::security::ec::ed::EdDSAKeyFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAKEYFACTORY_ED448_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAKEYFACTORY_ED448)
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAKEYFACTORY_ED448

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::ec::ed::EdDSAKeyFactory_Ed448 : public jni::object_base<"sun/security/ec/ed/EdDSAKeyFactory$Ed448",
	sun::security::ec::ed::EdDSAKeyFactory>
{
public:

	static jni::ref<sun::security::ec::ed::EdDSAKeyFactory_Ed448> new_object() { return base_::new_object(); }

protected:

	EdDSAKeyFactory_Ed448(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAKEYFACTORY_ED448
