// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_CUSTOMDESCRIPTION_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_CUSTOMDESCRIPTION_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::autofill { class CustomDescription_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::autofill::CustomDescription_Builder>
{
	static constexpr fixed_string class_name = "android/service/autofill/CustomDescription$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_CUSTOMDESCRIPTION_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_CUSTOMDESCRIPTION_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_CUSTOMDESCRIPTION_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/service/autofill/BatchUpdates.h>
#include <scapix/java_api/android/service/autofill/CustomDescription.h>
#include <scapix/java_api/android/service/autofill/Transformation.h>
#include <scapix/java_api/android/service/autofill/Validator.h>
#include <scapix/java_api/android/widget/RemoteViews.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::autofill::CustomDescription_Builder : public jni::object_base<"android/service/autofill/CustomDescription$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::service::autofill::CustomDescription_Builder> new_object(jni::ref<android::widget::RemoteViews> parentPresentation) { return base_::new_object(parentPresentation); }
	jni::ref<android::service::autofill::CustomDescription_Builder> addChild(jint id, jni::ref<android::service::autofill::Transformation> transformation) { return call_method<"addChild", jni::ref<android::service::autofill::CustomDescription_Builder>>(id, transformation); }
	jni::ref<android::service::autofill::CustomDescription_Builder> batchUpdate(jni::ref<android::service::autofill::Validator> condition, jni::ref<android::service::autofill::BatchUpdates> updates) { return call_method<"batchUpdate", jni::ref<android::service::autofill::CustomDescription_Builder>>(condition, updates); }
	jni::ref<android::service::autofill::CustomDescription> build() { return call_method<"build", jni::ref<android::service::autofill::CustomDescription>>(); }

protected:

	CustomDescription_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_CUSTOMDESCRIPTION_BUILDER
