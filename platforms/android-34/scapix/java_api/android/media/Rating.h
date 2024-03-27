// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_RATING_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_RATING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class Rating; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::Rating>
{
	static constexpr fixed_string class_name = "android/media/Rating";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_RATING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_RATING)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_RATING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::Rating : public jni::object_base<"android/media/Rating",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint RATING_3_STARS() { return get_static_field<"RATING_3_STARS", jint>(); }
	static jint RATING_4_STARS() { return get_static_field<"RATING_4_STARS", jint>(); }
	static jint RATING_5_STARS() { return get_static_field<"RATING_5_STARS", jint>(); }
	static jint RATING_HEART() { return get_static_field<"RATING_HEART", jint>(); }
	static jint RATING_NONE() { return get_static_field<"RATING_NONE", jint>(); }
	static jint RATING_PERCENTAGE() { return get_static_field<"RATING_PERCENTAGE", jint>(); }
	static jint RATING_THUMB_UP_DOWN() { return get_static_field<"RATING_THUMB_UP_DOWN", jint>(); }

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	static jni::ref<android::media::Rating> newUnratedRating(jint ratingStyle) { return call_static_method<"newUnratedRating", jni::ref<android::media::Rating>>(ratingStyle); }
	static jni::ref<android::media::Rating> newHeartRating(jboolean hasHeart) { return call_static_method<"newHeartRating", jni::ref<android::media::Rating>>(hasHeart); }
	static jni::ref<android::media::Rating> newThumbRating(jboolean thumbIsUp) { return call_static_method<"newThumbRating", jni::ref<android::media::Rating>>(thumbIsUp); }
	static jni::ref<android::media::Rating> newStarRating(jint starRatingStyle, jfloat starRating) { return call_static_method<"newStarRating", jni::ref<android::media::Rating>>(starRatingStyle, starRating); }
	static jni::ref<android::media::Rating> newPercentageRating(jfloat percent) { return call_static_method<"newPercentageRating", jni::ref<android::media::Rating>>(percent); }
	jboolean isRated() { return call_method<"isRated", jboolean>(); }
	jint getRatingStyle() { return call_method<"getRatingStyle", jint>(); }
	jboolean hasHeart() { return call_method<"hasHeart", jboolean>(); }
	jboolean isThumbUp() { return call_method<"isThumbUp", jboolean>(); }
	jfloat getStarRating() { return call_method<"getStarRating", jfloat>(); }
	jfloat getPercentRating() { return call_method<"getPercentRating", jfloat>(); }

protected:

	Rating(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_RATING