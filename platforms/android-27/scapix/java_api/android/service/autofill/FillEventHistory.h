// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_FILLEVENTHISTORY_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_FILLEVENTHISTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::autofill { class FillEventHistory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::autofill::FillEventHistory>
{
	static constexpr fixed_string class_name = "android/service/autofill/FillEventHistory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_FILLEVENTHISTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_FILLEVENTHISTORY)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_FILLEVENTHISTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/service/autofill/FillEventHistory_Event.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::autofill::FillEventHistory : public jni::object_base<"android/service/autofill/FillEventHistory",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Event = FillEventHistory_Event;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jni::ref<android::os::Bundle> getClientState() { return call_method<"getClientState", jni::ref<android::os::Bundle>>(); }
	jni::ref<java::util::List> getEvents() { return call_method<"getEvents", jni::ref<java::util::List>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	FillEventHistory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_FILLEVENTHISTORY