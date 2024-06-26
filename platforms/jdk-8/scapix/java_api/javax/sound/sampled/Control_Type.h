// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_CONTROL_TYPE_FWD
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_CONTROL_TYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sound::sampled { class Control_Type; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sound::sampled::Control_Type>
{
	static constexpr fixed_string class_name = "javax/sound/sampled/Control$Type";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_CONTROL_TYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_CONTROL_TYPE)
#define SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_CONTROL_TYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sound::sampled::Control_Type : public jni::object_base<"javax/sound/sampled/Control$Type",
	java::lang::Object>
{
public:

	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Control_Type(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SOUND_SAMPLED_CONTROL_TYPE
