// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_CHANNELS_LOGO_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_CHANNELS_LOGO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv { class TvContract_Channels_Logo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::TvContract_Channels_Logo>
{
	static constexpr fixed_string class_name = "android/media/tv/TvContract$Channels$Logo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_CHANNELS_LOGO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_CHANNELS_LOGO)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_CHANNELS_LOGO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::TvContract_Channels_Logo : public jni::object_base<"android/media/tv/TvContract$Channels$Logo",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> CONTENT_DIRECTORY() { return get_static_field<"CONTENT_DIRECTORY", jni::ref<java::lang::String>>(); }


protected:

	TvContract_Channels_Logo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_CHANNELS_LOGO
