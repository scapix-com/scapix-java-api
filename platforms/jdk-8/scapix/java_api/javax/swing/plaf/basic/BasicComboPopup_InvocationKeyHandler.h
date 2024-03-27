// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/event/KeyAdapter.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOPOPUP_INVOCATIONKEYHANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOPOPUP_INVOCATIONKEYHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicComboPopup_InvocationKeyHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicComboPopup_InvocationKeyHandler>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicComboPopup$InvocationKeyHandler";
	using base_classes = std::tuple<scapix::java_api::java::awt::event::KeyAdapter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOPOPUP_INVOCATIONKEYHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOPOPUP_INVOCATIONKEYHANDLER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOPOPUP_INVOCATIONKEYHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/KeyEvent.h>
#include <scapix/java_api/javax/swing/plaf/basic/BasicComboPopup.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::basic::BasicComboPopup_InvocationKeyHandler : public jni::object_base<"javax/swing/plaf/basic/BasicComboPopup$InvocationKeyHandler",
	java::awt::event::KeyAdapter>
{
public:

	static jni::ref<javax::swing::plaf::basic::BasicComboPopup_InvocationKeyHandler> new_object(jni::ref<javax::swing::plaf::basic::BasicComboPopup> p1) { return base_::new_object(p1); }
	void keyReleased(jni::ref<java::awt::event::KeyEvent> p1) { return call_method<"keyReleased", void>(p1); }

protected:

	BasicComboPopup_InvocationKeyHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOMBOPOPUP_INVOCATIONKEYHANDLER