// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_SAVEINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_SAVEINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::autofill { class SaveInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::autofill::SaveInfo>
{
	static constexpr fixed_string class_name = "android/service/autofill/SaveInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_SAVEINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_SAVEINFO)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_SAVEINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/service/autofill/SaveInfo_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::autofill::SaveInfo : public jni::object_base<"android/service/autofill/SaveInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = SaveInfo_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint FLAG_DELAY_SAVE() { return get_static_field<"FLAG_DELAY_SAVE", jint>(); }
	static jint FLAG_DONT_SAVE_ON_FINISH() { return get_static_field<"FLAG_DONT_SAVE_ON_FINISH", jint>(); }
	static jint FLAG_SAVE_ON_ALL_VIEWS_INVISIBLE() { return get_static_field<"FLAG_SAVE_ON_ALL_VIEWS_INVISIBLE", jint>(); }
	static jint NEGATIVE_BUTTON_STYLE_CANCEL() { return get_static_field<"NEGATIVE_BUTTON_STYLE_CANCEL", jint>(); }
	static jint NEGATIVE_BUTTON_STYLE_REJECT() { return get_static_field<"NEGATIVE_BUTTON_STYLE_REJECT", jint>(); }
	static jint SAVE_DATA_TYPE_ADDRESS() { return get_static_field<"SAVE_DATA_TYPE_ADDRESS", jint>(); }
	static jint SAVE_DATA_TYPE_CREDIT_CARD() { return get_static_field<"SAVE_DATA_TYPE_CREDIT_CARD", jint>(); }
	static jint SAVE_DATA_TYPE_EMAIL_ADDRESS() { return get_static_field<"SAVE_DATA_TYPE_EMAIL_ADDRESS", jint>(); }
	static jint SAVE_DATA_TYPE_GENERIC() { return get_static_field<"SAVE_DATA_TYPE_GENERIC", jint>(); }
	static jint SAVE_DATA_TYPE_PASSWORD() { return get_static_field<"SAVE_DATA_TYPE_PASSWORD", jint>(); }
	static jint SAVE_DATA_TYPE_USERNAME() { return get_static_field<"SAVE_DATA_TYPE_USERNAME", jint>(); }

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }

protected:

	SaveInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_SAVEINFO
