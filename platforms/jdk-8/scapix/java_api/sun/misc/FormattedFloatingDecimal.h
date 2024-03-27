// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_FORMATTEDFLOATINGDECIMAL_FWD
#define SCAPIX_JAVA_API_SUN_MISC_FORMATTEDFLOATINGDECIMAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class FormattedFloatingDecimal; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::FormattedFloatingDecimal>
{
	static constexpr fixed_string class_name = "sun/misc/FormattedFloatingDecimal";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_FORMATTEDFLOATINGDECIMAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_FORMATTEDFLOATINGDECIMAL)
#define SCAPIX_JAVA_API_SUN_MISC_FORMATTEDFLOATINGDECIMAL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/misc/FormattedFloatingDecimal_Form.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::FormattedFloatingDecimal : public jni::object_base<"sun/misc/FormattedFloatingDecimal",
	java::lang::Object>
{
public:

	using Form = FormattedFloatingDecimal_Form;

	static jni::ref<sun::misc::FormattedFloatingDecimal> valueOf(jdouble p1, jint p2, jni::ref<sun::misc::FormattedFloatingDecimal_Form> p3) { return call_static_method<"valueOf", jni::ref<sun::misc::FormattedFloatingDecimal>>(p1, p2, p3); }
	jint getExponentRounded() { return call_method<"getExponentRounded", jint>(); }
	jni::ref<jni::array<jchar>> getMantissa() { return call_method<"getMantissa", jni::ref<jni::array<jchar>>>(); }
	jni::ref<jni::array<jchar>> getExponent() { return call_method<"getExponent", jni::ref<jni::array<jchar>>>(); }

protected:

	FormattedFloatingDecimal(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_FORMATTEDFLOATINGDECIMAL