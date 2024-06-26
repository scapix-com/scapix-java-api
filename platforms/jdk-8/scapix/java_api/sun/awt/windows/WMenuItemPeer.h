// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/awt/windows/WObjectPeer.h>
#include <scapix/java_api/java/awt/peer/MenuItemPeer.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WMENUITEMPEER_FWD
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WMENUITEMPEER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::windows { class WMenuItemPeer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::windows::WMenuItemPeer>
{
	static constexpr fixed_string class_name = "sun/awt/windows/WMenuItemPeer";
	using base_classes = std::tuple<scapix::java_api::sun::awt::windows::WObjectPeer, scapix::java_api::java::awt::peer::MenuItemPeer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WMENUITEMPEER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WMENUITEMPEER)
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WMENUITEMPEER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Font.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::windows::WMenuItemPeer : public jni::object_base<"sun/awt/windows/WMenuItemPeer",
	sun::awt::windows::WObjectPeer,
	java::awt::peer::MenuItemPeer>
{
public:

	void setEnabled(jboolean p1) { return call_method<"setEnabled", void>(p1); }
	void enable() { return call_method<"enable", void>(); }
	void disable() { return call_method<"disable", void>(); }
	void setLabel(jni::ref<java::lang::String> p1) { return call_method<"setLabel", void>(p1); }
	void _setLabel(jni::ref<java::lang::String> p1) { return call_method<"_setLabel", void>(p1); }
	void setFont(jni::ref<java::awt::Font> p1) { return call_method<"setFont", void>(p1); }

protected:

	WMenuItemPeer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WMENUITEMPEER
