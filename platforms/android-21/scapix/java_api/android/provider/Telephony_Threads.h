// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/Telephony_ThreadsColumns.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_TELEPHONY_THREADS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_TELEPHONY_THREADS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class Telephony_Threads; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::Telephony_Threads>
{
	static constexpr fixed_string class_name = "android/provider/Telephony$Threads";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::provider::Telephony_ThreadsColumns>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_TELEPHONY_THREADS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_TELEPHONY_THREADS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_TELEPHONY_THREADS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::Telephony_Threads : public jni::object_base<"android/provider/Telephony$Threads",
	java::lang::Object,
	android::provider::Telephony_ThreadsColumns>
{
public:

	static jint BROADCAST_THREAD() { return get_static_field<"BROADCAST_THREAD", jint>(); }
	static jint COMMON_THREAD() { return get_static_field<"COMMON_THREAD", jint>(); }
	static jni::ref<android::net::Uri> CONTENT_URI() { return get_static_field<"CONTENT_URI", jni::ref<android::net::Uri>>(); }
	static jni::ref<android::net::Uri> OBSOLETE_THREADS_URI() { return get_static_field<"OBSOLETE_THREADS_URI", jni::ref<android::net::Uri>>(); }


protected:

	Telephony_Threads(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_TELEPHONY_THREADS
