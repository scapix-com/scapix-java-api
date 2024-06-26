// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/Spring.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_SPRINGLAYOUT_SPRINGPROXY_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_SPRINGLAYOUT_SPRINGPROXY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class SpringLayout_SpringProxy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::SpringLayout_SpringProxy>
{
	static constexpr fixed_string class_name = "javax/swing/SpringLayout$SpringProxy";
	using base_classes = std::tuple<scapix::java_api::javax::swing::Spring>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_SPRINGLAYOUT_SPRINGPROXY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_SPRINGLAYOUT_SPRINGPROXY)
#define SCAPIX_JAVA_API_JAVAX_SWING_SPRINGLAYOUT_SPRINGPROXY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/SpringLayout.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::SpringLayout_SpringProxy : public jni::object_base<"javax/swing/SpringLayout$SpringProxy",
	javax::swing::Spring>
{
public:

	static jni::ref<javax::swing::SpringLayout_SpringProxy> new_object(jni::ref<java::lang::String> p1, jni::ref<java::awt::Component> p2, jni::ref<javax::swing::SpringLayout> p3) { return base_::new_object(p1, p2, p3); }
	jint getMinimumValue() { return call_method<"getMinimumValue", jint>(); }
	jint getPreferredValue() { return call_method<"getPreferredValue", jint>(); }
	jint getMaximumValue() { return call_method<"getMaximumValue", jint>(); }
	jint getValue() { return call_method<"getValue", jint>(); }
	void setValue(jint p1) { return call_method<"setValue", void>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	SpringLayout_SpringProxy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_SPRINGLAYOUT_SPRINGPROXY
