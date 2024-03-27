// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_TRIE2_VALUEMAPPER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_TRIE2_VALUEMAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::impl { class Trie2_ValueMapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::impl::Trie2_ValueMapper>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/impl/Trie2$ValueMapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_TRIE2_VALUEMAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_TRIE2_VALUEMAPPER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_TRIE2_VALUEMAPPER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::icu::impl::Trie2_ValueMapper : public jni::object_base<"jdk/internal/icu/impl/Trie2$ValueMapper",
	java::lang::Object>
{
public:

	jint map(jint p1) { return call_method<"map", jint>(p1); }

protected:

	Trie2_ValueMapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_TRIE2_VALUEMAPPER