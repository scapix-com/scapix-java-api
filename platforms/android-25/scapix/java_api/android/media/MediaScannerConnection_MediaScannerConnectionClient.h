// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/media/MediaScannerConnection_OnScanCompletedListener.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIASCANNERCONNECTION_MEDIASCANNERCONNECTIONCLIENT_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIASCANNERCONNECTION_MEDIASCANNERCONNECTIONCLIENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaScannerConnection_MediaScannerConnectionClient; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaScannerConnection_MediaScannerConnectionClient>
{
	static constexpr fixed_string class_name = "android/media/MediaScannerConnection$MediaScannerConnectionClient";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::media::MediaScannerConnection_OnScanCompletedListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIASCANNERCONNECTION_MEDIASCANNERCONNECTIONCLIENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIASCANNERCONNECTION_MEDIASCANNERCONNECTIONCLIENT)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIASCANNERCONNECTION_MEDIASCANNERCONNECTIONCLIENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaScannerConnection_MediaScannerConnectionClient : public jni::object_base<"android/media/MediaScannerConnection$MediaScannerConnectionClient",
	java::lang::Object,
	android::media::MediaScannerConnection_OnScanCompletedListener>
{
public:

	void onMediaScannerConnected() { return call_method<"onMediaScannerConnected", void>(); }
	void onScanCompleted(jni::ref<java::lang::String> p1, jni::ref<android::net::Uri> p2) { return call_method<"onScanCompleted", void>(p1, p2); }

protected:

	MediaScannerConnection_MediaScannerConnectionClient(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIASCANNERCONNECTION_MEDIASCANNERCONNECTIONCLIENT
