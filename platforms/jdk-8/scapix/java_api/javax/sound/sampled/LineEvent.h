// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/EventObject.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_LINEEVENT_FWD
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_LINEEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sound::sampled { class LineEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sound::sampled::LineEvent>
{
	static constexpr fixed_string class_name = "javax/sound/sampled/LineEvent";
	using base_classes = std::tuple<scapix::java_api::java::util::EventObject>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_LINEEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_LINEEVENT)
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_LINEEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/sound/sampled/Line.h>
#include <scapix/java_api/javax/sound/sampled/LineEvent_Type.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sound::sampled::LineEvent : public jni::object_base<"javax/sound/sampled/LineEvent",
	java::util::EventObject>
{
public:

	using Type = LineEvent_Type;

	static jni::ref<javax::sound::sampled::LineEvent> new_object(jni::ref<javax::sound::sampled::Line> p1, jni::ref<javax::sound::sampled::LineEvent_Type> p2, jlong p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<javax::sound::sampled::Line> getLine() { return call_method<"getLine", jni::ref<javax::sound::sampled::Line>>(); }
	jni::ref<javax::sound::sampled::LineEvent_Type> getType() { return call_method<"getType", jni::ref<javax::sound::sampled::LineEvent_Type>>(); }
	jlong getFramePosition() { return call_method<"getFramePosition", jlong>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	LineEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_LINEEVENT