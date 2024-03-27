// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/Action.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_ABSTRACTACTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_ABSTRACTACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class AbstractAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::AbstractAction>
{
	static constexpr fixed_string class_name = "javax/swing/AbstractAction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::Action, scapix::java_api::java::lang::Cloneable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_ABSTRACTACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_ABSTRACTACTION)
#define SCAPIX_JAVA_API_JAVAX_SWING_ABSTRACTACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/beans/PropertyChangeListener.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/Icon.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::AbstractAction : public jni::object_base<"javax/swing/AbstractAction",
	java::lang::Object,
	javax::swing::Action,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	static jni::ref<javax::swing::AbstractAction> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::AbstractAction> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::AbstractAction> new_object(jni::ref<java::lang::String> p1, jni::ref<javax::swing::Icon> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::Object> getValue(jni::ref<java::lang::String> p1) { return call_method<"getValue", jni::ref<java::lang::Object>>(p1); }
	void putValue(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"putValue", void>(p1, p2); }
	jboolean isEnabled() { return call_method<"isEnabled", jboolean>(); }
	void setEnabled(jboolean p1) { return call_method<"setEnabled", void>(p1); }
	jni::ref<jni::array<java::lang::Object>> getKeys() { return call_method<"getKeys", jni::ref<jni::array<java::lang::Object>>>(); }
	void addPropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"addPropertyChangeListener", void>(p1); }
	void removePropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"removePropertyChangeListener", void>(p1); }
	jni::ref<jni::array<java::beans::PropertyChangeListener>> getPropertyChangeListeners() { return call_method<"getPropertyChangeListeners", jni::ref<jni::array<java::beans::PropertyChangeListener>>>(); }

protected:

	AbstractAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_ABSTRACTACTION