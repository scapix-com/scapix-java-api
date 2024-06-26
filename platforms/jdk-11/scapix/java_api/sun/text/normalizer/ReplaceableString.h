// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/text/normalizer/Replaceable.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_REPLACEABLESTRING_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_REPLACEABLESTRING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text::normalizer { class ReplaceableString; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::normalizer::ReplaceableString>
{
	static constexpr fixed_string class_name = "sun/text/normalizer/ReplaceableString";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::text::normalizer::Replaceable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_REPLACEABLESTRING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_REPLACEABLESTRING)
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_REPLACEABLESTRING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::text::normalizer::ReplaceableString : public jni::object_base<"sun/text/normalizer/ReplaceableString",
	java::lang::Object,
	sun::text::normalizer::Replaceable>
{
public:

	static jni::ref<sun::text::normalizer::ReplaceableString> new_object(jni::ref<java::lang::String> str) { return base_::new_object(str); }
	static jni::ref<sun::text::normalizer::ReplaceableString> new_object(jni::ref<java::lang::StringBuffer> buf) { return base_::new_object(buf); }
	jint length() { return call_method<"length", jint>(); }
	jchar charAt(jint offset) { return call_method<"charAt", jchar>(offset); }
	void getChars(jint srcStart, jint srcLimit, jni::ref<jni::array<jchar>> dst, jint dstStart) { return call_method<"getChars", void>(srcStart, srcLimit, dst, dstStart); }

protected:

	ReplaceableString(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_REPLACEABLESTRING
