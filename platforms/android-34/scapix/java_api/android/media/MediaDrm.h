// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaDrm; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaDrm>
{
	static constexpr fixed_string class_name = "android/media/MediaDrm";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::AutoCloseable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/MediaDrm_CryptoSession.h>
#include <scapix/java_api/android/media/MediaDrm_KeyRequest.h>
#include <scapix/java_api/android/media/MediaDrm_OnEventListener.h>
#include <scapix/java_api/android/media/MediaDrm_OnExpirationUpdateListener.h>
#include <scapix/java_api/android/media/MediaDrm_OnKeyStatusChangeListener.h>
#include <scapix/java_api/android/media/MediaDrm_OnSessionLostStateListener.h>
#include <scapix/java_api/android/media/MediaDrm_PlaybackComponent.h>
#include <scapix/java_api/android/media/MediaDrm_ProvisionRequest.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/os/PersistableBundle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/HashMap.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/UUID.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#include <scapix/java_api/android/media/MediaDrm_SessionException.h>
#include <scapix/java_api/android/media/MediaDrm_SecurityLevel.h>
#include <scapix/java_api/android/media/MediaDrm_MetricsConstants.h>
#include <scapix/java_api/android/media/MediaDrm_MediaDrmStateException.h>
#include <scapix/java_api/android/media/MediaDrm_LogMessage.h>
#include <scapix/java_api/android/media/MediaDrm_KeyStatus.h>
#include <scapix/java_api/android/media/MediaDrm_HdcpLevel.h>
#include <scapix/java_api/android/media/MediaDrm_ErrorCodes.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaDrm : public jni::object_base<"android/media/MediaDrm",
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	using SessionException = MediaDrm_SessionException;
	using SecurityLevel = MediaDrm_SecurityLevel;
	using ProvisionRequest = MediaDrm_ProvisionRequest;
	using PlaybackComponent = MediaDrm_PlaybackComponent;
	using OnSessionLostStateListener = MediaDrm_OnSessionLostStateListener;
	using OnKeyStatusChangeListener = MediaDrm_OnKeyStatusChangeListener;
	using OnExpirationUpdateListener = MediaDrm_OnExpirationUpdateListener;
	using OnEventListener = MediaDrm_OnEventListener;
	using MetricsConstants = MediaDrm_MetricsConstants;
	using MediaDrmStateException = MediaDrm_MediaDrmStateException;
	using LogMessage = MediaDrm_LogMessage;
	using KeyStatus = MediaDrm_KeyStatus;
	using KeyRequest = MediaDrm_KeyRequest;
	using HdcpLevel = MediaDrm_HdcpLevel;
	using ErrorCodes = MediaDrm_ErrorCodes;
	using CryptoSession = MediaDrm_CryptoSession;

	static jint EVENT_KEY_EXPIRED() { return get_static_field<"EVENT_KEY_EXPIRED", jint>(); }
	static jint EVENT_KEY_REQUIRED() { return get_static_field<"EVENT_KEY_REQUIRED", jint>(); }
	static jint EVENT_PROVISION_REQUIRED() { return get_static_field<"EVENT_PROVISION_REQUIRED", jint>(); }
	static jint EVENT_SESSION_RECLAIMED() { return get_static_field<"EVENT_SESSION_RECLAIMED", jint>(); }
	static jint EVENT_VENDOR_DEFINED() { return get_static_field<"EVENT_VENDOR_DEFINED", jint>(); }
	static jint HDCP_LEVEL_UNKNOWN() { return get_static_field<"HDCP_LEVEL_UNKNOWN", jint>(); }
	static jint HDCP_NONE() { return get_static_field<"HDCP_NONE", jint>(); }
	static jint HDCP_NO_DIGITAL_OUTPUT() { return get_static_field<"HDCP_NO_DIGITAL_OUTPUT", jint>(); }
	static jint HDCP_V1() { return get_static_field<"HDCP_V1", jint>(); }
	static jint HDCP_V2() { return get_static_field<"HDCP_V2", jint>(); }
	static jint HDCP_V2_1() { return get_static_field<"HDCP_V2_1", jint>(); }
	static jint HDCP_V2_2() { return get_static_field<"HDCP_V2_2", jint>(); }
	static jint HDCP_V2_3() { return get_static_field<"HDCP_V2_3", jint>(); }
	static jint KEY_TYPE_OFFLINE() { return get_static_field<"KEY_TYPE_OFFLINE", jint>(); }
	static jint KEY_TYPE_RELEASE() { return get_static_field<"KEY_TYPE_RELEASE", jint>(); }
	static jint KEY_TYPE_STREAMING() { return get_static_field<"KEY_TYPE_STREAMING", jint>(); }
	static jint OFFLINE_LICENSE_STATE_RELEASED() { return get_static_field<"OFFLINE_LICENSE_STATE_RELEASED", jint>(); }
	static jint OFFLINE_LICENSE_STATE_UNKNOWN() { return get_static_field<"OFFLINE_LICENSE_STATE_UNKNOWN", jint>(); }
	static jint OFFLINE_LICENSE_STATE_USABLE() { return get_static_field<"OFFLINE_LICENSE_STATE_USABLE", jint>(); }
	static jni::ref<java::lang::String> PROPERTY_ALGORITHMS() { return get_static_field<"PROPERTY_ALGORITHMS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PROPERTY_DESCRIPTION() { return get_static_field<"PROPERTY_DESCRIPTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PROPERTY_DEVICE_UNIQUE_ID() { return get_static_field<"PROPERTY_DEVICE_UNIQUE_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PROPERTY_VENDOR() { return get_static_field<"PROPERTY_VENDOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PROPERTY_VERSION() { return get_static_field<"PROPERTY_VERSION", jni::ref<java::lang::String>>(); }
	static jint SECURITY_LEVEL_HW_SECURE_ALL() { return get_static_field<"SECURITY_LEVEL_HW_SECURE_ALL", jint>(); }
	static jint SECURITY_LEVEL_HW_SECURE_CRYPTO() { return get_static_field<"SECURITY_LEVEL_HW_SECURE_CRYPTO", jint>(); }
	static jint SECURITY_LEVEL_HW_SECURE_DECODE() { return get_static_field<"SECURITY_LEVEL_HW_SECURE_DECODE", jint>(); }
	static jint SECURITY_LEVEL_SW_SECURE_CRYPTO() { return get_static_field<"SECURITY_LEVEL_SW_SECURE_CRYPTO", jint>(); }
	static jint SECURITY_LEVEL_SW_SECURE_DECODE() { return get_static_field<"SECURITY_LEVEL_SW_SECURE_DECODE", jint>(); }
	static jint SECURITY_LEVEL_UNKNOWN() { return get_static_field<"SECURITY_LEVEL_UNKNOWN", jint>(); }

	static jni::ref<android::media::MediaDrm> new_object(jni::ref<java::util::UUID> uuid) { return base_::new_object(uuid); }
	static jboolean isCryptoSchemeSupported(jni::ref<java::util::UUID> uuid) { return call_static_method<"isCryptoSchemeSupported", jboolean>(uuid); }
	static jboolean isCryptoSchemeSupported(jni::ref<java::util::UUID> uuid, jni::ref<java::lang::String> mimeType) { return call_static_method<"isCryptoSchemeSupported", jboolean>(uuid, mimeType); }
	static jboolean isCryptoSchemeSupported(jni::ref<java::util::UUID> uuid, jni::ref<java::lang::String> mimeType, jint securityLevel) { return call_static_method<"isCryptoSchemeSupported", jboolean>(uuid, mimeType, securityLevel); }
	static jni::ref<java::util::List> getSupportedCryptoSchemes() { return call_static_method<"getSupportedCryptoSchemes", jni::ref<java::util::List>>(); }
	void setOnExpirationUpdateListener(jni::ref<android::media::MediaDrm_OnExpirationUpdateListener> listener, jni::ref<android::os::Handler> handler) { return call_method<"setOnExpirationUpdateListener", void>(listener, handler); }
	void setOnExpirationUpdateListener(jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::media::MediaDrm_OnExpirationUpdateListener> listener) { return call_method<"setOnExpirationUpdateListener", void>(executor, listener); }
	void clearOnExpirationUpdateListener() { return call_method<"clearOnExpirationUpdateListener", void>(); }
	void setOnKeyStatusChangeListener(jni::ref<android::media::MediaDrm_OnKeyStatusChangeListener> listener, jni::ref<android::os::Handler> handler) { return call_method<"setOnKeyStatusChangeListener", void>(listener, handler); }
	void setOnKeyStatusChangeListener(jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::media::MediaDrm_OnKeyStatusChangeListener> listener) { return call_method<"setOnKeyStatusChangeListener", void>(executor, listener); }
	void clearOnKeyStatusChangeListener() { return call_method<"clearOnKeyStatusChangeListener", void>(); }
	void setOnSessionLostStateListener(jni::ref<android::media::MediaDrm_OnSessionLostStateListener> listener, jni::ref<android::os::Handler> handler) { return call_method<"setOnSessionLostStateListener", void>(listener, handler); }
	void setOnSessionLostStateListener(jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::media::MediaDrm_OnSessionLostStateListener> listener) { return call_method<"setOnSessionLostStateListener", void>(executor, listener); }
	void clearOnSessionLostStateListener() { return call_method<"clearOnSessionLostStateListener", void>(); }
	void setOnEventListener(jni::ref<android::media::MediaDrm_OnEventListener> listener) { return call_method<"setOnEventListener", void>(listener); }
	void setOnEventListener(jni::ref<android::media::MediaDrm_OnEventListener> listener, jni::ref<android::os::Handler> handler) { return call_method<"setOnEventListener", void>(listener, handler); }
	void setOnEventListener(jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::media::MediaDrm_OnEventListener> listener) { return call_method<"setOnEventListener", void>(executor, listener); }
	void clearOnEventListener() { return call_method<"clearOnEventListener", void>(); }
	jni::ref<jni::array<jbyte>> openSession() { return call_method<"openSession", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> openSession(jint level) { return call_method<"openSession", jni::ref<jni::array<jbyte>>>(level); }
	void closeSession(jni::ref<jni::array<jbyte>> sessionId) { return call_method<"closeSession", void>(sessionId); }
	jni::ref<android::media::MediaDrm_KeyRequest> getKeyRequest(jni::ref<jni::array<jbyte>> scope, jni::ref<jni::array<jbyte>> init, jni::ref<java::lang::String> mimeType, jint keyType, jni::ref<java::util::HashMap> optionalParameters) { return call_method<"getKeyRequest", jni::ref<android::media::MediaDrm_KeyRequest>>(scope, init, mimeType, keyType, optionalParameters); }
	jni::ref<jni::array<jbyte>> provideKeyResponse(jni::ref<jni::array<jbyte>> p1, jni::ref<jni::array<jbyte>> p2) { return call_method<"provideKeyResponse", jni::ref<jni::array<jbyte>>>(p1, p2); }
	void restoreKeys(jni::ref<jni::array<jbyte>> p1, jni::ref<jni::array<jbyte>> p2) { return call_method<"restoreKeys", void>(p1, p2); }
	void removeKeys(jni::ref<jni::array<jbyte>> p1) { return call_method<"removeKeys", void>(p1); }
	jni::ref<java::util::HashMap> queryKeyStatus(jni::ref<jni::array<jbyte>> p1) { return call_method<"queryKeyStatus", jni::ref<java::util::HashMap>>(p1); }
	jni::ref<android::media::MediaDrm_ProvisionRequest> getProvisionRequest() { return call_method<"getProvisionRequest", jni::ref<android::media::MediaDrm_ProvisionRequest>>(); }
	void provideProvisionResponse(jni::ref<jni::array<jbyte>> response) { return call_method<"provideProvisionResponse", void>(response); }
	jni::ref<java::util::List> getOfflineLicenseKeySetIds() { return call_method<"getOfflineLicenseKeySetIds", jni::ref<java::util::List>>(); }
	void removeOfflineLicense(jni::ref<jni::array<jbyte>> p1) { return call_method<"removeOfflineLicense", void>(p1); }
	jint getOfflineLicenseState(jni::ref<jni::array<jbyte>> p1) { return call_method<"getOfflineLicenseState", jint>(p1); }
	jni::ref<java::util::List> getSecureStops() { return call_method<"getSecureStops", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getSecureStopIds() { return call_method<"getSecureStopIds", jni::ref<java::util::List>>(); }
	jni::ref<jni::array<jbyte>> getSecureStop(jni::ref<jni::array<jbyte>> p1) { return call_method<"getSecureStop", jni::ref<jni::array<jbyte>>>(p1); }
	void releaseSecureStops(jni::ref<jni::array<jbyte>> p1) { return call_method<"releaseSecureStops", void>(p1); }
	void removeSecureStop(jni::ref<jni::array<jbyte>> p1) { return call_method<"removeSecureStop", void>(p1); }
	void removeAllSecureStops() { return call_method<"removeAllSecureStops", void>(); }
	void releaseAllSecureStops() { return call_method<"releaseAllSecureStops", void>(); }
	jint getConnectedHdcpLevel() { return call_method<"getConnectedHdcpLevel", jint>(); }
	jint getMaxHdcpLevel() { return call_method<"getMaxHdcpLevel", jint>(); }
	jint getOpenSessionCount() { return call_method<"getOpenSessionCount", jint>(); }
	jint getMaxSessionCount() { return call_method<"getMaxSessionCount", jint>(); }
	static jint getMaxSecurityLevel() { return call_static_method<"getMaxSecurityLevel", jint>(); }
	jint getSecurityLevel(jni::ref<jni::array<jbyte>> p1) { return call_method<"getSecurityLevel", jint>(p1); }
	jni::ref<java::lang::String> getPropertyString(jni::ref<java::lang::String> p1) { return call_method<"getPropertyString", jni::ref<java::lang::String>>(p1); }
	void setPropertyString(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"setPropertyString", void>(p1, p2); }
	jni::ref<jni::array<jbyte>> getPropertyByteArray(jni::ref<java::lang::String> p1) { return call_method<"getPropertyByteArray", jni::ref<jni::array<jbyte>>>(p1); }
	void setPropertyByteArray(jni::ref<java::lang::String> p1, jni::ref<jni::array<jbyte>> p2) { return call_method<"setPropertyByteArray", void>(p1, p2); }
	jni::ref<android::os::PersistableBundle> getMetrics() { return call_method<"getMetrics", jni::ref<android::os::PersistableBundle>>(); }
	jni::ref<android::media::MediaDrm_CryptoSession> getCryptoSession(jni::ref<jni::array<jbyte>> sessionId, jni::ref<java::lang::String> cipherAlgorithm, jni::ref<java::lang::String> macAlgorithm) { return call_method<"getCryptoSession", jni::ref<android::media::MediaDrm_CryptoSession>>(sessionId, cipherAlgorithm, macAlgorithm); }
	jboolean requiresSecureDecoder(jni::ref<java::lang::String> mime) { return call_method<"requiresSecureDecoder", jboolean>(mime); }
	jboolean requiresSecureDecoder(jni::ref<java::lang::String> p1, jint p2) { return call_method<"requiresSecureDecoder", jboolean>(p1, p2); }
	void close() { return call_method<"close", void>(); }
	void release() { return call_method<"release", void>(); }
	jni::ref<android::media::MediaDrm_PlaybackComponent> getPlaybackComponent(jni::ref<jni::array<jbyte>> sessionId) { return call_method<"getPlaybackComponent", jni::ref<android::media::MediaDrm_PlaybackComponent>>(sessionId); }
	jni::ref<java::util::List> getLogMessages() { return call_method<"getLogMessages", jni::ref<java::util::List>>(); }

protected:

	MediaDrm(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM
