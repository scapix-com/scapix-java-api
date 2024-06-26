// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAROUTER2_TRANSFERCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAROUTER2_TRANSFERCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaRouter2_TransferCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaRouter2_TransferCallback>
{
	static constexpr fixed_string class_name = "android/media/MediaRouter2$TransferCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAROUTER2_TRANSFERCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAROUTER2_TRANSFERCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAROUTER2_TRANSFERCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/MediaRoute2Info.h>
#include <scapix/java_api/android/media/MediaRouter2_RoutingController.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaRouter2_TransferCallback : public jni::object_base<"android/media/MediaRouter2$TransferCallback",
	java::lang::Object>
{
public:

	static jni::ref<android::media::MediaRouter2_TransferCallback> new_object() { return base_::new_object(); }
	void onTransfer(jni::ref<android::media::MediaRouter2_RoutingController> oldController, jni::ref<android::media::MediaRouter2_RoutingController> newController) { return call_method<"onTransfer", void>(oldController, newController); }
	void onTransferFailure(jni::ref<android::media::MediaRoute2Info> requestedRoute) { return call_method<"onTransferFailure", void>(requestedRoute); }
	void onStop(jni::ref<android::media::MediaRouter2_RoutingController> controller) { return call_method<"onStop", void>(controller); }

protected:

	MediaRouter2_TransferCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAROUTER2_TRANSFERCALLBACK
