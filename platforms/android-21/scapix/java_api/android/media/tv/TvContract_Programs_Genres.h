// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_PROGRAMS_GENRES_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_PROGRAMS_GENRES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv { class TvContract_Programs_Genres; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::TvContract_Programs_Genres>
{
	static constexpr fixed_string class_name = "android/media/tv/TvContract$Programs$Genres";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_PROGRAMS_GENRES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_PROGRAMS_GENRES)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_PROGRAMS_GENRES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::TvContract_Programs_Genres : public jni::object_base<"android/media/tv/TvContract$Programs$Genres",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ANIMAL_WILDLIFE() { return get_static_field<"ANIMAL_WILDLIFE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COMEDY() { return get_static_field<"COMEDY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DRAMA() { return get_static_field<"DRAMA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EDUCATION() { return get_static_field<"EDUCATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FAMILY_KIDS() { return get_static_field<"FAMILY_KIDS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GAMING() { return get_static_field<"GAMING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MOVIES() { return get_static_field<"MOVIES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NEWS() { return get_static_field<"NEWS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SHOPPING() { return get_static_field<"SHOPPING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SPORTS() { return get_static_field<"SPORTS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TRAVEL() { return get_static_field<"TRAVEL", jni::ref<java::lang::String>>(); }

	static jni::ref<java::lang::String> encode(jni::ref<jni::array<java::lang::String>> genres) { return call_static_method<"encode", jni::ref<java::lang::String>>(genres); }
	static jni::ref<jni::array<java::lang::String>> decode(jni::ref<java::lang::String> genres) { return call_static_method<"decode", jni::ref<jni::array<java::lang::String>>>(genres); }

protected:

	TvContract_Programs_Genres(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVCONTRACT_PROGRAMS_GENRES
