// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_SCROLLABLE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_SCROLLABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class Scrollable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::Scrollable>
{
	static constexpr fixed_string class_name = "javax/swing/Scrollable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_SCROLLABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_SCROLLABLE)
#define SCAPIX_JAVA_API_JAVAX_SWING_SCROLLABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::Scrollable : public jni::object_base<"javax/swing/Scrollable",
	java::lang::Object>
{
public:

	jni::ref<java::awt::Dimension> getPreferredScrollableViewportSize() { return call_method<"getPreferredScrollableViewportSize", jni::ref<java::awt::Dimension>>(); }
	jint getScrollableUnitIncrement(jni::ref<java::awt::Rectangle> p1, jint p2, jint p3) { return call_method<"getScrollableUnitIncrement", jint>(p1, p2, p3); }
	jint getScrollableBlockIncrement(jni::ref<java::awt::Rectangle> p1, jint p2, jint p3) { return call_method<"getScrollableBlockIncrement", jint>(p1, p2, p3); }
	jboolean getScrollableTracksViewportWidth() { return call_method<"getScrollableTracksViewportWidth", jboolean>(); }
	jboolean getScrollableTracksViewportHeight() { return call_method<"getScrollableTracksViewportHeight", jboolean>(); }

protected:

	Scrollable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_SCROLLABLE
