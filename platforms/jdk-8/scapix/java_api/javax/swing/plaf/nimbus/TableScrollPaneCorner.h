// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/plaf/UIResource.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_TABLESCROLLPANECORNER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_TABLESCROLLPANECORNER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::nimbus { class TableScrollPaneCorner; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::nimbus::TableScrollPaneCorner>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/nimbus/TableScrollPaneCorner";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JComponent, scapix::java_api::javax::swing::plaf::UIResource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_TABLESCROLLPANECORNER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_TABLESCROLLPANECORNER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_TABLESCROLLPANECORNER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::nimbus::TableScrollPaneCorner : public jni::object_base<"javax/swing/plaf/nimbus/TableScrollPaneCorner",
	javax::swing::JComponent,
	javax::swing::plaf::UIResource>
{
public:


protected:

	TableScrollPaneCorner(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_TABLESCROLLPANECORNER