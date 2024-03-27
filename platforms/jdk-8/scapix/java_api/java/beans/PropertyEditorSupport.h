// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/beans/PropertyEditor.h>

#ifndef SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYEDITORSUPPORT_FWD
#define SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYEDITORSUPPORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::beans { class PropertyEditorSupport; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::beans::PropertyEditorSupport>
{
	static constexpr fixed_string class_name = "java/beans/PropertyEditorSupport";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::beans::PropertyEditor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYEDITORSUPPORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYEDITORSUPPORT)
#define SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYEDITORSUPPORT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/beans/PropertyChangeListener.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::beans::PropertyEditorSupport : public jni::object_base<"java/beans/PropertyEditorSupport",
	java::lang::Object,
	java::beans::PropertyEditor>
{
public:

	static jni::ref<java::beans::PropertyEditorSupport> new_object() { return base_::new_object(); }
	static jni::ref<java::beans::PropertyEditorSupport> new_object(jni::ref<java::lang::Object> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::Object> getSource() { return call_method<"getSource", jni::ref<java::lang::Object>>(); }
	void setSource(jni::ref<java::lang::Object> p1) { return call_method<"setSource", void>(p1); }
	void setValue(jni::ref<java::lang::Object> p1) { return call_method<"setValue", void>(p1); }
	jni::ref<java::lang::Object> getValue() { return call_method<"getValue", jni::ref<java::lang::Object>>(); }
	jboolean isPaintable() { return call_method<"isPaintable", jboolean>(); }
	void paintValue(jni::ref<java::awt::Graphics> p1, jni::ref<java::awt::Rectangle> p2) { return call_method<"paintValue", void>(p1, p2); }
	jni::ref<java::lang::String> getJavaInitializationString() { return call_method<"getJavaInitializationString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getAsText() { return call_method<"getAsText", jni::ref<java::lang::String>>(); }
	void setAsText(jni::ref<java::lang::String> p1) { return call_method<"setAsText", void>(p1); }
	jni::ref<jni::array<java::lang::String>> getTags() { return call_method<"getTags", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<java::awt::Component> getCustomEditor() { return call_method<"getCustomEditor", jni::ref<java::awt::Component>>(); }
	jboolean supportsCustomEditor() { return call_method<"supportsCustomEditor", jboolean>(); }
	void addPropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"addPropertyChangeListener", void>(p1); }
	void removePropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"removePropertyChangeListener", void>(p1); }
	void firePropertyChange() { return call_method<"firePropertyChange", void>(); }

protected:

	PropertyEditorSupport(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYEDITORSUPPORT