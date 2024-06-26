// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_INSERTRECORDSRESPONSE_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_INSERTRECORDSRESPONSE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect { class InsertRecordsResponse; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::InsertRecordsResponse>
{
	static constexpr fixed_string class_name = "android/health/connect/InsertRecordsResponse";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_INSERTRECORDSRESPONSE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_INSERTRECORDSRESPONSE)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_INSERTRECORDSRESPONSE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::InsertRecordsResponse : public jni::object_base<"android/health/connect/InsertRecordsResponse",
	java::lang::Object>
{
public:

	jni::ref<java::util::List> getRecords() { return call_method<"getRecords", jni::ref<java::util::List>>(); }

protected:

	InsertRecordsResponse(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_INSERTRECORDSRESPONSE
