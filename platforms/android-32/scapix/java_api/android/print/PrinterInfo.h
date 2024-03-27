// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PRINT_PRINTERINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_PRINT_PRINTERINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::print { class PrinterInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::print::PrinterInfo>
{
	static constexpr fixed_string class_name = "android/print/PrinterInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PRINT_PRINTERINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PRINT_PRINTERINFO)
#define SCAPIX_JAVA_API_ANDROID_PRINT_PRINTERINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/print/PrinterCapabilitiesInfo.h>
#include <scapix/java_api/android/print/PrinterId.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/print/PrinterInfo_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::print::PrinterInfo : public jni::object_base<"android/print/PrinterInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = PrinterInfo_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint STATUS_BUSY() { return get_static_field<"STATUS_BUSY", jint>(); }
	static jint STATUS_IDLE() { return get_static_field<"STATUS_IDLE", jint>(); }
	static jint STATUS_UNAVAILABLE() { return get_static_field<"STATUS_UNAVAILABLE", jint>(); }

	jni::ref<android::print::PrinterId> getId() { return call_method<"getId", jni::ref<android::print::PrinterId>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jint getStatus() { return call_method<"getStatus", jint>(); }
	jni::ref<java::lang::String> getDescription() { return call_method<"getDescription", jni::ref<java::lang::String>>(); }
	jni::ref<android::print::PrinterCapabilitiesInfo> getCapabilities() { return call_method<"getCapabilities", jni::ref<android::print::PrinterCapabilitiesInfo>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	PrinterInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PRINT_PRINTERINFO