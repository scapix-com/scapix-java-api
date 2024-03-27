// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_INPUTTYPE_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_INPUTTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text { class InputType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::InputType>
{
	static constexpr fixed_string class_name = "android/text/InputType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_INPUTTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_INPUTTYPE)
#define SCAPIX_JAVA_API_ANDROID_TEXT_INPUTTYPE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::InputType : public jni::object_base<"android/text/InputType",
	java::lang::Object>
{
public:

	static jint TYPE_CLASS_DATETIME() { return get_static_field<"TYPE_CLASS_DATETIME", jint>(); }
	static jint TYPE_CLASS_NUMBER() { return get_static_field<"TYPE_CLASS_NUMBER", jint>(); }
	static jint TYPE_CLASS_PHONE() { return get_static_field<"TYPE_CLASS_PHONE", jint>(); }
	static jint TYPE_CLASS_TEXT() { return get_static_field<"TYPE_CLASS_TEXT", jint>(); }
	static jint TYPE_DATETIME_VARIATION_DATE() { return get_static_field<"TYPE_DATETIME_VARIATION_DATE", jint>(); }
	static jint TYPE_DATETIME_VARIATION_NORMAL() { return get_static_field<"TYPE_DATETIME_VARIATION_NORMAL", jint>(); }
	static jint TYPE_DATETIME_VARIATION_TIME() { return get_static_field<"TYPE_DATETIME_VARIATION_TIME", jint>(); }
	static jint TYPE_MASK_CLASS() { return get_static_field<"TYPE_MASK_CLASS", jint>(); }
	static jint TYPE_MASK_FLAGS() { return get_static_field<"TYPE_MASK_FLAGS", jint>(); }
	static jint TYPE_MASK_VARIATION() { return get_static_field<"TYPE_MASK_VARIATION", jint>(); }
	static jint TYPE_NULL() { return get_static_field<"TYPE_NULL", jint>(); }
	static jint TYPE_NUMBER_FLAG_DECIMAL() { return get_static_field<"TYPE_NUMBER_FLAG_DECIMAL", jint>(); }
	static jint TYPE_NUMBER_FLAG_SIGNED() { return get_static_field<"TYPE_NUMBER_FLAG_SIGNED", jint>(); }
	static jint TYPE_NUMBER_VARIATION_NORMAL() { return get_static_field<"TYPE_NUMBER_VARIATION_NORMAL", jint>(); }
	static jint TYPE_NUMBER_VARIATION_PASSWORD() { return get_static_field<"TYPE_NUMBER_VARIATION_PASSWORD", jint>(); }
	static jint TYPE_TEXT_FLAG_AUTO_COMPLETE() { return get_static_field<"TYPE_TEXT_FLAG_AUTO_COMPLETE", jint>(); }
	static jint TYPE_TEXT_FLAG_AUTO_CORRECT() { return get_static_field<"TYPE_TEXT_FLAG_AUTO_CORRECT", jint>(); }
	static jint TYPE_TEXT_FLAG_CAP_CHARACTERS() { return get_static_field<"TYPE_TEXT_FLAG_CAP_CHARACTERS", jint>(); }
	static jint TYPE_TEXT_FLAG_CAP_SENTENCES() { return get_static_field<"TYPE_TEXT_FLAG_CAP_SENTENCES", jint>(); }
	static jint TYPE_TEXT_FLAG_CAP_WORDS() { return get_static_field<"TYPE_TEXT_FLAG_CAP_WORDS", jint>(); }
	static jint TYPE_TEXT_FLAG_ENABLE_TEXT_CONVERSION_SUGGESTIONS() { return get_static_field<"TYPE_TEXT_FLAG_ENABLE_TEXT_CONVERSION_SUGGESTIONS", jint>(); }
	static jint TYPE_TEXT_FLAG_IME_MULTI_LINE() { return get_static_field<"TYPE_TEXT_FLAG_IME_MULTI_LINE", jint>(); }
	static jint TYPE_TEXT_FLAG_MULTI_LINE() { return get_static_field<"TYPE_TEXT_FLAG_MULTI_LINE", jint>(); }
	static jint TYPE_TEXT_FLAG_NO_SUGGESTIONS() { return get_static_field<"TYPE_TEXT_FLAG_NO_SUGGESTIONS", jint>(); }
	static jint TYPE_TEXT_VARIATION_EMAIL_ADDRESS() { return get_static_field<"TYPE_TEXT_VARIATION_EMAIL_ADDRESS", jint>(); }
	static jint TYPE_TEXT_VARIATION_EMAIL_SUBJECT() { return get_static_field<"TYPE_TEXT_VARIATION_EMAIL_SUBJECT", jint>(); }
	static jint TYPE_TEXT_VARIATION_FILTER() { return get_static_field<"TYPE_TEXT_VARIATION_FILTER", jint>(); }
	static jint TYPE_TEXT_VARIATION_LONG_MESSAGE() { return get_static_field<"TYPE_TEXT_VARIATION_LONG_MESSAGE", jint>(); }
	static jint TYPE_TEXT_VARIATION_NORMAL() { return get_static_field<"TYPE_TEXT_VARIATION_NORMAL", jint>(); }
	static jint TYPE_TEXT_VARIATION_PASSWORD() { return get_static_field<"TYPE_TEXT_VARIATION_PASSWORD", jint>(); }
	static jint TYPE_TEXT_VARIATION_PERSON_NAME() { return get_static_field<"TYPE_TEXT_VARIATION_PERSON_NAME", jint>(); }
	static jint TYPE_TEXT_VARIATION_PHONETIC() { return get_static_field<"TYPE_TEXT_VARIATION_PHONETIC", jint>(); }
	static jint TYPE_TEXT_VARIATION_POSTAL_ADDRESS() { return get_static_field<"TYPE_TEXT_VARIATION_POSTAL_ADDRESS", jint>(); }
	static jint TYPE_TEXT_VARIATION_SHORT_MESSAGE() { return get_static_field<"TYPE_TEXT_VARIATION_SHORT_MESSAGE", jint>(); }
	static jint TYPE_TEXT_VARIATION_URI() { return get_static_field<"TYPE_TEXT_VARIATION_URI", jint>(); }
	static jint TYPE_TEXT_VARIATION_VISIBLE_PASSWORD() { return get_static_field<"TYPE_TEXT_VARIATION_VISIBLE_PASSWORD", jint>(); }
	static jint TYPE_TEXT_VARIATION_WEB_EDIT_TEXT() { return get_static_field<"TYPE_TEXT_VARIATION_WEB_EDIT_TEXT", jint>(); }
	static jint TYPE_TEXT_VARIATION_WEB_EMAIL_ADDRESS() { return get_static_field<"TYPE_TEXT_VARIATION_WEB_EMAIL_ADDRESS", jint>(); }
	static jint TYPE_TEXT_VARIATION_WEB_PASSWORD() { return get_static_field<"TYPE_TEXT_VARIATION_WEB_PASSWORD", jint>(); }


protected:

	InputType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_INPUTTYPE
