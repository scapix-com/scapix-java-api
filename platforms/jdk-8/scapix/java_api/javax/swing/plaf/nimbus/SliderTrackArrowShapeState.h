// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/nimbus/State.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_SLIDERTRACKARROWSHAPESTATE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_SLIDERTRACKARROWSHAPESTATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::nimbus { class SliderTrackArrowShapeState; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::nimbus::SliderTrackArrowShapeState>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/nimbus/SliderTrackArrowShapeState";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::nimbus::State>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_SLIDERTRACKARROWSHAPESTATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_SLIDERTRACKARROWSHAPESTATE)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_SLIDERTRACKARROWSHAPESTATE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::nimbus::SliderTrackArrowShapeState : public jni::object_base<"javax/swing/plaf/nimbus/SliderTrackArrowShapeState",
	javax::swing::plaf::nimbus::State>
{
public:


protected:

	SliderTrackArrowShapeState(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_SLIDERTRACKARROWSHAPESTATE
