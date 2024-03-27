// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/MediaStore_MediaColumns.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_VIDEO_VIDEOCOLUMNS_FWD
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_VIDEO_VIDEOCOLUMNS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::provider { class MediaStore_Video_VideoColumns; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::provider::MediaStore_Video_VideoColumns>
{
	static constexpr fixed_string class_name = "android/provider/MediaStore$Video$VideoColumns";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::provider::MediaStore_MediaColumns>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_VIDEO_VIDEOCOLUMNS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_VIDEO_VIDEOCOLUMNS)
#define SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_VIDEO_VIDEOCOLUMNS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::provider::MediaStore_Video_VideoColumns : public jni::object_base<"android/provider/MediaStore$Video$VideoColumns",
	java::lang::Object,
	android::provider::MediaStore_MediaColumns>
{
public:

	static jni::ref<java::lang::String> BOOKMARK() { return get_static_field<"BOOKMARK", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CATEGORY() { return get_static_field<"CATEGORY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLOR_RANGE() { return get_static_field<"COLOR_RANGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLOR_STANDARD() { return get_static_field<"COLOR_STANDARD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLOR_TRANSFER() { return get_static_field<"COLOR_TRANSFER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DESCRIPTION() { return get_static_field<"DESCRIPTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IS_PRIVATE() { return get_static_field<"IS_PRIVATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LANGUAGE() { return get_static_field<"LANGUAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LATITUDE() { return get_static_field<"LATITUDE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LONGITUDE() { return get_static_field<"LONGITUDE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MINI_THUMB_MAGIC() { return get_static_field<"MINI_THUMB_MAGIC", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TAGS() { return get_static_field<"TAGS", jni::ref<java::lang::String>>(); }


protected:

	MediaStore_Video_VideoColumns(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PROVIDER_MEDIASTORE_VIDEO_VIDEOCOLUMNS