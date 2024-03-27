// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/awt/windows/WComponentPeer.h>
#include <scapix/java_api/java/awt/peer/TextComponentPeer.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WTEXTCOMPONENTPEER_FWD
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WTEXTCOMPONENTPEER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::windows { class WTextComponentPeer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::windows::WTextComponentPeer>
{
	static constexpr fixed_string class_name = "sun/awt/windows/WTextComponentPeer";
	using base_classes = std::tuple<scapix::java_api::sun::awt::windows::WComponentPeer, scapix::java_api::java::awt::peer::TextComponentPeer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WTEXTCOMPONENTPEER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WTEXTCOMPONENTPEER)
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WTEXTCOMPONENTPEER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::windows::WTextComponentPeer : public jni::object_base<"sun/awt/windows/WTextComponentPeer",
	sun::awt::windows::WComponentPeer,
	java::awt::peer::TextComponentPeer>
{
public:

	void setEditable(jboolean p1) { return call_method<"setEditable", void>(p1); }
	jni::ref<java::lang::String> getText() { return call_method<"getText", jni::ref<java::lang::String>>(); }
	void setText(jni::ref<java::lang::String> p1) { return call_method<"setText", void>(p1); }
	jint getSelectionStart() { return call_method<"getSelectionStart", jint>(); }
	jint getSelectionEnd() { return call_method<"getSelectionEnd", jint>(); }
	void select(jint p1, jint p2) { return call_method<"select", void>(p1, p2); }
	jboolean isFocusable() { return call_method<"isFocusable", jboolean>(); }
	void setCaretPosition(jint p1) { return call_method<"setCaretPosition", void>(p1); }
	jint getCaretPosition() { return call_method<"getCaretPosition", jint>(); }
	void valueChanged() { return call_method<"valueChanged", void>(); }
	jboolean shouldClearRectBeforePaint() { return call_method<"shouldClearRectBeforePaint", jboolean>(); }

protected:

	WTextComponentPeer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WTEXTCOMPONENTPEER