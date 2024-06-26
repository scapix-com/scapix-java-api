// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_FILLEVENTHISTORY_EVENT_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_FILLEVENTHISTORY_EVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::autofill { class FillEventHistory_Event; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::autofill::FillEventHistory_Event>
{
	static constexpr fixed_string class_name = "android/service/autofill/FillEventHistory$Event";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_FILLEVENTHISTORY_EVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_FILLEVENTHISTORY_EVENT)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_FILLEVENTHISTORY_EVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::autofill::FillEventHistory_Event : public jni::object_base<"android/service/autofill/FillEventHistory$Event",
	java::lang::Object>
{
public:

	static jint NO_SAVE_UI_REASON_DATASET_MATCH() { return get_static_field<"NO_SAVE_UI_REASON_DATASET_MATCH", jint>(); }
	static jint NO_SAVE_UI_REASON_FIELD_VALIDATION_FAILED() { return get_static_field<"NO_SAVE_UI_REASON_FIELD_VALIDATION_FAILED", jint>(); }
	static jint NO_SAVE_UI_REASON_HAS_EMPTY_REQUIRED() { return get_static_field<"NO_SAVE_UI_REASON_HAS_EMPTY_REQUIRED", jint>(); }
	static jint NO_SAVE_UI_REASON_NONE() { return get_static_field<"NO_SAVE_UI_REASON_NONE", jint>(); }
	static jint NO_SAVE_UI_REASON_NO_SAVE_INFO() { return get_static_field<"NO_SAVE_UI_REASON_NO_SAVE_INFO", jint>(); }
	static jint NO_SAVE_UI_REASON_NO_VALUE_CHANGED() { return get_static_field<"NO_SAVE_UI_REASON_NO_VALUE_CHANGED", jint>(); }
	static jint NO_SAVE_UI_REASON_WITH_DELAY_SAVE_FLAG() { return get_static_field<"NO_SAVE_UI_REASON_WITH_DELAY_SAVE_FLAG", jint>(); }
	static jint TYPE_AUTHENTICATION_SELECTED() { return get_static_field<"TYPE_AUTHENTICATION_SELECTED", jint>(); }
	static jint TYPE_CONTEXT_COMMITTED() { return get_static_field<"TYPE_CONTEXT_COMMITTED", jint>(); }
	static jint TYPE_DATASETS_SHOWN() { return get_static_field<"TYPE_DATASETS_SHOWN", jint>(); }
	static jint TYPE_DATASET_AUTHENTICATION_SELECTED() { return get_static_field<"TYPE_DATASET_AUTHENTICATION_SELECTED", jint>(); }
	static jint TYPE_DATASET_SELECTED() { return get_static_field<"TYPE_DATASET_SELECTED", jint>(); }
	static jint TYPE_SAVE_SHOWN() { return get_static_field<"TYPE_SAVE_SHOWN", jint>(); }

	jint getType() { return call_method<"getType", jint>(); }
	jni::ref<java::lang::String> getDatasetId() { return call_method<"getDatasetId", jni::ref<java::lang::String>>(); }
	jni::ref<android::os::Bundle> getClientState() { return call_method<"getClientState", jni::ref<android::os::Bundle>>(); }
	jni::ref<java::util::Set> getSelectedDatasetIds() { return call_method<"getSelectedDatasetIds", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Set> getIgnoredDatasetIds() { return call_method<"getIgnoredDatasetIds", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Map> getChangedFields() { return call_method<"getChangedFields", jni::ref<java::util::Map>>(); }
	jni::ref<java::util::Map> getFieldsClassification() { return call_method<"getFieldsClassification", jni::ref<java::util::Map>>(); }
	jni::ref<java::util::Map> getManuallyEnteredField() { return call_method<"getManuallyEnteredField", jni::ref<java::util::Map>>(); }
	jint getNoSaveUiReason() { return call_method<"getNoSaveUiReason", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	FillEventHistory_Event(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_FILLEVENTHISTORY_EVENT
