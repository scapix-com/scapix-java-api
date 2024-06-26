// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WDESKTOPPROPERTIES_FWD
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WDESKTOPPROPERTIES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::windows { class WDesktopProperties; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::windows::WDesktopProperties>
{
	static constexpr fixed_string class_name = "sun/awt/windows/WDesktopProperties";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WDESKTOPPROPERTIES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WDESKTOPPROPERTIES)
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WDESKTOPPROPERTIES

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::windows::WDesktopProperties : public jni::object_base<"sun/awt/windows/WDesktopProperties",
	java::lang::Object>
{
public:


protected:

	WDesktopProperties(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WDESKTOPPROPERTIES
