// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS_TEXTLINK_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS_TEXTLINK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::textclassifier { class TextLinks_TextLink; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::textclassifier::TextLinks_TextLink>
{
	static constexpr fixed_string class_name = "android/view/textclassifier/TextLinks$TextLink";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS_TEXTLINK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS_TEXTLINK)
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS_TEXTLINK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::textclassifier::TextLinks_TextLink : public jni::object_base<"android/view/textclassifier/TextLinks$TextLink",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jint getStart() { return call_method<"getStart", jint>(); }
	jint getEnd() { return call_method<"getEnd", jint>(); }
	jint getEntityCount() { return call_method<"getEntityCount", jint>(); }
	jni::ref<java::lang::String> getEntity(jint index) { return call_method<"getEntity", jni::ref<java::lang::String>>(index); }
	jfloat getConfidenceScore(jni::ref<java::lang::String> entityType) { return call_method<"getConfidenceScore", jfloat>(entityType); }
	jni::ref<android::os::Bundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::Bundle>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	TextLinks_TextLink(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS_TEXTLINK
