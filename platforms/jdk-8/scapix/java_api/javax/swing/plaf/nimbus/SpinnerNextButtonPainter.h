// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_SPINNERNEXTBUTTONPAINTER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_SPINNERNEXTBUTTONPAINTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::nimbus { class SpinnerNextButtonPainter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::nimbus::SpinnerNextButtonPainter>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/nimbus/SpinnerNextButtonPainter";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::nimbus::AbstractRegionPainter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_SPINNERNEXTBUTTONPAINTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_SPINNERNEXTBUTTONPAINTER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_SPINNERNEXTBUTTONPAINTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/plaf/nimbus/AbstractRegionPainter_PaintContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::nimbus::SpinnerNextButtonPainter : public jni::object_base<"javax/swing/plaf/nimbus/SpinnerNextButtonPainter",
	javax::swing::plaf::nimbus::AbstractRegionPainter>
{
public:

	static jni::ref<javax::swing::plaf::nimbus::SpinnerNextButtonPainter> new_object(jni::ref<javax::swing::plaf::nimbus::AbstractRegionPainter_PaintContext> p1, jint p2) { return base_::new_object(p1, p2); }

protected:

	SpinnerNextButtonPainter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_SPINNERNEXTBUTTONPAINTER
