// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_ICON_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_ICON_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics::drawable { class Icon; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::drawable::Icon>
{
	static constexpr fixed_string class_name = "android/graphics/drawable/Icon";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_ICON_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_ICON)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_ICON

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/res/ColorStateList.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/BlendMode.h>
#include <scapix/java_api/android/graphics/PorterDuff_Mode.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/graphics/drawable/Icon_OnDrawableLoadedListener.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/os/Message.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::drawable::Icon : public jni::object_base<"android/graphics/drawable/Icon",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using OnDrawableLoadedListener = Icon_OnDrawableLoadedListener;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint TYPE_ADAPTIVE_BITMAP() { return get_static_field<"TYPE_ADAPTIVE_BITMAP", jint>(); }
	static jint TYPE_BITMAP() { return get_static_field<"TYPE_BITMAP", jint>(); }
	static jint TYPE_DATA() { return get_static_field<"TYPE_DATA", jint>(); }
	static jint TYPE_RESOURCE() { return get_static_field<"TYPE_RESOURCE", jint>(); }
	static jint TYPE_URI() { return get_static_field<"TYPE_URI", jint>(); }

	jint getType() { return call_method<"getType", jint>(); }
	jni::ref<java::lang::String> getResPackage() { return call_method<"getResPackage", jni::ref<java::lang::String>>(); }
	jint getResId() { return call_method<"getResId", jint>(); }
	jni::ref<android::net::Uri> getUri() { return call_method<"getUri", jni::ref<android::net::Uri>>(); }
	void loadDrawableAsync(jni::ref<android::content::Context> context, jni::ref<android::os::Message> andThen) { return call_method<"loadDrawableAsync", void>(context, andThen); }
	void loadDrawableAsync(jni::ref<android::content::Context> context, jni::ref<android::graphics::drawable::Icon_OnDrawableLoadedListener> listener, jni::ref<android::os::Handler> handler) { return call_method<"loadDrawableAsync", void>(context, listener, handler); }
	jni::ref<android::graphics::drawable::Drawable> loadDrawable(jni::ref<android::content::Context> context) { return call_method<"loadDrawable", jni::ref<android::graphics::drawable::Drawable>>(context); }
	static jni::ref<android::graphics::drawable::Icon> createWithResource(jni::ref<android::content::Context> context, jint resId) { return call_static_method<"createWithResource", jni::ref<android::graphics::drawable::Icon>>(context, resId); }
	static jni::ref<android::graphics::drawable::Icon> createWithResource(jni::ref<java::lang::String> resPackage, jint resId) { return call_static_method<"createWithResource", jni::ref<android::graphics::drawable::Icon>>(resPackage, resId); }
	static jni::ref<android::graphics::drawable::Icon> createWithBitmap(jni::ref<android::graphics::Bitmap> bits) { return call_static_method<"createWithBitmap", jni::ref<android::graphics::drawable::Icon>>(bits); }
	static jni::ref<android::graphics::drawable::Icon> createWithAdaptiveBitmap(jni::ref<android::graphics::Bitmap> bits) { return call_static_method<"createWithAdaptiveBitmap", jni::ref<android::graphics::drawable::Icon>>(bits); }
	static jni::ref<android::graphics::drawable::Icon> createWithData(jni::ref<jni::array<jbyte>> data, jint offset, jint length) { return call_static_method<"createWithData", jni::ref<android::graphics::drawable::Icon>>(data, offset, length); }
	static jni::ref<android::graphics::drawable::Icon> createWithContentUri(jni::ref<java::lang::String> uri) { return call_static_method<"createWithContentUri", jni::ref<android::graphics::drawable::Icon>>(uri); }
	static jni::ref<android::graphics::drawable::Icon> createWithContentUri(jni::ref<android::net::Uri> uri) { return call_static_method<"createWithContentUri", jni::ref<android::graphics::drawable::Icon>>(uri); }
	jni::ref<android::graphics::drawable::Icon> setTint(jint tint) { return call_method<"setTint", jni::ref<android::graphics::drawable::Icon>>(tint); }
	jni::ref<android::graphics::drawable::Icon> setTintList(jni::ref<android::content::res::ColorStateList> tintList) { return call_method<"setTintList", jni::ref<android::graphics::drawable::Icon>>(tintList); }
	jni::ref<android::graphics::drawable::Icon> setTintMode(jni::ref<android::graphics::PorterDuff_Mode> mode) { return call_method<"setTintMode", jni::ref<android::graphics::drawable::Icon>>(mode); }
	jni::ref<android::graphics::drawable::Icon> setTintBlendMode(jni::ref<android::graphics::BlendMode> mode) { return call_method<"setTintBlendMode", jni::ref<android::graphics::drawable::Icon>>(mode); }
	static jni::ref<android::graphics::drawable::Icon> createWithFilePath(jni::ref<java::lang::String> path) { return call_static_method<"createWithFilePath", jni::ref<android::graphics::drawable::Icon>>(path); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	Icon(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_ICON
