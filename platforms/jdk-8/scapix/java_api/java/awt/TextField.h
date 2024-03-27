// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/TextComponent.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_TEXTFIELD_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_TEXTFIELD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class TextField; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::TextField>
{
	static constexpr fixed_string class_name = "java/awt/TextField";
	using base_classes = std::tuple<scapix::java_api::java::awt::TextComponent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_TEXTFIELD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_TEXTFIELD)
#define SCAPIX_JAVA_API_JAVA_AWT_TEXTFIELD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/event/ActionListener.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/EventListener.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::TextField : public jni::object_base<"java/awt/TextField",
	java::awt::TextComponent>
{
public:

	static jni::ref<java::awt::TextField> new_object() { return base_::new_object(); }
	static jni::ref<java::awt::TextField> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<java::awt::TextField> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<java::awt::TextField> new_object(jni::ref<java::lang::String> p1, jint p2) { return base_::new_object(p1, p2); }
	void addNotify() { return call_method<"addNotify", void>(); }
	jchar getEchoChar() { return call_method<"getEchoChar", jchar>(); }
	void setEchoChar(jchar p1) { return call_method<"setEchoChar", void>(p1); }
	void setEchoCharacter(jchar p1) { return call_method<"setEchoCharacter", void>(p1); }
	void setText(jni::ref<java::lang::String> p1) { return call_method<"setText", void>(p1); }
	jboolean echoCharIsSet() { return call_method<"echoCharIsSet", jboolean>(); }
	jint getColumns() { return call_method<"getColumns", jint>(); }
	void setColumns(jint p1) { return call_method<"setColumns", void>(p1); }
	jni::ref<java::awt::Dimension> getPreferredSize(jint p1) { return call_method<"getPreferredSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> preferredSize(jint p1) { return call_method<"preferredSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> getPreferredSize() { return call_method<"getPreferredSize", jni::ref<java::awt::Dimension>>(); }
	jni::ref<java::awt::Dimension> preferredSize() { return call_method<"preferredSize", jni::ref<java::awt::Dimension>>(); }
	jni::ref<java::awt::Dimension> getMinimumSize(jint p1) { return call_method<"getMinimumSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> minimumSize(jint p1) { return call_method<"minimumSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> getMinimumSize() { return call_method<"getMinimumSize", jni::ref<java::awt::Dimension>>(); }
	jni::ref<java::awt::Dimension> minimumSize() { return call_method<"minimumSize", jni::ref<java::awt::Dimension>>(); }
	void addActionListener(jni::ref<java::awt::event::ActionListener> p1) { return call_method<"addActionListener", void>(p1); }
	void removeActionListener(jni::ref<java::awt::event::ActionListener> p1) { return call_method<"removeActionListener", void>(p1); }
	jni::ref<jni::array<java::awt::event::ActionListener>> getActionListeners() { return call_method<"getActionListeners", jni::ref<jni::array<java::awt::event::ActionListener>>>(); }
	jni::ref<jni::array<java::util::EventListener>> getListeners(jni::ref<java::lang::Class> p1) { return call_method<"getListeners", jni::ref<jni::array<java::util::EventListener>>>(p1); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	TextField(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_TEXTFIELD