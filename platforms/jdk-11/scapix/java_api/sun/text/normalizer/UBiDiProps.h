// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UBIDIPROPS_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UBIDIPROPS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text::normalizer { class UBiDiProps; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::normalizer::UBiDiProps>
{
	static constexpr fixed_string class_name = "sun/text/normalizer/UBiDiProps";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UBIDIPROPS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UBIDIPROPS)
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UBIDIPROPS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::text::normalizer::UBiDiProps : public jni::object_base<"sun/text/normalizer/UBiDiProps",
	java::lang::Object>
{
public:

	static jni::ref<sun::text::normalizer::UBiDiProps> INSTANCE() { return get_static_field<"INSTANCE", jni::ref<sun::text::normalizer::UBiDiProps>>(); }

	jint getClass(jint c) { return call_method<"getClass", jint>(c); }
	jint getMirror(jint c) { return call_method<"getMirror", jint>(c); }
	jint getJoiningType(jint c) { return call_method<"getJoiningType", jint>(c); }
	jint getJoiningGroup(jint c) { return call_method<"getJoiningGroup", jint>(c); }
	jint getPairedBracketType(jint c) { return call_method<"getPairedBracketType", jint>(c); }
	jint getPairedBracket(jint c) { return call_method<"getPairedBracket", jint>(c); }

protected:

	UBiDiProps(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UBIDIPROPS