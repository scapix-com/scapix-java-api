// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_CALLLOG_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CALLLOG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class CallLog; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::CallLog>
{
	static constexpr fixed_string class_name = "android/provider/CallLog";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CALLLOG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_CALLLOG)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_CALLLOG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/provider/CallLog_Calls.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::CallLog : public jni::object_base<"android/provider/CallLog",
	java::lang::Object>
{
public:

	using Calls = CallLog_Calls;

	static jni::ref<java::lang::String> AUTHORITY() { return get_static_field<"AUTHORITY", jni::ref<java::lang::String>>(); }
	static jni::ref<android::net::Uri> CONTENT_URI() { return get_static_field<"CONTENT_URI", jni::ref<android::net::Uri>>(); }

	static jni::ref<android::provider::CallLog> new_object() { return base_::new_object(); }

protected:

	CallLog(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_CALLLOG
