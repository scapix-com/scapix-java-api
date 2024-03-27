// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/event/MouseAdapter.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFMENUMOUSELISTENER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFMENUMOUSELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::motif { class MotifMenuMouseListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::motif::MotifMenuMouseListener>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/motif/MotifMenuMouseListener";
	using base_classes = std::tuple<scapix::java_api::java::awt::event::MouseAdapter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFMENUMOUSELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFMENUMOUSELISTENER)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFMENUMOUSELISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/MouseEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::swing::plaf::motif::MotifMenuMouseListener : public jni::object_base<"com/sun/java/swing/plaf/motif/MotifMenuMouseListener",
	java::awt::event::MouseAdapter>
{
public:

	void mousePressed(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mousePressed", void>(p1); }
	void mouseReleased(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseReleased", void>(p1); }
	void mouseEntered(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseEntered", void>(p1); }
	void mouseExited(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseExited", void>(p1); }

protected:

	MotifMenuMouseListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFMENUMOUSELISTENER
