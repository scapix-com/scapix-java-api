// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_SYNCSTATUSOBSERVER_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_SYNCSTATUSOBSERVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content { class SyncStatusObserver; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::SyncStatusObserver>
{
	static constexpr fixed_string class_name = "android/content/SyncStatusObserver";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_SYNCSTATUSOBSERVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_SYNCSTATUSOBSERVER)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_SYNCSTATUSOBSERVER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::SyncStatusObserver : public jni::object_base<"android/content/SyncStatusObserver",
	java::lang::Object>
{
public:

	void onStatusChanged(jint p1) { return call_method<"onStatusChanged", void>(p1); }

protected:

	SyncStatusObserver(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_SYNCSTATUSOBSERVER