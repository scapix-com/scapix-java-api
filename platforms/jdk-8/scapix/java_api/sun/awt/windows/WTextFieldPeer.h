// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/awt/windows/WTextComponentPeer.h>
#include <scapix/java_api/java/awt/peer/TextFieldPeer.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WTEXTFIELDPEER_FWD
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WTEXTFIELDPEER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::windows { class WTextFieldPeer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::windows::WTextFieldPeer>
{
	static constexpr fixed_string class_name = "sun/awt/windows/WTextFieldPeer";
	using base_classes = std::tuple<scapix::java_api::sun::awt::windows::WTextComponentPeer, scapix::java_api::java::awt::peer::TextFieldPeer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WTEXTFIELDPEER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WTEXTFIELDPEER)
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WTEXTFIELDPEER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/event/KeyEvent.h>
#include <scapix/java_api/java/awt/im/InputMethodRequests.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::windows::WTextFieldPeer : public jni::object_base<"sun/awt/windows/WTextFieldPeer",
	sun::awt::windows::WTextComponentPeer,
	java::awt::peer::TextFieldPeer>
{
public:

	jni::ref<java::awt::Dimension> getMinimumSize() { return call_method<"getMinimumSize", jni::ref<java::awt::Dimension>>(); }
	jboolean handleJavaKeyEvent(jni::ref<java::awt::event::KeyEvent> p1) { return call_method<"handleJavaKeyEvent", jboolean>(p1); }
	void setEchoChar(jchar p1) { return call_method<"setEchoChar", void>(p1); }
	jni::ref<java::awt::Dimension> getPreferredSize(jint p1) { return call_method<"getPreferredSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> getMinimumSize(jint p1) { return call_method<"getMinimumSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::im::InputMethodRequests> getInputMethodRequests() { return call_method<"getInputMethodRequests", jni::ref<java::awt::im::InputMethodRequests>>(); }

protected:

	WTextFieldPeer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WTEXTFIELDPEER