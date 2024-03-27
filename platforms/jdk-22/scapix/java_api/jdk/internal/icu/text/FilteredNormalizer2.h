// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/icu/text/Normalizer2.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_FILTEREDNORMALIZER2_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_FILTEREDNORMALIZER2_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::text { class FilteredNormalizer2; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::text::FilteredNormalizer2>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/text/FilteredNormalizer2";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::icu::text::Normalizer2>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_FILTEREDNORMALIZER2_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_FILTEREDNORMALIZER2)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_FILTEREDNORMALIZER2

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Appendable.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuilder.h>
#include <scapix/java_api/jdk/internal/icu/text/UnicodeSet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::icu::text::FilteredNormalizer2 : public jni::object_base<"jdk/internal/icu/text/FilteredNormalizer2",
	jdk::internal::icu::text::Normalizer2>
{
public:

	static jni::ref<jdk::internal::icu::text::FilteredNormalizer2> new_object(jni::ref<jdk::internal::icu::text::Normalizer2> n2, jni::ref<jdk::internal::icu::text::UnicodeSet> filterSet) { return base_::new_object(n2, filterSet); }
	jni::ref<java::lang::StringBuilder> normalize(jni::ref<java::lang::CharSequence> src, jni::ref<java::lang::StringBuilder> dest) { return call_method<"normalize", jni::ref<java::lang::StringBuilder>>(src, dest); }
	jni::ref<java::lang::Appendable> normalize(jni::ref<java::lang::CharSequence> src, jni::ref<java::lang::Appendable> dest) { return call_method<"normalize", jni::ref<java::lang::Appendable>>(src, dest); }
	jni::ref<java::lang::StringBuilder> normalizeSecondAndAppend(jni::ref<java::lang::StringBuilder> first, jni::ref<java::lang::CharSequence> second) { return call_method<"normalizeSecondAndAppend", jni::ref<java::lang::StringBuilder>>(first, second); }
	jni::ref<java::lang::StringBuilder> append(jni::ref<java::lang::StringBuilder> first, jni::ref<java::lang::CharSequence> second) { return call_method<"append", jni::ref<java::lang::StringBuilder>>(first, second); }
	jni::ref<java::lang::String> getDecomposition(jint c) { return call_method<"getDecomposition", jni::ref<java::lang::String>>(c); }
	jint getCombiningClass(jint c) { return call_method<"getCombiningClass", jint>(c); }
	jboolean isNormalized(jni::ref<java::lang::CharSequence> s) { return call_method<"isNormalized", jboolean>(s); }
	jint spanQuickCheckYes(jni::ref<java::lang::CharSequence> s) { return call_method<"spanQuickCheckYes", jint>(s); }
	jboolean hasBoundaryBefore(jint c) { return call_method<"hasBoundaryBefore", jboolean>(c); }

protected:

	FilteredNormalizer2(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_FILTEREDNORMALIZER2
