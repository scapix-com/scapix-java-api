// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTCONTENTINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTCONTENTINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::inputmethod { class InputContentInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::inputmethod::InputContentInfo>
{
	static constexpr fixed_string class_name = "android/view/inputmethod/InputContentInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTCONTENTINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTCONTENTINFO)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTCONTENTINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ClipDescription.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::inputmethod::InputContentInfo : public jni::object_base<"android/view/inputmethod/InputContentInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::view::inputmethod::InputContentInfo> new_object(jni::ref<android::net::Uri> contentUri, jni::ref<android::content::ClipDescription> description) { return base_::new_object(contentUri, description); }
	static jni::ref<android::view::inputmethod::InputContentInfo> new_object(jni::ref<android::net::Uri> contentUri, jni::ref<android::content::ClipDescription> description, jni::ref<android::net::Uri> linkUri) { return base_::new_object(contentUri, description, linkUri); }
	jni::ref<android::net::Uri> getContentUri() { return call_method<"getContentUri", jni::ref<android::net::Uri>>(); }
	jni::ref<android::content::ClipDescription> getDescription() { return call_method<"getDescription", jni::ref<android::content::ClipDescription>>(); }
	jni::ref<android::net::Uri> getLinkUri() { return call_method<"getLinkUri", jni::ref<android::net::Uri>>(); }
	void requestPermission() { return call_method<"requestPermission", void>(); }
	void releasePermission() { return call_method<"releasePermission", void>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	InputContentInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTCONTENTINFO
