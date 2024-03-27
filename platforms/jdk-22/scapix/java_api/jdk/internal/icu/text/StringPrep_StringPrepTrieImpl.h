// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/icu/impl/Trie_DataManipulate.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_STRINGPREP_STRINGPREPTRIEIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_STRINGPREP_STRINGPREPTRIEIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::text { class StringPrep_StringPrepTrieImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::text::StringPrep_StringPrepTrieImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/text/StringPrep$StringPrepTrieImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::icu::impl::Trie_DataManipulate>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_STRINGPREP_STRINGPREPTRIEIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_STRINGPREP_STRINGPREPTRIEIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_STRINGPREP_STRINGPREPTRIEIMPL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::icu::text::StringPrep_StringPrepTrieImpl : public jni::object_base<"jdk/internal/icu/text/StringPrep$StringPrepTrieImpl",
	java::lang::Object,
	jdk::internal::icu::impl::Trie_DataManipulate>
{
public:

	jint getFoldingOffset(jint value) { return call_method<"getFoldingOffset", jint>(value); }

protected:

	StringPrep_StringPrepTrieImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_STRINGPREP_STRINGPREPTRIEIMPL
