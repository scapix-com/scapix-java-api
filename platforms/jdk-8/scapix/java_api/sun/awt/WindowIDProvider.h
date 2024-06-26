// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_WINDOWIDPROVIDER_FWD
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWIDPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class WindowIDProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::WindowIDProvider>
{
	static constexpr fixed_string class_name = "sun/awt/WindowIDProvider";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWIDPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_WINDOWIDPROVIDER)
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWIDPROVIDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::WindowIDProvider : public jni::object_base<"sun/awt/WindowIDProvider",
	java::lang::Object>
{
public:

	jlong getWindow() { return call_method<"getWindow", jlong>(); }

protected:

	WindowIDProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWIDPROVIDER
