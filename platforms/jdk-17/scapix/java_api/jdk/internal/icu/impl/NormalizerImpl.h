// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_NORMALIZERIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_NORMALIZERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::impl { class NormalizerImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::impl::NormalizerImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/impl/NormalizerImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_NORMALIZERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_NORMALIZERIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_NORMALIZERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuilder.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/jdk/internal/icu/impl/NormalizerImpl_ReorderingBuffer.h>
#include <scapix/java_api/jdk/internal/icu/impl/NormalizerImpl_UTF16Plus.h>
#include <scapix/java_api/jdk/internal/icu/impl/NormalizerImpl_Hangul.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::icu::impl::NormalizerImpl : public jni::object_base<"jdk/internal/icu/impl/NormalizerImpl",
	java::lang::Object>
{
public:

	using UTF16Plus = NormalizerImpl_UTF16Plus;
	using Hangul = NormalizerImpl_Hangul;
	using ReorderingBuffer = NormalizerImpl_ReorderingBuffer;

	static jint MIN_YES_YES_WITH_CC() { return get_static_field<"MIN_YES_YES_WITH_CC", jint>(); }
	static jint JAMO_VT() { return get_static_field<"JAMO_VT", jint>(); }
	static jint MIN_NORMAL_MAYBE_YES() { return get_static_field<"MIN_NORMAL_MAYBE_YES", jint>(); }
	static jint JAMO_L() { return get_static_field<"JAMO_L", jint>(); }
	static jint INERT() { return get_static_field<"INERT", jint>(); }
	static jint HAS_COMP_BOUNDARY_AFTER() { return get_static_field<"HAS_COMP_BOUNDARY_AFTER", jint>(); }
	static jint OFFSET_SHIFT() { return get_static_field<"OFFSET_SHIFT", jint>(); }
	static jint DELTA_TCCC_0() { return get_static_field<"DELTA_TCCC_0", jint>(); }
	static jint DELTA_TCCC_1() { return get_static_field<"DELTA_TCCC_1", jint>(); }
	static jint DELTA_TCCC_GT_1() { return get_static_field<"DELTA_TCCC_GT_1", jint>(); }
	static jint DELTA_TCCC_MASK() { return get_static_field<"DELTA_TCCC_MASK", jint>(); }
	static jint DELTA_SHIFT() { return get_static_field<"DELTA_SHIFT", jint>(); }
	static jint MAX_DELTA() { return get_static_field<"MAX_DELTA", jint>(); }
	static jint IX_NORM_TRIE_OFFSET() { return get_static_field<"IX_NORM_TRIE_OFFSET", jint>(); }
	static jint IX_EXTRA_DATA_OFFSET() { return get_static_field<"IX_EXTRA_DATA_OFFSET", jint>(); }
	static jint IX_SMALL_FCD_OFFSET() { return get_static_field<"IX_SMALL_FCD_OFFSET", jint>(); }
	static jint IX_RESERVED3_OFFSET() { return get_static_field<"IX_RESERVED3_OFFSET", jint>(); }
	static jint IX_TOTAL_SIZE() { return get_static_field<"IX_TOTAL_SIZE", jint>(); }
	static jint MIN_CCC_LCCC_CP() { return get_static_field<"MIN_CCC_LCCC_CP", jint>(); }
	static jint IX_MIN_DECOMP_NO_CP() { return get_static_field<"IX_MIN_DECOMP_NO_CP", jint>(); }
	static jint IX_MIN_COMP_NO_MAYBE_CP() { return get_static_field<"IX_MIN_COMP_NO_MAYBE_CP", jint>(); }
	static jint IX_MIN_YES_NO() { return get_static_field<"IX_MIN_YES_NO", jint>(); }
	static jint IX_MIN_NO_NO() { return get_static_field<"IX_MIN_NO_NO", jint>(); }
	static jint IX_LIMIT_NO_NO() { return get_static_field<"IX_LIMIT_NO_NO", jint>(); }
	static jint IX_MIN_MAYBE_YES() { return get_static_field<"IX_MIN_MAYBE_YES", jint>(); }
	static jint IX_MIN_YES_NO_MAPPINGS_ONLY() { return get_static_field<"IX_MIN_YES_NO_MAPPINGS_ONLY", jint>(); }
	static jint IX_MIN_NO_NO_COMP_BOUNDARY_BEFORE() { return get_static_field<"IX_MIN_NO_NO_COMP_BOUNDARY_BEFORE", jint>(); }
	static jint IX_MIN_NO_NO_COMP_NO_MAYBE_CC() { return get_static_field<"IX_MIN_NO_NO_COMP_NO_MAYBE_CC", jint>(); }
	static jint IX_MIN_NO_NO_EMPTY() { return get_static_field<"IX_MIN_NO_NO_EMPTY", jint>(); }
	static jint IX_MIN_LCCC_CP() { return get_static_field<"IX_MIN_LCCC_CP", jint>(); }
	static jint IX_COUNT() { return get_static_field<"IX_COUNT", jint>(); }
	static jint MAPPING_HAS_CCC_LCCC_WORD() { return get_static_field<"MAPPING_HAS_CCC_LCCC_WORD", jint>(); }
	static jint MAPPING_HAS_RAW_MAPPING() { return get_static_field<"MAPPING_HAS_RAW_MAPPING", jint>(); }
	static jint MAPPING_LENGTH_MASK() { return get_static_field<"MAPPING_LENGTH_MASK", jint>(); }
	static jint COMP_1_LAST_TUPLE() { return get_static_field<"COMP_1_LAST_TUPLE", jint>(); }
	static jint COMP_1_TRIPLE() { return get_static_field<"COMP_1_TRIPLE", jint>(); }
	static jint COMP_1_TRAIL_LIMIT() { return get_static_field<"COMP_1_TRAIL_LIMIT", jint>(); }
	static jint COMP_1_TRAIL_MASK() { return get_static_field<"COMP_1_TRAIL_MASK", jint>(); }
	static jint COMP_1_TRAIL_SHIFT() { return get_static_field<"COMP_1_TRAIL_SHIFT", jint>(); }
	static jint COMP_2_TRAIL_SHIFT() { return get_static_field<"COMP_2_TRAIL_SHIFT", jint>(); }
	static jint COMP_2_TRAIL_MASK() { return get_static_field<"COMP_2_TRAIL_MASK", jint>(); }

	static jni::ref<jdk::internal::icu::impl::NormalizerImpl> new_object() { return base_::new_object(); }
	jni::ref<jdk::internal::icu::impl::NormalizerImpl> load(jni::ref<java::nio::ByteBuffer> bytes) { return call_method<"load", jni::ref<jdk::internal::icu::impl::NormalizerImpl>>(bytes); }
	jni::ref<jdk::internal::icu::impl::NormalizerImpl> load(jni::ref<java::lang::String> name) { return call_method<"load", jni::ref<jdk::internal::icu::impl::NormalizerImpl>>(name); }
	jint getNorm16(jint c) { return call_method<"getNorm16", jint>(c); }
	jint getRawNorm16(jint c) { return call_method<"getRawNorm16", jint>(c); }
	jboolean isAlgorithmicNoNo(jint norm16) { return call_method<"isAlgorithmicNoNo", jboolean>(norm16); }
	jboolean isCompNo(jint norm16) { return call_method<"isCompNo", jboolean>(norm16); }
	jboolean isDecompYes(jint norm16) { return call_method<"isDecompYes", jboolean>(norm16); }
	jint getCC(jint norm16) { return call_method<"getCC", jint>(norm16); }
	static jint getCCFromNormalYesOrMaybe(jint norm16) { return call_static_method<"getCCFromNormalYesOrMaybe", jint>(norm16); }
	static jint getCCFromYesOrMaybe(jint norm16) { return call_static_method<"getCCFromYesOrMaybe", jint>(norm16); }
	jint getCCFromYesOrMaybeCP(jint c) { return call_method<"getCCFromYesOrMaybeCP", jint>(c); }
	jint getFCD16(jint c) { return call_method<"getFCD16", jint>(c); }
	jboolean singleLeadMightHaveNonZeroFCD16(jint lead) { return call_method<"singleLeadMightHaveNonZeroFCD16", jboolean>(lead); }
	jint getFCD16FromNormData(jint c) { return call_method<"getFCD16FromNormData", jint>(c); }
	jni::ref<java::lang::String> getDecomposition(jint c) { return call_method<"getDecomposition", jni::ref<java::lang::String>>(c); }
	void decompose(jni::ref<java::lang::CharSequence> s, jint src, jint limit, jni::ref<java::lang::StringBuilder> dest, jint destLengthEstimate) { return call_method<"decompose", void>(s, src, limit, dest, destLengthEstimate); }
	jint decompose(jni::ref<java::lang::CharSequence> s, jint src, jint limit, jni::ref<jdk::internal::icu::impl::NormalizerImpl_ReorderingBuffer> buffer) { return call_method<"decompose", jint>(s, src, limit, buffer); }
	void decomposeAndAppend(jni::ref<java::lang::CharSequence> s, jboolean doDecompose, jni::ref<jdk::internal::icu::impl::NormalizerImpl_ReorderingBuffer> buffer) { return call_method<"decomposeAndAppend", void>(s, doDecompose, buffer); }
	jboolean compose(jni::ref<java::lang::CharSequence> s, jint src, jint limit, jboolean onlyContiguous, jboolean doCompose, jni::ref<jdk::internal::icu::impl::NormalizerImpl_ReorderingBuffer> buffer) { return call_method<"compose", jboolean>(s, src, limit, onlyContiguous, doCompose, buffer); }
	jint composeQuickCheck(jni::ref<java::lang::CharSequence> s, jint src, jint limit, jboolean onlyContiguous, jboolean doSpan) { return call_method<"composeQuickCheck", jint>(s, src, limit, onlyContiguous, doSpan); }
	void composeAndAppend(jni::ref<java::lang::CharSequence> s, jboolean doCompose, jboolean onlyContiguous, jni::ref<jdk::internal::icu::impl::NormalizerImpl_ReorderingBuffer> buffer) { return call_method<"composeAndAppend", void>(s, doCompose, onlyContiguous, buffer); }
	jint makeFCD(jni::ref<java::lang::CharSequence> s, jint src, jint limit, jni::ref<jdk::internal::icu::impl::NormalizerImpl_ReorderingBuffer> buffer) { return call_method<"makeFCD", jint>(s, src, limit, buffer); }
	jboolean hasDecompBoundaryBefore(jint c) { return call_method<"hasDecompBoundaryBefore", jboolean>(c); }
	jboolean norm16HasDecompBoundaryBefore(jint norm16) { return call_method<"norm16HasDecompBoundaryBefore", jboolean>(norm16); }
	jboolean hasDecompBoundaryAfter(jint c) { return call_method<"hasDecompBoundaryAfter", jboolean>(c); }
	jboolean norm16HasDecompBoundaryAfter(jint norm16) { return call_method<"norm16HasDecompBoundaryAfter", jboolean>(norm16); }
	jboolean isDecompInert(jint c) { return call_method<"isDecompInert", jboolean>(c); }
	jboolean hasCompBoundaryBefore(jint c) { return call_method<"hasCompBoundaryBefore", jboolean>(c); }
	jboolean hasCompBoundaryAfter(jint c, jboolean onlyContiguous) { return call_method<"hasCompBoundaryAfter", jboolean>(c, onlyContiguous); }
	static jint getDecompose(jni::ref<jni::array<jint>> chars, jni::ref<jni::array<java::lang::String>> decomps) { return call_static_method<"getDecompose", jint>(chars, decomps); }
	static jni::ref<java::lang::String> canonicalDecomposeWithSingleQuotation(jni::ref<java::lang::String> string) { return call_static_method<"canonicalDecomposeWithSingleQuotation", jni::ref<java::lang::String>>(string); }

protected:

	NormalizerImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_NORMALIZERIMPL
