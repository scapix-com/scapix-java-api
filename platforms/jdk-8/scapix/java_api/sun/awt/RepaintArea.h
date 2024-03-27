// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_REPAINTAREA_FWD
#define SCAPIX_JAVA_API_SUN_AWT_REPAINTAREA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class RepaintArea; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::RepaintArea>
{
	static constexpr fixed_string class_name = "sun/awt/RepaintArea";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_REPAINTAREA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_REPAINTAREA)
#define SCAPIX_JAVA_API_SUN_AWT_REPAINTAREA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::RepaintArea : public jni::object_base<"sun/awt/RepaintArea",
	java::lang::Object>
{
public:

	static jni::ref<sun::awt::RepaintArea> new_object() { return base_::new_object(); }
	void add(jni::ref<java::awt::Rectangle> p1, jint p2) { return call_method<"add", void>(p1, p2); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	void constrain(jint p1, jint p2, jint p3, jint p4) { return call_method<"constrain", void>(p1, p2, p3, p4); }
	void subtract(jint p1, jint p2, jint p3, jint p4) { return call_method<"subtract", void>(p1, p2, p3, p4); }
	void paint(jni::ref<java::lang::Object> p1, jboolean p2) { return call_method<"paint", void>(p1, p2); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	RepaintArea(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_REPAINTAREA
