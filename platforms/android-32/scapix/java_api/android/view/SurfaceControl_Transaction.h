// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Closeable.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_SURFACECONTROL_TRANSACTION_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_SURFACECONTROL_TRANSACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class SurfaceControl_Transaction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::SurfaceControl_Transaction>
{
	static constexpr fixed_string class_name = "android/view/SurfaceControl$Transaction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Closeable, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SURFACECONTROL_TRANSACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_SURFACECONTROL_TRANSACTION)
#define SCAPIX_JAVA_API_ANDROID_VIEW_SURFACECONTROL_TRANSACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/view/SurfaceControl.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::SurfaceControl_Transaction : public jni::object_base<"android/view/SurfaceControl$Transaction",
	java::lang::Object,
	java::io::Closeable,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::view::SurfaceControl_Transaction> new_object() { return base_::new_object(); }
	void apply() { return call_method<"apply", void>(); }
	void close() { return call_method<"close", void>(); }
	jni::ref<android::view::SurfaceControl_Transaction> setVisibility(jni::ref<android::view::SurfaceControl> sc, jboolean visible) { return call_method<"setVisibility", jni::ref<android::view::SurfaceControl_Transaction>>(sc, visible); }
	jni::ref<android::view::SurfaceControl_Transaction> setBufferSize(jni::ref<android::view::SurfaceControl> sc, jint w, jint h) { return call_method<"setBufferSize", jni::ref<android::view::SurfaceControl_Transaction>>(sc, w, h); }
	jni::ref<android::view::SurfaceControl_Transaction> setLayer(jni::ref<android::view::SurfaceControl> sc, jint z) { return call_method<"setLayer", jni::ref<android::view::SurfaceControl_Transaction>>(sc, z); }
	jni::ref<android::view::SurfaceControl_Transaction> setAlpha(jni::ref<android::view::SurfaceControl> sc, jfloat alpha) { return call_method<"setAlpha", jni::ref<android::view::SurfaceControl_Transaction>>(sc, alpha); }
	jni::ref<android::view::SurfaceControl_Transaction> setGeometry(jni::ref<android::view::SurfaceControl> sc, jni::ref<android::graphics::Rect> sourceCrop, jni::ref<android::graphics::Rect> destFrame, jint orientation) { return call_method<"setGeometry", jni::ref<android::view::SurfaceControl_Transaction>>(sc, sourceCrop, destFrame, orientation); }
	jni::ref<android::view::SurfaceControl_Transaction> reparent(jni::ref<android::view::SurfaceControl> sc, jni::ref<android::view::SurfaceControl> newParent) { return call_method<"reparent", jni::ref<android::view::SurfaceControl_Transaction>>(sc, newParent); }
	jni::ref<android::view::SurfaceControl_Transaction> setFrameRate(jni::ref<android::view::SurfaceControl> sc, jfloat frameRate, jint compatibility) { return call_method<"setFrameRate", jni::ref<android::view::SurfaceControl_Transaction>>(sc, frameRate, compatibility); }
	jni::ref<android::view::SurfaceControl_Transaction> setFrameRate(jni::ref<android::view::SurfaceControl> sc, jfloat frameRate, jint compatibility, jint changeFrameRateStrategy) { return call_method<"setFrameRate", jni::ref<android::view::SurfaceControl_Transaction>>(sc, frameRate, compatibility, changeFrameRateStrategy); }
	jni::ref<android::view::SurfaceControl_Transaction> merge(jni::ref<android::view::SurfaceControl_Transaction> other) { return call_method<"merge", jni::ref<android::view::SurfaceControl_Transaction>>(other); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	SurfaceControl_Transaction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SURFACECONTROL_TRANSACTION
