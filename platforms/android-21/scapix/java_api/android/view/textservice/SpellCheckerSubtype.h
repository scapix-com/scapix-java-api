// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSUBTYPE_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSUBTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::textservice { class SpellCheckerSubtype; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::textservice::SpellCheckerSubtype>
{
	static constexpr fixed_string class_name = "android/view/textservice/SpellCheckerSubtype";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSUBTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSUBTYPE)
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSUBTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/pm/ApplicationInfo.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::textservice::SpellCheckerSubtype : public jni::object_base<"android/view/textservice/SpellCheckerSubtype",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::view::textservice::SpellCheckerSubtype> new_object(jint nameId, jni::ref<java::lang::String> locale, jni::ref<java::lang::String> extraValue) { return base_::new_object(nameId, locale, extraValue); }
	jint getNameResId() { return call_method<"getNameResId", jint>(); }
	jni::ref<java::lang::String> getLocale() { return call_method<"getLocale", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getExtraValue() { return call_method<"getExtraValue", jni::ref<java::lang::String>>(); }
	jboolean containsExtraValueKey(jni::ref<java::lang::String> key) { return call_method<"containsExtraValueKey", jboolean>(key); }
	jni::ref<java::lang::String> getExtraValueOf(jni::ref<java::lang::String> key) { return call_method<"getExtraValueOf", jni::ref<java::lang::String>>(key); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::lang::CharSequence> getDisplayName(jni::ref<android::content::Context> context, jni::ref<java::lang::String> packageName, jni::ref<android::content::pm::ApplicationInfo> appInfo) { return call_method<"getDisplayName", jni::ref<java::lang::CharSequence>>(context, packageName, appInfo); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint parcelableFlags) { return call_method<"writeToParcel", void>(dest, parcelableFlags); }

protected:

	SpellCheckerSubtype(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSUBTYPE
