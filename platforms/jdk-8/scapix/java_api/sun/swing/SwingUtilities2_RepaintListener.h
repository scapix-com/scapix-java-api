// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SWING_SWINGUTILITIES2_REPAINTLISTENER_FWD
#define SCAPIX_JAVA_API_SUN_SWING_SWINGUTILITIES2_REPAINTLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::swing { class SwingUtilities2_RepaintListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::swing::SwingUtilities2_RepaintListener>
{
	static constexpr fixed_string class_name = "sun/swing/SwingUtilities2$RepaintListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_SWINGUTILITIES2_REPAINTLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SWING_SWINGUTILITIES2_REPAINTLISTENER)
#define SCAPIX_JAVA_API_SUN_SWING_SWINGUTILITIES2_REPAINTLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/JComponent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::swing::SwingUtilities2_RepaintListener : public jni::object_base<"sun/swing/SwingUtilities2$RepaintListener",
	java::lang::Object>
{
public:

	void repaintPerformed(jni::ref<javax::swing::JComponent> p1, jint p2, jint p3, jint p4, jint p5) { return call_method<"repaintPerformed", void>(p1, p2, p3, p4, p5); }

protected:

	SwingUtilities2_RepaintListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_SWINGUTILITIES2_REPAINTLISTENER
