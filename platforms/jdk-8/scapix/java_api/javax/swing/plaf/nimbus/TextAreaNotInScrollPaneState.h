// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/nimbus/State.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_TEXTAREANOTINSCROLLPANESTATE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_TEXTAREANOTINSCROLLPANESTATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::nimbus { class TextAreaNotInScrollPaneState; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::nimbus::TextAreaNotInScrollPaneState>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/nimbus/TextAreaNotInScrollPaneState";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::nimbus::State>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_TEXTAREANOTINSCROLLPANESTATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_TEXTAREANOTINSCROLLPANESTATE)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_TEXTAREANOTINSCROLLPANESTATE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::nimbus::TextAreaNotInScrollPaneState : public jni::object_base<"javax/swing/plaf/nimbus/TextAreaNotInScrollPaneState",
	javax::swing::plaf::nimbus::State>
{
public:


protected:

	TextAreaNotInScrollPaneState(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_TEXTAREANOTINSCROLLPANESTATE
