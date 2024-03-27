// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_FILLRESPONSE_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_FILLRESPONSE_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::autofill { class FillResponse_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::autofill::FillResponse_Builder>
{
	static constexpr fixed_string class_name = "android/service/autofill/FillResponse$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_FILLRESPONSE_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_FILLRESPONSE_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_FILLRESPONSE_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/IntentSender.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/service/autofill/Dataset.h>
#include <scapix/java_api/android/service/autofill/FillResponse.h>
#include <scapix/java_api/android/service/autofill/SaveInfo.h>
#include <scapix/java_api/android/service/autofill/UserData.h>
#include <scapix/java_api/android/view/autofill/AutofillId.h>
#include <scapix/java_api/android/widget/RemoteViews.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::autofill::FillResponse_Builder : public jni::object_base<"android/service/autofill/FillResponse$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::service::autofill::FillResponse_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::service::autofill::FillResponse_Builder> setAuthentication(jni::ref<jni::array<android::view::autofill::AutofillId>> ids, jni::ref<android::content::IntentSender> authentication, jni::ref<android::widget::RemoteViews> presentation) { return call_method<"setAuthentication", jni::ref<android::service::autofill::FillResponse_Builder>>(ids, authentication, presentation); }
	jni::ref<android::service::autofill::FillResponse_Builder> setIgnoredIds(jni::ref<jni::array<android::view::autofill::AutofillId>> ids) { return call_method<"setIgnoredIds", jni::ref<android::service::autofill::FillResponse_Builder>>(ids); }
	jni::ref<android::service::autofill::FillResponse_Builder> addDataset(jni::ref<android::service::autofill::Dataset> dataset) { return call_method<"addDataset", jni::ref<android::service::autofill::FillResponse_Builder>>(dataset); }
	jni::ref<android::service::autofill::FillResponse_Builder> setSaveInfo(jni::ref<android::service::autofill::SaveInfo> saveInfo) { return call_method<"setSaveInfo", jni::ref<android::service::autofill::FillResponse_Builder>>(saveInfo); }
	jni::ref<android::service::autofill::FillResponse_Builder> setClientState(jni::ref<android::os::Bundle> clientState) { return call_method<"setClientState", jni::ref<android::service::autofill::FillResponse_Builder>>(clientState); }
	jni::ref<android::service::autofill::FillResponse_Builder> setFieldClassificationIds(jni::ref<jni::array<android::view::autofill::AutofillId>> ids) { return call_method<"setFieldClassificationIds", jni::ref<android::service::autofill::FillResponse_Builder>>(ids); }
	jni::ref<android::service::autofill::FillResponse_Builder> setFlags(jint flags) { return call_method<"setFlags", jni::ref<android::service::autofill::FillResponse_Builder>>(flags); }
	jni::ref<android::service::autofill::FillResponse_Builder> disableAutofill(jlong duration) { return call_method<"disableAutofill", jni::ref<android::service::autofill::FillResponse_Builder>>(duration); }
	jni::ref<android::service::autofill::FillResponse_Builder> setHeader(jni::ref<android::widget::RemoteViews> header) { return call_method<"setHeader", jni::ref<android::service::autofill::FillResponse_Builder>>(header); }
	jni::ref<android::service::autofill::FillResponse_Builder> setFooter(jni::ref<android::widget::RemoteViews> footer) { return call_method<"setFooter", jni::ref<android::service::autofill::FillResponse_Builder>>(footer); }
	jni::ref<android::service::autofill::FillResponse_Builder> setUserData(jni::ref<android::service::autofill::UserData> userData) { return call_method<"setUserData", jni::ref<android::service::autofill::FillResponse_Builder>>(userData); }
	jni::ref<android::service::autofill::FillResponse> build() { return call_method<"build", jni::ref<android::service::autofill::FillResponse>>(); }

protected:

	FillResponse_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_FILLRESPONSE_BUILDER
