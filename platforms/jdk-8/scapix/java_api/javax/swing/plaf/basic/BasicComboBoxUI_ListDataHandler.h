// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/event/ListDataListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOBOXUI_LISTDATAHANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOBOXUI_LISTDATAHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicComboBoxUI_ListDataHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicComboBoxUI_ListDataHandler>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicComboBoxUI$ListDataHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::event::ListDataListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOBOXUI_LISTDATAHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOBOXUI_LISTDATAHANDLER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOBOXUI_LISTDATAHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/event/ListDataEvent.h>
#include <scapix/java_api/javax/swing/plaf/basic/BasicComboBoxUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::basic::BasicComboBoxUI_ListDataHandler : public jni::object_base<"javax/swing/plaf/basic/BasicComboBoxUI$ListDataHandler",
	java::lang::Object,
	javax::swing::event::ListDataListener>
{
public:

	static jni::ref<javax::swing::plaf::basic::BasicComboBoxUI_ListDataHandler> new_object(jni::ref<javax::swing::plaf::basic::BasicComboBoxUI> p1) { return base_::new_object(p1); }
	void contentsChanged(jni::ref<javax::swing::event::ListDataEvent> p1) { return call_method<"contentsChanged", void>(p1); }
	void intervalAdded(jni::ref<javax::swing::event::ListDataEvent> p1) { return call_method<"intervalAdded", void>(p1); }
	void intervalRemoved(jni::ref<javax::swing::event::ListDataEvent> p1) { return call_method<"intervalRemoved", void>(p1); }

protected:

	BasicComboBoxUI_ListDataHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOBOXUI_LISTDATAHANDLER
