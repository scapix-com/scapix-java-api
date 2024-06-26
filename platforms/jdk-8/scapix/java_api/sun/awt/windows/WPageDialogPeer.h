// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/awt/windows/WPrintDialogPeer.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WPAGEDIALOGPEER_FWD
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WPAGEDIALOGPEER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::windows { class WPageDialogPeer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::windows::WPageDialogPeer>
{
	static constexpr fixed_string class_name = "sun/awt/windows/WPageDialogPeer";
	using base_classes = std::tuple<scapix::java_api::sun::awt::windows::WPrintDialogPeer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WPAGEDIALOGPEER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WPAGEDIALOGPEER)
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WPAGEDIALOGPEER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::windows::WPageDialogPeer : public jni::object_base<"sun/awt/windows/WPageDialogPeer",
	sun::awt::windows::WPrintDialogPeer>
{
public:

	void show() { return call_method<"show", void>(); }

protected:

	WPageDialogPeer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WPAGEDIALOGPEER
