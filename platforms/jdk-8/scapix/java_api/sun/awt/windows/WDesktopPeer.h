// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/peer/DesktopPeer.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WDESKTOPPEER_FWD
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WDESKTOPPEER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::windows { class WDesktopPeer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::windows::WDesktopPeer>
{
	static constexpr fixed_string class_name = "sun/awt/windows/WDesktopPeer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::peer::DesktopPeer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WDESKTOPPEER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WDESKTOPPEER)
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WDESKTOPPEER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Desktop_Action.h>
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/net/URI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::windows::WDesktopPeer : public jni::object_base<"sun/awt/windows/WDesktopPeer",
	java::lang::Object,
	java::awt::peer::DesktopPeer>
{
public:

	jboolean isSupported(jni::ref<java::awt::Desktop_Action> p1) { return call_method<"isSupported", jboolean>(p1); }
	void open(jni::ref<java::io::File> p1) { return call_method<"open", void>(p1); }
	void edit(jni::ref<java::io::File> p1) { return call_method<"edit", void>(p1); }
	void print(jni::ref<java::io::File> p1) { return call_method<"print", void>(p1); }
	void mail(jni::ref<java::net::URI> p1) { return call_method<"mail", void>(p1); }
	void browse(jni::ref<java::net::URI> p1) { return call_method<"browse", void>(p1); }

protected:

	WDesktopPeer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WDESKTOPPEER