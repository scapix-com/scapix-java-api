// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAMETADATAEDITOR_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAMETADATAEDITOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaMetadataEditor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaMetadataEditor>
{
	static constexpr fixed_string class_name = "android/media/MediaMetadataEditor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAMETADATAEDITOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAMETADATAEDITOR)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAMETADATAEDITOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaMetadataEditor : public jni::object_base<"android/media/MediaMetadataEditor",
	java::lang::Object>
{
public:

	static jint BITMAP_KEY_ARTWORK() { return get_static_field<"BITMAP_KEY_ARTWORK", jint>(); }
	static jint RATING_KEY_BY_OTHERS() { return get_static_field<"RATING_KEY_BY_OTHERS", jint>(); }
	static jint RATING_KEY_BY_USER() { return get_static_field<"RATING_KEY_BY_USER", jint>(); }

	void apply() { return call_method<"apply", void>(); }
	void clear() { return call_method<"clear", void>(); }
	void addEditableKey(jint key) { return call_method<"addEditableKey", void>(key); }
	void removeEditableKeys() { return call_method<"removeEditableKeys", void>(); }
	jni::ref<jni::array<jint>> getEditableKeys() { return call_method<"getEditableKeys", jni::ref<jni::array<jint>>>(); }
	jni::ref<android::media::MediaMetadataEditor> putString(jint key, jni::ref<java::lang::String> value) { return call_method<"putString", jni::ref<android::media::MediaMetadataEditor>>(key, value); }
	jni::ref<android::media::MediaMetadataEditor> putLong(jint key, jlong value) { return call_method<"putLong", jni::ref<android::media::MediaMetadataEditor>>(key, value); }
	jni::ref<android::media::MediaMetadataEditor> putBitmap(jint key, jni::ref<android::graphics::Bitmap> bitmap) { return call_method<"putBitmap", jni::ref<android::media::MediaMetadataEditor>>(key, bitmap); }
	jni::ref<android::media::MediaMetadataEditor> putObject(jint key, jni::ref<java::lang::Object> value) { return call_method<"putObject", jni::ref<android::media::MediaMetadataEditor>>(key, value); }
	jlong getLong(jint key, jlong defaultValue) { return call_method<"getLong", jlong>(key, defaultValue); }
	jni::ref<java::lang::String> getString(jint key, jni::ref<java::lang::String> defaultValue) { return call_method<"getString", jni::ref<java::lang::String>>(key, defaultValue); }
	jni::ref<android::graphics::Bitmap> getBitmap(jint key, jni::ref<android::graphics::Bitmap> defaultValue) { return call_method<"getBitmap", jni::ref<android::graphics::Bitmap>>(key, defaultValue); }
	jni::ref<java::lang::Object> getObject(jint key, jni::ref<java::lang::Object> defaultValue) { return call_method<"getObject", jni::ref<java::lang::Object>>(key, defaultValue); }

protected:

	MediaMetadataEditor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAMETADATAEDITOR