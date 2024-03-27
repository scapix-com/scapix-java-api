// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_LANG_UCHARACTERENUMS_ECHARACTERDIRECTION_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_LANG_UCHARACTERENUMS_ECHARACTERDIRECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::lang { class UCharacterEnums_ECharacterDirection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::lang::UCharacterEnums_ECharacterDirection>
{
	static constexpr fixed_string class_name = "android/icu/lang/UCharacterEnums$ECharacterDirection";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_LANG_UCHARACTERENUMS_ECHARACTERDIRECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_LANG_UCHARACTERENUMS_ECHARACTERDIRECTION)
#define SCAPIX_JAVA_API_ANDROID_ICU_LANG_UCHARACTERENUMS_ECHARACTERDIRECTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::lang::UCharacterEnums_ECharacterDirection : public jni::object_base<"android/icu/lang/UCharacterEnums$ECharacterDirection",
	java::lang::Object>
{
public:

	static jint ARABIC_NUMBER() { return get_static_field<"ARABIC_NUMBER", jint>(); }
	static jint BLOCK_SEPARATOR() { return get_static_field<"BLOCK_SEPARATOR", jint>(); }
	static jint BOUNDARY_NEUTRAL() { return get_static_field<"BOUNDARY_NEUTRAL", jint>(); }
	static jint COMMON_NUMBER_SEPARATOR() { return get_static_field<"COMMON_NUMBER_SEPARATOR", jint>(); }
	static jbyte DIRECTIONALITY_ARABIC_NUMBER() { return get_static_field<"DIRECTIONALITY_ARABIC_NUMBER", jbyte>(); }
	static jbyte DIRECTIONALITY_BOUNDARY_NEUTRAL() { return get_static_field<"DIRECTIONALITY_BOUNDARY_NEUTRAL", jbyte>(); }
	static jbyte DIRECTIONALITY_COMMON_NUMBER_SEPARATOR() { return get_static_field<"DIRECTIONALITY_COMMON_NUMBER_SEPARATOR", jbyte>(); }
	static jbyte DIRECTIONALITY_EUROPEAN_NUMBER() { return get_static_field<"DIRECTIONALITY_EUROPEAN_NUMBER", jbyte>(); }
	static jbyte DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR() { return get_static_field<"DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR", jbyte>(); }
	static jbyte DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR() { return get_static_field<"DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR", jbyte>(); }
	static jbyte DIRECTIONALITY_LEFT_TO_RIGHT() { return get_static_field<"DIRECTIONALITY_LEFT_TO_RIGHT", jbyte>(); }
	static jbyte DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING() { return get_static_field<"DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING", jbyte>(); }
	static jbyte DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE() { return get_static_field<"DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE", jbyte>(); }
	static jbyte DIRECTIONALITY_NONSPACING_MARK() { return get_static_field<"DIRECTIONALITY_NONSPACING_MARK", jbyte>(); }
	static jbyte DIRECTIONALITY_OTHER_NEUTRALS() { return get_static_field<"DIRECTIONALITY_OTHER_NEUTRALS", jbyte>(); }
	static jbyte DIRECTIONALITY_PARAGRAPH_SEPARATOR() { return get_static_field<"DIRECTIONALITY_PARAGRAPH_SEPARATOR", jbyte>(); }
	static jbyte DIRECTIONALITY_POP_DIRECTIONAL_FORMAT() { return get_static_field<"DIRECTIONALITY_POP_DIRECTIONAL_FORMAT", jbyte>(); }
	static jbyte DIRECTIONALITY_RIGHT_TO_LEFT() { return get_static_field<"DIRECTIONALITY_RIGHT_TO_LEFT", jbyte>(); }
	static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC() { return get_static_field<"DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC", jbyte>(); }
	static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING() { return get_static_field<"DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING", jbyte>(); }
	static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE() { return get_static_field<"DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE", jbyte>(); }
	static jbyte DIRECTIONALITY_SEGMENT_SEPARATOR() { return get_static_field<"DIRECTIONALITY_SEGMENT_SEPARATOR", jbyte>(); }
	static jbyte DIRECTIONALITY_UNDEFINED() { return get_static_field<"DIRECTIONALITY_UNDEFINED", jbyte>(); }
	static jbyte DIRECTIONALITY_WHITESPACE() { return get_static_field<"DIRECTIONALITY_WHITESPACE", jbyte>(); }
	static jint DIR_NON_SPACING_MARK() { return get_static_field<"DIR_NON_SPACING_MARK", jint>(); }
	static jint EUROPEAN_NUMBER() { return get_static_field<"EUROPEAN_NUMBER", jint>(); }
	static jint EUROPEAN_NUMBER_SEPARATOR() { return get_static_field<"EUROPEAN_NUMBER_SEPARATOR", jint>(); }
	static jint EUROPEAN_NUMBER_TERMINATOR() { return get_static_field<"EUROPEAN_NUMBER_TERMINATOR", jint>(); }
	static jbyte FIRST_STRONG_ISOLATE() { return get_static_field<"FIRST_STRONG_ISOLATE", jbyte>(); }
	static jint LEFT_TO_RIGHT() { return get_static_field<"LEFT_TO_RIGHT", jint>(); }
	static jint LEFT_TO_RIGHT_EMBEDDING() { return get_static_field<"LEFT_TO_RIGHT_EMBEDDING", jint>(); }
	static jbyte LEFT_TO_RIGHT_ISOLATE() { return get_static_field<"LEFT_TO_RIGHT_ISOLATE", jbyte>(); }
	static jint LEFT_TO_RIGHT_OVERRIDE() { return get_static_field<"LEFT_TO_RIGHT_OVERRIDE", jint>(); }
	static jint OTHER_NEUTRAL() { return get_static_field<"OTHER_NEUTRAL", jint>(); }
	static jint POP_DIRECTIONAL_FORMAT() { return get_static_field<"POP_DIRECTIONAL_FORMAT", jint>(); }
	static jbyte POP_DIRECTIONAL_ISOLATE() { return get_static_field<"POP_DIRECTIONAL_ISOLATE", jbyte>(); }
	static jint RIGHT_TO_LEFT() { return get_static_field<"RIGHT_TO_LEFT", jint>(); }
	static jint RIGHT_TO_LEFT_ARABIC() { return get_static_field<"RIGHT_TO_LEFT_ARABIC", jint>(); }
	static jint RIGHT_TO_LEFT_EMBEDDING() { return get_static_field<"RIGHT_TO_LEFT_EMBEDDING", jint>(); }
	static jbyte RIGHT_TO_LEFT_ISOLATE() { return get_static_field<"RIGHT_TO_LEFT_ISOLATE", jbyte>(); }
	static jint RIGHT_TO_LEFT_OVERRIDE() { return get_static_field<"RIGHT_TO_LEFT_OVERRIDE", jint>(); }
	static jint SEGMENT_SEPARATOR() { return get_static_field<"SEGMENT_SEPARATOR", jint>(); }
	static jint WHITE_SPACE_NEUTRAL() { return get_static_field<"WHITE_SPACE_NEUTRAL", jint>(); }


protected:

	UCharacterEnums_ECharacterDirection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_LANG_UCHARACTERENUMS_ECHARACTERDIRECTION