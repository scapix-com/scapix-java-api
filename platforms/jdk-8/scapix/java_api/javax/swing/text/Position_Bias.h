// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_POSITION_BIAS_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_POSITION_BIAS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class Position_Bias; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::Position_Bias>
{
	static constexpr fixed_string class_name = "javax/swing/text/Position$Bias";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_POSITION_BIAS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_POSITION_BIAS)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_POSITION_BIAS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::Position_Bias : public jni::object_base<"javax/swing/text/Position$Bias",
	java::lang::Object>
{
public:

	static jni::ref<javax::swing::text::Position_Bias> Forward() { return get_static_field<"Forward", jni::ref<javax::swing::text::Position_Bias>>(); }
	static jni::ref<javax::swing::text::Position_Bias> Backward() { return get_static_field<"Backward", jni::ref<javax::swing::text::Position_Bias>>(); }

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Position_Bias(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_POSITION_BIAS