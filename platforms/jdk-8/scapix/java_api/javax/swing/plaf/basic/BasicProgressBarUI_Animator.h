// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/event/ActionListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICPROGRESSBARUI_ANIMATOR_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICPROGRESSBARUI_ANIMATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicProgressBarUI_Animator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicProgressBarUI_Animator>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicProgressBarUI$Animator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::event::ActionListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICPROGRESSBARUI_ANIMATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICPROGRESSBARUI_ANIMATOR)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICPROGRESSBARUI_ANIMATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::basic::BasicProgressBarUI_Animator : public jni::object_base<"javax/swing/plaf/basic/BasicProgressBarUI$Animator",
	java::lang::Object,
	java::awt::event::ActionListener>
{
public:

	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }

protected:

	BasicProgressBarUI_Animator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICPROGRESSBARUI_ANIMATOR
