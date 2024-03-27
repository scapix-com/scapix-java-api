// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_DESKTOPBROWSE_FWD
#define SCAPIX_JAVA_API_SUN_AWT_DESKTOPBROWSE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class DesktopBrowse; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::DesktopBrowse>
{
	static constexpr fixed_string class_name = "sun/awt/DesktopBrowse";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_DESKTOPBROWSE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_DESKTOPBROWSE)
#define SCAPIX_JAVA_API_SUN_AWT_DESKTOPBROWSE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/net/URL.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::DesktopBrowse : public jni::object_base<"sun/awt/DesktopBrowse",
	java::lang::Object>
{
public:

	static jni::ref<sun::awt::DesktopBrowse> new_object() { return base_::new_object(); }
	static void setInstance(jni::ref<sun::awt::DesktopBrowse> p1) { return call_static_method<"setInstance", void>(p1); }
	static jni::ref<sun::awt::DesktopBrowse> getInstance() { return call_static_method<"getInstance", jni::ref<sun::awt::DesktopBrowse>>(); }
	void browse(jni::ref<java::net::URL> p1) { return call_method<"browse", void>(p1); }

protected:

	DesktopBrowse(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_DESKTOPBROWSE