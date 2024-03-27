// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGSERVICE_SENDMMSRESULT_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGSERVICE_SENDMMSRESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::carrier { class CarrierMessagingService_SendMmsResult; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::carrier::CarrierMessagingService_SendMmsResult>
{
	static constexpr fixed_string class_name = "android/service/carrier/CarrierMessagingService$SendMmsResult";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGSERVICE_SENDMMSRESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGSERVICE_SENDMMSRESULT)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGSERVICE_SENDMMSRESULT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::carrier::CarrierMessagingService_SendMmsResult : public jni::object_base<"android/service/carrier/CarrierMessagingService$SendMmsResult",
	java::lang::Object>
{
public:

	static jni::ref<android::service::carrier::CarrierMessagingService_SendMmsResult> new_object(jint sendStatus, jni::ref<jni::array<jbyte>> sendConfPdu) { return base_::new_object(sendStatus, sendConfPdu); }
	jint getSendStatus() { return call_method<"getSendStatus", jint>(); }
	jni::ref<jni::array<jbyte>> getSendConfPdu() { return call_method<"getSendConfPdu", jni::ref<jni::array<jbyte>>>(); }

protected:

	CarrierMessagingService_SendMmsResult(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGSERVICE_SENDMMSRESULT