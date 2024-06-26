// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/sound/sampled/Control.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_FLOATCONTROL_FWD
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_FLOATCONTROL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sound::sampled { class FloatControl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sound::sampled::FloatControl>
{
	static constexpr fixed_string class_name = "javax/sound/sampled/FloatControl";
	using base_classes = std::tuple<scapix::java_api::javax::sound::sampled::Control>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_FLOATCONTROL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_FLOATCONTROL)
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_FLOATCONTROL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/sound/sampled/FloatControl_Type.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sound::sampled::FloatControl : public jni::object_base<"javax/sound/sampled/FloatControl",
	javax::sound::sampled::Control>
{
public:

	using Type = FloatControl_Type;

	void setValue(jfloat p1) { return call_method<"setValue", void>(p1); }
	jfloat getValue() { return call_method<"getValue", jfloat>(); }
	jfloat getMaximum() { return call_method<"getMaximum", jfloat>(); }
	jfloat getMinimum() { return call_method<"getMinimum", jfloat>(); }
	jni::ref<java::lang::String> getUnits() { return call_method<"getUnits", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getMinLabel() { return call_method<"getMinLabel", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getMidLabel() { return call_method<"getMidLabel", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getMaxLabel() { return call_method<"getMaxLabel", jni::ref<java::lang::String>>(); }
	jfloat getPrecision() { return call_method<"getPrecision", jfloat>(); }
	jint getUpdatePeriod() { return call_method<"getUpdatePeriod", jint>(); }
	void shift(jfloat p1, jfloat p2, jint p3) { return call_method<"shift", void>(p1, p2, p3); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	FloatControl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_FLOATCONTROL
