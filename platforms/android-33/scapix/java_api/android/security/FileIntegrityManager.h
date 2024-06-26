// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SECURITY_FILEINTEGRITYMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_SECURITY_FILEINTEGRITYMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::security { class FileIntegrityManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::security::FileIntegrityManager>
{
	static constexpr fixed_string class_name = "android/security/FileIntegrityManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_FILEINTEGRITYMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SECURITY_FILEINTEGRITYMANAGER)
#define SCAPIX_JAVA_API_ANDROID_SECURITY_FILEINTEGRITYMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/cert/X509Certificate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::security::FileIntegrityManager : public jni::object_base<"android/security/FileIntegrityManager",
	java::lang::Object>
{
public:

	jboolean isApkVeritySupported() { return call_method<"isApkVeritySupported", jboolean>(); }
	jboolean isAppSourceCertificateTrusted(jni::ref<java::security::cert::X509Certificate> certificate) { return call_method<"isAppSourceCertificateTrusted", jboolean>(certificate); }

protected:

	FileIntegrityManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_FILEINTEGRITYMANAGER
