// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_TEXTATTRIBUTE_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_TEXTATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::inputmethod { class TextAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::inputmethod::TextAttribute>
{
	static constexpr fixed_string class_name = "android/view/inputmethod/TextAttribute";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_TEXTATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_TEXTATTRIBUTE)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_TEXTATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/os/PersistableBundle.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/view/inputmethod/TextAttribute_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::inputmethod::TextAttribute : public jni::object_base<"android/view/inputmethod/TextAttribute",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = TextAttribute_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jni::ref<java::util::List> getTextConversionSuggestions() { return call_method<"getTextConversionSuggestions", jni::ref<java::util::List>>(); }
	jni::ref<android::os::PersistableBundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::PersistableBundle>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	TextAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_TEXTATTRIBUTE
