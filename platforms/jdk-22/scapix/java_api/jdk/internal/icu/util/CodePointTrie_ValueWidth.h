// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTTRIE_VALUEWIDTH_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTTRIE_VALUEWIDTH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::util { class CodePointTrie_ValueWidth; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::util::CodePointTrie_ValueWidth>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/util/CodePointTrie$ValueWidth";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTTRIE_VALUEWIDTH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTTRIE_VALUEWIDTH)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTTRIE_VALUEWIDTH

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::icu::util::CodePointTrie_ValueWidth : public jni::object_base<"jdk/internal/icu/util/CodePointTrie$ValueWidth",
	java::lang::Enum>
{
public:

	static jni::ref<jdk::internal::icu::util::CodePointTrie_ValueWidth> BITS_16() { return get_static_field<"BITS_16", jni::ref<jdk::internal::icu::util::CodePointTrie_ValueWidth>>(); }
	static jni::ref<jdk::internal::icu::util::CodePointTrie_ValueWidth> BITS_32() { return get_static_field<"BITS_32", jni::ref<jdk::internal::icu::util::CodePointTrie_ValueWidth>>(); }
	static jni::ref<jdk::internal::icu::util::CodePointTrie_ValueWidth> BITS_8() { return get_static_field<"BITS_8", jni::ref<jdk::internal::icu::util::CodePointTrie_ValueWidth>>(); }

	static jni::ref<jni::array<jdk::internal::icu::util::CodePointTrie_ValueWidth>> values() { return call_static_method<"values", jni::ref<jni::array<jdk::internal::icu::util::CodePointTrie_ValueWidth>>>(); }
	static jni::ref<jdk::internal::icu::util::CodePointTrie_ValueWidth> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<jdk::internal::icu::util::CodePointTrie_ValueWidth>>(name); }

protected:

	CodePointTrie_ValueWidth(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTTRIE_VALUEWIDTH