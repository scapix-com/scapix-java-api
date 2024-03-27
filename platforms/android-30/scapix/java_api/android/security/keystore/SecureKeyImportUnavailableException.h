// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/ProviderException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_SECUREKEYIMPORTUNAVAILABLEEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_SECUREKEYIMPORTUNAVAILABLEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::security::keystore { class SecureKeyImportUnavailableException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::security::keystore::SecureKeyImportUnavailableException>
{
	static constexpr fixed_string class_name = "android/security/keystore/SecureKeyImportUnavailableException";
	using base_classes = std::tuple<scapix::java_api::java::security::ProviderException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_SECUREKEYIMPORTUNAVAILABLEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_SECUREKEYIMPORTUNAVAILABLEEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_SECUREKEYIMPORTUNAVAILABLEEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::security::keystore::SecureKeyImportUnavailableException : public jni::object_base<"android/security/keystore/SecureKeyImportUnavailableException",
	java::security::ProviderException>
{
public:

	static jni::ref<android::security::keystore::SecureKeyImportUnavailableException> new_object() { return base_::new_object(); }
	static jni::ref<android::security::keystore::SecureKeyImportUnavailableException> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }
	static jni::ref<android::security::keystore::SecureKeyImportUnavailableException> new_object(jni::ref<java::lang::String> message, jni::ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }
	static jni::ref<android::security::keystore::SecureKeyImportUnavailableException> new_object(jni::ref<java::lang::Throwable> cause) { return base_::new_object(cause); }

protected:

	SecureKeyImportUnavailableException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_SECUREKEYIMPORTUNAVAILABLEEXCEPTION