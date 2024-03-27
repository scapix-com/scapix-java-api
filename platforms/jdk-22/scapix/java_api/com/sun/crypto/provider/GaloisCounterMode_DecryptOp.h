// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/crypto/provider/GaloisCounterMode_GCMOperation.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE_DECRYPTOP_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE_DECRYPTOP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class GaloisCounterMode_DecryptOp; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::GaloisCounterMode_DecryptOp>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/GaloisCounterMode$DecryptOp";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::crypto::provider::GaloisCounterMode_GCMOperation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE_DECRYPTOP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE_DECRYPTOP)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE_DECRYPTOP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::crypto::provider::GaloisCounterMode_DecryptOp : public jni::object_base<"com/sun/crypto/provider/GaloisCounterMode$DecryptOp",
	java::lang::Object,
	com::sun::crypto::provider::GaloisCounterMode_GCMOperation>
{
public:

	jint update(jni::ref<jni::array<jbyte>> in, jint inOfs, jint inLen, jni::ref<jni::array<jbyte>> out, jint outOfs) { return call_method<"update", jint>(in, inOfs, inLen, out, outOfs); }
	jint update(jni::ref<jni::array<jbyte>> in, jint inOfs, jint inLen, jni::ref<java::nio::ByteBuffer> dst) { return call_method<"update", jint>(in, inOfs, inLen, dst); }
	jint update(jni::ref<java::nio::ByteBuffer> src, jni::ref<java::nio::ByteBuffer> dst) { return call_method<"update", jint>(src, dst); }
	jint doFinal(jni::ref<jni::array<jbyte>> in, jint inOfs, jint inLen, jni::ref<jni::array<jbyte>> out, jint outOfs) { return call_method<"doFinal", jint>(in, inOfs, inLen, out, outOfs); }
	jint doFinal(jni::ref<java::nio::ByteBuffer> src, jni::ref<java::nio::ByteBuffer> dst) { return call_method<"doFinal", jint>(src, dst); }

protected:

	GaloisCounterMode_DecryptOp(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE_DECRYPTOP