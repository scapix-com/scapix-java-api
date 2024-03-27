// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/AbstractAction.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_AUDIOACTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_AUDIOACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::windows { class WindowsLookAndFeel_AudioAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::windows::WindowsLookAndFeel_AudioAction>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/windows/WindowsLookAndFeel$AudioAction";
	using base_classes = std::tuple<scapix::java_api::javax::swing::AbstractAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_AUDIOACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_AUDIOACTION)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_AUDIOACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::swing::plaf::windows::WindowsLookAndFeel_AudioAction : public jni::object_base<"com/sun/java/swing/plaf/windows/WindowsLookAndFeel$AudioAction",
	javax::swing::AbstractAction>
{
public:

	static jni::ref<com::sun::java::swing::plaf::windows::WindowsLookAndFeel_AudioAction> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }

protected:

	WindowsLookAndFeel_AudioAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSLOOKANDFEEL_AUDIOACTION
