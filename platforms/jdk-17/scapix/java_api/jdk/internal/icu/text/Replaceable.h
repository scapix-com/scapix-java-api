// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_REPLACEABLE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_REPLACEABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::text { class Replaceable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::text::Replaceable>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/text/Replaceable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_REPLACEABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_REPLACEABLE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_REPLACEABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::icu::text::Replaceable : public jni::object_base<"jdk/internal/icu/text/Replaceable",
	java::lang::Object>
{
public:

	jint length() { return call_method<"length", jint>(); }
	jchar charAt(jint p1) { return call_method<"charAt", jchar>(p1); }
	void getChars(jint p1, jint p2, jni::ref<jni::array<jchar>> p3, jint p4) { return call_method<"getChars", void>(p1, p2, p3, p4); }

protected:

	Replaceable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_REPLACEABLE
