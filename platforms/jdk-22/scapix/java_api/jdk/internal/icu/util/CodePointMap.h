// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Iterable.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTMAP_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::util { class CodePointMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::util::CodePointMap>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/util/CodePointMap";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Iterable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTMAP)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/jdk/internal/icu/util/CodePointMap_Range.h>
#include <scapix/java_api/jdk/internal/icu/util/CodePointMap_RangeOption.h>
#include <scapix/java_api/jdk/internal/icu/util/CodePointMap_StringIterator.h>
#include <scapix/java_api/jdk/internal/icu/util/CodePointMap_ValueFilter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::icu::util::CodePointMap : public jni::object_base<"jdk/internal/icu/util/CodePointMap",
	java::lang::Object,
	java::lang::Iterable>
{
public:

	using ValueFilter = CodePointMap_ValueFilter;
	using Range = CodePointMap_Range;
	using RangeOption = CodePointMap_RangeOption;
	using StringIterator = CodePointMap_StringIterator;

	jint get(jint p1) { return call_method<"get", jint>(p1); }
	jboolean getRange(jint p1, jni::ref<jdk::internal::icu::util::CodePointMap_ValueFilter> p2, jni::ref<jdk::internal::icu::util::CodePointMap_Range> p3) { return call_method<"getRange", jboolean>(p1, p2, p3); }
	jboolean getRange(jint start, jni::ref<jdk::internal::icu::util::CodePointMap_RangeOption> option, jint surrogateValue, jni::ref<jdk::internal::icu::util::CodePointMap_ValueFilter> filter, jni::ref<jdk::internal::icu::util::CodePointMap_Range> range) { return call_method<"getRange", jboolean>(start, option, surrogateValue, filter, range); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<jdk::internal::icu::util::CodePointMap_StringIterator> stringIterator(jni::ref<java::lang::CharSequence> s, jint sIndex) { return call_method<"stringIterator", jni::ref<jdk::internal::icu::util::CodePointMap_StringIterator>>(s, sIndex); }

protected:

	CodePointMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_UTIL_CODEPOINTMAP
