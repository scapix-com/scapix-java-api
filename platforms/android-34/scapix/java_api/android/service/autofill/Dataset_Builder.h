// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_DATASET_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_DATASET_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::autofill { class Dataset_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::autofill::Dataset_Builder>
{
	static constexpr fixed_string class_name = "android/service/autofill/Dataset$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_DATASET_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_DATASET_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_DATASET_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/IntentSender.h>
#include <scapix/java_api/android/service/autofill/Dataset.h>
#include <scapix/java_api/android/service/autofill/Field.h>
#include <scapix/java_api/android/service/autofill/InlinePresentation.h>
#include <scapix/java_api/android/service/autofill/Presentations.h>
#include <scapix/java_api/android/view/autofill/AutofillId.h>
#include <scapix/java_api/android/view/autofill/AutofillValue.h>
#include <scapix/java_api/android/widget/RemoteViews.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/regex/Pattern.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::autofill::Dataset_Builder : public jni::object_base<"android/service/autofill/Dataset$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::service::autofill::Dataset_Builder> new_object(jni::ref<android::widget::RemoteViews> presentation) { return base_::new_object(presentation); }
	static jni::ref<android::service::autofill::Dataset_Builder> new_object(jni::ref<android::service::autofill::Presentations> presentations) { return base_::new_object(presentations); }
	static jni::ref<android::service::autofill::Dataset_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::service::autofill::Dataset_Builder> setInlinePresentation(jni::ref<android::service::autofill::InlinePresentation> inlinePresentation) { return call_method<"setInlinePresentation", jni::ref<android::service::autofill::Dataset_Builder>>(inlinePresentation); }
	jni::ref<android::service::autofill::Dataset_Builder> setInlinePresentation(jni::ref<android::service::autofill::InlinePresentation> inlinePresentation, jni::ref<android::service::autofill::InlinePresentation> inlineTooltipPresentation) { return call_method<"setInlinePresentation", jni::ref<android::service::autofill::Dataset_Builder>>(inlinePresentation, inlineTooltipPresentation); }
	jni::ref<android::service::autofill::Dataset_Builder> setAuthentication(jni::ref<android::content::IntentSender> authentication) { return call_method<"setAuthentication", jni::ref<android::service::autofill::Dataset_Builder>>(authentication); }
	jni::ref<android::service::autofill::Dataset_Builder> setId(jni::ref<java::lang::String> id) { return call_method<"setId", jni::ref<android::service::autofill::Dataset_Builder>>(id); }
	jni::ref<android::service::autofill::Dataset_Builder> setValue(jni::ref<android::view::autofill::AutofillId> id, jni::ref<android::view::autofill::AutofillValue> value) { return call_method<"setValue", jni::ref<android::service::autofill::Dataset_Builder>>(id, value); }
	jni::ref<android::service::autofill::Dataset_Builder> setValue(jni::ref<android::view::autofill::AutofillId> id, jni::ref<android::view::autofill::AutofillValue> value, jni::ref<android::widget::RemoteViews> presentation) { return call_method<"setValue", jni::ref<android::service::autofill::Dataset_Builder>>(id, value, presentation); }
	jni::ref<android::service::autofill::Dataset_Builder> setValue(jni::ref<android::view::autofill::AutofillId> id, jni::ref<android::view::autofill::AutofillValue> value, jni::ref<java::util::regex::Pattern> filter) { return call_method<"setValue", jni::ref<android::service::autofill::Dataset_Builder>>(id, value, filter); }
	jni::ref<android::service::autofill::Dataset_Builder> setValue(jni::ref<android::view::autofill::AutofillId> id, jni::ref<android::view::autofill::AutofillValue> value, jni::ref<java::util::regex::Pattern> filter, jni::ref<android::widget::RemoteViews> presentation) { return call_method<"setValue", jni::ref<android::service::autofill::Dataset_Builder>>(id, value, filter, presentation); }
	jni::ref<android::service::autofill::Dataset_Builder> setValue(jni::ref<android::view::autofill::AutofillId> id, jni::ref<android::view::autofill::AutofillValue> value, jni::ref<android::widget::RemoteViews> presentation, jni::ref<android::service::autofill::InlinePresentation> inlinePresentation) { return call_method<"setValue", jni::ref<android::service::autofill::Dataset_Builder>>(id, value, presentation, inlinePresentation); }
	jni::ref<android::service::autofill::Dataset_Builder> setValue(jni::ref<android::view::autofill::AutofillId> id, jni::ref<android::view::autofill::AutofillValue> value, jni::ref<android::widget::RemoteViews> presentation, jni::ref<android::service::autofill::InlinePresentation> inlinePresentation, jni::ref<android::service::autofill::InlinePresentation> inlineTooltipPresentation) { return call_method<"setValue", jni::ref<android::service::autofill::Dataset_Builder>>(id, value, presentation, inlinePresentation, inlineTooltipPresentation); }
	jni::ref<android::service::autofill::Dataset_Builder> setValue(jni::ref<android::view::autofill::AutofillId> id, jni::ref<android::view::autofill::AutofillValue> value, jni::ref<java::util::regex::Pattern> filter, jni::ref<android::widget::RemoteViews> presentation, jni::ref<android::service::autofill::InlinePresentation> inlinePresentation) { return call_method<"setValue", jni::ref<android::service::autofill::Dataset_Builder>>(id, value, filter, presentation, inlinePresentation); }
	jni::ref<android::service::autofill::Dataset_Builder> setValue(jni::ref<android::view::autofill::AutofillId> id, jni::ref<android::view::autofill::AutofillValue> value, jni::ref<java::util::regex::Pattern> filter, jni::ref<android::widget::RemoteViews> presentation, jni::ref<android::service::autofill::InlinePresentation> inlinePresentation, jni::ref<android::service::autofill::InlinePresentation> inlineTooltipPresentation) { return call_method<"setValue", jni::ref<android::service::autofill::Dataset_Builder>>(id, value, filter, presentation, inlinePresentation, inlineTooltipPresentation); }
	jni::ref<android::service::autofill::Dataset_Builder> setField(jni::ref<android::view::autofill::AutofillId> id, jni::ref<android::service::autofill::Field> field) { return call_method<"setField", jni::ref<android::service::autofill::Dataset_Builder>>(id, field); }
	jni::ref<android::service::autofill::Dataset_Builder> setField(jni::ref<java::lang::String> hint, jni::ref<android::service::autofill::Field> field) { return call_method<"setField", jni::ref<android::service::autofill::Dataset_Builder>>(hint, field); }
	jni::ref<android::service::autofill::Dataset_Builder> setFieldForAllHints(jni::ref<android::service::autofill::Field> field) { return call_method<"setFieldForAllHints", jni::ref<android::service::autofill::Dataset_Builder>>(field); }
	jni::ref<android::service::autofill::Dataset> build() { return call_method<"build", jni::ref<android::service::autofill::Dataset>>(); }

protected:

	Dataset_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_DATASET_BUILDER
