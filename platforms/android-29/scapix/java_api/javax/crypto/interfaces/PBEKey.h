// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/crypto/SecretKey.h>

#ifndef SCAPIX_JAVA_API_JAVAX_CRYPTO_INTERFACES_PBEKEY_FWD
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_INTERFACES_PBEKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::crypto::interfaces { class PBEKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::crypto::interfaces::PBEKey>
{
	static constexpr fixed_string class_name = "javax/crypto/interfaces/PBEKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::crypto::SecretKey>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_INTERFACES_PBEKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_CRYPTO_INTERFACES_PBEKEY)
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_INTERFACES_PBEKEY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::crypto::interfaces::PBEKey : public jni::object_base<"javax/crypto/interfaces/PBEKey",
	java::lang::Object,
	javax::crypto::SecretKey>
{
public:

	static jlong serialVersionUID() { return get_static_field<"serialVersionUID", jlong>(); }

	jni::ref<jni::array<jchar>> getPassword() { return call_method<"getPassword", jni::ref<jni::array<jchar>>>(); }
	jni::ref<jni::array<jbyte>> getSalt() { return call_method<"getSalt", jni::ref<jni::array<jbyte>>>(); }
	jint getIterationCount() { return call_method<"getIterationCount", jint>(); }

protected:

	PBEKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_INTERFACES_PBEKEY