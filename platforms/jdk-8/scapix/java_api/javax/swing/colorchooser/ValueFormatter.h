// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JFormattedTextField_AbstractFormatter.h>
#include <scapix/java_api/java/awt/event/FocusListener.h>
#include <scapix/java_api/java/lang/Runnable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_VALUEFORMATTER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_VALUEFORMATTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::colorchooser { class ValueFormatter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::colorchooser::ValueFormatter>
{
	static constexpr fixed_string class_name = "javax/swing/colorchooser/ValueFormatter";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JFormattedTextField_AbstractFormatter, scapix::java_api::java::awt::event::FocusListener, scapix::java_api::java::lang::Runnable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_VALUEFORMATTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_VALUEFORMATTER)
#define SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_VALUEFORMATTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/FocusEvent.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::colorchooser::ValueFormatter : public jni::object_base<"javax/swing/colorchooser/ValueFormatter",
	javax::swing::JFormattedTextField_AbstractFormatter,
	java::awt::event::FocusListener,
	java::lang::Runnable>
{
public:

	jni::ref<java::lang::Object> stringToValue(jni::ref<java::lang::String> p1) { return call_method<"stringToValue", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::String> valueToString(jni::ref<java::lang::Object> p1) { return call_method<"valueToString", jni::ref<java::lang::String>>(p1); }
	void focusGained(jni::ref<java::awt::event::FocusEvent> p1) { return call_method<"focusGained", void>(p1); }
	void focusLost(jni::ref<java::awt::event::FocusEvent> p1) { return call_method<"focusLost", void>(p1); }
	void run() { return call_method<"run", void>(); }

protected:

	ValueFormatter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_VALUEFORMATTER