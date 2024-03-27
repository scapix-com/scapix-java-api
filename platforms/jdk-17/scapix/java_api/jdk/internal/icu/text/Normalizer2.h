// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_NORMALIZER2_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_NORMALIZER2_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::text { class Normalizer2; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::text::Normalizer2>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/text/Normalizer2";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_NORMALIZER2_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_NORMALIZER2)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_NORMALIZER2

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Appendable.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuilder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::icu::text::Normalizer2 : public jni::object_base<"jdk/internal/icu/text/Normalizer2",
	java::lang::Object>
{
public:

	static jni::ref<jdk::internal::icu::text::Normalizer2> getNFCInstance() { return call_static_method<"getNFCInstance", jni::ref<jdk::internal::icu::text::Normalizer2>>(); }
	static jni::ref<jdk::internal::icu::text::Normalizer2> getNFDInstance() { return call_static_method<"getNFDInstance", jni::ref<jdk::internal::icu::text::Normalizer2>>(); }
	static jni::ref<jdk::internal::icu::text::Normalizer2> getNFKCInstance() { return call_static_method<"getNFKCInstance", jni::ref<jdk::internal::icu::text::Normalizer2>>(); }
	static jni::ref<jdk::internal::icu::text::Normalizer2> getNFKDInstance() { return call_static_method<"getNFKDInstance", jni::ref<jdk::internal::icu::text::Normalizer2>>(); }
	jni::ref<java::lang::String> normalize(jni::ref<java::lang::CharSequence> src) { return call_method<"normalize", jni::ref<java::lang::String>>(src); }
	jni::ref<java::lang::StringBuilder> normalize(jni::ref<java::lang::CharSequence> p1, jni::ref<java::lang::StringBuilder> p2) { return call_method<"normalize", jni::ref<java::lang::StringBuilder>>(p1, p2); }
	jni::ref<java::lang::Appendable> normalize(jni::ref<java::lang::CharSequence> p1, jni::ref<java::lang::Appendable> p2) { return call_method<"normalize", jni::ref<java::lang::Appendable>>(p1, p2); }
	jni::ref<java::lang::StringBuilder> normalizeSecondAndAppend(jni::ref<java::lang::StringBuilder> p1, jni::ref<java::lang::CharSequence> p2) { return call_method<"normalizeSecondAndAppend", jni::ref<java::lang::StringBuilder>>(p1, p2); }
	jni::ref<java::lang::StringBuilder> append(jni::ref<java::lang::StringBuilder> p1, jni::ref<java::lang::CharSequence> p2) { return call_method<"append", jni::ref<java::lang::StringBuilder>>(p1, p2); }
	jni::ref<java::lang::String> getDecomposition(jint p1) { return call_method<"getDecomposition", jni::ref<java::lang::String>>(p1); }
	jint getCombiningClass(jint c) { return call_method<"getCombiningClass", jint>(c); }
	jboolean isNormalized(jni::ref<java::lang::CharSequence> p1) { return call_method<"isNormalized", jboolean>(p1); }
	jint spanQuickCheckYes(jni::ref<java::lang::CharSequence> p1) { return call_method<"spanQuickCheckYes", jint>(p1); }
	jboolean hasBoundaryBefore(jint p1) { return call_method<"hasBoundaryBefore", jboolean>(p1); }

protected:

	Normalizer2(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_NORMALIZER2
