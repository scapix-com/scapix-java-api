// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_VIDEO_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_VIDEO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class MediaStore_Video; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::MediaStore_Video>
{
	static constexpr fixed_string class_name = "android/provider/MediaStore$Video";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_VIDEO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_VIDEO)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_VIDEO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ContentResolver.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/provider/MediaStore_Video_Thumbnails.h>
#include <scapix/java_api/android/provider/MediaStore_Video_Media.h>
#include <scapix/java_api/android/provider/MediaStore_Video_VideoColumns.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::MediaStore_Video : public jni::object_base<"android/provider/MediaStore$Video",
	java::lang::Object>
{
public:

	using Thumbnails = MediaStore_Video_Thumbnails;
	using Media = MediaStore_Video_Media;
	using VideoColumns = MediaStore_Video_VideoColumns;

	static jni::ref<java::lang::String> DEFAULT_SORT_ORDER() { return get_static_field<"DEFAULT_SORT_ORDER", jni::ref<java::lang::String>>(); }

	static jni::ref<android::provider::MediaStore_Video> new_object() { return base_::new_object(); }
	static jni::ref<android::database::Cursor> query(jni::ref<android::content::ContentResolver> cr, jni::ref<android::net::Uri> uri, jni::ref<jni::array<java::lang::String>> projection) { return call_static_method<"query", jni::ref<android::database::Cursor>>(cr, uri, projection); }

protected:

	MediaStore_Video(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_VIDEO
