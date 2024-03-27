// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTION_RTTMODIFYSTATUS_FWD
#define SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTION_RTTMODIFYSTATUS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telecom { class Connection_RttModifyStatus; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telecom::Connection_RttModifyStatus>
{
	static constexpr fixed_string class_name = "android/telecom/Connection$RttModifyStatus";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTION_RTTMODIFYSTATUS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTION_RTTMODIFYSTATUS)
#define SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTION_RTTMODIFYSTATUS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telecom::Connection_RttModifyStatus : public jni::object_base<"android/telecom/Connection$RttModifyStatus",
	java::lang::Object>
{
public:

	static jint SESSION_MODIFY_REQUEST_FAIL() { return get_static_field<"SESSION_MODIFY_REQUEST_FAIL", jint>(); }
	static jint SESSION_MODIFY_REQUEST_INVALID() { return get_static_field<"SESSION_MODIFY_REQUEST_INVALID", jint>(); }
	static jint SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE() { return get_static_field<"SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE", jint>(); }
	static jint SESSION_MODIFY_REQUEST_SUCCESS() { return get_static_field<"SESSION_MODIFY_REQUEST_SUCCESS", jint>(); }
	static jint SESSION_MODIFY_REQUEST_TIMED_OUT() { return get_static_field<"SESSION_MODIFY_REQUEST_TIMED_OUT", jint>(); }


protected:

	Connection_RttModifyStatus(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTION_RTTMODIFYSTATUS