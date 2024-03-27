// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_RES_COLORSTATELIST_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_RES_COLORSTATELIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::res { class ColorStateList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::res::ColorStateList>
{
	static constexpr fixed_string class_name = "android/content/res/ColorStateList";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_RES_COLORSTATELIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_RES_COLORSTATELIST)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_RES_COLORSTATELIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xmlpull/v1/XmlPullParser.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::res::ColorStateList : public jni::object_base<"android/content/res/ColorStateList",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::content::res::ColorStateList> new_object(jni::ref<jni::array<jni::array<jint>>> states, jni::ref<jni::array<jint>> colors) { return base_::new_object(states, colors); }
	static jni::ref<android::content::res::ColorStateList> valueOf(jint color) { return call_static_method<"valueOf", jni::ref<android::content::res::ColorStateList>>(color); }
	static jni::ref<android::content::res::ColorStateList> createFromXml(jni::ref<android::content::res::Resources> r, jni::ref<org::xmlpull::v1::XmlPullParser> parser) { return call_static_method<"createFromXml", jni::ref<android::content::res::ColorStateList>>(r, parser); }
	jni::ref<android::content::res::ColorStateList> withAlpha(jint alpha) { return call_method<"withAlpha", jni::ref<android::content::res::ColorStateList>>(alpha); }
	jboolean isStateful() { return call_method<"isStateful", jboolean>(); }
	jboolean isOpaque() { return call_method<"isOpaque", jboolean>(); }
	jint getColorForState(jni::ref<jni::array<jint>> stateSet, jint defaultColor) { return call_method<"getColorForState", jint>(stateSet, defaultColor); }
	jint getDefaultColor() { return call_method<"getDefaultColor", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	ColorStateList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_RES_COLORSTATELIST