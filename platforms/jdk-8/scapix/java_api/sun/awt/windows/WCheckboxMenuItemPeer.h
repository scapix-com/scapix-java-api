// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/awt/windows/WMenuItemPeer.h>
#include <scapix/java_api/java/awt/peer/CheckboxMenuItemPeer.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WCHECKBOXMENUITEMPEER_FWD
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WCHECKBOXMENUITEMPEER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::windows { class WCheckboxMenuItemPeer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::windows::WCheckboxMenuItemPeer>
{
	static constexpr fixed_string class_name = "sun/awt/windows/WCheckboxMenuItemPeer";
	using base_classes = std::tuple<scapix::java_api::sun::awt::windows::WMenuItemPeer, scapix::java_api::java::awt::peer::CheckboxMenuItemPeer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WCHECKBOXMENUITEMPEER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WCHECKBOXMENUITEMPEER)
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WCHECKBOXMENUITEMPEER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::windows::WCheckboxMenuItemPeer : public jni::object_base<"sun/awt/windows/WCheckboxMenuItemPeer",
	sun::awt::windows::WMenuItemPeer,
	java::awt::peer::CheckboxMenuItemPeer>
{
public:

	void setState(jboolean p1) { return call_method<"setState", void>(p1); }
	void handleAction(jboolean p1) { return call_method<"handleAction", void>(p1); }

protected:

	WCheckboxMenuItemPeer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WCHECKBOXMENUITEMPEER