// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/icu/util/CodePointTrie.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTTRIE_FAST_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTTRIE_FAST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::util { class CodePointTrie_Fast; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::util::CodePointTrie_Fast>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/util/CodePointTrie$Fast";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::icu::util::CodePointTrie>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTTRIE_FAST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTTRIE_FAST)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTTRIE_FAST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/jdk/internal/icu/util/CodePointMap_StringIterator.h>
#include <scapix/java_api/jdk/internal/icu/util/CodePointTrie_Type.h>
#include <scapix/java_api/jdk/internal/icu/util/CodePointTrie_ValueWidth.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::icu::util::CodePointTrie_Fast : public jni::object_base<"jdk/internal/icu/util/CodePointTrie$Fast",
	jdk::internal::icu::util::CodePointTrie>
{
public:

	static jni::ref<jdk::internal::icu::util::CodePointTrie_Fast> fromBinary(jni::ref<jdk::internal::icu::util::CodePointTrie_ValueWidth> valueWidth, jni::ref<java::nio::ByteBuffer> bytes) { return call_static_method<"fromBinary", jni::ref<jdk::internal::icu::util::CodePointTrie_Fast>>(valueWidth, bytes); }
	jni::ref<jdk::internal::icu::util::CodePointTrie_Type> getType() { return call_method<"getType", jni::ref<jdk::internal::icu::util::CodePointTrie_Type>>(); }
	jint bmpGet(jint p1) { return call_method<"bmpGet", jint>(p1); }
	jint suppGet(jint p1) { return call_method<"suppGet", jint>(p1); }
	jni::ref<jdk::internal::icu::util::CodePointMap_StringIterator> stringIterator(jni::ref<java::lang::CharSequence> s, jint sIndex) { return call_method<"stringIterator", jni::ref<jdk::internal::icu::util::CodePointMap_StringIterator>>(s, sIndex); }

protected:

	CodePointTrie_Fast(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTTRIE_FAST
