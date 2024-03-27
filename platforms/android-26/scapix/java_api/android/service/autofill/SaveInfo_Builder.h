// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_SAVEINFO_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_SAVEINFO_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::autofill { class SaveInfo_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::autofill::SaveInfo_Builder>
{
	static constexpr fixed_string class_name = "android/service/autofill/SaveInfo$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_SAVEINFO_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_SAVEINFO_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_SAVEINFO_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/IntentSender.h>
#include <scapix/java_api/android/service/autofill/SaveInfo.h>
#include <scapix/java_api/android/view/autofill/AutofillId.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::autofill::SaveInfo_Builder : public jni::object_base<"android/service/autofill/SaveInfo$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::service::autofill::SaveInfo_Builder> new_object(jint type, jni::ref<jni::array<android::view::autofill::AutofillId>> requiredIds) { return base_::new_object(type, requiredIds); }
	jni::ref<android::service::autofill::SaveInfo_Builder> setFlags(jint flags) { return call_method<"setFlags", jni::ref<android::service::autofill::SaveInfo_Builder>>(flags); }
	jni::ref<android::service::autofill::SaveInfo_Builder> setOptionalIds(jni::ref<jni::array<android::view::autofill::AutofillId>> ids) { return call_method<"setOptionalIds", jni::ref<android::service::autofill::SaveInfo_Builder>>(ids); }
	jni::ref<android::service::autofill::SaveInfo_Builder> setDescription(jni::ref<java::lang::CharSequence> description) { return call_method<"setDescription", jni::ref<android::service::autofill::SaveInfo_Builder>>(description); }
	jni::ref<android::service::autofill::SaveInfo_Builder> setNegativeAction(jint style, jni::ref<android::content::IntentSender> listener) { return call_method<"setNegativeAction", jni::ref<android::service::autofill::SaveInfo_Builder>>(style, listener); }
	jni::ref<android::service::autofill::SaveInfo> build() { return call_method<"build", jni::ref<android::service::autofill::SaveInfo>>(); }

protected:

	SaveInfo_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_SAVEINFO_BUILDER
