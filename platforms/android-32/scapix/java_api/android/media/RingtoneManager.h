// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_RINGTONEMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_RINGTONEMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class RingtoneManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::RingtoneManager>
{
	static constexpr fixed_string class_name = "android/media/RingtoneManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_RINGTONEMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_RINGTONEMANAGER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_RINGTONEMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Activity.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/res/AssetFileDescriptor.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/media/Ringtone.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::RingtoneManager : public jni::object_base<"android/media/RingtoneManager",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ACTION_RINGTONE_PICKER() { return get_static_field<"ACTION_RINGTONE_PICKER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_RINGTONE_DEFAULT_URI() { return get_static_field<"EXTRA_RINGTONE_DEFAULT_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_RINGTONE_EXISTING_URI() { return get_static_field<"EXTRA_RINGTONE_EXISTING_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_RINGTONE_INCLUDE_DRM() { return get_static_field<"EXTRA_RINGTONE_INCLUDE_DRM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_RINGTONE_PICKED_URI() { return get_static_field<"EXTRA_RINGTONE_PICKED_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_RINGTONE_SHOW_DEFAULT() { return get_static_field<"EXTRA_RINGTONE_SHOW_DEFAULT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_RINGTONE_SHOW_SILENT() { return get_static_field<"EXTRA_RINGTONE_SHOW_SILENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_RINGTONE_TITLE() { return get_static_field<"EXTRA_RINGTONE_TITLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_RINGTONE_TYPE() { return get_static_field<"EXTRA_RINGTONE_TYPE", jni::ref<java::lang::String>>(); }
	static jint ID_COLUMN_INDEX() { return get_static_field<"ID_COLUMN_INDEX", jint>(); }
	static jint TITLE_COLUMN_INDEX() { return get_static_field<"TITLE_COLUMN_INDEX", jint>(); }
	static jint TYPE_ALARM() { return get_static_field<"TYPE_ALARM", jint>(); }
	static jint TYPE_ALL() { return get_static_field<"TYPE_ALL", jint>(); }
	static jint TYPE_NOTIFICATION() { return get_static_field<"TYPE_NOTIFICATION", jint>(); }
	static jint TYPE_RINGTONE() { return get_static_field<"TYPE_RINGTONE", jint>(); }
	static jint URI_COLUMN_INDEX() { return get_static_field<"URI_COLUMN_INDEX", jint>(); }

	static jni::ref<android::media::RingtoneManager> new_object(jni::ref<android::app::Activity> activity) { return base_::new_object(activity); }
	static jni::ref<android::media::RingtoneManager> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	void setType(jint type) { return call_method<"setType", void>(type); }
	jint inferStreamType() { return call_method<"inferStreamType", jint>(); }
	void setStopPreviousRingtone(jboolean stopPreviousRingtone) { return call_method<"setStopPreviousRingtone", void>(stopPreviousRingtone); }
	jboolean getStopPreviousRingtone() { return call_method<"getStopPreviousRingtone", jboolean>(); }
	void stopPreviousRingtone() { return call_method<"stopPreviousRingtone", void>(); }
	jboolean getIncludeDrm() { return call_method<"getIncludeDrm", jboolean>(); }
	void setIncludeDrm(jboolean includeDrm) { return call_method<"setIncludeDrm", void>(includeDrm); }
	jni::ref<android::database::Cursor> getCursor() { return call_method<"getCursor", jni::ref<android::database::Cursor>>(); }
	jni::ref<android::media::Ringtone> getRingtone(jint position) { return call_method<"getRingtone", jni::ref<android::media::Ringtone>>(position); }
	jni::ref<android::net::Uri> getRingtoneUri(jint position) { return call_method<"getRingtoneUri", jni::ref<android::net::Uri>>(position); }
	jint getRingtonePosition(jni::ref<android::net::Uri> ringtoneUri) { return call_method<"getRingtonePosition", jint>(ringtoneUri); }
	static jni::ref<android::net::Uri> getValidRingtoneUri(jni::ref<android::content::Context> context) { return call_static_method<"getValidRingtoneUri", jni::ref<android::net::Uri>>(context); }
	static jni::ref<android::media::Ringtone> getRingtone(jni::ref<android::content::Context> context, jni::ref<android::net::Uri> ringtoneUri) { return call_static_method<"getRingtone", jni::ref<android::media::Ringtone>>(context, ringtoneUri); }
	static jni::ref<android::net::Uri> getActualDefaultRingtoneUri(jni::ref<android::content::Context> context, jint type) { return call_static_method<"getActualDefaultRingtoneUri", jni::ref<android::net::Uri>>(context, type); }
	static void setActualDefaultRingtoneUri(jni::ref<android::content::Context> context, jint type, jni::ref<android::net::Uri> ringtoneUri) { return call_static_method<"setActualDefaultRingtoneUri", void>(context, type, ringtoneUri); }
	static jboolean isDefault(jni::ref<android::net::Uri> ringtoneUri) { return call_static_method<"isDefault", jboolean>(ringtoneUri); }
	static jint getDefaultType(jni::ref<android::net::Uri> defaultRingtoneUri) { return call_static_method<"getDefaultType", jint>(defaultRingtoneUri); }
	static jni::ref<android::net::Uri> getDefaultUri(jint type) { return call_static_method<"getDefaultUri", jni::ref<android::net::Uri>>(type); }
	static jni::ref<android::content::res::AssetFileDescriptor> openDefaultRingtoneUri(jni::ref<android::content::Context> context, jni::ref<android::net::Uri> uri) { return call_static_method<"openDefaultRingtoneUri", jni::ref<android::content::res::AssetFileDescriptor>>(context, uri); }
	jboolean hasHapticChannels(jint position) { return call_method<"hasHapticChannels", jboolean>(position); }
	static jboolean hasHapticChannels(jni::ref<android::net::Uri> ringtoneUri) { return call_static_method<"hasHapticChannels", jboolean>(ringtoneUri); }

protected:

	RingtoneManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_RINGTONEMANAGER
