// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLERELATIONSET_FWD
#define SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLERELATIONSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::accessibility { class AccessibleRelationSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::accessibility::AccessibleRelationSet>
{
	static constexpr fixed_string class_name = "javax/accessibility/AccessibleRelationSet";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLERELATIONSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLERELATIONSET)
#define SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLERELATIONSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/accessibility/AccessibleRelation.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::accessibility::AccessibleRelationSet : public jni::object_base<"javax/accessibility/AccessibleRelationSet",
	java::lang::Object>
{
public:

	static jni::ref<javax::accessibility::AccessibleRelationSet> new_object() { return base_::new_object(); }
	static jni::ref<javax::accessibility::AccessibleRelationSet> new_object(jni::ref<jni::array<javax::accessibility::AccessibleRelation>> p1) { return base_::new_object(p1); }
	jboolean add(jni::ref<javax::accessibility::AccessibleRelation> p1) { return call_method<"add", jboolean>(p1); }
	void addAll(jni::ref<jni::array<javax::accessibility::AccessibleRelation>> p1) { return call_method<"addAll", void>(p1); }
	jboolean remove(jni::ref<javax::accessibility::AccessibleRelation> p1) { return call_method<"remove", jboolean>(p1); }
	void clear() { return call_method<"clear", void>(); }
	jint size() { return call_method<"size", jint>(); }
	jboolean contains(jni::ref<java::lang::String> p1) { return call_method<"contains", jboolean>(p1); }
	jni::ref<javax::accessibility::AccessibleRelation> get(jni::ref<java::lang::String> p1) { return call_method<"get", jni::ref<javax::accessibility::AccessibleRelation>>(p1); }
	jni::ref<jni::array<javax::accessibility::AccessibleRelation>> toArray() { return call_method<"toArray", jni::ref<jni::array<javax::accessibility::AccessibleRelation>>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AccessibleRelationSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLERELATIONSET
