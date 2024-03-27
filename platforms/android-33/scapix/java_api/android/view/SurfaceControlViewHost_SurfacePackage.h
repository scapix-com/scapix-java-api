// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_SURFACECONTROLVIEWHOST_SURFACEPACKAGE_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_SURFACECONTROLVIEWHOST_SURFACEPACKAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class SurfaceControlViewHost_SurfacePackage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::SurfaceControlViewHost_SurfacePackage>
{
	static constexpr fixed_string class_name = "android/view/SurfaceControlViewHost$SurfacePackage";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SURFACECONTROLVIEWHOST_SURFACEPACKAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_SURFACECONTROLVIEWHOST_SURFACEPACKAGE)
#define SCAPIX_JAVA_API_ANDROID_VIEW_SURFACECONTROLVIEWHOST_SURFACEPACKAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/res/Configuration.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::SurfaceControlViewHost_SurfacePackage : public jni::object_base<"android/view/SurfaceControlViewHost$SurfacePackage",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::view::SurfaceControlViewHost_SurfacePackage> new_object(jni::ref<android::view::SurfaceControlViewHost_SurfacePackage> other) { return base_::new_object(other); }
	void notifyConfigurationChanged(jni::ref<android::content::res::Configuration> c) { return call_method<"notifyConfigurationChanged", void>(c); }
	void notifyDetachedFromWindow() { return call_method<"notifyDetachedFromWindow", void>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint flags) { return call_method<"writeToParcel", void>(out, flags); }
	void release() { return call_method<"release", void>(); }

protected:

	SurfaceControlViewHost_SurfacePackage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SURFACECONTROLVIEWHOST_SURFACEPACKAGE