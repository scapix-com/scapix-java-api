// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/Permission.h>

#ifndef SCAPIX_JAVA_API_JAVAX_CRYPTO_CRYPTOPERMISSION_FWD
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_CRYPTOPERMISSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::crypto { class CryptoPermission; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::crypto::CryptoPermission>
{
	static constexpr fixed_string class_name = "javax/crypto/CryptoPermission";
	using base_classes = std::tuple<scapix::java_api::java::security::Permission>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_CRYPTOPERMISSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_CRYPTO_CRYPTOPERMISSION)
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_CRYPTOPERMISSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/PermissionCollection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::crypto::CryptoPermission : public jni::object_base<"javax/crypto/CryptoPermission",
	java::security::Permission>
{
public:

	jboolean implies(jni::ref<java::security::Permission> p) { return call_method<"implies", jboolean>(p); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> getActions() { return call_method<"getActions", jni::ref<java::lang::String>>(); }
	jni::ref<java::security::PermissionCollection> newPermissionCollection() { return call_method<"newPermissionCollection", jni::ref<java::security::PermissionCollection>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	CryptoPermission(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_CRYPTOPERMISSION
