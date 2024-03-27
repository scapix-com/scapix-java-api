// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaDrm; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaDrm>
{
	static constexpr fixed_string class_name = "android/media/MediaDrm";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
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
#include <scapix/java_api/android/media/MediaDrm_ProvisionRequest.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/HashMap.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/UUID.h>
#include <scapix/java_api/android/media/MediaDrm_KeyStatus.h>
#include <scapix/java_api/android/media/MediaDrm_MediaDrmStateException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaDrm : public jni::object_base<"android/media/MediaDrm",
	java::lang::Object>
{
public:

	using CryptoSession = MediaDrm_CryptoSession;
	using ProvisionRequest = MediaDrm_ProvisionRequest;
	using KeyRequest = MediaDrm_KeyRequest;
	using OnEventListener = MediaDrm_OnEventListener;
	using KeyStatus = MediaDrm_KeyStatus;
	using OnKeyStatusChangeListener = MediaDrm_OnKeyStatusChangeListener;
	using OnExpirationUpdateListener = MediaDrm_OnExpirationUpdateListener;
	using MediaDrmStateException = MediaDrm_MediaDrmStateException;

	static jint EVENT_KEY_EXPIRED() { return get_static_field<"EVENT_KEY_EXPIRED", jint>(); }
	static jint EVENT_KEY_REQUIRED() { return get_static_field<"EVENT_KEY_REQUIRED", jint>(); }
	static jint EVENT_PROVISION_REQUIRED() { return get_static_field<"EVENT_PROVISION_REQUIRED", jint>(); }
	static jint EVENT_SESSION_RECLAIMED() { return get_static_field<"EVENT_SESSION_RECLAIMED", jint>(); }
	static jint EVENT_VENDOR_DEFINED() { return get_static_field<"EVENT_VENDOR_DEFINED", jint>(); }
	static jint KEY_TYPE_OFFLINE() { return get_static_field<"KEY_TYPE_OFFLINE", jint>(); }
	static jint KEY_TYPE_RELEASE() { return get_static_field<"KEY_TYPE_RELEASE", jint>(); }
	static jint KEY_TYPE_STREAMING() { return get_static_field<"KEY_TYPE_STREAMING", jint>(); }
	static jni::ref<java::lang::String> PROPERTY_ALGORITHMS() { return get_static_field<"PROPERTY_ALGORITHMS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PROPERTY_DESCRIPTION() { return get_static_field<"PROPERTY_DESCRIPTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PROPERTY_DEVICE_UNIQUE_ID() { return get_static_field<"PROPERTY_DEVICE_UNIQUE_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PROPERTY_VENDOR() { return get_static_field<"PROPERTY_VENDOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PROPERTY_VERSION() { return get_static_field<"PROPERTY_VERSION", jni::ref<java::lang::String>>(); }

	static jni::ref<android::media::MediaDrm> new_object(jni::ref<java::util::UUID> uuid) { return base_::new_object(uuid); }
	static jboolean isCryptoSchemeSupported(jni::ref<java::util::UUID> uuid) { return call_static_method<"isCryptoSchemeSupported", jboolean>(uuid); }
	static jboolean isCryptoSchemeSupported(jni::ref<java::util::UUID> uuid, jni::ref<java::lang::String> mimeType) { return call_static_method<"isCryptoSchemeSupported", jboolean>(uuid, mimeType); }
	void setOnExpirationUpdateListener(jni::ref<android::media::MediaDrm_OnExpirationUpdateListener> listener, jni::ref<android::os::Handler> handler) { return call_method<"setOnExpirationUpdateListener", void>(listener, handler); }
	void setOnKeyStatusChangeListener(jni::ref<android::media::MediaDrm_OnKeyStatusChangeListener> listener, jni::ref<android::os::Handler> handler) { return call_method<"setOnKeyStatusChangeListener", void>(listener, handler); }
	void setOnEventListener(jni::ref<android::media::MediaDrm_OnEventListener> listener) { return call_method<"setOnEventListener", void>(listener); }
	jni::ref<jni::array<jbyte>> openSession() { return call_method<"openSession", jni::ref<jni::array<jbyte>>>(); }
	void closeSession(jni::ref<jni::array<jbyte>> p1) { return call_method<"closeSession", void>(p1); }
	jni::ref<android::media::MediaDrm_KeyRequest> getKeyRequest(jni::ref<jni::array<jbyte>> p1, jni::ref<jni::array<jbyte>> p2, jni::ref<java::lang::String> p3, jint p4, jni::ref<java::util::HashMap> p5) { return call_method<"getKeyRequest", jni::ref<android::media::MediaDrm_KeyRequest>>(p1, p2, p3, p4, p5); }
	jni::ref<jni::array<jbyte>> provideKeyResponse(jni::ref<jni::array<jbyte>> p1, jni::ref<jni::array<jbyte>> p2) { return call_method<"provideKeyResponse", jni::ref<jni::array<jbyte>>>(p1, p2); }
	void restoreKeys(jni::ref<jni::array<jbyte>> p1, jni::ref<jni::array<jbyte>> p2) { return call_method<"restoreKeys", void>(p1, p2); }
	void removeKeys(jni::ref<jni::array<jbyte>> p1) { return call_method<"removeKeys", void>(p1); }
	jni::ref<java::util::HashMap> queryKeyStatus(jni::ref<jni::array<jbyte>> p1) { return call_method<"queryKeyStatus", jni::ref<java::util::HashMap>>(p1); }
	jni::ref<android::media::MediaDrm_ProvisionRequest> getProvisionRequest() { return call_method<"getProvisionRequest", jni::ref<android::media::MediaDrm_ProvisionRequest>>(); }
	void provideProvisionResponse(jni::ref<jni::array<jbyte>> response) { return call_method<"provideProvisionResponse", void>(response); }
	jni::ref<java::util::List> getSecureStops() { return call_method<"getSecureStops", jni::ref<java::util::List>>(); }
	jni::ref<jni::array<jbyte>> getSecureStop(jni::ref<jni::array<jbyte>> p1) { return call_method<"getSecureStop", jni::ref<jni::array<jbyte>>>(p1); }
	void releaseSecureStops(jni::ref<jni::array<jbyte>> p1) { return call_method<"releaseSecureStops", void>(p1); }
	void releaseAllSecureStops() { return call_method<"releaseAllSecureStops", void>(); }
	jni::ref<java::lang::String> getPropertyString(jni::ref<java::lang::String> p1) { return call_method<"getPropertyString", jni::ref<java::lang::String>>(p1); }
	jni::ref<jni::array<jbyte>> getPropertyByteArray(jni::ref<java::lang::String> p1) { return call_method<"getPropertyByteArray", jni::ref<jni::array<jbyte>>>(p1); }
	void setPropertyString(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"setPropertyString", void>(p1, p2); }
	void setPropertyByteArray(jni::ref<java::lang::String> p1, jni::ref<jni::array<jbyte>> p2) { return call_method<"setPropertyByteArray", void>(p1, p2); }
	jni::ref<android::media::MediaDrm_CryptoSession> getCryptoSession(jni::ref<jni::array<jbyte>> sessionId, jni::ref<java::lang::String> cipherAlgorithm, jni::ref<java::lang::String> macAlgorithm) { return call_method<"getCryptoSession", jni::ref<android::media::MediaDrm_CryptoSession>>(sessionId, cipherAlgorithm, macAlgorithm); }
	void release() { return call_method<"release", void>(); }

protected:

	MediaDrm(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIADRM
