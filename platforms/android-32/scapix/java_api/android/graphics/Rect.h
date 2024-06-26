// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_RECT_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_RECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class Rect; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::Rect>
{
	static constexpr fixed_string class_name = "android/graphics/Rect";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_RECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_RECT)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_RECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Insets.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::Rect : public jni::object_base<"android/graphics/Rect",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	jint bottom() { return get_field<"bottom", jint>(); }
	void bottom(jint v) { set_field<"bottom", jint>(v); }
	jint left() { return get_field<"left", jint>(); }
	void left(jint v) { set_field<"left", jint>(v); }
	jint right() { return get_field<"right", jint>(); }
	void right(jint v) { set_field<"right", jint>(v); }
	jint top() { return get_field<"top", jint>(); }
	void top(jint v) { set_field<"top", jint>(v); }

	static jni::ref<android::graphics::Rect> new_object() { return base_::new_object(); }
	static jni::ref<android::graphics::Rect> new_object(jint left, jint top, jint right, jint bottom) { return base_::new_object(left, top, right, bottom); }
	static jni::ref<android::graphics::Rect> new_object(jni::ref<android::graphics::Rect> r) { return base_::new_object(r); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toShortString() { return call_method<"toShortString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> flattenToString() { return call_method<"flattenToString", jni::ref<java::lang::String>>(); }
	static jni::ref<android::graphics::Rect> unflattenFromString(jni::ref<java::lang::String> str) { return call_static_method<"unflattenFromString", jni::ref<android::graphics::Rect>>(str); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jint width() { return call_method<"width", jint>(); }
	jint height() { return call_method<"height", jint>(); }
	jint centerX() { return call_method<"centerX", jint>(); }
	jint centerY() { return call_method<"centerY", jint>(); }
	jfloat exactCenterX() { return call_method<"exactCenterX", jfloat>(); }
	jfloat exactCenterY() { return call_method<"exactCenterY", jfloat>(); }
	void setEmpty() { return call_method<"setEmpty", void>(); }
	void set(jint left, jint top, jint right, jint bottom) { return call_method<"set", void>(left, top, right, bottom); }
	void set(jni::ref<android::graphics::Rect> src) { return call_method<"set", void>(src); }
	void offset(jint dx, jint dy) { return call_method<"offset", void>(dx, dy); }
	void offsetTo(jint newLeft, jint newTop) { return call_method<"offsetTo", void>(newLeft, newTop); }
	void inset(jint dx, jint dy) { return call_method<"inset", void>(dx, dy); }
	void inset(jni::ref<android::graphics::Insets> insets) { return call_method<"inset", void>(insets); }
	void inset(jint left, jint top, jint right, jint bottom) { return call_method<"inset", void>(left, top, right, bottom); }
	jboolean contains(jint x, jint y) { return call_method<"contains", jboolean>(x, y); }
	jboolean contains(jint left, jint top, jint right, jint bottom) { return call_method<"contains", jboolean>(left, top, right, bottom); }
	jboolean contains(jni::ref<android::graphics::Rect> r) { return call_method<"contains", jboolean>(r); }
	jboolean intersect(jint left, jint top, jint right, jint bottom) { return call_method<"intersect", jboolean>(left, top, right, bottom); }
	jboolean intersect(jni::ref<android::graphics::Rect> r) { return call_method<"intersect", jboolean>(r); }
	jboolean setIntersect(jni::ref<android::graphics::Rect> a, jni::ref<android::graphics::Rect> b) { return call_method<"setIntersect", jboolean>(a, b); }
	jboolean intersects(jint left, jint top, jint right, jint bottom) { return call_method<"intersects", jboolean>(left, top, right, bottom); }
	static jboolean intersects(jni::ref<android::graphics::Rect> a, jni::ref<android::graphics::Rect> b) { return call_static_method<"intersects", jboolean>(a, b); }
	void union_(jint left, jint top, jint right, jint bottom) { return call_method<"union", void>(left, top, right, bottom); }
	void union_(jni::ref<android::graphics::Rect> r) { return call_method<"union", void>(r); }
	void union_(jint x, jint y) { return call_method<"union", void>(x, y); }
	void sort() { return call_method<"sort", void>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint flags) { return call_method<"writeToParcel", void>(out, flags); }
	void readFromParcel(jni::ref<android::os::Parcel> in) { return call_method<"readFromParcel", void>(in); }

protected:

	Rect(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_RECT
