// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLECOMPONENT_FWD
#define SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLECOMPONENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::accessibility { class AccessibleComponent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::accessibility::AccessibleComponent>
{
	static constexpr fixed_string class_name = "javax/accessibility/AccessibleComponent";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLECOMPONENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLECOMPONENT)
#define SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLECOMPONENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Color.h>
#include <scapix/java_api/java/awt/Cursor.h>
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/Font.h>
#include <scapix/java_api/java/awt/FontMetrics.h>
#include <scapix/java_api/java/awt/Point.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/awt/event/FocusListener.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::accessibility::AccessibleComponent : public jni::object_base<"javax/accessibility/AccessibleComponent",
	java::lang::Object>
{
public:

	jni::ref<java::awt::Color> getBackground() { return call_method<"getBackground", jni::ref<java::awt::Color>>(); }
	void setBackground(jni::ref<java::awt::Color> p1) { return call_method<"setBackground", void>(p1); }
	jni::ref<java::awt::Color> getForeground() { return call_method<"getForeground", jni::ref<java::awt::Color>>(); }
	void setForeground(jni::ref<java::awt::Color> p1) { return call_method<"setForeground", void>(p1); }
	jni::ref<java::awt::Cursor> getCursor() { return call_method<"getCursor", jni::ref<java::awt::Cursor>>(); }
	void setCursor(jni::ref<java::awt::Cursor> p1) { return call_method<"setCursor", void>(p1); }
	jni::ref<java::awt::Font> getFont() { return call_method<"getFont", jni::ref<java::awt::Font>>(); }
	void setFont(jni::ref<java::awt::Font> p1) { return call_method<"setFont", void>(p1); }
	jni::ref<java::awt::FontMetrics> getFontMetrics(jni::ref<java::awt::Font> p1) { return call_method<"getFontMetrics", jni::ref<java::awt::FontMetrics>>(p1); }
	jboolean isEnabled() { return call_method<"isEnabled", jboolean>(); }
	void setEnabled(jboolean p1) { return call_method<"setEnabled", void>(p1); }
	jboolean isVisible() { return call_method<"isVisible", jboolean>(); }
	void setVisible(jboolean p1) { return call_method<"setVisible", void>(p1); }
	jboolean isShowing() { return call_method<"isShowing", jboolean>(); }
	jboolean contains(jni::ref<java::awt::Point> p1) { return call_method<"contains", jboolean>(p1); }
	jni::ref<java::awt::Point> getLocationOnScreen() { return call_method<"getLocationOnScreen", jni::ref<java::awt::Point>>(); }
	jni::ref<java::awt::Point> getLocation() { return call_method<"getLocation", jni::ref<java::awt::Point>>(); }
	void setLocation(jni::ref<java::awt::Point> p1) { return call_method<"setLocation", void>(p1); }
	jni::ref<java::awt::Rectangle> getBounds() { return call_method<"getBounds", jni::ref<java::awt::Rectangle>>(); }
	void setBounds(jni::ref<java::awt::Rectangle> p1) { return call_method<"setBounds", void>(p1); }
	jni::ref<java::awt::Dimension> getSize() { return call_method<"getSize", jni::ref<java::awt::Dimension>>(); }
	void setSize(jni::ref<java::awt::Dimension> p1) { return call_method<"setSize", void>(p1); }
	jni::ref<javax::accessibility::Accessible> getAccessibleAt(jni::ref<java::awt::Point> p1) { return call_method<"getAccessibleAt", jni::ref<javax::accessibility::Accessible>>(p1); }
	jboolean isFocusTraversable() { return call_method<"isFocusTraversable", jboolean>(); }
	void requestFocus() { return call_method<"requestFocus", void>(); }
	void addFocusListener(jni::ref<java::awt::event::FocusListener> p1) { return call_method<"addFocusListener", void>(p1); }
	void removeFocusListener(jni::ref<java::awt::event::FocusListener> p1) { return call_method<"removeFocusListener", void>(p1); }

protected:

	AccessibleComponent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLECOMPONENT
