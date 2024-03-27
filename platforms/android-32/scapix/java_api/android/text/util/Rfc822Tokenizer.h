// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/widget/MultiAutoCompleteTextView_Tokenizer.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_UTIL_RFC822TOKENIZER_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_UTIL_RFC822TOKENIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::util { class Rfc822Tokenizer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::util::Rfc822Tokenizer>
{
	static constexpr fixed_string class_name = "android/text/util/Rfc822Tokenizer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::widget::MultiAutoCompleteTextView_Tokenizer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_UTIL_RFC822TOKENIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_UTIL_RFC822TOKENIZER)
#define SCAPIX_JAVA_API_ANDROID_TEXT_UTIL_RFC822TOKENIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/text/util/Rfc822Token.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/util/Collection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::util::Rfc822Tokenizer : public jni::object_base<"android/text/util/Rfc822Tokenizer",
	java::lang::Object,
	android::widget::MultiAutoCompleteTextView_Tokenizer>
{
public:

	static jni::ref<android::text::util::Rfc822Tokenizer> new_object() { return base_::new_object(); }
	static void tokenize(jni::ref<java::lang::CharSequence> text, jni::ref<java::util::Collection> out) { return call_static_method<"tokenize", void>(text, out); }
	static jni::ref<jni::array<android::text::util::Rfc822Token>> tokenize(jni::ref<java::lang::CharSequence> text) { return call_static_method<"tokenize", jni::ref<jni::array<android::text::util::Rfc822Token>>>(text); }
	jint findTokenStart(jni::ref<java::lang::CharSequence> text, jint cursor) { return call_method<"findTokenStart", jint>(text, cursor); }
	jint findTokenEnd(jni::ref<java::lang::CharSequence> text, jint cursor) { return call_method<"findTokenEnd", jint>(text, cursor); }
	jni::ref<java::lang::CharSequence> terminateToken(jni::ref<java::lang::CharSequence> text) { return call_method<"terminateToken", jni::ref<java::lang::CharSequence>>(text); }

protected:

	Rfc822Tokenizer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_UTIL_RFC822TOKENIZER