// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_MENUCOMPONENT_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_MENUCOMPONENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class MenuComponent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::MenuComponent>
{
	static constexpr fixed_string class_name = "java/awt/MenuComponent";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_MENUCOMPONENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_MENUCOMPONENT)
#define SCAPIX_JAVA_API_JAVA_AWT_MENUCOMPONENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/AWTEvent.h>
#include <scapix/java_api/java/awt/Event.h>
#include <scapix/java_api/java/awt/Font.h>
#include <scapix/java_api/java/awt/MenuContainer.h>
#include <scapix/java_api/java/awt/peer/MenuComponentPeer.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::MenuComponent : public jni::object_base<"java/awt/MenuComponent",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::awt::MenuComponent> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	void setName(jni::ref<java::lang::String> p1) { return call_method<"setName", void>(p1); }
	jni::ref<java::awt::MenuContainer> getParent() { return call_method<"getParent", jni::ref<java::awt::MenuContainer>>(); }
	jni::ref<java::awt::peer::MenuComponentPeer> getPeer() { return call_method<"getPeer", jni::ref<java::awt::peer::MenuComponentPeer>>(); }
	jni::ref<java::awt::Font> getFont() { return call_method<"getFont", jni::ref<java::awt::Font>>(); }
	void setFont(jni::ref<java::awt::Font> p1) { return call_method<"setFont", void>(p1); }
	void removeNotify() { return call_method<"removeNotify", void>(); }
	jboolean postEvent(jni::ref<java::awt::Event> p1) { return call_method<"postEvent", jboolean>(p1); }
	void dispatchEvent(jni::ref<java::awt::AWTEvent> p1) { return call_method<"dispatchEvent", void>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	MenuComponent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_MENUCOMPONENT
