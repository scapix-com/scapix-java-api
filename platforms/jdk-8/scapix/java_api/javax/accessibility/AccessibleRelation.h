// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/accessibility/AccessibleBundle.h>

#ifndef SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLERELATION_FWD
#define SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLERELATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::accessibility { class AccessibleRelation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::accessibility::AccessibleRelation>
{
	static constexpr fixed_string class_name = "javax/accessibility/AccessibleRelation";
	using base_classes = std::tuple<scapix::java_api::javax::accessibility::AccessibleBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLERELATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLERELATION)
#define SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLERELATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::accessibility::AccessibleRelation : public jni::object_base<"javax/accessibility/AccessibleRelation",
	javax::accessibility::AccessibleBundle>
{
public:

	static jni::ref<java::lang::String> LABEL_FOR() { return get_static_field<"LABEL_FOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LABELED_BY() { return get_static_field<"LABELED_BY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MEMBER_OF() { return get_static_field<"MEMBER_OF", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CONTROLLER_FOR() { return get_static_field<"CONTROLLER_FOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CONTROLLED_BY() { return get_static_field<"CONTROLLED_BY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FLOWS_TO() { return get_static_field<"FLOWS_TO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FLOWS_FROM() { return get_static_field<"FLOWS_FROM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUBWINDOW_OF() { return get_static_field<"SUBWINDOW_OF", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PARENT_WINDOW_OF() { return get_static_field<"PARENT_WINDOW_OF", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EMBEDS() { return get_static_field<"EMBEDS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EMBEDDED_BY() { return get_static_field<"EMBEDDED_BY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CHILD_NODE_OF() { return get_static_field<"CHILD_NODE_OF", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LABEL_FOR_PROPERTY() { return get_static_field<"LABEL_FOR_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LABELED_BY_PROPERTY() { return get_static_field<"LABELED_BY_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MEMBER_OF_PROPERTY() { return get_static_field<"MEMBER_OF_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CONTROLLER_FOR_PROPERTY() { return get_static_field<"CONTROLLER_FOR_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CONTROLLED_BY_PROPERTY() { return get_static_field<"CONTROLLED_BY_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FLOWS_TO_PROPERTY() { return get_static_field<"FLOWS_TO_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FLOWS_FROM_PROPERTY() { return get_static_field<"FLOWS_FROM_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUBWINDOW_OF_PROPERTY() { return get_static_field<"SUBWINDOW_OF_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PARENT_WINDOW_OF_PROPERTY() { return get_static_field<"PARENT_WINDOW_OF_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EMBEDS_PROPERTY() { return get_static_field<"EMBEDS_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EMBEDDED_BY_PROPERTY() { return get_static_field<"EMBEDDED_BY_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CHILD_NODE_OF_PROPERTY() { return get_static_field<"CHILD_NODE_OF_PROPERTY", jni::ref<java::lang::String>>(); }

	static jni::ref<javax::accessibility::AccessibleRelation> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::accessibility::AccessibleRelation> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::accessibility::AccessibleRelation> new_object(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::Object>> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> getKey() { return call_method<"getKey", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::lang::Object>> getTarget() { return call_method<"getTarget", jni::ref<jni::array<java::lang::Object>>>(); }
	void setTarget(jni::ref<java::lang::Object> p1) { return call_method<"setTarget", void>(p1); }
	void setTarget(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"setTarget", void>(p1); }

protected:

	AccessibleRelation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLERELATION
