// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/crypto/SecretKey.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DESEDEKEY_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DESEDEKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class DESedeKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::DESedeKey>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/DESedeKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::crypto::SecretKey>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DESEDEKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DESEDEKEY)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DESEDEKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::crypto::provider::DESedeKey : public jni::object_base<"com/sun/crypto/provider/DESedeKey",
	java::lang::Object,
	javax::crypto::SecretKey>
{
public:

	jni::ref<jni::array<jbyte>> getEncoded() { return call_method<"getEncoded", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::lang::String> getAlgorithm() { return call_method<"getAlgorithm", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getFormat() { return call_method<"getFormat", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }

protected:

	DESedeKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_DESEDEKEY