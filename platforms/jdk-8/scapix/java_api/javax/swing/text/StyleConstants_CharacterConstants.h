// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/StyleConstants.h>
#include <scapix/java_api/javax/swing/text/AttributeSet_CharacterAttribute.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLECONSTANTS_CHARACTERCONSTANTS_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLECONSTANTS_CHARACTERCONSTANTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class StyleConstants_CharacterConstants; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::StyleConstants_CharacterConstants>
{
	static constexpr fixed_string class_name = "javax/swing/text/StyleConstants$CharacterConstants";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::StyleConstants, scapix::java_api::javax::swing::text::AttributeSet_CharacterAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLECONSTANTS_CHARACTERCONSTANTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLECONSTANTS_CHARACTERCONSTANTS)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLECONSTANTS_CHARACTERCONSTANTS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::StyleConstants_CharacterConstants : public jni::object_base<"javax/swing/text/StyleConstants$CharacterConstants",
	javax::swing::text::StyleConstants,
	javax::swing::text::AttributeSet_CharacterAttribute>
{
public:


protected:

	StyleConstants_CharacterConstants(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLECONSTANTS_CHARACTERCONSTANTS
