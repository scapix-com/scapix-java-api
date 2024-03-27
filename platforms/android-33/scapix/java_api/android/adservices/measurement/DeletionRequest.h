// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ADSERVICES_MEASUREMENT_DELETIONREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_ADSERVICES_MEASUREMENT_DELETIONREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::adservices::measurement { class DeletionRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::adservices::measurement::DeletionRequest>
{
	static constexpr fixed_string class_name = "android/adservices/measurement/DeletionRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ADSERVICES_MEASUREMENT_DELETIONREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ADSERVICES_MEASUREMENT_DELETIONREQUEST)
#define SCAPIX_JAVA_API_ANDROID_ADSERVICES_MEASUREMENT_DELETIONREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/time/Instant.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/adservices/measurement/DeletionRequest_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::adservices::measurement::DeletionRequest : public jni::object_base<"android/adservices/measurement/DeletionRequest",
	java::lang::Object>
{
public:

	using Builder = DeletionRequest_Builder;

	static jint DELETION_MODE_ALL() { return get_static_field<"DELETION_MODE_ALL", jint>(); }
	static jint DELETION_MODE_EXCLUDE_INTERNAL_DATA() { return get_static_field<"DELETION_MODE_EXCLUDE_INTERNAL_DATA", jint>(); }
	static jint MATCH_BEHAVIOR_DELETE() { return get_static_field<"MATCH_BEHAVIOR_DELETE", jint>(); }
	static jint MATCH_BEHAVIOR_PRESERVE() { return get_static_field<"MATCH_BEHAVIOR_PRESERVE", jint>(); }

	jni::ref<java::util::List> getOriginUris() { return call_method<"getOriginUris", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getDomainUris() { return call_method<"getDomainUris", jni::ref<java::util::List>>(); }
	jint getDeletionMode() { return call_method<"getDeletionMode", jint>(); }
	jint getMatchBehavior() { return call_method<"getMatchBehavior", jint>(); }
	jni::ref<java::time::Instant> getStart() { return call_method<"getStart", jni::ref<java::time::Instant>>(); }
	jni::ref<java::time::Instant> getEnd() { return call_method<"getEnd", jni::ref<java::time::Instant>>(); }

protected:

	DeletionRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ADSERVICES_MEASUREMENT_DELETIONREQUEST