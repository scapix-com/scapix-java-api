// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/beans/PropertyChangeListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOLORCHOOSERUI_PROPERTYHANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOLORCHOOSERUI_PROPERTYHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicColorChooserUI_PropertyHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicColorChooserUI_PropertyHandler>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicColorChooserUI$PropertyHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::beans::PropertyChangeListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOLORCHOOSERUI_PROPERTYHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOLORCHOOSERUI_PROPERTYHANDLER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOLORCHOOSERUI_PROPERTYHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/beans/PropertyChangeEvent.h>
#include <scapix/java_api/javax/swing/plaf/basic/BasicColorChooserUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::basic::BasicColorChooserUI_PropertyHandler : public jni::object_base<"javax/swing/plaf/basic/BasicColorChooserUI$PropertyHandler",
	java::lang::Object,
	java::beans::PropertyChangeListener>
{
public:

	static jni::ref<javax::swing::plaf::basic::BasicColorChooserUI_PropertyHandler> new_object(jni::ref<javax::swing::plaf::basic::BasicColorChooserUI> p1) { return base_::new_object(p1); }
	void propertyChange(jni::ref<java::beans::PropertyChangeEvent> p1) { return call_method<"propertyChange", void>(p1); }

protected:

	BasicColorChooserUI_PropertyHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOLORCHOOSERUI_PROPERTYHANDLER
