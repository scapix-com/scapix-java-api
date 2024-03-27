// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTMAP_STRINGITERATOR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTMAP_STRINGITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::util { class CodePointMap_StringIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::util::CodePointMap_StringIterator>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/util/CodePointMap$StringIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTMAP_STRINGITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTMAP_STRINGITERATOR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTMAP_STRINGITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::icu::util::CodePointMap_StringIterator : public jni::object_base<"jdk/internal/icu/util/CodePointMap$StringIterator",
	java::lang::Object>
{
public:

	void reset(jni::ref<java::lang::CharSequence> s, jint sIndex) { return call_method<"reset", void>(s, sIndex); }
	jboolean next() { return call_method<"next", jboolean>(); }
	jboolean previous() { return call_method<"previous", jboolean>(); }
	jint getIndex() { return call_method<"getIndex", jint>(); }
	jint getCodePoint() { return call_method<"getCodePoint", jint>(); }
	jint getValue() { return call_method<"getValue", jint>(); }

protected:

	CodePointMap_StringIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTMAP_STRINGITERATOR
