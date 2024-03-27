// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/Spring_StaticSpring.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_SPRING_COMPOUNDSPRING_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_SPRING_COMPOUNDSPRING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class Spring_CompoundSpring; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::Spring_CompoundSpring>
{
	static constexpr fixed_string class_name = "javax/swing/Spring$CompoundSpring";
	using base_classes = std::tuple<scapix::java_api::javax::swing::Spring_StaticSpring>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_SPRING_COMPOUNDSPRING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_SPRING_COMPOUNDSPRING)
#define SCAPIX_JAVA_API_JAVAX_SWING_SPRING_COMPOUNDSPRING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/Spring.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::Spring_CompoundSpring : public jni::object_base<"javax/swing/Spring$CompoundSpring",
	javax::swing::Spring_StaticSpring>
{
public:

	static jni::ref<javax::swing::Spring_CompoundSpring> new_object(jni::ref<javax::swing::Spring> p1, jni::ref<javax::swing::Spring> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint getMinimumValue() { return call_method<"getMinimumValue", jint>(); }
	jint getPreferredValue() { return call_method<"getPreferredValue", jint>(); }
	jint getMaximumValue() { return call_method<"getMaximumValue", jint>(); }
	jint getValue() { return call_method<"getValue", jint>(); }

protected:

	Spring_CompoundSpring(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_SPRING_COMPOUNDSPRING