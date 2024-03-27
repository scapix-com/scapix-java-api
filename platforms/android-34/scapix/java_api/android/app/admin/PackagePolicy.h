// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_ADMIN_PACKAGEPOLICY_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_ADMIN_PACKAGEPOLICY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::admin { class PackagePolicy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::admin::PackagePolicy>
{
	static constexpr fixed_string class_name = "android/app/admin/PackagePolicy";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ADMIN_PACKAGEPOLICY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_ADMIN_PACKAGEPOLICY)
#define SCAPIX_JAVA_API_ANDROID_APP_ADMIN_PACKAGEPOLICY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::admin::PackagePolicy : public jni::object_base<"android/app/admin/PackagePolicy",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint PACKAGE_POLICY_ALLOWLIST() { return get_static_field<"PACKAGE_POLICY_ALLOWLIST", jint>(); }
	static jint PACKAGE_POLICY_ALLOWLIST_AND_SYSTEM() { return get_static_field<"PACKAGE_POLICY_ALLOWLIST_AND_SYSTEM", jint>(); }
	static jint PACKAGE_POLICY_BLOCKLIST() { return get_static_field<"PACKAGE_POLICY_BLOCKLIST", jint>(); }

	static jni::ref<android::app::admin::PackagePolicy> new_object(jint policyType) { return base_::new_object(policyType); }
	static jni::ref<android::app::admin::PackagePolicy> new_object(jint policyType, jni::ref<java::util::Set> packageNames) { return base_::new_object(policyType, packageNames); }
	jint getPolicyType() { return call_method<"getPolicyType", jint>(); }
	jni::ref<java::util::Set> getPackageNames() { return call_method<"getPackageNames", jni::ref<java::util::Set>>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jboolean equals(jni::ref<java::lang::Object> thatObject) { return call_method<"equals", jboolean>(thatObject); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	PackagePolicy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ADMIN_PACKAGEPOLICY
