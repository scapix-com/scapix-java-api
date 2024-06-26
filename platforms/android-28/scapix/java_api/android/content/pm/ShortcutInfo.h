// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_PM_SHORTCUTINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_SHORTCUTINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::pm { class ShortcutInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::pm::ShortcutInfo>
{
	static constexpr fixed_string class_name = "android/content/pm/ShortcutInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_SHORTCUTINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_PM_SHORTCUTINFO)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_SHORTCUTINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/os/PersistableBundle.h>
#include <scapix/java_api/android/os/UserHandle.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/android/content/pm/ShortcutInfo_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::pm::ShortcutInfo : public jni::object_base<"android/content/pm/ShortcutInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = ShortcutInfo_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint DISABLED_REASON_APP_CHANGED() { return get_static_field<"DISABLED_REASON_APP_CHANGED", jint>(); }
	static jint DISABLED_REASON_BACKUP_NOT_SUPPORTED() { return get_static_field<"DISABLED_REASON_BACKUP_NOT_SUPPORTED", jint>(); }
	static jint DISABLED_REASON_BY_APP() { return get_static_field<"DISABLED_REASON_BY_APP", jint>(); }
	static jint DISABLED_REASON_NOT_DISABLED() { return get_static_field<"DISABLED_REASON_NOT_DISABLED", jint>(); }
	static jint DISABLED_REASON_OTHER_RESTORE_ISSUE() { return get_static_field<"DISABLED_REASON_OTHER_RESTORE_ISSUE", jint>(); }
	static jint DISABLED_REASON_SIGNATURE_MISMATCH() { return get_static_field<"DISABLED_REASON_SIGNATURE_MISMATCH", jint>(); }
	static jint DISABLED_REASON_UNKNOWN() { return get_static_field<"DISABLED_REASON_UNKNOWN", jint>(); }
	static jint DISABLED_REASON_VERSION_LOWER() { return get_static_field<"DISABLED_REASON_VERSION_LOWER", jint>(); }
	static jni::ref<java::lang::String> SHORTCUT_CATEGORY_CONVERSATION() { return get_static_field<"SHORTCUT_CATEGORY_CONVERSATION", jni::ref<java::lang::String>>(); }

	jni::ref<java::lang::String> getId() { return call_method<"getId", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getPackage() { return call_method<"getPackage", jni::ref<java::lang::String>>(); }
	jni::ref<android::content::ComponentName> getActivity() { return call_method<"getActivity", jni::ref<android::content::ComponentName>>(); }
	jni::ref<java::lang::CharSequence> getShortLabel() { return call_method<"getShortLabel", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<java::lang::CharSequence> getLongLabel() { return call_method<"getLongLabel", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<java::lang::CharSequence> getDisabledMessage() { return call_method<"getDisabledMessage", jni::ref<java::lang::CharSequence>>(); }
	jint getDisabledReason() { return call_method<"getDisabledReason", jint>(); }
	jni::ref<java::util::Set> getCategories() { return call_method<"getCategories", jni::ref<java::util::Set>>(); }
	jni::ref<android::content::Intent> getIntent() { return call_method<"getIntent", jni::ref<android::content::Intent>>(); }
	jni::ref<jni::array<android::content::Intent>> getIntents() { return call_method<"getIntents", jni::ref<jni::array<android::content::Intent>>>(); }
	jint getRank() { return call_method<"getRank", jint>(); }
	jni::ref<android::os::PersistableBundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::PersistableBundle>>(); }
	jni::ref<android::os::UserHandle> getUserHandle() { return call_method<"getUserHandle", jni::ref<android::os::UserHandle>>(); }
	jlong getLastChangedTimestamp() { return call_method<"getLastChangedTimestamp", jlong>(); }
	jboolean isDynamic() { return call_method<"isDynamic", jboolean>(); }
	jboolean isPinned() { return call_method<"isPinned", jboolean>(); }
	jboolean isDeclaredInManifest() { return call_method<"isDeclaredInManifest", jboolean>(); }
	jboolean isImmutable() { return call_method<"isImmutable", jboolean>(); }
	jboolean isEnabled() { return call_method<"isEnabled", jboolean>(); }
	jboolean hasKeyFieldsOnly() { return call_method<"hasKeyFieldsOnly", jboolean>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ShortcutInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_SHORTCUTINFO
