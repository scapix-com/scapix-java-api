// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_BITMAPFACTORY_OPTIONS_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_BITMAPFACTORY_OPTIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class BitmapFactory_Options; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::BitmapFactory_Options>
{
	static constexpr fixed_string class_name = "android/graphics/BitmapFactory$Options";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_BITMAPFACTORY_OPTIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_BITMAPFACTORY_OPTIONS)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_BITMAPFACTORY_OPTIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/Bitmap_Config.h>
#include <scapix/java_api/android/graphics/ColorSpace.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::BitmapFactory_Options : public jni::object_base<"android/graphics/BitmapFactory$Options",
	java::lang::Object>
{
public:

	jni::ref<android::graphics::Bitmap> inBitmap() { return get_field<"inBitmap", jni::ref<android::graphics::Bitmap>>(); }
	void inBitmap(jni::ref<android::graphics::Bitmap> v) { set_field<"inBitmap", jni::ref<android::graphics::Bitmap>>(v); }
	jint inDensity() { return get_field<"inDensity", jint>(); }
	void inDensity(jint v) { set_field<"inDensity", jint>(v); }
	jboolean inDither() { return get_field<"inDither", jboolean>(); }
	void inDither(jboolean v) { set_field<"inDither", jboolean>(v); }
	jboolean inInputShareable() { return get_field<"inInputShareable", jboolean>(); }
	void inInputShareable(jboolean v) { set_field<"inInputShareable", jboolean>(v); }
	jboolean inJustDecodeBounds() { return get_field<"inJustDecodeBounds", jboolean>(); }
	void inJustDecodeBounds(jboolean v) { set_field<"inJustDecodeBounds", jboolean>(v); }
	jboolean inMutable() { return get_field<"inMutable", jboolean>(); }
	void inMutable(jboolean v) { set_field<"inMutable", jboolean>(v); }
	jboolean inPreferQualityOverSpeed() { return get_field<"inPreferQualityOverSpeed", jboolean>(); }
	void inPreferQualityOverSpeed(jboolean v) { set_field<"inPreferQualityOverSpeed", jboolean>(v); }
	jni::ref<android::graphics::ColorSpace> inPreferredColorSpace() { return get_field<"inPreferredColorSpace", jni::ref<android::graphics::ColorSpace>>(); }
	void inPreferredColorSpace(jni::ref<android::graphics::ColorSpace> v) { set_field<"inPreferredColorSpace", jni::ref<android::graphics::ColorSpace>>(v); }
	jni::ref<android::graphics::Bitmap_Config> inPreferredConfig() { return get_field<"inPreferredConfig", jni::ref<android::graphics::Bitmap_Config>>(); }
	void inPreferredConfig(jni::ref<android::graphics::Bitmap_Config> v) { set_field<"inPreferredConfig", jni::ref<android::graphics::Bitmap_Config>>(v); }
	jboolean inPremultiplied() { return get_field<"inPremultiplied", jboolean>(); }
	void inPremultiplied(jboolean v) { set_field<"inPremultiplied", jboolean>(v); }
	jboolean inPurgeable() { return get_field<"inPurgeable", jboolean>(); }
	void inPurgeable(jboolean v) { set_field<"inPurgeable", jboolean>(v); }
	jint inSampleSize() { return get_field<"inSampleSize", jint>(); }
	void inSampleSize(jint v) { set_field<"inSampleSize", jint>(v); }
	jboolean inScaled() { return get_field<"inScaled", jboolean>(); }
	void inScaled(jboolean v) { set_field<"inScaled", jboolean>(v); }
	jint inScreenDensity() { return get_field<"inScreenDensity", jint>(); }
	void inScreenDensity(jint v) { set_field<"inScreenDensity", jint>(v); }
	jint inTargetDensity() { return get_field<"inTargetDensity", jint>(); }
	void inTargetDensity(jint v) { set_field<"inTargetDensity", jint>(v); }
	jni::ref<jni::array<jbyte>> inTempStorage() { return get_field<"inTempStorage", jni::ref<jni::array<jbyte>>>(); }
	void inTempStorage(jni::ref<jni::array<jbyte>> v) { set_field<"inTempStorage", jni::ref<jni::array<jbyte>>>(v); }
	jboolean mCancel() { return get_field<"mCancel", jboolean>(); }
	void mCancel(jboolean v) { set_field<"mCancel", jboolean>(v); }
	jni::ref<android::graphics::ColorSpace> outColorSpace() { return get_field<"outColorSpace", jni::ref<android::graphics::ColorSpace>>(); }
	void outColorSpace(jni::ref<android::graphics::ColorSpace> v) { set_field<"outColorSpace", jni::ref<android::graphics::ColorSpace>>(v); }
	jni::ref<android::graphics::Bitmap_Config> outConfig() { return get_field<"outConfig", jni::ref<android::graphics::Bitmap_Config>>(); }
	void outConfig(jni::ref<android::graphics::Bitmap_Config> v) { set_field<"outConfig", jni::ref<android::graphics::Bitmap_Config>>(v); }
	jint outHeight() { return get_field<"outHeight", jint>(); }
	void outHeight(jint v) { set_field<"outHeight", jint>(v); }
	jni::ref<java::lang::String> outMimeType() { return get_field<"outMimeType", jni::ref<java::lang::String>>(); }
	void outMimeType(jni::ref<java::lang::String> v) { set_field<"outMimeType", jni::ref<java::lang::String>>(v); }
	jint outWidth() { return get_field<"outWidth", jint>(); }
	void outWidth(jint v) { set_field<"outWidth", jint>(v); }

	static jni::ref<android::graphics::BitmapFactory_Options> new_object() { return base_::new_object(); }
	void requestCancelDecode() { return call_method<"requestCancelDecode", void>(); }

protected:

	BitmapFactory_Options(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_BITMAPFACTORY_OPTIONS