// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_SDKSANDBOX_REQUESTSURFACEPACKAGEEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_SDKSANDBOX_REQUESTSURFACEPACKAGEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::sdksandbox { class RequestSurfacePackageException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::sdksandbox::RequestSurfacePackageException>
{
	static constexpr fixed_string class_name = "android/app/sdksandbox/RequestSurfacePackageException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_SDKSANDBOX_REQUESTSURFACEPACKAGEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_SDKSANDBOX_REQUESTSURFACEPACKAGEEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_APP_SDKSANDBOX_REQUESTSURFACEPACKAGEEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::sdksandbox::RequestSurfacePackageException : public jni::object_base<"android/app/sdksandbox/RequestSurfacePackageException",
	java::lang::Exception>
{
public:

	static jni::ref<android::app::sdksandbox::RequestSurfacePackageException> new_object(jint requestSurfacePackageErrorCode, jni::ref<java::lang::String> message) { return base_::new_object(requestSurfacePackageErrorCode, message); }
	static jni::ref<android::app::sdksandbox::RequestSurfacePackageException> new_object(jint requestSurfacePackageErrorCode, jni::ref<java::lang::String> message, jni::ref<java::lang::Throwable> cause) { return base_::new_object(requestSurfacePackageErrorCode, message, cause); }
	static jni::ref<android::app::sdksandbox::RequestSurfacePackageException> new_object(jint requestSurfacePackageErrorCode, jni::ref<java::lang::String> message, jni::ref<java::lang::Throwable> cause, jni::ref<android::os::Bundle> extraInfo) { return base_::new_object(requestSurfacePackageErrorCode, message, cause, extraInfo); }
	jint getRequestSurfacePackageErrorCode() { return call_method<"getRequestSurfacePackageErrorCode", jint>(); }
	jni::ref<android::os::Bundle> getExtraErrorInformation() { return call_method<"getExtraErrorInformation", jni::ref<android::os::Bundle>>(); }

protected:

	RequestSurfacePackageException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_SDKSANDBOX_REQUESTSURFACEPACKAGEEXCEPTION