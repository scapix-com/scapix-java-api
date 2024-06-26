// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/text/normalizer/Norm2AllModes_Normalizer2WithImpl.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORM2ALLMODES_COMPOSENORMALIZER2_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORM2ALLMODES_COMPOSENORMALIZER2_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text::normalizer { class Norm2AllModes_ComposeNormalizer2; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::normalizer::Norm2AllModes_ComposeNormalizer2>
{
	static constexpr fixed_string class_name = "sun/text/normalizer/Norm2AllModes$ComposeNormalizer2";
	using base_classes = std::tuple<scapix::java_api::sun::text::normalizer::Norm2AllModes_Normalizer2WithImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORM2ALLMODES_COMPOSENORMALIZER2_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORM2ALLMODES_COMPOSENORMALIZER2)
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORM2ALLMODES_COMPOSENORMALIZER2

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/sun/text/normalizer/NormalizerImpl.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::text::normalizer::Norm2AllModes_ComposeNormalizer2 : public jni::object_base<"sun/text/normalizer/Norm2AllModes$ComposeNormalizer2",
	sun::text::normalizer::Norm2AllModes_Normalizer2WithImpl>
{
public:

	static jni::ref<sun::text::normalizer::Norm2AllModes_ComposeNormalizer2> new_object(jni::ref<sun::text::normalizer::NormalizerImpl> ni, jboolean fcc) { return base_::new_object(ni, fcc); }
	jboolean isNormalized(jni::ref<java::lang::CharSequence> s) { return call_method<"isNormalized", jboolean>(s); }
	jint spanQuickCheckYes(jni::ref<java::lang::CharSequence> s) { return call_method<"spanQuickCheckYes", jint>(s); }
	jboolean hasBoundaryBefore(jint c) { return call_method<"hasBoundaryBefore", jboolean>(c); }

protected:

	Norm2AllModes_ComposeNormalizer2(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORM2ALLMODES_COMPOSENORMALIZER2
