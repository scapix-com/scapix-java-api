// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SECURITY_APPURIAUTHENTICATIONPOLICY_FWD
#define SCAPIX_JAVA_API_ANDROID_SECURITY_APPURIAUTHENTICATIONPOLICY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::security { class AppUriAuthenticationPolicy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::security::AppUriAuthenticationPolicy>
{
	static constexpr fixed_string class_name = "android/security/AppUriAuthenticationPolicy";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_APPURIAUTHENTICATIONPOLICY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SECURITY_APPURIAUTHENTICATIONPOLICY)
#define SCAPIX_JAVA_API_ANDROID_SECURITY_APPURIAUTHENTICATIONPOLICY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/android/security/AppUriAuthenticationPolicy_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::security::AppUriAuthenticationPolicy : public jni::object_base<"android/security/AppUriAuthenticationPolicy",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = AppUriAuthenticationPolicy_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::Map> getAppAndUriMappings() { return call_method<"getAppAndUriMappings", jni::ref<java::util::Map>>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	AppUriAuthenticationPolicy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_APPURIAUTHENTICATIONPOLICY
