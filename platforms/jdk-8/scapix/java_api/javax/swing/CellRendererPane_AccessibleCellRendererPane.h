// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Container_AccessibleAWTContainer.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_CELLRENDERERPANE_ACCESSIBLECELLRENDERERPANE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_CELLRENDERERPANE_ACCESSIBLECELLRENDERERPANE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class CellRendererPane_AccessibleCellRendererPane; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::CellRendererPane_AccessibleCellRendererPane>
{
	static constexpr fixed_string class_name = "javax/swing/CellRendererPane$AccessibleCellRendererPane";
	using base_classes = std::tuple<scapix::java_api::java::awt::Container_AccessibleAWTContainer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_CELLRENDERERPANE_ACCESSIBLECELLRENDERERPANE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_CELLRENDERERPANE_ACCESSIBLECELLRENDERERPANE)
#define SCAPIX_JAVA_API_JAVAX_SWING_CELLRENDERERPANE_ACCESSIBLECELLRENDERERPANE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/accessibility/AccessibleRole.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::CellRendererPane_AccessibleCellRendererPane : public jni::object_base<"javax/swing/CellRendererPane$AccessibleCellRendererPane",
	java::awt::Container_AccessibleAWTContainer>
{
public:

	jni::ref<javax::accessibility::AccessibleRole> getAccessibleRole() { return call_method<"getAccessibleRole", jni::ref<javax::accessibility::AccessibleRole>>(); }

protected:

	CellRendererPane_AccessibleCellRendererPane(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_CELLRENDERERPANE_ACCESSIBLECELLRENDERERPANE