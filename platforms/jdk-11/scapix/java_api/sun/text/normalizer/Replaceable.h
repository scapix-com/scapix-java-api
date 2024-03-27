// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_REPLACEABLE_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_REPLACEABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text::normalizer { class Replaceable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::normalizer::Replaceable>
{
	static constexpr fixed_string class_name = "sun/text/normalizer/Replaceable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_REPLACEABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_REPLACEABLE)
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_REPLACEABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::text::normalizer::Replaceable : public jni::object_base<"sun/text/normalizer/Replaceable",
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

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_REPLACEABLE