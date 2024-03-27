// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/pkcs/PKCS8Key.h>
#include <scapix/java_api/java/security/interfaces/EdECPrivateKey.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAPRIVATEKEYIMPL_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAPRIVATEKEYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ec::ed { class EdDSAPrivateKeyImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ec::ed::EdDSAPrivateKeyImpl>
{
	static constexpr fixed_string class_name = "sun/security/ec/ed/EdDSAPrivateKeyImpl";
	using base_classes = std::tuple<scapix::java_api::sun::security::pkcs::PKCS8Key, scapix::java_api::java::security::interfaces::EdECPrivateKey>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAPRIVATEKEYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAPRIVATEKEYIMPL)
#define SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAPRIVATEKEYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/spec/NamedParameterSpec.h>
#include <scapix/java_api/java/util/Optional.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::ec::ed::EdDSAPrivateKeyImpl : public jni::object_base<"sun/security/ec/ed/EdDSAPrivateKeyImpl",
	sun::security::pkcs::PKCS8Key,
	java::security::interfaces::EdECPrivateKey>
{
public:

	jni::ref<jni::array<jbyte>> getKey() { return call_method<"getKey", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::lang::String> getAlgorithm() { return call_method<"getAlgorithm", jni::ref<java::lang::String>>(); }
	jni::ref<java::security::spec::NamedParameterSpec> getParams() { return call_method<"getParams", jni::ref<java::security::spec::NamedParameterSpec>>(); }
	jni::ref<java::util::Optional> getBytes() { return call_method<"getBytes", jni::ref<java::util::Optional>>(); }

protected:

	EdDSAPrivateKeyImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_EC_ED_EDDSAPRIVATEKEYIMPL
