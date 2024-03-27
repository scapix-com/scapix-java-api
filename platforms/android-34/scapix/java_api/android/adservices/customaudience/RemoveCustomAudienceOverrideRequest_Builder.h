// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ADSERVICES_CUSTOMAUDIENCE_REMOVECUSTOMAUDIENCEOVERRIDEREQUEST_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_ADSERVICES_CUSTOMAUDIENCE_REMOVECUSTOMAUDIENCEOVERRIDEREQUEST_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::adservices::customaudience { class RemoveCustomAudienceOverrideRequest_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::adservices::customaudience::RemoveCustomAudienceOverrideRequest_Builder>
{
	static constexpr fixed_string class_name = "android/adservices/customaudience/RemoveCustomAudienceOverrideRequest$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ADSERVICES_CUSTOMAUDIENCE_REMOVECUSTOMAUDIENCEOVERRIDEREQUEST_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ADSERVICES_CUSTOMAUDIENCE_REMOVECUSTOMAUDIENCEOVERRIDEREQUEST_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_ADSERVICES_CUSTOMAUDIENCE_REMOVECUSTOMAUDIENCEOVERRIDEREQUEST_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/adservices/common/AdTechIdentifier.h>
#include <scapix/java_api/android/adservices/customaudience/RemoveCustomAudienceOverrideRequest.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::adservices::customaudience::RemoveCustomAudienceOverrideRequest_Builder : public jni::object_base<"android/adservices/customaudience/RemoveCustomAudienceOverrideRequest$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::adservices::customaudience::RemoveCustomAudienceOverrideRequest_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::adservices::customaudience::RemoveCustomAudienceOverrideRequest_Builder> setBuyer(jni::ref<android::adservices::common::AdTechIdentifier> buyer) { return call_method<"setBuyer", jni::ref<android::adservices::customaudience::RemoveCustomAudienceOverrideRequest_Builder>>(buyer); }
	jni::ref<android::adservices::customaudience::RemoveCustomAudienceOverrideRequest_Builder> setName(jni::ref<java::lang::String> name) { return call_method<"setName", jni::ref<android::adservices::customaudience::RemoveCustomAudienceOverrideRequest_Builder>>(name); }
	jni::ref<android::adservices::customaudience::RemoveCustomAudienceOverrideRequest> build() { return call_method<"build", jni::ref<android::adservices::customaudience::RemoveCustomAudienceOverrideRequest>>(); }

protected:

	RemoveCustomAudienceOverrideRequest_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ADSERVICES_CUSTOMAUDIENCE_REMOVECUSTOMAUDIENCEOVERRIDEREQUEST_BUILDER
