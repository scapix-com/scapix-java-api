// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SECURITY_KEYPAIRGENERATORSPEC_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_SECURITY_KEYPAIRGENERATORSPEC_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::security { class KeyPairGeneratorSpec_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::security::KeyPairGeneratorSpec_Builder>
{
	static constexpr fixed_string class_name = "android/security/KeyPairGeneratorSpec$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_KEYPAIRGENERATORSPEC_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SECURITY_KEYPAIRGENERATORSPEC_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_SECURITY_KEYPAIRGENERATORSPEC_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/security/KeyPairGeneratorSpec.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/javax/security/auth/x500/X500Principal.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::security::KeyPairGeneratorSpec_Builder : public jni::object_base<"android/security/KeyPairGeneratorSpec$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::security::KeyPairGeneratorSpec_Builder> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	jni::ref<android::security::KeyPairGeneratorSpec_Builder> setAlias(jni::ref<java::lang::String> alias) { return call_method<"setAlias", jni::ref<android::security::KeyPairGeneratorSpec_Builder>>(alias); }
	jni::ref<android::security::KeyPairGeneratorSpec_Builder> setKeyType(jni::ref<java::lang::String> keyType) { return call_method<"setKeyType", jni::ref<android::security::KeyPairGeneratorSpec_Builder>>(keyType); }
	jni::ref<android::security::KeyPairGeneratorSpec_Builder> setKeySize(jint keySize) { return call_method<"setKeySize", jni::ref<android::security::KeyPairGeneratorSpec_Builder>>(keySize); }
	jni::ref<android::security::KeyPairGeneratorSpec_Builder> setAlgorithmParameterSpec(jni::ref<java::security::spec::AlgorithmParameterSpec> spec) { return call_method<"setAlgorithmParameterSpec", jni::ref<android::security::KeyPairGeneratorSpec_Builder>>(spec); }
	jni::ref<android::security::KeyPairGeneratorSpec_Builder> setSubject(jni::ref<javax::security::auth::x500::X500Principal> subject) { return call_method<"setSubject", jni::ref<android::security::KeyPairGeneratorSpec_Builder>>(subject); }
	jni::ref<android::security::KeyPairGeneratorSpec_Builder> setSerialNumber(jni::ref<java::math::BigInteger> serialNumber) { return call_method<"setSerialNumber", jni::ref<android::security::KeyPairGeneratorSpec_Builder>>(serialNumber); }
	jni::ref<android::security::KeyPairGeneratorSpec_Builder> setStartDate(jni::ref<java::util::Date> startDate) { return call_method<"setStartDate", jni::ref<android::security::KeyPairGeneratorSpec_Builder>>(startDate); }
	jni::ref<android::security::KeyPairGeneratorSpec_Builder> setEndDate(jni::ref<java::util::Date> endDate) { return call_method<"setEndDate", jni::ref<android::security::KeyPairGeneratorSpec_Builder>>(endDate); }
	jni::ref<android::security::KeyPairGeneratorSpec_Builder> setEncryptionRequired() { return call_method<"setEncryptionRequired", jni::ref<android::security::KeyPairGeneratorSpec_Builder>>(); }
	jni::ref<android::security::KeyPairGeneratorSpec> build() { return call_method<"build", jni::ref<android::security::KeyPairGeneratorSpec>>(); }

protected:

	KeyPairGeneratorSpec_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_KEYPAIRGENERATORSPEC_BUILDER