// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_PREAPPROVALDETAILS_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_PREAPPROVALDETAILS_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::pm { class PackageInstaller_PreapprovalDetails_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::pm::PackageInstaller_PreapprovalDetails_Builder>
{
	static constexpr fixed_string class_name = "android/content/pm/PackageInstaller$PreapprovalDetails$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_PREAPPROVALDETAILS_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_PREAPPROVALDETAILS_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_PREAPPROVALDETAILS_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/pm/PackageInstaller_PreapprovalDetails.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::pm::PackageInstaller_PreapprovalDetails_Builder : public jni::object_base<"android/content/pm/PackageInstaller$PreapprovalDetails$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::content::pm::PackageInstaller_PreapprovalDetails_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::content::pm::PackageInstaller_PreapprovalDetails_Builder> setIcon(jni::ref<android::graphics::Bitmap> value) { return call_method<"setIcon", jni::ref<android::content::pm::PackageInstaller_PreapprovalDetails_Builder>>(value); }
	jni::ref<android::content::pm::PackageInstaller_PreapprovalDetails_Builder> setLabel(jni::ref<java::lang::CharSequence> value) { return call_method<"setLabel", jni::ref<android::content::pm::PackageInstaller_PreapprovalDetails_Builder>>(value); }
	jni::ref<android::content::pm::PackageInstaller_PreapprovalDetails_Builder> setLocale(jni::ref<android::icu::util::ULocale> value) { return call_method<"setLocale", jni::ref<android::content::pm::PackageInstaller_PreapprovalDetails_Builder>>(value); }
	jni::ref<android::content::pm::PackageInstaller_PreapprovalDetails_Builder> setPackageName(jni::ref<java::lang::String> value) { return call_method<"setPackageName", jni::ref<android::content::pm::PackageInstaller_PreapprovalDetails_Builder>>(value); }
	jni::ref<android::content::pm::PackageInstaller_PreapprovalDetails> build() { return call_method<"build", jni::ref<android::content::pm::PackageInstaller_PreapprovalDetails>>(); }

protected:

	PackageInstaller_PreapprovalDetails_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_PACKAGEINSTALLER_PREAPPROVALDETAILS_BUILDER
