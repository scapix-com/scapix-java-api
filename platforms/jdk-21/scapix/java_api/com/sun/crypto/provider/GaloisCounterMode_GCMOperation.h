// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE_GCMOPERATION_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE_GCMOPERATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class GaloisCounterMode_GCMOperation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::GaloisCounterMode_GCMOperation>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/GaloisCounterMode$GCMOperation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE_GCMOPERATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE_GCMOPERATION)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE_GCMOPERATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::crypto::provider::GaloisCounterMode_GCMOperation : public jni::object_base<"com/sun/crypto/provider/GaloisCounterMode$GCMOperation",
	java::lang::Object>
{
public:

	jint update(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3, jni::ref<jni::array<jbyte>> p4, jint p5) { return call_method<"update", jint>(p1, p2, p3, p4, p5); }
	jint update(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3, jni::ref<java::nio::ByteBuffer> p4) { return call_method<"update", jint>(p1, p2, p3, p4); }
	jint update(jni::ref<java::nio::ByteBuffer> p1, jni::ref<java::nio::ByteBuffer> p2) { return call_method<"update", jint>(p1, p2); }
	jint doFinal(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3, jni::ref<jni::array<jbyte>> p4, jint p5) { return call_method<"doFinal", jint>(p1, p2, p3, p4, p5); }
	jint doFinal(jni::ref<java::nio::ByteBuffer> p1, jni::ref<java::nio::ByteBuffer> p2) { return call_method<"doFinal", jint>(p1, p2); }

protected:

	GaloisCounterMode_GCMOperation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_GALOISCOUNTERMODE_GCMOPERATION
