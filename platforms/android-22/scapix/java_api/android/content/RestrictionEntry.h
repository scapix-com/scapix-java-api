// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_RESTRICTIONENTRY_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_RESTRICTIONENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content { class RestrictionEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::RestrictionEntry>
{
	static constexpr fixed_string class_name = "android/content/RestrictionEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_RESTRICTIONENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_RESTRICTIONENTRY)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_RESTRICTIONENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::RestrictionEntry : public jni::object_base<"android/content/RestrictionEntry",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint TYPE_BOOLEAN() { return get_static_field<"TYPE_BOOLEAN", jint>(); }
	static jint TYPE_CHOICE() { return get_static_field<"TYPE_CHOICE", jint>(); }
	static jint TYPE_INTEGER() { return get_static_field<"TYPE_INTEGER", jint>(); }
	static jint TYPE_MULTI_SELECT() { return get_static_field<"TYPE_MULTI_SELECT", jint>(); }
	static jint TYPE_NULL() { return get_static_field<"TYPE_NULL", jint>(); }
	static jint TYPE_STRING() { return get_static_field<"TYPE_STRING", jint>(); }

	static jni::ref<android::content::RestrictionEntry> new_object(jint type, jni::ref<java::lang::String> key) { return base_::new_object(type, key); }
	static jni::ref<android::content::RestrictionEntry> new_object(jni::ref<java::lang::String> key, jni::ref<java::lang::String> selectedString) { return base_::new_object(key, selectedString); }
	static jni::ref<android::content::RestrictionEntry> new_object(jni::ref<java::lang::String> key, jboolean selectedState) { return base_::new_object(key, selectedState); }
	static jni::ref<android::content::RestrictionEntry> new_object(jni::ref<java::lang::String> key, jni::ref<jni::array<java::lang::String>> selectedStrings) { return base_::new_object(key, selectedStrings); }
	static jni::ref<android::content::RestrictionEntry> new_object(jni::ref<java::lang::String> key, jint selectedInt) { return base_::new_object(key, selectedInt); }
	static jni::ref<android::content::RestrictionEntry> new_object(jni::ref<android::os::Parcel> in) { return base_::new_object(in); }
	void setType(jint type) { return call_method<"setType", void>(type); }
	jint getType() { return call_method<"getType", jint>(); }
	jni::ref<java::lang::String> getSelectedString() { return call_method<"getSelectedString", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::lang::String>> getAllSelectedStrings() { return call_method<"getAllSelectedStrings", jni::ref<jni::array<java::lang::String>>>(); }
	jboolean getSelectedState() { return call_method<"getSelectedState", jboolean>(); }
	jint getIntValue() { return call_method<"getIntValue", jint>(); }
	void setIntValue(jint value) { return call_method<"setIntValue", void>(value); }
	void setSelectedString(jni::ref<java::lang::String> selectedString) { return call_method<"setSelectedString", void>(selectedString); }
	void setSelectedState(jboolean state) { return call_method<"setSelectedState", void>(state); }
	void setAllSelectedStrings(jni::ref<jni::array<java::lang::String>> allSelectedStrings) { return call_method<"setAllSelectedStrings", void>(allSelectedStrings); }
	void setChoiceValues(jni::ref<jni::array<java::lang::String>> choiceValues) { return call_method<"setChoiceValues", void>(choiceValues); }
	void setChoiceValues(jni::ref<android::content::Context> context, jint stringArrayResId) { return call_method<"setChoiceValues", void>(context, stringArrayResId); }
	jni::ref<jni::array<java::lang::String>> getChoiceValues() { return call_method<"getChoiceValues", jni::ref<jni::array<java::lang::String>>>(); }
	void setChoiceEntries(jni::ref<jni::array<java::lang::String>> choiceEntries) { return call_method<"setChoiceEntries", void>(choiceEntries); }
	void setChoiceEntries(jni::ref<android::content::Context> context, jint stringArrayResId) { return call_method<"setChoiceEntries", void>(context, stringArrayResId); }
	jni::ref<jni::array<java::lang::String>> getChoiceEntries() { return call_method<"getChoiceEntries", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<java::lang::String> getDescription() { return call_method<"getDescription", jni::ref<java::lang::String>>(); }
	void setDescription(jni::ref<java::lang::String> description) { return call_method<"setDescription", void>(description); }
	jni::ref<java::lang::String> getKey() { return call_method<"getKey", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getTitle() { return call_method<"getTitle", jni::ref<java::lang::String>>(); }
	void setTitle(jni::ref<java::lang::String> title) { return call_method<"setTitle", void>(title); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	RestrictionEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_RESTRICTIONENTRY
