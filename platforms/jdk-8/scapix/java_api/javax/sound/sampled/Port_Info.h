// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/sound/sampled/Line_Info.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_PORT_INFO_FWD
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_PORT_INFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sound::sampled { class Port_Info; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sound::sampled::Port_Info>
{
	static constexpr fixed_string class_name = "javax/sound/sampled/Port$Info";
	using base_classes = std::tuple<scapix::java_api::javax::sound::sampled::Line_Info>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_PORT_INFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_PORT_INFO)
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_PORT_INFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sound::sampled::Port_Info : public jni::object_base<"javax/sound/sampled/Port$Info",
	javax::sound::sampled::Line_Info>
{
public:

	static jni::ref<javax::sound::sampled::Port_Info> MICROPHONE() { return get_static_field<"MICROPHONE", jni::ref<javax::sound::sampled::Port_Info>>(); }
	static jni::ref<javax::sound::sampled::Port_Info> LINE_IN() { return get_static_field<"LINE_IN", jni::ref<javax::sound::sampled::Port_Info>>(); }
	static jni::ref<javax::sound::sampled::Port_Info> COMPACT_DISC() { return get_static_field<"COMPACT_DISC", jni::ref<javax::sound::sampled::Port_Info>>(); }
	static jni::ref<javax::sound::sampled::Port_Info> SPEAKER() { return get_static_field<"SPEAKER", jni::ref<javax::sound::sampled::Port_Info>>(); }
	static jni::ref<javax::sound::sampled::Port_Info> HEADPHONE() { return get_static_field<"HEADPHONE", jni::ref<javax::sound::sampled::Port_Info>>(); }
	static jni::ref<javax::sound::sampled::Port_Info> LINE_OUT() { return get_static_field<"LINE_OUT", jni::ref<javax::sound::sampled::Port_Info>>(); }

	static jni::ref<javax::sound::sampled::Port_Info> new_object(jni::ref<java::lang::Class> p1, jni::ref<java::lang::String> p2, jboolean p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jboolean isSource() { return call_method<"isSource", jboolean>(); }
	jboolean matches(jni::ref<javax::sound::sampled::Line_Info> p1) { return call_method<"matches", jboolean>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Port_Info(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_PORT_INFO
