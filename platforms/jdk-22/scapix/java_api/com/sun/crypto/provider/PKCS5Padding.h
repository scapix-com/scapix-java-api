// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/crypto/provider/Padding.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PKCS5PADDING_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PKCS5PADDING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class PKCS5Padding; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::PKCS5Padding>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/PKCS5Padding";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::crypto::provider::Padding>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PKCS5PADDING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PKCS5PADDING)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PKCS5PADDING

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::crypto::provider::PKCS5Padding : public jni::object_base<"com/sun/crypto/provider/PKCS5Padding",
	java::lang::Object,
	com::sun::crypto::provider::Padding>
{
public:

	void padWithLen(jni::ref<jni::array<jbyte>> in, jint off, jint len) { return call_method<"padWithLen", void>(in, off, len); }
	jint unpad(jni::ref<jni::array<jbyte>> in, jint off, jint len) { return call_method<"unpad", jint>(in, off, len); }
	jint padLength(jint len) { return call_method<"padLength", jint>(len); }

protected:

	PKCS5Padding(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_PKCS5PADDING