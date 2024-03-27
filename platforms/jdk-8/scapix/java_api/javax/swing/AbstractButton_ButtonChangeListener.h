// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/event/ChangeListener.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_ABSTRACTBUTTON_BUTTONCHANGELISTENER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_ABSTRACTBUTTON_BUTTONCHANGELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class AbstractButton_ButtonChangeListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::AbstractButton_ButtonChangeListener>
{
	static constexpr fixed_string class_name = "javax/swing/AbstractButton$ButtonChangeListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::event::ChangeListener, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_ABSTRACTBUTTON_BUTTONCHANGELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_ABSTRACTBUTTON_BUTTONCHANGELISTENER)
#define SCAPIX_JAVA_API_JAVAX_SWING_ABSTRACTBUTTON_BUTTONCHANGELISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/event/ChangeEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::AbstractButton_ButtonChangeListener : public jni::object_base<"javax/swing/AbstractButton$ButtonChangeListener",
	java::lang::Object,
	javax::swing::event::ChangeListener,
	java::io::Serializable>
{
public:

	void stateChanged(jni::ref<javax::swing::event::ChangeEvent> p1) { return call_method<"stateChanged", void>(p1); }

protected:

	AbstractButton_ButtonChangeListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_ABSTRACTBUTTON_BUTTONCHANGELISTENER
