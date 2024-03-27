// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELECOM_REMOTECONFERENCE_CALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_TELECOM_REMOTECONFERENCE_CALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telecom { class RemoteConference_Callback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telecom::RemoteConference_Callback>
{
	static constexpr fixed_string class_name = "android/telecom/RemoteConference$Callback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_REMOTECONFERENCE_CALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELECOM_REMOTECONFERENCE_CALLBACK)
#define SCAPIX_JAVA_API_ANDROID_TELECOM_REMOTECONFERENCE_CALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/telecom/DisconnectCause.h>
#include <scapix/java_api/android/telecom/RemoteConference.h>
#include <scapix/java_api/android/telecom/RemoteConnection.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telecom::RemoteConference_Callback : public jni::object_base<"android/telecom/RemoteConference$Callback",
	java::lang::Object>
{
public:

	static jni::ref<android::telecom::RemoteConference_Callback> new_object() { return base_::new_object(); }
	void onStateChanged(jni::ref<android::telecom::RemoteConference> conference, jint oldState, jint newState) { return call_method<"onStateChanged", void>(conference, oldState, newState); }
	void onDisconnected(jni::ref<android::telecom::RemoteConference> conference, jni::ref<android::telecom::DisconnectCause> disconnectCause) { return call_method<"onDisconnected", void>(conference, disconnectCause); }
	void onConnectionAdded(jni::ref<android::telecom::RemoteConference> conference, jni::ref<android::telecom::RemoteConnection> connection) { return call_method<"onConnectionAdded", void>(conference, connection); }
	void onConnectionRemoved(jni::ref<android::telecom::RemoteConference> conference, jni::ref<android::telecom::RemoteConnection> connection) { return call_method<"onConnectionRemoved", void>(conference, connection); }
	void onConnectionCapabilitiesChanged(jni::ref<android::telecom::RemoteConference> conference, jint connectionCapabilities) { return call_method<"onConnectionCapabilitiesChanged", void>(conference, connectionCapabilities); }
	void onConnectionPropertiesChanged(jni::ref<android::telecom::RemoteConference> conference, jint connectionProperties) { return call_method<"onConnectionPropertiesChanged", void>(conference, connectionProperties); }
	void onConferenceableConnectionsChanged(jni::ref<android::telecom::RemoteConference> conference, jni::ref<java::util::List> conferenceableConnections) { return call_method<"onConferenceableConnectionsChanged", void>(conference, conferenceableConnections); }
	void onDestroyed(jni::ref<android::telecom::RemoteConference> conference) { return call_method<"onDestroyed", void>(conference); }
	void onExtrasChanged(jni::ref<android::telecom::RemoteConference> conference, jni::ref<android::os::Bundle> extras) { return call_method<"onExtrasChanged", void>(conference, extras); }

protected:

	RemoteConference_Callback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_REMOTECONFERENCE_CALLBACK
