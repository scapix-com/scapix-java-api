// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_VISUALVOICEMAILSERVICE_VISUALVOICEMAILTASK_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_VISUALVOICEMAILSERVICE_VISUALVOICEMAILTASK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class VisualVoicemailService_VisualVoicemailTask; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::VisualVoicemailService_VisualVoicemailTask>
{
	static constexpr fixed_string class_name = "android/telephony/VisualVoicemailService$VisualVoicemailTask";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_VISUALVOICEMAILSERVICE_VISUALVOICEMAILTASK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_VISUALVOICEMAILSERVICE_VISUALVOICEMAILTASK)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_VISUALVOICEMAILSERVICE_VISUALVOICEMAILTASK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::VisualVoicemailService_VisualVoicemailTask : public jni::object_base<"android/telephony/VisualVoicemailService$VisualVoicemailTask",
	java::lang::Object>
{
public:

	void finish() { return call_method<"finish", void>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	VisualVoicemailService_VisualVoicemailTask(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_VISUALVOICEMAILSERVICE_VISUALVOICEMAILTASK
