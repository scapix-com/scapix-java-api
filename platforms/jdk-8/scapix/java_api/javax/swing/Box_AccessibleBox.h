// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Container_AccessibleAWTContainer.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_BOX_ACCESSIBLEBOX_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_BOX_ACCESSIBLEBOX_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class Box_AccessibleBox; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::Box_AccessibleBox>
{
	static constexpr fixed_string class_name = "javax/swing/Box$AccessibleBox";
	using base_classes = std::tuple<scapix::java_api::java::awt::Container_AccessibleAWTContainer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_BOX_ACCESSIBLEBOX_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_BOX_ACCESSIBLEBOX)
#define SCAPIX_JAVA_API_JAVAX_SWING_BOX_ACCESSIBLEBOX

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/accessibility/AccessibleRole.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::Box_AccessibleBox : public jni::object_base<"javax/swing/Box$AccessibleBox",
	java::awt::Container_AccessibleAWTContainer>
{
public:

	jni::ref<javax::accessibility::AccessibleRole> getAccessibleRole() { return call_method<"getAccessibleRole", jni::ref<javax::accessibility::AccessibleRole>>(); }

protected:

	Box_AccessibleBox(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_BOX_ACCESSIBLEBOX