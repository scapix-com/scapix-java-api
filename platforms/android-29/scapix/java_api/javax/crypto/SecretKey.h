// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/Key.h>
#include <scapix/java_api/javax/security/auth/Destroyable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_CRYPTO_SECRETKEY_FWD
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_SECRETKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::crypto { class SecretKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::crypto::SecretKey>
{
	static constexpr fixed_string class_name = "javax/crypto/SecretKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::Key, scapix::java_api::javax::security::auth::Destroyable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_SECRETKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_CRYPTO_SECRETKEY)
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_SECRETKEY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::crypto::SecretKey : public jni::object_base<"javax/crypto/SecretKey",
	java::lang::Object,
	java::security::Key,
	javax::security::auth::Destroyable>
{
public:

	static jlong serialVersionUID() { return get_static_field<"serialVersionUID", jlong>(); }


protected:

	SecretKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_SECRETKEY
