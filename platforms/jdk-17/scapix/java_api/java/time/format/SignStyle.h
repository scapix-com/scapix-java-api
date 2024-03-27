// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_FORMAT_SIGNSTYLE_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_FORMAT_SIGNSTYLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::format { class SignStyle; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::format::SignStyle>
{
	static constexpr fixed_string class_name = "java/time/format/SignStyle";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_FORMAT_SIGNSTYLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_FORMAT_SIGNSTYLE)
#define SCAPIX_JAVA_API_JAVA_TIME_FORMAT_SIGNSTYLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::format::SignStyle : public jni::object_base<"java/time/format/SignStyle",
	java::lang::Enum>
{
public:

	static jni::ref<java::time::format::SignStyle> NORMAL() { return get_static_field<"NORMAL", jni::ref<java::time::format::SignStyle>>(); }
	static jni::ref<java::time::format::SignStyle> ALWAYS() { return get_static_field<"ALWAYS", jni::ref<java::time::format::SignStyle>>(); }
	static jni::ref<java::time::format::SignStyle> NEVER() { return get_static_field<"NEVER", jni::ref<java::time::format::SignStyle>>(); }
	static jni::ref<java::time::format::SignStyle> NOT_NEGATIVE() { return get_static_field<"NOT_NEGATIVE", jni::ref<java::time::format::SignStyle>>(); }
	static jni::ref<java::time::format::SignStyle> EXCEEDS_PAD() { return get_static_field<"EXCEEDS_PAD", jni::ref<java::time::format::SignStyle>>(); }

	static jni::ref<jni::array<java::time::format::SignStyle>> values() { return call_static_method<"values", jni::ref<jni::array<java::time::format::SignStyle>>>(); }
	static jni::ref<java::time::format::SignStyle> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::time::format::SignStyle>>(name); }

protected:

	SignStyle(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_FORMAT_SIGNSTYLE
