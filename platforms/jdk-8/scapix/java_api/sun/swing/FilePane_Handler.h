// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/event/MouseListener.h>

#ifndef SCAPIX_JAVA_API_SUN_SWING_FILEPANE_HANDLER_FWD
#define SCAPIX_JAVA_API_SUN_SWING_FILEPANE_HANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::swing { class FilePane_Handler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::swing::FilePane_Handler>
{
	static constexpr fixed_string class_name = "sun/swing/FilePane$Handler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::event::MouseListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_FILEPANE_HANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SWING_FILEPANE_HANDLER)
#define SCAPIX_JAVA_API_SUN_SWING_FILEPANE_HANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/MouseEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::swing::FilePane_Handler : public jni::object_base<"sun/swing/FilePane$Handler",
	java::lang::Object,
	java::awt::event::MouseListener>
{
public:

	void mouseClicked(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseClicked", void>(p1); }
	void mouseEntered(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseEntered", void>(p1); }
	void mouseExited(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseExited", void>(p1); }
	void mousePressed(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mousePressed", void>(p1); }
	void mouseReleased(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseReleased", void>(p1); }

protected:

	FilePane_Handler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_FILEPANE_HANDLER
