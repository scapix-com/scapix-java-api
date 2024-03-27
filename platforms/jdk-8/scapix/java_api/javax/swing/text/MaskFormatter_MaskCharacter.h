// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_MASKFORMATTER_MASKCHARACTER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_MASKFORMATTER_MASKCHARACTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class MaskFormatter_MaskCharacter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::MaskFormatter_MaskCharacter>
{
	static constexpr fixed_string class_name = "javax/swing/text/MaskFormatter$MaskCharacter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_MASKFORMATTER_MASKCHARACTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_MASKFORMATTER_MASKCHARACTER)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_MASKFORMATTER_MASKCHARACTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuilder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::MaskFormatter_MaskCharacter : public jni::object_base<"javax/swing/text/MaskFormatter$MaskCharacter",
	java::lang::Object>
{
public:

	jboolean isLiteral() { return call_method<"isLiteral", jboolean>(); }
	jboolean isValidCharacter(jchar p1) { return call_method<"isValidCharacter", jboolean>(p1); }
	jchar getChar(jchar p1) { return call_method<"getChar", jchar>(p1); }
	void append(jni::ref<java::lang::StringBuilder> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<jint>> p3, jni::ref<java::lang::String> p4) { return call_method<"append", void>(p1, p2, p3, p4); }

protected:

	MaskFormatter_MaskCharacter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_MASKFORMATTER_MASKCHARACTER