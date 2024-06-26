// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_MEDIA_MEDIABROWSERSERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_MEDIA_MEDIABROWSERSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::media { class MediaBrowserService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::media::MediaBrowserService>
{
	static constexpr fixed_string class_name = "android/service/media/MediaBrowserService";
	using base_classes = std::tuple<scapix::java_api::android::app::Service>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_MEDIA_MEDIABROWSERSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_MEDIA_MEDIABROWSERSERVICE)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_MEDIA_MEDIABROWSERSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/media/session/MediaSession_Token.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/android/service/media/MediaBrowserService_BrowserRoot.h>
#include <scapix/java_api/android/service/media/MediaBrowserService_Result.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/io/PrintWriter.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::media::MediaBrowserService : public jni::object_base<"android/service/media/MediaBrowserService",
	android::app::Service>
{
public:

	using BrowserRoot = MediaBrowserService_BrowserRoot;
	using Result = MediaBrowserService_Result;

	static jni::ref<java::lang::String> SERVICE_INTERFACE() { return get_static_field<"SERVICE_INTERFACE", jni::ref<java::lang::String>>(); }

	static jni::ref<android::service::media::MediaBrowserService> new_object() { return base_::new_object(); }
	void onCreate() { return call_method<"onCreate", void>(); }
	jni::ref<android::os::IBinder> onBind(jni::ref<android::content::Intent> intent) { return call_method<"onBind", jni::ref<android::os::IBinder>>(intent); }
	void dump(jni::ref<java::io::FileDescriptor> fd, jni::ref<java::io::PrintWriter> writer, jni::ref<jni::array<java::lang::String>> args) { return call_method<"dump", void>(fd, writer, args); }
	jni::ref<android::service::media::MediaBrowserService_BrowserRoot> onGetRoot(jni::ref<java::lang::String> p1, jint p2, jni::ref<android::os::Bundle> p3) { return call_method<"onGetRoot", jni::ref<android::service::media::MediaBrowserService_BrowserRoot>>(p1, p2, p3); }
	void onLoadChildren(jni::ref<java::lang::String> p1, jni::ref<android::service::media::MediaBrowserService_Result> p2) { return call_method<"onLoadChildren", void>(p1, p2); }
	void setSessionToken(jni::ref<android::media::session::MediaSession_Token> token) { return call_method<"setSessionToken", void>(token); }
	jni::ref<android::media::session::MediaSession_Token> getSessionToken() { return call_method<"getSessionToken", jni::ref<android::media::session::MediaSession_Token>>(); }
	void notifyChildrenChanged(jni::ref<java::lang::String> parentId) { return call_method<"notifyChildrenChanged", void>(parentId); }

protected:

	MediaBrowserService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_MEDIA_MEDIABROWSERSERVICE
