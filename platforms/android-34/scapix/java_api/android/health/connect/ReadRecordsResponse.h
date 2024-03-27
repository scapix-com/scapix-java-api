// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_READRECORDSRESPONSE_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_READRECORDSRESPONSE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect { class ReadRecordsResponse; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::ReadRecordsResponse>
{
	static constexpr fixed_string class_name = "android/health/connect/ReadRecordsResponse";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_READRECORDSRESPONSE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_READRECORDSRESPONSE)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_READRECORDSRESPONSE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::ReadRecordsResponse : public jni::object_base<"android/health/connect/ReadRecordsResponse",
	java::lang::Object>
{
public:

	jni::ref<java::util::List> getRecords() { return call_method<"getRecords", jni::ref<java::util::List>>(); }
	jlong getNextPageToken() { return call_method<"getNextPageToken", jlong>(); }

protected:

	ReadRecordsResponse(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_READRECORDSRESPONSE