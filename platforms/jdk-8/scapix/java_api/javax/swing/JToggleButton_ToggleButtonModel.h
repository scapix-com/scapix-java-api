// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/DefaultButtonModel.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JTOGGLEBUTTON_TOGGLEBUTTONMODEL_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JTOGGLEBUTTON_TOGGLEBUTTONMODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JToggleButton_ToggleButtonModel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JToggleButton_ToggleButtonModel>
{
	static constexpr fixed_string class_name = "javax/swing/JToggleButton$ToggleButtonModel";
	using base_classes = std::tuple<scapix::java_api::javax::swing::DefaultButtonModel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JTOGGLEBUTTON_TOGGLEBUTTONMODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JTOGGLEBUTTON_TOGGLEBUTTONMODEL)
#define SCAPIX_JAVA_API_JAVAX_SWING_JTOGGLEBUTTON_TOGGLEBUTTONMODEL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::JToggleButton_ToggleButtonModel : public jni::object_base<"javax/swing/JToggleButton$ToggleButtonModel",
	javax::swing::DefaultButtonModel>
{
public:

	static jni::ref<javax::swing::JToggleButton_ToggleButtonModel> new_object() { return base_::new_object(); }
	jboolean isSelected() { return call_method<"isSelected", jboolean>(); }
	void setSelected(jboolean p1) { return call_method<"setSelected", void>(p1); }
	void setPressed(jboolean p1) { return call_method<"setPressed", void>(p1); }

protected:

	JToggleButton_ToggleButtonModel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JTOGGLEBUTTON_TOGGLEBUTTONMODEL
