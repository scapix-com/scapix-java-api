// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SF2MODULATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SF2MODULATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::media::sound { class SF2Modulator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::media::sound::SF2Modulator>
{
	static constexpr fixed_string class_name = "com/sun/media/sound/SF2Modulator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SF2MODULATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SF2MODULATOR)
#define SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SF2MODULATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::media::sound::SF2Modulator : public jni::object_base<"com/sun/media/sound/SF2Modulator",
	java::lang::Object>
{
public:

	static jint SOURCE_NONE() { return get_static_field<"SOURCE_NONE", jint>(); }
	static jint SOURCE_NOTE_ON_VELOCITY() { return get_static_field<"SOURCE_NOTE_ON_VELOCITY", jint>(); }
	static jint SOURCE_NOTE_ON_KEYNUMBER() { return get_static_field<"SOURCE_NOTE_ON_KEYNUMBER", jint>(); }
	static jint SOURCE_POLY_PRESSURE() { return get_static_field<"SOURCE_POLY_PRESSURE", jint>(); }
	static jint SOURCE_CHANNEL_PRESSURE() { return get_static_field<"SOURCE_CHANNEL_PRESSURE", jint>(); }
	static jint SOURCE_PITCH_WHEEL() { return get_static_field<"SOURCE_PITCH_WHEEL", jint>(); }
	static jint SOURCE_PITCH_SENSITIVITY() { return get_static_field<"SOURCE_PITCH_SENSITIVITY", jint>(); }
	static jint SOURCE_MIDI_CONTROL() { return get_static_field<"SOURCE_MIDI_CONTROL", jint>(); }
	static jint SOURCE_DIRECTION_MIN_MAX() { return get_static_field<"SOURCE_DIRECTION_MIN_MAX", jint>(); }
	static jint SOURCE_DIRECTION_MAX_MIN() { return get_static_field<"SOURCE_DIRECTION_MAX_MIN", jint>(); }
	static jint SOURCE_POLARITY_UNIPOLAR() { return get_static_field<"SOURCE_POLARITY_UNIPOLAR", jint>(); }
	static jint SOURCE_POLARITY_BIPOLAR() { return get_static_field<"SOURCE_POLARITY_BIPOLAR", jint>(); }
	static jint SOURCE_TYPE_LINEAR() { return get_static_field<"SOURCE_TYPE_LINEAR", jint>(); }
	static jint SOURCE_TYPE_CONCAVE() { return get_static_field<"SOURCE_TYPE_CONCAVE", jint>(); }
	static jint SOURCE_TYPE_CONVEX() { return get_static_field<"SOURCE_TYPE_CONVEX", jint>(); }
	static jint SOURCE_TYPE_SWITCH() { return get_static_field<"SOURCE_TYPE_SWITCH", jint>(); }
	static jint TRANSFORM_LINEAR() { return get_static_field<"TRANSFORM_LINEAR", jint>(); }
	static jint TRANSFORM_ABSOLUTE() { return get_static_field<"TRANSFORM_ABSOLUTE", jint>(); }

	static jni::ref<com::sun::media::sound::SF2Modulator> new_object() { return base_::new_object(); }
	jshort getAmount() { return call_method<"getAmount", jshort>(); }
	void setAmount(jshort p1) { return call_method<"setAmount", void>(p1); }
	jint getAmountSourceOperator() { return call_method<"getAmountSourceOperator", jint>(); }
	void setAmountSourceOperator(jint p1) { return call_method<"setAmountSourceOperator", void>(p1); }
	jint getTransportOperator() { return call_method<"getTransportOperator", jint>(); }
	void setTransportOperator(jint p1) { return call_method<"setTransportOperator", void>(p1); }
	jint getDestinationOperator() { return call_method<"getDestinationOperator", jint>(); }
	void setDestinationOperator(jint p1) { return call_method<"setDestinationOperator", void>(p1); }
	jint getSourceOperator() { return call_method<"getSourceOperator", jint>(); }
	void setSourceOperator(jint p1) { return call_method<"setSourceOperator", void>(p1); }

protected:

	SF2Modulator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MEDIA_SOUND_SF2MODULATOR
