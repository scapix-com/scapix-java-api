// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_DRAGRECOGNITIONSUPPORT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_DRAGRECOGNITIONSUPPORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class DragRecognitionSupport; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::DragRecognitionSupport>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/DragRecognitionSupport";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_DRAGRECOGNITIONSUPPORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_DRAGRECOGNITIONSUPPORT)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_DRAGRECOGNITIONSUPPORT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/MouseEvent.h>
#include <scapix/java_api/javax/swing/plaf/basic/DragRecognitionSupport_BeforeDrag.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::basic::DragRecognitionSupport : public jni::object_base<"javax/swing/plaf/basic/DragRecognitionSupport",
	java::lang::Object>
{
public:

	using BeforeDrag = DragRecognitionSupport_BeforeDrag;

	static jboolean mousePressed(jni::ref<java::awt::event::MouseEvent> p1) { return call_static_method<"mousePressed", jboolean>(p1); }
	static jni::ref<java::awt::event::MouseEvent> mouseReleased(jni::ref<java::awt::event::MouseEvent> p1) { return call_static_method<"mouseReleased", jni::ref<java::awt::event::MouseEvent>>(p1); }
	static jboolean mouseDragged(jni::ref<java::awt::event::MouseEvent> p1, jni::ref<javax::swing::plaf::basic::DragRecognitionSupport_BeforeDrag> p2) { return call_static_method<"mouseDragged", jboolean>(p1, p2); }

protected:

	DragRecognitionSupport(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_DRAGRECOGNITIONSUPPORT