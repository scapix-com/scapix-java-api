// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GESTURE_GESTURE_FWD
#define SCAPIX_JAVA_API_ANDROID_GESTURE_GESTURE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::gesture { class Gesture; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::gesture::Gesture>
{
	static constexpr fixed_string class_name = "android/gesture/Gesture";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GESTURE_GESTURE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GESTURE_GESTURE)
#define SCAPIX_JAVA_API_ANDROID_GESTURE_GESTURE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/gesture/GestureStroke.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/Path.h>
#include <scapix/java_api/android/graphics/RectF.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/util/ArrayList.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::gesture::Gesture : public jni::object_base<"android/gesture/Gesture",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::gesture::Gesture> new_object() { return base_::new_object(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<java::util::ArrayList> getStrokes() { return call_method<"getStrokes", jni::ref<java::util::ArrayList>>(); }
	jint getStrokesCount() { return call_method<"getStrokesCount", jint>(); }
	void addStroke(jni::ref<android::gesture::GestureStroke> stroke) { return call_method<"addStroke", void>(stroke); }
	jfloat getLength() { return call_method<"getLength", jfloat>(); }
	jni::ref<android::graphics::RectF> getBoundingBox() { return call_method<"getBoundingBox", jni::ref<android::graphics::RectF>>(); }
	jni::ref<android::graphics::Path> toPath() { return call_method<"toPath", jni::ref<android::graphics::Path>>(); }
	jni::ref<android::graphics::Path> toPath(jni::ref<android::graphics::Path> path) { return call_method<"toPath", jni::ref<android::graphics::Path>>(path); }
	jni::ref<android::graphics::Path> toPath(jint width, jint height, jint edge, jint numSample) { return call_method<"toPath", jni::ref<android::graphics::Path>>(width, height, edge, numSample); }
	jni::ref<android::graphics::Path> toPath(jni::ref<android::graphics::Path> path, jint width, jint height, jint edge, jint numSample) { return call_method<"toPath", jni::ref<android::graphics::Path>>(path, width, height, edge, numSample); }
	jlong getID() { return call_method<"getID", jlong>(); }
	jni::ref<android::graphics::Bitmap> toBitmap(jint width, jint height, jint edge, jint numSample, jint color) { return call_method<"toBitmap", jni::ref<android::graphics::Bitmap>>(width, height, edge, numSample, color); }
	jni::ref<android::graphics::Bitmap> toBitmap(jint width, jint height, jint inset, jint color) { return call_method<"toBitmap", jni::ref<android::graphics::Bitmap>>(width, height, inset, color); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint flags) { return call_method<"writeToParcel", void>(out, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	Gesture(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GESTURE_GESTURE