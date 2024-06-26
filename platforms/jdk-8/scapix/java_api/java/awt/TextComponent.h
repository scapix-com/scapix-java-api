// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_TEXTCOMPONENT_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_TEXTCOMPONENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class TextComponent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::TextComponent>
{
	static constexpr fixed_string class_name = "java/awt/TextComponent";
	using base_classes = std::tuple<scapix::java_api::java::awt::Component, scapix::java_api::javax::accessibility::Accessible>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_TEXTCOMPONENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_TEXTCOMPONENT)
#define SCAPIX_JAVA_API_JAVA_AWT_TEXTCOMPONENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Color.h>
#include <scapix/java_api/java/awt/event/TextListener.h>
#include <scapix/java_api/java/awt/im/InputMethodRequests.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/EventListener.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::TextComponent : public jni::object_base<"java/awt/TextComponent",
	java::awt::Component,
	javax::accessibility::Accessible>
{
public:

	void enableInputMethods(jboolean p1) { return call_method<"enableInputMethods", void>(p1); }
	jni::ref<java::awt::im::InputMethodRequests> getInputMethodRequests() { return call_method<"getInputMethodRequests", jni::ref<java::awt::im::InputMethodRequests>>(); }
	void addNotify() { return call_method<"addNotify", void>(); }
	void removeNotify() { return call_method<"removeNotify", void>(); }
	void setText(jni::ref<java::lang::String> p1) { return call_method<"setText", void>(p1); }
	jni::ref<java::lang::String> getText() { return call_method<"getText", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSelectedText() { return call_method<"getSelectedText", jni::ref<java::lang::String>>(); }
	jboolean isEditable() { return call_method<"isEditable", jboolean>(); }
	void setEditable(jboolean p1) { return call_method<"setEditable", void>(p1); }
	jni::ref<java::awt::Color> getBackground() { return call_method<"getBackground", jni::ref<java::awt::Color>>(); }
	void setBackground(jni::ref<java::awt::Color> p1) { return call_method<"setBackground", void>(p1); }
	jint getSelectionStart() { return call_method<"getSelectionStart", jint>(); }
	void setSelectionStart(jint p1) { return call_method<"setSelectionStart", void>(p1); }
	jint getSelectionEnd() { return call_method<"getSelectionEnd", jint>(); }
	void setSelectionEnd(jint p1) { return call_method<"setSelectionEnd", void>(p1); }
	void select(jint p1, jint p2) { return call_method<"select", void>(p1, p2); }
	void selectAll() { return call_method<"selectAll", void>(); }
	void setCaretPosition(jint p1) { return call_method<"setCaretPosition", void>(p1); }
	jint getCaretPosition() { return call_method<"getCaretPosition", jint>(); }
	void addTextListener(jni::ref<java::awt::event::TextListener> p1) { return call_method<"addTextListener", void>(p1); }
	void removeTextListener(jni::ref<java::awt::event::TextListener> p1) { return call_method<"removeTextListener", void>(p1); }
	jni::ref<jni::array<java::awt::event::TextListener>> getTextListeners() { return call_method<"getTextListeners", jni::ref<jni::array<java::awt::event::TextListener>>>(); }
	jni::ref<jni::array<java::util::EventListener>> getListeners(jni::ref<java::lang::Class> p1) { return call_method<"getListeners", jni::ref<jni::array<java::util::EventListener>>>(p1); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	TextComponent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_TEXTCOMPONENT
