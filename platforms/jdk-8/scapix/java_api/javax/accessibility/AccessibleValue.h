// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLEVALUE_FWD
#define SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLEVALUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::accessibility { class AccessibleValue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::accessibility::AccessibleValue>
{
	static constexpr fixed_string class_name = "javax/accessibility/AccessibleValue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLEVALUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLEVALUE)
#define SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLEVALUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Number.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::accessibility::AccessibleValue : public jni::object_base<"javax/accessibility/AccessibleValue",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Number> getCurrentAccessibleValue() { return call_method<"getCurrentAccessibleValue", jni::ref<java::lang::Number>>(); }
	jboolean setCurrentAccessibleValue(jni::ref<java::lang::Number> p1) { return call_method<"setCurrentAccessibleValue", jboolean>(p1); }
	jni::ref<java::lang::Number> getMinimumAccessibleValue() { return call_method<"getMinimumAccessibleValue", jni::ref<java::lang::Number>>(); }
	jni::ref<java::lang::Number> getMaximumAccessibleValue() { return call_method<"getMaximumAccessibleValue", jni::ref<java::lang::Number>>(); }

protected:

	AccessibleValue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLEVALUE
