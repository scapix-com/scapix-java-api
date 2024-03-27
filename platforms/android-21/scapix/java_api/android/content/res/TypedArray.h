// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_RES_TYPEDARRAY_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_RES_TYPEDARRAY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::res { class TypedArray; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::res::TypedArray>
{
	static constexpr fixed_string class_name = "android/content/res/TypedArray";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_RES_TYPEDARRAY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_RES_TYPEDARRAY)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_RES_TYPEDARRAY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/res/ColorStateList.h>
#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/util/TypedValue.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::res::TypedArray : public jni::object_base<"android/content/res/TypedArray",
	java::lang::Object>
{
public:

	jint length() { return call_method<"length", jint>(); }
	jint getIndexCount() { return call_method<"getIndexCount", jint>(); }
	jint getIndex(jint at) { return call_method<"getIndex", jint>(at); }
	jni::ref<android::content::res::Resources> getResources() { return call_method<"getResources", jni::ref<android::content::res::Resources>>(); }
	jni::ref<java::lang::CharSequence> getText(jint index) { return call_method<"getText", jni::ref<java::lang::CharSequence>>(index); }
	jni::ref<java::lang::String> getString(jint index) { return call_method<"getString", jni::ref<java::lang::String>>(index); }
	jni::ref<java::lang::String> getNonResourceString(jint index) { return call_method<"getNonResourceString", jni::ref<java::lang::String>>(index); }
	jboolean getBoolean(jint index, jboolean defValue) { return call_method<"getBoolean", jboolean>(index, defValue); }
	jint getInt(jint index, jint defValue) { return call_method<"getInt", jint>(index, defValue); }
	jfloat getFloat(jint index, jfloat defValue) { return call_method<"getFloat", jfloat>(index, defValue); }
	jint getColor(jint index, jint defValue) { return call_method<"getColor", jint>(index, defValue); }
	jni::ref<android::content::res::ColorStateList> getColorStateList(jint index) { return call_method<"getColorStateList", jni::ref<android::content::res::ColorStateList>>(index); }
	jint getInteger(jint index, jint defValue) { return call_method<"getInteger", jint>(index, defValue); }
	jfloat getDimension(jint index, jfloat defValue) { return call_method<"getDimension", jfloat>(index, defValue); }
	jint getDimensionPixelOffset(jint index, jint defValue) { return call_method<"getDimensionPixelOffset", jint>(index, defValue); }
	jint getDimensionPixelSize(jint index, jint defValue) { return call_method<"getDimensionPixelSize", jint>(index, defValue); }
	jint getLayoutDimension(jint index, jni::ref<java::lang::String> name) { return call_method<"getLayoutDimension", jint>(index, name); }
	jint getLayoutDimension(jint index, jint defValue) { return call_method<"getLayoutDimension", jint>(index, defValue); }
	jfloat getFraction(jint index, jint base, jint pbase, jfloat defValue) { return call_method<"getFraction", jfloat>(index, base, pbase, defValue); }
	jint getResourceId(jint index, jint defValue) { return call_method<"getResourceId", jint>(index, defValue); }
	jni::ref<android::graphics::drawable::Drawable> getDrawable(jint index) { return call_method<"getDrawable", jni::ref<android::graphics::drawable::Drawable>>(index); }
	jni::ref<jni::array<java::lang::CharSequence>> getTextArray(jint index) { return call_method<"getTextArray", jni::ref<jni::array<java::lang::CharSequence>>>(index); }
	jboolean getValue(jint index, jni::ref<android::util::TypedValue> outValue) { return call_method<"getValue", jboolean>(index, outValue); }
	jint getType(jint index) { return call_method<"getType", jint>(index); }
	jboolean hasValue(jint index) { return call_method<"hasValue", jboolean>(index); }
	jni::ref<android::util::TypedValue> peekValue(jint index) { return call_method<"peekValue", jni::ref<android::util::TypedValue>>(index); }
	jni::ref<java::lang::String> getPositionDescription() { return call_method<"getPositionDescription", jni::ref<java::lang::String>>(); }
	void recycle() { return call_method<"recycle", void>(); }
	jint getChangingConfigurations() { return call_method<"getChangingConfigurations", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	TypedArray(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_RES_TYPEDARRAY
