// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/health/connect/ReadRecordsRequest.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_READRECORDSREQUESTUSINGIDS_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_READRECORDSREQUESTUSINGIDS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect { class ReadRecordsRequestUsingIds; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::ReadRecordsRequestUsingIds>
{
	static constexpr fixed_string class_name = "android/health/connect/ReadRecordsRequestUsingIds";
	using base_classes = std::tuple<scapix::java_api::android::health::connect::ReadRecordsRequest>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_READRECORDSREQUESTUSINGIDS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_READRECORDSREQUESTUSINGIDS)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_READRECORDSREQUESTUSINGIDS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/health/connect/ReadRecordsRequestUsingIds_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::ReadRecordsRequestUsingIds : public jni::object_base<"android/health/connect/ReadRecordsRequestUsingIds",
	android::health::connect::ReadRecordsRequest>
{
public:

	using Builder = ReadRecordsRequestUsingIds_Builder;

	jni::ref<java::util::List> getRecordIdFilters() { return call_method<"getRecordIdFilters", jni::ref<java::util::List>>(); }

protected:

	ReadRecordsRequestUsingIds(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_READRECORDSREQUESTUSINGIDS