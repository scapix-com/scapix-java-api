// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/accessibility/AccessibleComponent.h>

#ifndef SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLEEXTENDEDCOMPONENT_FWD
#define SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLEEXTENDEDCOMPONENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::accessibility { class AccessibleExtendedComponent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::accessibility::AccessibleExtendedComponent>
{
	static constexpr fixed_string class_name = "javax/accessibility/AccessibleExtendedComponent";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::accessibility::AccessibleComponent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLEEXTENDEDCOMPONENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLEEXTENDEDCOMPONENT)
#define SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLEEXTENDEDCOMPONENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/accessibility/AccessibleKeyBinding.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::accessibility::AccessibleExtendedComponent : public jni::object_base<"javax/accessibility/AccessibleExtendedComponent",
	java::lang::Object,
	javax::accessibility::AccessibleComponent>
{
public:

	jni::ref<java::lang::String> getToolTipText() { return call_method<"getToolTipText", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getTitledBorderText() { return call_method<"getTitledBorderText", jni::ref<java::lang::String>>(); }
	jni::ref<javax::accessibility::AccessibleKeyBinding> getAccessibleKeyBinding() { return call_method<"getAccessibleKeyBinding", jni::ref<javax::accessibility::AccessibleKeyBinding>>(); }

protected:

	AccessibleExtendedComponent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLEEXTENDEDCOMPONENT
