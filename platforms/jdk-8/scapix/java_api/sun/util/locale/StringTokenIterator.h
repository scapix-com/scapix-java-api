// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_UTIL_LOCALE_STRINGTOKENITERATOR_FWD
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_STRINGTOKENITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::util::locale { class StringTokenIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::util::locale::StringTokenIterator>
{
	static constexpr fixed_string class_name = "sun/util/locale/StringTokenIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_STRINGTOKENITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_UTIL_LOCALE_STRINGTOKENITERATOR)
#define SCAPIX_JAVA_API_SUN_UTIL_LOCALE_STRINGTOKENITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::util::locale::StringTokenIterator : public jni::object_base<"sun/util/locale/StringTokenIterator",
	java::lang::Object>
{
public:

	static jni::ref<sun::util::locale::StringTokenIterator> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> first() { return call_method<"first", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> current() { return call_method<"current", jni::ref<java::lang::String>>(); }
	jint currentStart() { return call_method<"currentStart", jint>(); }
	jint currentEnd() { return call_method<"currentEnd", jint>(); }
	jboolean isDone() { return call_method<"isDone", jboolean>(); }
	jni::ref<java::lang::String> next() { return call_method<"next", jni::ref<java::lang::String>>(); }
	jboolean hasNext() { return call_method<"hasNext", jboolean>(); }
	jni::ref<sun::util::locale::StringTokenIterator> setStart(jint p1) { return call_method<"setStart", jni::ref<sun::util::locale::StringTokenIterator>>(p1); }
	jni::ref<sun::util::locale::StringTokenIterator> setText(jni::ref<java::lang::String> p1) { return call_method<"setText", jni::ref<sun::util::locale::StringTokenIterator>>(p1); }

protected:

	StringTokenIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_UTIL_LOCALE_STRINGTOKENITERATOR
