// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/awt/windows/WWindowPeer.h>
#include <scapix/java_api/java/awt/peer/DialogPeer.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WDIALOGPEER_FWD
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WDIALOGPEER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::windows { class WDialogPeer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::windows::WDialogPeer>
{
	static constexpr fixed_string class_name = "sun/awt/windows/WDialogPeer";
	using base_classes = std::tuple<scapix::java_api::sun::awt::windows::WWindowPeer, scapix::java_api::java::awt::peer::DialogPeer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WDIALOGPEER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WDIALOGPEER)
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WDIALOGPEER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::windows::WDialogPeer : public jni::object_base<"sun/awt/windows/WDialogPeer",
	sun::awt::windows::WWindowPeer,
	java::awt::peer::DialogPeer>
{
public:

	void blockWindows(jni::ref<java::util::List> p1) { return call_method<"blockWindows", void>(p1); }
	jni::ref<java::awt::Dimension> getMinimumSize() { return call_method<"getMinimumSize", jni::ref<java::awt::Dimension>>(); }
	void reshape(jint p1, jint p2, jint p3, jint p4) { return call_method<"reshape", void>(p1, p2, p3, p4); }

protected:

	WDialogPeer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WDIALOGPEER
