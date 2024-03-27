// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WCOLOR_FWD
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WCOLOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::windows { class WColor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::windows::WColor>
{
	static constexpr fixed_string class_name = "sun/awt/windows/WColor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WCOLOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WCOLOR)
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WCOLOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::windows::WColor : public jni::object_base<"sun/awt/windows/WColor",
	java::lang::Object>
{
public:


protected:

	WColor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WCOLOR
