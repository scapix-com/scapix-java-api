// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/StyleConstants.h>
#include <scapix/java_api/javax/swing/text/AttributeSet_ColorAttribute.h>
#include <scapix/java_api/javax/swing/text/AttributeSet_CharacterAttribute.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLECONSTANTS_COLORCONSTANTS_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLECONSTANTS_COLORCONSTANTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class StyleConstants_ColorConstants; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::StyleConstants_ColorConstants>
{
	static constexpr fixed_string class_name = "javax/swing/text/StyleConstants$ColorConstants";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::StyleConstants, scapix::java_api::javax::swing::text::AttributeSet_ColorAttribute, scapix::java_api::javax::swing::text::AttributeSet_CharacterAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLECONSTANTS_COLORCONSTANTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLECONSTANTS_COLORCONSTANTS)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLECONSTANTS_COLORCONSTANTS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::StyleConstants_ColorConstants : public jni::object_base<"javax/swing/text/StyleConstants$ColorConstants",
	javax::swing::text::StyleConstants,
	javax::swing::text::AttributeSet_ColorAttribute,
	javax::swing::text::AttributeSet_CharacterAttribute>
{
public:


protected:

	StyleConstants_ColorConstants(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLECONSTANTS_COLORCONSTANTS