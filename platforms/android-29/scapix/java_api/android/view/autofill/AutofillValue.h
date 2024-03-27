// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_AUTOFILL_AUTOFILLVALUE_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_AUTOFILL_AUTOFILLVALUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::autofill { class AutofillValue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::autofill::AutofillValue>
{
	static constexpr fixed_string class_name = "android/view/autofill/AutofillValue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_AUTOFILL_AUTOFILLVALUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_AUTOFILL_AUTOFILLVALUE)
#define SCAPIX_JAVA_API_ANDROID_VIEW_AUTOFILL_AUTOFILLVALUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::autofill::AutofillValue : public jni::object_base<"android/view/autofill/AutofillValue",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jni::ref<java::lang::CharSequence> getTextValue() { return call_method<"getTextValue", jni::ref<java::lang::CharSequence>>(); }
	jboolean isText() { return call_method<"isText", jboolean>(); }
	jboolean getToggleValue() { return call_method<"getToggleValue", jboolean>(); }
	jboolean isToggle() { return call_method<"isToggle", jboolean>(); }
	jint getListValue() { return call_method<"getListValue", jint>(); }
	jboolean isList() { return call_method<"isList", jboolean>(); }
	jlong getDateValue() { return call_method<"getDateValue", jlong>(); }
	jboolean isDate() { return call_method<"isDate", jboolean>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }
	static jni::ref<android::view::autofill::AutofillValue> forText(jni::ref<java::lang::CharSequence> value) { return call_static_method<"forText", jni::ref<android::view::autofill::AutofillValue>>(value); }
	static jni::ref<android::view::autofill::AutofillValue> forToggle(jboolean value) { return call_static_method<"forToggle", jni::ref<android::view::autofill::AutofillValue>>(value); }
	static jni::ref<android::view::autofill::AutofillValue> forList(jint value) { return call_static_method<"forList", jni::ref<android::view::autofill::AutofillValue>>(value); }
	static jni::ref<android::view::autofill::AutofillValue> forDate(jlong value) { return call_static_method<"forDate", jni::ref<android::view::autofill::AutofillValue>>(value); }

protected:

	AutofillValue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_AUTOFILL_AUTOFILLVALUE
