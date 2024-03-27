// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACAS_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACAS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaCas; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaCas>
{
	static constexpr fixed_string class_name = "android/media/MediaCas";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::AutoCloseable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACAS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACAS)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACAS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/MediaCas_EventListener.h>
#include <scapix/java_api/android/media/MediaCas_PluginDescriptor.h>
#include <scapix/java_api/android/media/MediaCas_Session.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaCas : public jni::object_base<"android/media/MediaCas",
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	using EventListener = MediaCas_EventListener;
	using Session = MediaCas_Session;
	using PluginDescriptor = MediaCas_PluginDescriptor;

	static jni::ref<android::media::MediaCas> new_object(jint CA_system_id) { return base_::new_object(CA_system_id); }
	static jboolean isSystemIdSupported(jint CA_system_id) { return call_static_method<"isSystemIdSupported", jboolean>(CA_system_id); }
	static jni::ref<jni::array<android::media::MediaCas_PluginDescriptor>> enumeratePlugins() { return call_static_method<"enumeratePlugins", jni::ref<jni::array<android::media::MediaCas_PluginDescriptor>>>(); }
	void setEventListener(jni::ref<android::media::MediaCas_EventListener> listener, jni::ref<android::os::Handler> handler) { return call_method<"setEventListener", void>(listener, handler); }
	void setPrivateData(jni::ref<jni::array<jbyte>> data) { return call_method<"setPrivateData", void>(data); }
	jni::ref<android::media::MediaCas_Session> openSession() { return call_method<"openSession", jni::ref<android::media::MediaCas_Session>>(); }
	void processEmm(jni::ref<jni::array<jbyte>> data, jint offset, jint length) { return call_method<"processEmm", void>(data, offset, length); }
	void processEmm(jni::ref<jni::array<jbyte>> data) { return call_method<"processEmm", void>(data); }
	void sendEvent(jint event, jint arg, jni::ref<jni::array<jbyte>> data) { return call_method<"sendEvent", void>(event, arg, data); }
	void provision(jni::ref<java::lang::String> provisionString) { return call_method<"provision", void>(provisionString); }
	void refreshEntitlements(jint refreshType, jni::ref<jni::array<jbyte>> refreshData) { return call_method<"refreshEntitlements", void>(refreshType, refreshData); }
	void close() { return call_method<"close", void>(); }

protected:

	MediaCas(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACAS
