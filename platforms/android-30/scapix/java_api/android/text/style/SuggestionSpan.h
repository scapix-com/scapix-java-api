// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/text/style/CharacterStyle.h>
#include <scapix/java_api/android/text/ParcelableSpan.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_SUGGESTIONSPAN_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_SUGGESTIONSPAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::style { class SuggestionSpan; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::style::SuggestionSpan>
{
	static constexpr fixed_string class_name = "android/text/style/SuggestionSpan";
	using base_classes = std::tuple<scapix::java_api::android::text::style::CharacterStyle, scapix::java_api::android::text::ParcelableSpan>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_SUGGESTIONSPAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_SUGGESTIONSPAN)
#define SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_SUGGESTIONSPAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/text/TextPaint.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::style::SuggestionSpan : public jni::object_base<"android/text/style/SuggestionSpan",
	android::text::style::CharacterStyle,
	android::text::ParcelableSpan>
{
public:

	static jni::ref<java::lang::String> ACTION_SUGGESTION_PICKED() { return get_static_field<"ACTION_SUGGESTION_PICKED", jni::ref<java::lang::String>>(); }
	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint FLAG_AUTO_CORRECTION() { return get_static_field<"FLAG_AUTO_CORRECTION", jint>(); }
	static jint FLAG_EASY_CORRECT() { return get_static_field<"FLAG_EASY_CORRECT", jint>(); }
	static jint FLAG_MISSPELLED() { return get_static_field<"FLAG_MISSPELLED", jint>(); }
	static jint SUGGESTIONS_MAX_SIZE() { return get_static_field<"SUGGESTIONS_MAX_SIZE", jint>(); }
	static jni::ref<java::lang::String> SUGGESTION_SPAN_PICKED_AFTER() { return get_static_field<"SUGGESTION_SPAN_PICKED_AFTER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUGGESTION_SPAN_PICKED_BEFORE() { return get_static_field<"SUGGESTION_SPAN_PICKED_BEFORE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUGGESTION_SPAN_PICKED_HASHCODE() { return get_static_field<"SUGGESTION_SPAN_PICKED_HASHCODE", jni::ref<java::lang::String>>(); }

	static jni::ref<android::text::style::SuggestionSpan> new_object(jni::ref<android::content::Context> context, jni::ref<jni::array<java::lang::String>> suggestions, jint flags) { return base_::new_object(context, suggestions, flags); }
	static jni::ref<android::text::style::SuggestionSpan> new_object(jni::ref<java::util::Locale> locale, jni::ref<jni::array<java::lang::String>> suggestions, jint flags) { return base_::new_object(locale, suggestions, flags); }
	static jni::ref<android::text::style::SuggestionSpan> new_object(jni::ref<android::content::Context> context, jni::ref<java::util::Locale> locale, jni::ref<jni::array<java::lang::String>> suggestions, jint flags, jni::ref<java::lang::Class> notificationTargetClass) { return base_::new_object(context, locale, suggestions, flags, notificationTargetClass); }
	static jni::ref<android::text::style::SuggestionSpan> new_object(jni::ref<android::os::Parcel> src) { return base_::new_object(src); }
	jni::ref<jni::array<java::lang::String>> getSuggestions() { return call_method<"getSuggestions", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<java::lang::String> getLocale() { return call_method<"getLocale", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::Locale> getLocaleObject() { return call_method<"getLocaleObject", jni::ref<java::util::Locale>>(); }
	jint getFlags() { return call_method<"getFlags", jint>(); }
	void setFlags(jint flags) { return call_method<"setFlags", void>(flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint getSpanTypeId() { return call_method<"getSpanTypeId", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	void updateDrawState(jni::ref<android::text::TextPaint> tp) { return call_method<"updateDrawState", void>(tp); }
	jint getUnderlineColor() { return call_method<"getUnderlineColor", jint>(); }

protected:

	SuggestionSpan(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_STYLE_SUGGESTIONSPAN
