// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/awt/SunGraphicsCallback.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_SUNGRAPHICSCALLBACK_PRINTHEAVYWEIGHTCOMPONENTSCALLBACK_FWD
#define SCAPIX_JAVA_API_SUN_AWT_SUNGRAPHICSCALLBACK_PRINTHEAVYWEIGHTCOMPONENTSCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class SunGraphicsCallback_PrintHeavyweightComponentsCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::SunGraphicsCallback_PrintHeavyweightComponentsCallback>
{
	static constexpr fixed_string class_name = "sun/awt/SunGraphicsCallback$PrintHeavyweightComponentsCallback";
	using base_classes = std::tuple<scapix::java_api::sun::awt::SunGraphicsCallback>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_SUNGRAPHICSCALLBACK_PRINTHEAVYWEIGHTCOMPONENTSCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_SUNGRAPHICSCALLBACK_PRINTHEAVYWEIGHTCOMPONENTSCALLBACK)
#define SCAPIX_JAVA_API_SUN_AWT_SUNGRAPHICSCALLBACK_PRINTHEAVYWEIGHTCOMPONENTSCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Graphics.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::SunGraphicsCallback_PrintHeavyweightComponentsCallback : public jni::object_base<"sun/awt/SunGraphicsCallback$PrintHeavyweightComponentsCallback",
	sun::awt::SunGraphicsCallback>
{
public:

	void run(jni::ref<java::awt::Component> p1, jni::ref<java::awt::Graphics> p2) { return call_method<"run", void>(p1, p2); }
	static jni::ref<sun::awt::SunGraphicsCallback_PrintHeavyweightComponentsCallback> getInstance() { return call_static_method<"getInstance", jni::ref<sun::awt::SunGraphicsCallback_PrintHeavyweightComponentsCallback>>(); }

protected:

	SunGraphicsCallback_PrintHeavyweightComponentsCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_SUNGRAPHICSCALLBACK_PRINTHEAVYWEIGHTCOMPONENTSCALLBACK
