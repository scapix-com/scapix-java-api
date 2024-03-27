// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_SUNGRAPHICSCALLBACK_FWD
#define SCAPIX_JAVA_API_SUN_AWT_SUNGRAPHICSCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class SunGraphicsCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::SunGraphicsCallback>
{
	static constexpr fixed_string class_name = "sun/awt/SunGraphicsCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_SUNGRAPHICSCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_SUNGRAPHICSCALLBACK)
#define SCAPIX_JAVA_API_SUN_AWT_SUNGRAPHICSCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/awt/Shape.h>
#include <scapix/java_api/sun/awt/SunGraphicsCallback_PaintHeavyweightComponentsCallback.h>
#include <scapix/java_api/sun/awt/SunGraphicsCallback_PrintHeavyweightComponentsCallback.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::SunGraphicsCallback : public jni::object_base<"sun/awt/SunGraphicsCallback",
	java::lang::Object>
{
public:

	using PaintHeavyweightComponentsCallback = SunGraphicsCallback_PaintHeavyweightComponentsCallback;
	using PrintHeavyweightComponentsCallback = SunGraphicsCallback_PrintHeavyweightComponentsCallback;

	static jint HEAVYWEIGHTS() { return get_static_field<"HEAVYWEIGHTS", jint>(); }
	static jint LIGHTWEIGHTS() { return get_static_field<"LIGHTWEIGHTS", jint>(); }
	static jint TWO_PASSES() { return get_static_field<"TWO_PASSES", jint>(); }

	static jni::ref<sun::awt::SunGraphicsCallback> new_object() { return base_::new_object(); }
	void run(jni::ref<java::awt::Component> p1, jni::ref<java::awt::Graphics> p2) { return call_method<"run", void>(p1, p2); }
	void runOneComponent(jni::ref<java::awt::Component> p1, jni::ref<java::awt::Rectangle> p2, jni::ref<java::awt::Graphics> p3, jni::ref<java::awt::Shape> p4, jint p5) { return call_method<"runOneComponent", void>(p1, p2, p3, p4, p5); }
	void runComponents(jni::ref<jni::array<java::awt::Component>> p1, jni::ref<java::awt::Graphics> p2, jint p3) { return call_method<"runComponents", void>(p1, p2, p3); }

protected:

	SunGraphicsCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_SUNGRAPHICSCALLBACK
