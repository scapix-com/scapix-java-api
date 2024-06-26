// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/AbsSavedState.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_BASESAVEDSTATE_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_BASESAVEDSTATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class View_BaseSavedState; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::View_BaseSavedState>
{
	static constexpr fixed_string class_name = "android/view/View$BaseSavedState";
	using base_classes = std::tuple<scapix::java_api::android::view::AbsSavedState>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_BASESAVEDSTATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_BASESAVEDSTATE)
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_BASESAVEDSTATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::View_BaseSavedState : public jni::object_base<"android/view/View$BaseSavedState",
	android::view::AbsSavedState>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::view::View_BaseSavedState> new_object(jni::ref<android::os::Parcel> source) { return base_::new_object(source); }
	static jni::ref<android::view::View_BaseSavedState> new_object(jni::ref<android::os::Parcelable> superState) { return base_::new_object(superState); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint flags) { return call_method<"writeToParcel", void>(out, flags); }

protected:

	View_BaseSavedState(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEW_BASESAVEDSTATE
