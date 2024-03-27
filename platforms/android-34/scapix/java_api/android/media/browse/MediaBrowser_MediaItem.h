// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_BROWSE_MEDIABROWSER_MEDIAITEM_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_BROWSE_MEDIABROWSER_MEDIAITEM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::browse { class MediaBrowser_MediaItem; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::browse::MediaBrowser_MediaItem>
{
	static constexpr fixed_string class_name = "android/media/browse/MediaBrowser$MediaItem";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_BROWSE_MEDIABROWSER_MEDIAITEM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_BROWSE_MEDIABROWSER_MEDIAITEM)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_BROWSE_MEDIABROWSER_MEDIAITEM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/MediaDescription.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::browse::MediaBrowser_MediaItem : public jni::object_base<"android/media/browse/MediaBrowser$MediaItem",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint FLAG_BROWSABLE() { return get_static_field<"FLAG_BROWSABLE", jint>(); }
	static jint FLAG_PLAYABLE() { return get_static_field<"FLAG_PLAYABLE", jint>(); }

	static jni::ref<android::media::browse::MediaBrowser_MediaItem> new_object(jni::ref<android::media::MediaDescription> description, jint flags) { return base_::new_object(description, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint flags) { return call_method<"writeToParcel", void>(out, flags); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint getFlags() { return call_method<"getFlags", jint>(); }
	jboolean isBrowsable() { return call_method<"isBrowsable", jboolean>(); }
	jboolean isPlayable() { return call_method<"isPlayable", jboolean>(); }
	jni::ref<android::media::MediaDescription> getDescription() { return call_method<"getDescription", jni::ref<android::media::MediaDescription>>(); }
	jni::ref<java::lang::String> getMediaId() { return call_method<"getMediaId", jni::ref<java::lang::String>>(); }

protected:

	MediaBrowser_MediaItem(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_BROWSE_MEDIABROWSER_MEDIAITEM
