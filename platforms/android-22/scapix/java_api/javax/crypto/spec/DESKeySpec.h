// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/KeySpec.h>

#ifndef SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_DESKEYSPEC_FWD
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_DESKEYSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::crypto::spec { class DESKeySpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::crypto::spec::DESKeySpec>
{
	static constexpr fixed_string class_name = "javax/crypto/spec/DESKeySpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::spec::KeySpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_DESKEYSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_DESKEYSPEC)
#define SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_DESKEYSPEC

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::crypto::spec::DESKeySpec : public jni::object_base<"javax/crypto/spec/DESKeySpec",
	java::lang::Object,
	java::security::spec::KeySpec>
{
public:

	static jint DES_KEY_LEN() { return get_static_field<"DES_KEY_LEN", jint>(); }

	static jni::ref<javax::crypto::spec::DESKeySpec> new_object(jni::ref<jni::array<jbyte>> key) { return base_::new_object(key); }
	static jni::ref<javax::crypto::spec::DESKeySpec> new_object(jni::ref<jni::array<jbyte>> key, jint offset) { return base_::new_object(key, offset); }
	jni::ref<jni::array<jbyte>> getKey() { return call_method<"getKey", jni::ref<jni::array<jbyte>>>(); }
	static jboolean isParityAdjusted(jni::ref<jni::array<jbyte>> key, jint offset) { return call_static_method<"isParityAdjusted", jboolean>(key, offset); }
	static jboolean isWeak(jni::ref<jni::array<jbyte>> key, jint offset) { return call_static_method<"isWeak", jboolean>(key, offset); }

protected:

	DESKeySpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_CRYPTO_SPEC_DESKEYSPEC
