// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::mbms { class MbmsErrors; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::mbms::MbmsErrors>
{
	static constexpr fixed_string class_name = "android/telephony/mbms/MbmsErrors";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/telephony/mbms/MbmsErrors_StreamingErrors.h>
#include <scapix/java_api/android/telephony/mbms/MbmsErrors_InitializationErrors.h>
#include <scapix/java_api/android/telephony/mbms/MbmsErrors_GroupCallErrors.h>
#include <scapix/java_api/android/telephony/mbms/MbmsErrors_GeneralErrors.h>
#include <scapix/java_api/android/telephony/mbms/MbmsErrors_DownloadErrors.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::mbms::MbmsErrors : public jni::object_base<"android/telephony/mbms/MbmsErrors",
	java::lang::Object>
{
public:

	using StreamingErrors = MbmsErrors_StreamingErrors;
	using InitializationErrors = MbmsErrors_InitializationErrors;
	using GroupCallErrors = MbmsErrors_GroupCallErrors;
	using GeneralErrors = MbmsErrors_GeneralErrors;
	using DownloadErrors = MbmsErrors_DownloadErrors;

	static jint ERROR_MIDDLEWARE_LOST() { return get_static_field<"ERROR_MIDDLEWARE_LOST", jint>(); }
	static jint ERROR_MIDDLEWARE_NOT_BOUND() { return get_static_field<"ERROR_MIDDLEWARE_NOT_BOUND", jint>(); }
	static jint ERROR_NO_UNIQUE_MIDDLEWARE() { return get_static_field<"ERROR_NO_UNIQUE_MIDDLEWARE", jint>(); }
	static jint SUCCESS() { return get_static_field<"SUCCESS", jint>(); }
	static jint UNKNOWN() { return get_static_field<"UNKNOWN", jint>(); }


protected:

	MbmsErrors(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_MBMSERRORS