// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_CHANGELOG_CHANGELOGSRESPONSE_DELETEDLOG_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_CHANGELOG_CHANGELOGSRESPONSE_DELETEDLOG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect::changelog { class ChangeLogsResponse_DeletedLog; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::changelog::ChangeLogsResponse_DeletedLog>
{
	static constexpr fixed_string class_name = "android/health/connect/changelog/ChangeLogsResponse$DeletedLog";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_CHANGELOG_CHANGELOGSRESPONSE_DELETEDLOG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_CHANGELOG_CHANGELOGSRESPONSE_DELETEDLOG)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_CHANGELOG_CHANGELOGSRESPONSE_DELETEDLOG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Instant.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::changelog::ChangeLogsResponse_DeletedLog : public jni::object_base<"android/health/connect/changelog/ChangeLogsResponse$DeletedLog",
	java::lang::Object>
{
public:

	static jni::ref<android::health::connect::changelog::ChangeLogsResponse_DeletedLog> new_object(jni::ref<java::lang::String> deletedRecordId, jlong deletedTime) { return base_::new_object(deletedRecordId, deletedTime); }
	jni::ref<java::lang::String> getDeletedRecordId() { return call_method<"getDeletedRecordId", jni::ref<java::lang::String>>(); }
	jni::ref<java::time::Instant> getDeletedTime() { return call_method<"getDeletedTime", jni::ref<java::time::Instant>>(); }

protected:

	ChangeLogsResponse_DeletedLog(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_CHANGELOG_CHANGELOGSRESPONSE_DELETEDLOG
