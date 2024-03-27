// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/AbstractAction.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTREEUI_TREETOGGLEACTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTREEUI_TREETOGGLEACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicTreeUI_TreeToggleAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicTreeUI_TreeToggleAction>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicTreeUI$TreeToggleAction";
	using base_classes = std::tuple<scapix::java_api::javax::swing::AbstractAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTREEUI_TREETOGGLEACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTREEUI_TREETOGGLEACTION)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTREEUI_TREETOGGLEACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/plaf/basic/BasicTreeUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::basic::BasicTreeUI_TreeToggleAction : public jni::object_base<"javax/swing/plaf/basic/BasicTreeUI$TreeToggleAction",
	javax::swing::AbstractAction>
{
public:

	static jni::ref<javax::swing::plaf::basic::BasicTreeUI_TreeToggleAction> new_object(jni::ref<javax::swing::plaf::basic::BasicTreeUI> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }
	jboolean isEnabled() { return call_method<"isEnabled", jboolean>(); }

protected:

	BasicTreeUI_TreeToggleAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTREEUI_TREETOGGLEACTION
