// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PRINT_PRINTATTRIBUTES_FWD
#define SCAPIX_JAVA_API_ANDROID_PRINT_PRINTATTRIBUTES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::print { class PrintAttributes; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::print::PrintAttributes>
{
	static constexpr fixed_string class_name = "android/print/PrintAttributes";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PRINT_PRINTATTRIBUTES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PRINT_PRINTATTRIBUTES)
#define SCAPIX_JAVA_API_ANDROID_PRINT_PRINTATTRIBUTES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/print/PrintAttributes_Margins.h>
#include <scapix/java_api/android/print/PrintAttributes_MediaSize.h>
#include <scapix/java_api/android/print/PrintAttributes_Resolution.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/print/PrintAttributes_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::print::PrintAttributes : public jni::object_base<"android/print/PrintAttributes",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = PrintAttributes_Builder;
	using Margins = PrintAttributes_Margins;
	using Resolution = PrintAttributes_Resolution;
	using MediaSize = PrintAttributes_MediaSize;

	static jint COLOR_MODE_COLOR() { return get_static_field<"COLOR_MODE_COLOR", jint>(); }
	static jint COLOR_MODE_MONOCHROME() { return get_static_field<"COLOR_MODE_MONOCHROME", jint>(); }
	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint DUPLEX_MODE_LONG_EDGE() { return get_static_field<"DUPLEX_MODE_LONG_EDGE", jint>(); }
	static jint DUPLEX_MODE_NONE() { return get_static_field<"DUPLEX_MODE_NONE", jint>(); }
	static jint DUPLEX_MODE_SHORT_EDGE() { return get_static_field<"DUPLEX_MODE_SHORT_EDGE", jint>(); }

	jni::ref<android::print::PrintAttributes_MediaSize> getMediaSize() { return call_method<"getMediaSize", jni::ref<android::print::PrintAttributes_MediaSize>>(); }
	jni::ref<android::print::PrintAttributes_Resolution> getResolution() { return call_method<"getResolution", jni::ref<android::print::PrintAttributes_Resolution>>(); }
	jni::ref<android::print::PrintAttributes_Margins> getMinMargins() { return call_method<"getMinMargins", jni::ref<android::print::PrintAttributes_Margins>>(); }
	jint getColorMode() { return call_method<"getColorMode", jint>(); }
	jint getDuplexMode() { return call_method<"getDuplexMode", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	PrintAttributes(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PRINT_PRINTATTRIBUTES
