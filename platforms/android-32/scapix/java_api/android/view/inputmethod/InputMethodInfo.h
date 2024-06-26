// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::inputmethod { class InputMethodInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::inputmethod::InputMethodInfo>
{
	static constexpr fixed_string class_name = "android/view/inputmethod/InputMethodInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODINFO)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/pm/PackageManager.h>
#include <scapix/java_api/android/content/pm/ResolveInfo.h>
#include <scapix/java_api/android/content/pm/ServiceInfo.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/util/Printer.h>
#include <scapix/java_api/android/view/inputmethod/InputMethodSubtype.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::inputmethod::InputMethodInfo : public jni::object_base<"android/view/inputmethod/InputMethodInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::view::inputmethod::InputMethodInfo> new_object(jni::ref<android::content::Context> context, jni::ref<android::content::pm::ResolveInfo> service) { return base_::new_object(context, service); }
	static jni::ref<android::view::inputmethod::InputMethodInfo> new_object(jni::ref<java::lang::String> packageName, jni::ref<java::lang::String> className, jni::ref<java::lang::CharSequence> label, jni::ref<java::lang::String> settingsActivity) { return base_::new_object(packageName, className, label, settingsActivity); }
	jni::ref<java::lang::String> getId() { return call_method<"getId", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getPackageName() { return call_method<"getPackageName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getServiceName() { return call_method<"getServiceName", jni::ref<java::lang::String>>(); }
	jni::ref<android::content::pm::ServiceInfo> getServiceInfo() { return call_method<"getServiceInfo", jni::ref<android::content::pm::ServiceInfo>>(); }
	jni::ref<android::content::ComponentName> getComponent() { return call_method<"getComponent", jni::ref<android::content::ComponentName>>(); }
	jni::ref<java::lang::CharSequence> loadLabel(jni::ref<android::content::pm::PackageManager> pm) { return call_method<"loadLabel", jni::ref<java::lang::CharSequence>>(pm); }
	jni::ref<android::graphics::drawable::Drawable> loadIcon(jni::ref<android::content::pm::PackageManager> pm) { return call_method<"loadIcon", jni::ref<android::graphics::drawable::Drawable>>(pm); }
	jni::ref<java::lang::String> getSettingsActivity() { return call_method<"getSettingsActivity", jni::ref<java::lang::String>>(); }
	jint getSubtypeCount() { return call_method<"getSubtypeCount", jint>(); }
	jni::ref<android::view::inputmethod::InputMethodSubtype> getSubtypeAt(jint index) { return call_method<"getSubtypeAt", jni::ref<android::view::inputmethod::InputMethodSubtype>>(index); }
	jint getIsDefaultResourceId() { return call_method<"getIsDefaultResourceId", jint>(); }
	jint getConfigChanges() { return call_method<"getConfigChanges", jint>(); }
	void dump(jni::ref<android::util::Printer> pw, jni::ref<java::lang::String> prefix) { return call_method<"dump", void>(pw, prefix); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean suppressesSpellChecker() { return call_method<"suppressesSpellChecker", jboolean>(); }
	jboolean shouldShowInInputMethodPicker() { return call_method<"shouldShowInInputMethodPicker", jboolean>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	InputMethodInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODINFO
