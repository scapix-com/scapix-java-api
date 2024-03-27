// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/awt/PlatformFont.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WFONTPEER_FWD
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WFONTPEER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::windows { class WFontPeer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::windows::WFontPeer>
{
	static constexpr fixed_string class_name = "sun/awt/windows/WFontPeer";
	using base_classes = std::tuple<scapix::java_api::sun::awt::PlatformFont>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WFONTPEER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WFONTPEER)
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WFONTPEER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::windows::WFontPeer : public jni::object_base<"sun/awt/windows/WFontPeer",
	sun::awt::PlatformFont>
{
public:

	static jni::ref<sun::awt::windows::WFontPeer> new_object(jni::ref<java::lang::String> p1, jint p2) { return base_::new_object(p1, p2); }

protected:

	WFontPeer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WFONTPEER