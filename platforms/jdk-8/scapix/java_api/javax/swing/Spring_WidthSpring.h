// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/Spring_AbstractSpring.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_SPRING_WIDTHSPRING_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_SPRING_WIDTHSPRING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class Spring_WidthSpring; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::Spring_WidthSpring>
{
	static constexpr fixed_string class_name = "javax/swing/Spring$WidthSpring";
	using base_classes = std::tuple<scapix::java_api::javax::swing::Spring_AbstractSpring>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_SPRING_WIDTHSPRING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_SPRING_WIDTHSPRING)
#define SCAPIX_JAVA_API_JAVAX_SWING_SPRING_WIDTHSPRING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::Spring_WidthSpring : public jni::object_base<"javax/swing/Spring$WidthSpring",
	javax::swing::Spring_AbstractSpring>
{
public:

	static jni::ref<javax::swing::Spring_WidthSpring> new_object(jni::ref<java::awt::Component> p1) { return base_::new_object(p1); }
	jint getMinimumValue() { return call_method<"getMinimumValue", jint>(); }
	jint getPreferredValue() { return call_method<"getPreferredValue", jint>(); }
	jint getMaximumValue() { return call_method<"getMaximumValue", jint>(); }

protected:

	Spring_WidthSpring(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_SPRING_WIDTHSPRING
