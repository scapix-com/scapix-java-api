// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORMALIZERIMPL_UTF16PLUS_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORMALIZERIMPL_UTF16PLUS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text::normalizer { class NormalizerImpl_UTF16Plus; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::normalizer::NormalizerImpl_UTF16Plus>
{
	static constexpr fixed_string class_name = "sun/text/normalizer/NormalizerImpl$UTF16Plus";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORMALIZERIMPL_UTF16PLUS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORMALIZERIMPL_UTF16PLUS)
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORMALIZERIMPL_UTF16PLUS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::text::normalizer::NormalizerImpl_UTF16Plus : public jni::object_base<"sun/text/normalizer/NormalizerImpl$UTF16Plus",
	java::lang::Object>
{
public:

	static jni::ref<sun::text::normalizer::NormalizerImpl_UTF16Plus> new_object() { return base_::new_object(); }
	static jboolean isSurrogateLead(jint c) { return call_static_method<"isSurrogateLead", jboolean>(c); }
	static jboolean equal(jni::ref<java::lang::CharSequence> s1, jint start1, jint limit1, jni::ref<java::lang::CharSequence> s2, jint start2, jint limit2) { return call_static_method<"equal", jboolean>(s1, start1, limit1, s2, start2, limit2); }

protected:

	NormalizerImpl_UTF16Plus(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORMALIZERIMPL_UTF16PLUS
