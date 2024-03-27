// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/inputmethod/HandwritingGesture.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INSERTMODEGESTURE_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INSERTMODEGESTURE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::inputmethod { class InsertModeGesture; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::inputmethod::InsertModeGesture>
{
	static constexpr fixed_string class_name = "android/view/inputmethod/InsertModeGesture";
	using base_classes = std::tuple<scapix::java_api::android::view::inputmethod::HandwritingGesture, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INSERTMODEGESTURE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INSERTMODEGESTURE)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INSERTMODEGESTURE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/PointF.h>
#include <scapix/java_api/android/os/CancellationSignal.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/view/inputmethod/InsertModeGesture_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::inputmethod::InsertModeGesture : public jni::object_base<"android/view/inputmethod/InsertModeGesture",
	android::view::inputmethod::HandwritingGesture,
	android::os::Parcelable>
{
public:

	using Builder = InsertModeGesture_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jni::ref<android::os::CancellationSignal> getCancellationSignal() { return call_method<"getCancellationSignal", jni::ref<android::os::CancellationSignal>>(); }
	jni::ref<android::graphics::PointF> getInsertionPoint() { return call_method<"getInsertionPoint", jni::ref<android::graphics::PointF>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	InsertModeGesture(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INSERTMODEGESTURE
