// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_CONTENTCAPTURE_DATASHAREREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_CONTENTCAPTURE_DATASHAREREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::contentcapture { class DataShareRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::contentcapture::DataShareRequest>
{
	static constexpr fixed_string class_name = "android/view/contentcapture/DataShareRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_CONTENTCAPTURE_DATASHAREREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_CONTENTCAPTURE_DATASHAREREQUEST)
#define SCAPIX_JAVA_API_ANDROID_VIEW_CONTENTCAPTURE_DATASHAREREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/LocusId.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::contentcapture::DataShareRequest : public jni::object_base<"android/view/contentcapture/DataShareRequest",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::view::contentcapture::DataShareRequest> new_object(jni::ref<android::content::LocusId> locusId, jni::ref<java::lang::String> mimeType) { return base_::new_object(locusId, mimeType); }
	jni::ref<java::lang::String> getPackageName() { return call_method<"getPackageName", jni::ref<java::lang::String>>(); }
	jni::ref<android::content::LocusId> getLocusId() { return call_method<"getLocusId", jni::ref<android::content::LocusId>>(); }
	jni::ref<java::lang::String> getMimeType() { return call_method<"getMimeType", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	DataShareRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_CONTENTCAPTURE_DATASHAREREQUEST
