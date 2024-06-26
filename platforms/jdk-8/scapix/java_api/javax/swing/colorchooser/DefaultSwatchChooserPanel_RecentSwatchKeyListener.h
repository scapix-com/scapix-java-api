// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/event/KeyAdapter.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_DEFAULTSWATCHCHOOSERPANEL_RECENTSWATCHKEYLISTENER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_DEFAULTSWATCHCHOOSERPANEL_RECENTSWATCHKEYLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::colorchooser { class DefaultSwatchChooserPanel_RecentSwatchKeyListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::colorchooser::DefaultSwatchChooserPanel_RecentSwatchKeyListener>
{
	static constexpr fixed_string class_name = "javax/swing/colorchooser/DefaultSwatchChooserPanel$RecentSwatchKeyListener";
	using base_classes = std::tuple<scapix::java_api::java::awt::event::KeyAdapter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_DEFAULTSWATCHCHOOSERPANEL_RECENTSWATCHKEYLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_DEFAULTSWATCHCHOOSERPANEL_RECENTSWATCHKEYLISTENER)
#define SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_DEFAULTSWATCHCHOOSERPANEL_RECENTSWATCHKEYLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/KeyEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::colorchooser::DefaultSwatchChooserPanel_RecentSwatchKeyListener : public jni::object_base<"javax/swing/colorchooser/DefaultSwatchChooserPanel$RecentSwatchKeyListener",
	java::awt::event::KeyAdapter>
{
public:

	void keyPressed(jni::ref<java::awt::event::KeyEvent> p1) { return call_method<"keyPressed", void>(p1); }

protected:

	DefaultSwatchChooserPanel_RecentSwatchKeyListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_DEFAULTSWATCHCHOOSERPANEL_RECENTSWATCHKEYLISTENER
