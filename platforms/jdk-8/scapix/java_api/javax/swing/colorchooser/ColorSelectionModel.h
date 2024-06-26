// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_COLORSELECTIONMODEL_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_COLORSELECTIONMODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::colorchooser { class ColorSelectionModel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::colorchooser::ColorSelectionModel>
{
	static constexpr fixed_string class_name = "javax/swing/colorchooser/ColorSelectionModel";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_COLORSELECTIONMODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_COLORSELECTIONMODEL)
#define SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_COLORSELECTIONMODEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Color.h>
#include <scapix/java_api/javax/swing/event/ChangeListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::colorchooser::ColorSelectionModel : public jni::object_base<"javax/swing/colorchooser/ColorSelectionModel",
	java::lang::Object>
{
public:

	jni::ref<java::awt::Color> getSelectedColor() { return call_method<"getSelectedColor", jni::ref<java::awt::Color>>(); }
	void setSelectedColor(jni::ref<java::awt::Color> p1) { return call_method<"setSelectedColor", void>(p1); }
	void addChangeListener(jni::ref<javax::swing::event::ChangeListener> p1) { return call_method<"addChangeListener", void>(p1); }
	void removeChangeListener(jni::ref<javax::swing::event::ChangeListener> p1) { return call_method<"removeChangeListener", void>(p1); }

protected:

	ColorSelectionModel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_COLORCHOOSER_COLORSELECTIONMODEL
