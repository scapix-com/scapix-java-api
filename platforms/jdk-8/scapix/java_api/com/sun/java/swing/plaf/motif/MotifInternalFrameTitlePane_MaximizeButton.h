// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane_FrameButton.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFINTERNALFRAMETITLEPANE_MAXIMIZEBUTTON_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFINTERNALFRAMETITLEPANE_MAXIMIZEBUTTON_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::motif { class MotifInternalFrameTitlePane_MaximizeButton; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane_MaximizeButton>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$MaximizeButton";
	using base_classes = std::tuple<scapix::java_api::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane_FrameButton>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFINTERNALFRAMETITLEPANE_MAXIMIZEBUTTON_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFINTERNALFRAMETITLEPANE_MAXIMIZEBUTTON)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFINTERNALFRAMETITLEPANE_MAXIMIZEBUTTON

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Graphics.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane_MaximizeButton : public jni::object_base<"com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$MaximizeButton",
	com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane_FrameButton>
{
public:

	void paintComponent(jni::ref<java::awt::Graphics> p1) { return call_method<"paintComponent", void>(p1); }

protected:

	MotifInternalFrameTitlePane_MaximizeButton(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFINTERNALFRAMETITLEPANE_MAXIMIZEBUTTON
