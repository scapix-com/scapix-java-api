// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_INLINEPRESENTATION_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_INLINEPRESENTATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::autofill { class InlinePresentation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::autofill::InlinePresentation>
{
	static constexpr fixed_string class_name = "android/service/autofill/InlinePresentation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_INLINEPRESENTATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_INLINEPRESENTATION)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_INLINEPRESENTATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/slice/Slice.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/widget/inline/InlinePresentationSpec.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::autofill::InlinePresentation : public jni::object_base<"android/service/autofill/InlinePresentation",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::service::autofill::InlinePresentation> new_object(jni::ref<android::app::slice::Slice> slice, jni::ref<android::widget::inline_::InlinePresentationSpec> inlinePresentationSpec, jboolean pinned) { return base_::new_object(slice, inlinePresentationSpec, pinned); }
	jni::ref<android::app::slice::Slice> getSlice() { return call_method<"getSlice", jni::ref<android::app::slice::Slice>>(); }
	jni::ref<android::widget::inline_::InlinePresentationSpec> getInlinePresentationSpec() { return call_method<"getInlinePresentationSpec", jni::ref<android::widget::inline_::InlinePresentationSpec>>(); }
	jboolean isPinned() { return call_method<"isPinned", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	InlinePresentation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_INLINEPRESENTATION
