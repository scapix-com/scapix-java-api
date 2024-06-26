// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INLINESUGGESTIONSREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INLINESUGGESTIONSREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::inputmethod { class InlineSuggestionsRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::inputmethod::InlineSuggestionsRequest>
{
	static constexpr fixed_string class_name = "android/view/inputmethod/InlineSuggestionsRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INLINESUGGESTIONSREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INLINESUGGESTIONSREQUEST)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INLINESUGGESTIONSREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/LocaleList.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/view/inputmethod/InlineSuggestionsRequest_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::inputmethod::InlineSuggestionsRequest : public jni::object_base<"android/view/inputmethod/InlineSuggestionsRequest",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = InlineSuggestionsRequest_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint SUGGESTION_COUNT_UNLIMITED() { return get_static_field<"SUGGESTION_COUNT_UNLIMITED", jint>(); }

	jint getMaxSuggestionCount() { return call_method<"getMaxSuggestionCount", jint>(); }
	jni::ref<java::util::List> getInlinePresentationSpecs() { return call_method<"getInlinePresentationSpecs", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::String> getHostPackageName() { return call_method<"getHostPackageName", jni::ref<java::lang::String>>(); }
	jni::ref<android::os::LocaleList> getSupportedLocales() { return call_method<"getSupportedLocales", jni::ref<android::os::LocaleList>>(); }
	jni::ref<android::os::Bundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::Bundle>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	InlineSuggestionsRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTMETHOD_INLINESUGGESTIONSREQUEST
