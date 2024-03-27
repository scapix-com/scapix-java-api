// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/service/autofill/Transformation.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_IMAGETRANSFORMATION_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_IMAGETRANSFORMATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::autofill { class ImageTransformation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::autofill::ImageTransformation>
{
	static constexpr fixed_string class_name = "android/service/autofill/ImageTransformation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::service::autofill::Transformation, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_IMAGETRANSFORMATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_IMAGETRANSFORMATION)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_IMAGETRANSFORMATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/service/autofill/ImageTransformation_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::autofill::ImageTransformation : public jni::object_base<"android/service/autofill/ImageTransformation",
	java::lang::Object,
	android::service::autofill::Transformation,
	android::os::Parcelable>
{
public:

	using Builder = ImageTransformation_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }

protected:

	ImageTransformation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_IMAGETRANSFORMATION