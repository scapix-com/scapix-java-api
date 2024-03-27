// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/swing/UIAction.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEHEADERUI_ACTIONS_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEHEADERUI_ACTIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicTableHeaderUI_Actions; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicTableHeaderUI_Actions>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicTableHeaderUI$Actions";
	using base_classes = std::tuple<scapix::java_api::sun::swing::UIAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEHEADERUI_ACTIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEHEADERUI_ACTIONS)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEHEADERUI_ACTIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::basic::BasicTableHeaderUI_Actions : public jni::object_base<"javax/swing/plaf/basic/BasicTableHeaderUI$Actions",
	sun::swing::UIAction>
{
public:

	static jni::ref<java::lang::String> TOGGLE_SORT_ORDER() { return get_static_field<"TOGGLE_SORT_ORDER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SELECT_COLUMN_TO_LEFT() { return get_static_field<"SELECT_COLUMN_TO_LEFT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SELECT_COLUMN_TO_RIGHT() { return get_static_field<"SELECT_COLUMN_TO_RIGHT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MOVE_COLUMN_LEFT() { return get_static_field<"MOVE_COLUMN_LEFT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MOVE_COLUMN_RIGHT() { return get_static_field<"MOVE_COLUMN_RIGHT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RESIZE_LEFT() { return get_static_field<"RESIZE_LEFT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RESIZE_RIGHT() { return get_static_field<"RESIZE_RIGHT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FOCUS_TABLE() { return get_static_field<"FOCUS_TABLE", jni::ref<java::lang::String>>(); }

	static jni::ref<javax::swing::plaf::basic::BasicTableHeaderUI_Actions> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jboolean isEnabled(jni::ref<java::lang::Object> p1) { return call_method<"isEnabled", jboolean>(p1); }
	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }

protected:

	BasicTableHeaderUI_Actions(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEHEADERUI_ACTIONS