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
#include <scapix/java_api/android/graphics/Region.h>
#include <scapix/java_api/android/hardware/HardwareBuffer.h>
#include <scapix/java_api/android/hardware/SyncFence.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/view/SurfaceControl.h>
#include <scapix/java_api/android/view/SurfaceControl_TransactionCommittedListener.h>
#include <scapix/java_api/android/view/SurfaceControl_TrustedPresentationThresholds.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#include <scapix/java_api/java/util/function/Consumer.h>
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
	jni::ref<android::view::SurfaceControl_Transaction> setPosition(jni::ref<android::view::SurfaceControl> sc, jfloat x, jfloat y) { return call_method<"setPosition", jni::ref<android::view::SurfaceControl_Transaction>>(sc, x, y); }
	jni::ref<android::view::SurfaceControl_Transaction> setScale(jni::ref<android::view::SurfaceControl> sc, jfloat scaleX, jfloat scaleY) { return call_method<"setScale", jni::ref<android::view::SurfaceControl_Transaction>>(sc, scaleX, scaleY); }
	jni::ref<android::view::SurfaceControl_Transaction> setBufferSize(jni::ref<android::view::SurfaceControl> sc, jint w, jint h) { return call_method<"setBufferSize", jni::ref<android::view::SurfaceControl_Transaction>>(sc, w, h); }
	jni::ref<android::view::SurfaceControl_Transaction> setLayer(jni::ref<android::view::SurfaceControl> sc, jint z) { return call_method<"setLayer", jni::ref<android::view::SurfaceControl_Transaction>>(sc, z); }
	jni::ref<android::view::SurfaceControl_Transaction> setAlpha(jni::ref<android::view::SurfaceControl> sc, jfloat alpha) { return call_method<"setAlpha", jni::ref<android::view::SurfaceControl_Transaction>>(sc, alpha); }
	jni::ref<android::view::SurfaceControl_Transaction> setGeometry(jni::ref<android::view::SurfaceControl> sc, jni::ref<android::graphics::Rect> sourceCrop, jni::ref<android::graphics::Rect> destFrame, jint orientation) { return call_method<"setGeometry", jni::ref<android::view::SurfaceControl_Transaction>>(sc, sourceCrop, destFrame, orientation); }
	jni::ref<android::view::SurfaceControl_Transaction> setCrop(jni::ref<android::view::SurfaceControl> sc, jni::ref<android::graphics::Rect> crop) { return call_method<"setCrop", jni::ref<android::view::SurfaceControl_Transaction>>(sc, crop); }
	jni::ref<android::view::SurfaceControl_Transaction> reparent(jni::ref<android::view::SurfaceControl> sc, jni::ref<android::view::SurfaceControl> newParent) { return call_method<"reparent", jni::ref<android::view::SurfaceControl_Transaction>>(sc, newParent); }
	jni::ref<android::view::SurfaceControl_Transaction> setOpaque(jni::ref<android::view::SurfaceControl> sc, jboolean isOpaque) { return call_method<"setOpaque", jni::ref<android::view::SurfaceControl_Transaction>>(sc, isOpaque); }
	jni::ref<android::view::SurfaceControl_Transaction> setFrameRate(jni::ref<android::view::SurfaceControl> sc, jfloat frameRate, jint compatibility) { return call_method<"setFrameRate", jni::ref<android::view::SurfaceControl_Transaction>>(sc, frameRate, compatibility); }
	jni::ref<android::view::SurfaceControl_Transaction> setFrameRate(jni::ref<android::view::SurfaceControl> sc, jfloat frameRate, jint compatibility, jint changeFrameRateStrategy) { return call_method<"setFrameRate", jni::ref<android::view::SurfaceControl_Transaction>>(sc, frameRate, compatibility, changeFrameRateStrategy); }
	jni::ref<android::view::SurfaceControl_Transaction> clearFrameRate(jni::ref<android::view::SurfaceControl> sc) { return call_method<"clearFrameRate", jni::ref<android::view::SurfaceControl_Transaction>>(sc); }
	jni::ref<android::view::SurfaceControl_Transaction> setBuffer(jni::ref<android::view::SurfaceControl> sc, jni::ref<android::hardware::HardwareBuffer> buffer) { return call_method<"setBuffer", jni::ref<android::view::SurfaceControl_Transaction>>(sc, buffer); }
	jni::ref<android::view::SurfaceControl_Transaction> setBuffer(jni::ref<android::view::SurfaceControl> sc, jni::ref<android::hardware::HardwareBuffer> buffer, jni::ref<android::hardware::SyncFence> fence) { return call_method<"setBuffer", jni::ref<android::view::SurfaceControl_Transaction>>(sc, buffer, fence); }
	jni::ref<android::view::SurfaceControl_Transaction> setBuffer(jni::ref<android::view::SurfaceControl> sc, jni::ref<android::hardware::HardwareBuffer> buffer, jni::ref<android::hardware::SyncFence> fence, jni::ref<java::util::function::Consumer> releaseCallback) { return call_method<"setBuffer", jni::ref<android::view::SurfaceControl_Transaction>>(sc, buffer, fence, releaseCallback); }
	jni::ref<android::view::SurfaceControl_Transaction> setBufferTransform(jni::ref<android::view::SurfaceControl> sc, jint transform) { return call_method<"setBufferTransform", jni::ref<android::view::SurfaceControl_Transaction>>(sc, transform); }
	jni::ref<android::view::SurfaceControl_Transaction> setDamageRegion(jni::ref<android::view::SurfaceControl> sc, jni::ref<android::graphics::Region> region) { return call_method<"setDamageRegion", jni::ref<android::view::SurfaceControl_Transaction>>(sc, region); }
	jni::ref<android::view::SurfaceControl_Transaction> setDataSpace(jni::ref<android::view::SurfaceControl> sc, jint dataspace) { return call_method<"setDataSpace", jni::ref<android::view::SurfaceControl_Transaction>>(sc, dataspace); }
	jni::ref<android::view::SurfaceControl_Transaction> setExtendedRangeBrightness(jni::ref<android::view::SurfaceControl> sc, jfloat currentBufferRatio, jfloat desiredRatio) { return call_method<"setExtendedRangeBrightness", jni::ref<android::view::SurfaceControl_Transaction>>(sc, currentBufferRatio, desiredRatio); }
	jni::ref<android::view::SurfaceControl_Transaction> merge(jni::ref<android::view::SurfaceControl_Transaction> other) { return call_method<"merge", jni::ref<android::view::SurfaceControl_Transaction>>(other); }
	jni::ref<android::view::SurfaceControl_Transaction> addTransactionCommittedListener(jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::view::SurfaceControl_TransactionCommittedListener> listener) { return call_method<"addTransactionCommittedListener", jni::ref<android::view::SurfaceControl_Transaction>>(executor, listener); }
	jni::ref<android::view::SurfaceControl_Transaction> setTrustedPresentationCallback(jni::ref<android::view::SurfaceControl> sc, jni::ref<android::view::SurfaceControl_TrustedPresentationThresholds> thresholds, jni::ref<java::util::concurrent::Executor> executor, jni::ref<java::util::function::Consumer> listener) { return call_method<"setTrustedPresentationCallback", jni::ref<android::view::SurfaceControl_Transaction>>(sc, thresholds, executor, listener); }
	jni::ref<android::view::SurfaceControl_Transaction> clearTrustedPresentationCallback(jni::ref<android::view::SurfaceControl> sc) { return call_method<"clearTrustedPresentationCallback", jni::ref<android::view::SurfaceControl_Transaction>>(sc); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	SurfaceControl_Transaction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SURFACECONTROL_TRANSACTION
