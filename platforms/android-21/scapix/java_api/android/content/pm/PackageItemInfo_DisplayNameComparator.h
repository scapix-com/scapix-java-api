// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Comparator.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEITEMINFO_DISPLAYNAMECOMPARATOR_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEITEMINFO_DISPLAYNAMECOMPARATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::pm { class PackageItemInfo_DisplayNameComparator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::pm::PackageItemInfo_DisplayNameComparator>
{
	static constexpr fixed_string class_name = "android/content/pm/PackageItemInfo$DisplayNameComparator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Comparator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEITEMINFO_DISPLAYNAMECOMPARATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEITEMINFO_DISPLAYNAMECOMPARATOR)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEITEMINFO_DISPLAYNAMECOMPARATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/pm/PackageItemInfo.h>
#include <scapix/java_api/android/content/pm/PackageManager.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::pm::PackageItemInfo_DisplayNameComparator : public jni::object_base<"android/content/pm/PackageItemInfo$DisplayNameComparator",
	java::lang::Object,
	java::util::Comparator>
{
public:

	static jni::ref<android::content::pm::PackageItemInfo_DisplayNameComparator> new_object(jni::ref<android::content::pm::PackageManager> pm) { return base_::new_object(pm); }
	jint compare(jni::ref<android::content::pm::PackageItemInfo> aa, jni::ref<android::content::pm::PackageItemInfo> ab) { return call_method<"compare", jint>(aa, ab); }

protected:

	PackageItemInfo_DisplayNameComparator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEITEMINFO_DISPLAYNAMECOMPARATOR
