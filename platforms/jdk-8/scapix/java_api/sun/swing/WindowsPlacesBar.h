// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JToolBar.h>
#include <scapix/java_api/java/awt/event/ActionListener.h>
#include <scapix/java_api/java/beans/PropertyChangeListener.h>

#ifndef SCAPIX_JAVA_API_SUN_SWING_WINDOWSPLACESBAR_FWD
#define SCAPIX_JAVA_API_SUN_SWING_WINDOWSPLACESBAR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::swing { class WindowsPlacesBar; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::swing::WindowsPlacesBar>
{
	static constexpr fixed_string class_name = "sun/swing/WindowsPlacesBar";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JToolBar, scapix::java_api::java::awt::event::ActionListener, scapix::java_api::java::beans::PropertyChangeListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_WINDOWSPLACESBAR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SWING_WINDOWSPLACESBAR)
#define SCAPIX_JAVA_API_SUN_SWING_WINDOWSPLACESBAR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#include <scapix/java_api/java/beans/PropertyChangeEvent.h>
#include <scapix/java_api/javax/swing/JFileChooser.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::swing::WindowsPlacesBar : public jni::object_base<"sun/swing/WindowsPlacesBar",
	javax::swing::JToolBar,
	java::awt::event::ActionListener,
	java::beans::PropertyChangeListener>
{
public:

	static jni::ref<sun::swing::WindowsPlacesBar> new_object(jni::ref<javax::swing::JFileChooser> p1, jboolean p2) { return base_::new_object(p1, p2); }
	void propertyChange(jni::ref<java::beans::PropertyChangeEvent> p1) { return call_method<"propertyChange", void>(p1); }
	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }
	jni::ref<java::awt::Dimension> getPreferredSize() { return call_method<"getPreferredSize", jni::ref<java::awt::Dimension>>(); }

protected:

	WindowsPlacesBar(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_WINDOWSPLACESBAR
