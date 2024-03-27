// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/PopupFactory_ContainerPopup.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_POPUPFACTORY_HEADLESSPOPUP_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_POPUPFACTORY_HEADLESSPOPUP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class PopupFactory_HeadlessPopup; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::PopupFactory_HeadlessPopup>
{
	static constexpr fixed_string class_name = "javax/swing/PopupFactory$HeadlessPopup";
	using base_classes = std::tuple<scapix::java_api::javax::swing::PopupFactory_ContainerPopup>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_POPUPFACTORY_HEADLESSPOPUP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_POPUPFACTORY_HEADLESSPOPUP)
#define SCAPIX_JAVA_API_JAVAX_SWING_POPUPFACTORY_HEADLESSPOPUP

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::PopupFactory_HeadlessPopup : public jni::object_base<"javax/swing/PopupFactory$HeadlessPopup",
	javax::swing::PopupFactory_ContainerPopup>
{
public:

	void show() { return call_method<"show", void>(); }
	void hide() { return call_method<"hide", void>(); }

protected:

	PopupFactory_HeadlessPopup(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_POPUPFACTORY_HEADLESSPOPUP
