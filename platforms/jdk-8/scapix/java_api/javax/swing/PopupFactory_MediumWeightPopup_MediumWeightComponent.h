// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Panel.h>
#include <scapix/java_api/javax/swing/SwingHeavyWeight.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_POPUPFACTORY_MEDIUMWEIGHTPOPUP_MEDIUMWEIGHTCOMPONENT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_POPUPFACTORY_MEDIUMWEIGHTPOPUP_MEDIUMWEIGHTCOMPONENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class PopupFactory_MediumWeightPopup_MediumWeightComponent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::PopupFactory_MediumWeightPopup_MediumWeightComponent>
{
	static constexpr fixed_string class_name = "javax/swing/PopupFactory$MediumWeightPopup$MediumWeightComponent";
	using base_classes = std::tuple<scapix::java_api::java::awt::Panel, scapix::java_api::javax::swing::SwingHeavyWeight>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_POPUPFACTORY_MEDIUMWEIGHTPOPUP_MEDIUMWEIGHTCOMPONENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_POPUPFACTORY_MEDIUMWEIGHTPOPUP_MEDIUMWEIGHTCOMPONENT)
#define SCAPIX_JAVA_API_JAVAX_SWING_POPUPFACTORY_MEDIUMWEIGHTPOPUP_MEDIUMWEIGHTCOMPONENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::PopupFactory_MediumWeightPopup_MediumWeightComponent : public jni::object_base<"javax/swing/PopupFactory$MediumWeightPopup$MediumWeightComponent",
	java::awt::Panel,
	javax::swing::SwingHeavyWeight>
{
public:


protected:

	PopupFactory_MediumWeightPopup_MediumWeightComponent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_POPUPFACTORY_MEDIUMWEIGHTPOPUP_MEDIUMWEIGHTCOMPONENT
