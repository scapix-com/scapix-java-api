// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Frame.h>
#include <scapix/java_api/sun/awt/im/InputMethodWindow.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_IM_SIMPLEINPUTMETHODWINDOW_FWD
#define SCAPIX_JAVA_API_SUN_AWT_IM_SIMPLEINPUTMETHODWINDOW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::im { class SimpleInputMethodWindow; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::im::SimpleInputMethodWindow>
{
	static constexpr fixed_string class_name = "sun/awt/im/SimpleInputMethodWindow";
	using base_classes = std::tuple<scapix::java_api::java::awt::Frame, scapix::java_api::sun::awt::im::InputMethodWindow>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IM_SIMPLEINPUTMETHODWINDOW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_IM_SIMPLEINPUTMETHODWINDOW)
#define SCAPIX_JAVA_API_SUN_AWT_IM_SIMPLEINPUTMETHODWINDOW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/im/InputContext.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/awt/im/InputContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::im::SimpleInputMethodWindow : public jni::object_base<"sun/awt/im/SimpleInputMethodWindow",
	java::awt::Frame,
	sun::awt::im::InputMethodWindow>
{
public:

	static jni::ref<sun::awt::im::SimpleInputMethodWindow> new_object(jni::ref<java::lang::String> p1, jni::ref<sun::awt::im::InputContext> p2) { return base_::new_object(p1, p2); }
	void setInputContext(jni::ref<sun::awt::im::InputContext> p1) { return call_method<"setInputContext", void>(p1); }
	jni::ref<java::awt::im::InputContext> getInputContext() { return call_method<"getInputContext", jni::ref<java::awt::im::InputContext>>(); }

protected:

	SimpleInputMethodWindow(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IM_SIMPLEINPUTMETHODWINDOW
