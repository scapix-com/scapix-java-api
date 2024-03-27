// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CHARSEQUENCE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CHARSEQUENCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class CharSequence; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::CharSequence>
{
	static constexpr fixed_string class_name = "java/lang/CharSequence";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CHARSEQUENCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CHARSEQUENCE)
#define SCAPIX_JAVA_API_JAVA_LANG_CHARSEQUENCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/stream/IntStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::CharSequence : public jni::object_base<"java/lang/CharSequence",
	java::lang::Object>
{
public:

	jint length() { return call_method<"length", jint>(); }
	jchar charAt(jint p1) { return call_method<"charAt", jchar>(p1); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jni::ref<java::lang::CharSequence> subSequence(jint p1, jint p2) { return call_method<"subSequence", jni::ref<java::lang::CharSequence>>(p1, p2); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::stream::IntStream> chars() { return call_method<"chars", jni::ref<java::util::stream::IntStream>>(); }
	jni::ref<java::util::stream::IntStream> codePoints() { return call_method<"codePoints", jni::ref<java::util::stream::IntStream>>(); }
	static jint compare(jni::ref<java::lang::CharSequence> cs1, jni::ref<java::lang::CharSequence> cs2) { return call_static_method<"compare", jint>(cs1, cs2); }

protected:

	CharSequence(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CHARSEQUENCE
