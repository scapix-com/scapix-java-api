// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/service/autofill/Validator.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_LUHNCHECKSUMVALIDATOR_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_LUHNCHECKSUMVALIDATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::autofill { class LuhnChecksumValidator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::autofill::LuhnChecksumValidator>
{
	static constexpr fixed_string class_name = "android/service/autofill/LuhnChecksumValidator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::service::autofill::Validator, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_LUHNCHECKSUMVALIDATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_LUHNCHECKSUMVALIDATOR)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_LUHNCHECKSUMVALIDATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/view/autofill/AutofillId.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::autofill::LuhnChecksumValidator : public jni::object_base<"android/service/autofill/LuhnChecksumValidator",
	java::lang::Object,
	android::service::autofill::Validator,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::service::autofill::LuhnChecksumValidator> new_object(jni::ref<jni::array<android::view::autofill::AutofillId>> ids) { return base_::new_object(ids); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }

protected:

	LuhnChecksumValidator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_LUHNCHECKSUMVALIDATOR
