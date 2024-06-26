// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGSERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::carrier { class CarrierMessagingService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::carrier::CarrierMessagingService>
{
	static constexpr fixed_string class_name = "android/service/carrier/CarrierMessagingService";
	using base_classes = std::tuple<scapix::java_api::android::app::Service>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGSERVICE)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/android/service/carrier/CarrierMessagingService_ResultCallback.h>
#include <scapix/java_api/android/service/carrier/MessagePdu.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/service/carrier/CarrierMessagingService_SendMultipartSmsResult.h>
#include <scapix/java_api/android/service/carrier/CarrierMessagingService_SendSmsResult.h>
#include <scapix/java_api/android/service/carrier/CarrierMessagingService_SendMmsResult.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::carrier::CarrierMessagingService : public jni::object_base<"android/service/carrier/CarrierMessagingService",
	android::app::Service>
{
public:

	using ResultCallback = CarrierMessagingService_ResultCallback;
	using SendMultipartSmsResult = CarrierMessagingService_SendMultipartSmsResult;
	using SendSmsResult = CarrierMessagingService_SendSmsResult;
	using SendMmsResult = CarrierMessagingService_SendMmsResult;

	static jint DOWNLOAD_STATUS_ERROR() { return get_static_field<"DOWNLOAD_STATUS_ERROR", jint>(); }
	static jint DOWNLOAD_STATUS_OK() { return get_static_field<"DOWNLOAD_STATUS_OK", jint>(); }
	static jint DOWNLOAD_STATUS_RETRY_ON_CARRIER_NETWORK() { return get_static_field<"DOWNLOAD_STATUS_RETRY_ON_CARRIER_NETWORK", jint>(); }
	static jint SEND_STATUS_ERROR() { return get_static_field<"SEND_STATUS_ERROR", jint>(); }
	static jint SEND_STATUS_OK() { return get_static_field<"SEND_STATUS_OK", jint>(); }
	static jint SEND_STATUS_RETRY_ON_CARRIER_NETWORK() { return get_static_field<"SEND_STATUS_RETRY_ON_CARRIER_NETWORK", jint>(); }
	static jni::ref<java::lang::String> SERVICE_INTERFACE() { return get_static_field<"SERVICE_INTERFACE", jni::ref<java::lang::String>>(); }

	static jni::ref<android::service::carrier::CarrierMessagingService> new_object() { return base_::new_object(); }
	void onFilterSms(jni::ref<android::service::carrier::MessagePdu> pdu, jni::ref<java::lang::String> format, jint destPort, jint subId, jni::ref<android::service::carrier::CarrierMessagingService_ResultCallback> callback) { return call_method<"onFilterSms", void>(pdu, format, destPort, subId, callback); }
	void onSendTextSms(jni::ref<java::lang::String> text, jint subId, jni::ref<java::lang::String> destAddress, jni::ref<android::service::carrier::CarrierMessagingService_ResultCallback> callback) { return call_method<"onSendTextSms", void>(text, subId, destAddress, callback); }
	void onSendDataSms(jni::ref<jni::array<jbyte>> data, jint subId, jni::ref<java::lang::String> destAddress, jint destPort, jni::ref<android::service::carrier::CarrierMessagingService_ResultCallback> callback) { return call_method<"onSendDataSms", void>(data, subId, destAddress, destPort, callback); }
	void onSendMultipartTextSms(jni::ref<java::util::List> parts, jint subId, jni::ref<java::lang::String> destAddress, jni::ref<android::service::carrier::CarrierMessagingService_ResultCallback> callback) { return call_method<"onSendMultipartTextSms", void>(parts, subId, destAddress, callback); }
	void onSendMms(jni::ref<android::net::Uri> pduUri, jint subId, jni::ref<android::net::Uri> location, jni::ref<android::service::carrier::CarrierMessagingService_ResultCallback> callback) { return call_method<"onSendMms", void>(pduUri, subId, location, callback); }
	void onDownloadMms(jni::ref<android::net::Uri> contentUri, jint subId, jni::ref<android::net::Uri> location, jni::ref<android::service::carrier::CarrierMessagingService_ResultCallback> callback) { return call_method<"onDownloadMms", void>(contentUri, subId, location, callback); }
	jni::ref<android::os::IBinder> onBind(jni::ref<android::content::Intent> intent) { return call_method<"onBind", jni::ref<android::os::IBinder>>(intent); }

protected:

	CarrierMessagingService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGSERVICE
