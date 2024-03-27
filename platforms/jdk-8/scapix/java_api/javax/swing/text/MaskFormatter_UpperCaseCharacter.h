// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/MaskFormatter_MaskCharacter.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_MASKFORMATTER_UPPERCASECHARACTER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_MASKFORMATTER_UPPERCASECHARACTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class MaskFormatter_UpperCaseCharacter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::MaskFormatter_UpperCaseCharacter>
{
	static constexpr fixed_string class_name = "javax/swing/text/MaskFormatter$UpperCaseCharacter";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::MaskFormatter_MaskCharacter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_MASKFORMATTER_UPPERCASECHARACTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_MASKFORMATTER_UPPERCASECHARACTER)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_MASKFORMATTER_UPPERCASECHARACTER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::MaskFormatter_UpperCaseCharacter : public jni::object_base<"javax/swing/text/MaskFormatter$UpperCaseCharacter",
	javax::swing::text::MaskFormatter_MaskCharacter>
{
public:

	jboolean isValidCharacter(jchar p1) { return call_method<"isValidCharacter", jboolean>(p1); }
	jchar getChar(jchar p1) { return call_method<"getChar", jchar>(p1); }

protected:

	MaskFormatter_UpperCaseCharacter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_MASKFORMATTER_UPPERCASECHARACTER