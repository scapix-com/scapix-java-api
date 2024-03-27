// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTTRIE_TYPE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTTRIE_TYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::util { class CodePointTrie_Type; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::util::CodePointTrie_Type>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/util/CodePointTrie$Type";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTTRIE_TYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTTRIE_TYPE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTTRIE_TYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::icu::util::CodePointTrie_Type : public jni::object_base<"jdk/internal/icu/util/CodePointTrie$Type",
	java::lang::Enum>
{
public:

	static jni::ref<jdk::internal::icu::util::CodePointTrie_Type> FAST() { return get_static_field<"FAST", jni::ref<jdk::internal::icu::util::CodePointTrie_Type>>(); }
	static jni::ref<jdk::internal::icu::util::CodePointTrie_Type> SMALL() { return get_static_field<"SMALL", jni::ref<jdk::internal::icu::util::CodePointTrie_Type>>(); }

	static jni::ref<jni::array<jdk::internal::icu::util::CodePointTrie_Type>> values() { return call_static_method<"values", jni::ref<jni::array<jdk::internal::icu::util::CodePointTrie_Type>>>(); }
	static jni::ref<jdk::internal::icu::util::CodePointTrie_Type> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<jdk::internal::icu::util::CodePointTrie_Type>>(name); }

protected:

	CodePointTrie_Type(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTTRIE_TYPE
