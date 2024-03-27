// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_BROWSE_MEDIABROWSER_CONNECTIONCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_BROWSE_MEDIABROWSER_CONNECTIONCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::browse { class MediaBrowser_ConnectionCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::browse::MediaBrowser_ConnectionCallback>
{
	static constexpr fixed_string class_name = "android/media/browse/MediaBrowser$ConnectionCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_BROWSE_MEDIABROWSER_CONNECTIONCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_BROWSE_MEDIABROWSER_CONNECTIONCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_BROWSE_MEDIABROWSER_CONNECTIONCALLBACK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::browse::MediaBrowser_ConnectionCallback : public jni::object_base<"android/media/browse/MediaBrowser$ConnectionCallback",
	java::lang::Object>
{
public:

	static jni::ref<android::media::browse::MediaBrowser_ConnectionCallback> new_object() { return base_::new_object(); }
	void onConnected() { return call_method<"onConnected", void>(); }
	void onConnectionSuspended() { return call_method<"onConnectionSuspended", void>(); }
	void onConnectionFailed() { return call_method<"onConnectionFailed", void>(); }

protected:

	MediaBrowser_ConnectionCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_BROWSE_MEDIABROWSER_CONNECTIONCALLBACK
