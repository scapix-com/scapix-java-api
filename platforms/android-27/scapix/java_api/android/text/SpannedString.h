// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/text/SpannableStringInternal.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/android/text/GetChars.h>
#include <scapix/java_api/android/text/Spanned.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_SPANNEDSTRING_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_SPANNEDSTRING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text { class SpannedString; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::SpannedString>
{
	static constexpr fixed_string class_name = "android/text/SpannedString";
	using base_classes = std::tuple<scapix::java_api::android::text::SpannableStringInternal, scapix::java_api::java::lang::CharSequence, scapix::java_api::android::text::GetChars, scapix::java_api::android::text::Spanned>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_SPANNEDSTRING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_SPANNEDSTRING)
#define SCAPIX_JAVA_API_ANDROID_TEXT_SPANNEDSTRING

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::SpannedString : public jni::object_base<"android/text/SpannedString",
	android::text::SpannableStringInternal,
	java::lang::CharSequence,
	android::text::GetChars,
	android::text::Spanned>
{
public:

	static jni::ref<android::text::SpannedString> new_object(jni::ref<java::lang::CharSequence> source) { return base_::new_object(source); }
	jni::ref<java::lang::CharSequence> subSequence(jint start, jint end) { return call_method<"subSequence", jni::ref<java::lang::CharSequence>>(start, end); }
	static jni::ref<android::text::SpannedString> valueOf(jni::ref<java::lang::CharSequence> source) { return call_static_method<"valueOf", jni::ref<android::text::SpannedString>>(source); }

protected:

	SpannedString(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_SPANNEDSTRING
