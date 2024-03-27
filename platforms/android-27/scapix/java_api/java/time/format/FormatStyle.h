// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_FORMAT_FORMATSTYLE_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_FORMAT_FORMATSTYLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::format { class FormatStyle; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::format::FormatStyle>
{
	static constexpr fixed_string class_name = "java/time/format/FormatStyle";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_FORMAT_FORMATSTYLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_FORMAT_FORMATSTYLE)
#define SCAPIX_JAVA_API_JAVA_TIME_FORMAT_FORMATSTYLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::format::FormatStyle : public jni::object_base<"java/time/format/FormatStyle",
	java::lang::Enum>
{
public:

	static jni::ref<java::time::format::FormatStyle> FULL() { return get_static_field<"FULL", jni::ref<java::time::format::FormatStyle>>(); }
	static jni::ref<java::time::format::FormatStyle> LONG() { return get_static_field<"LONG", jni::ref<java::time::format::FormatStyle>>(); }
	static jni::ref<java::time::format::FormatStyle> MEDIUM() { return get_static_field<"MEDIUM", jni::ref<java::time::format::FormatStyle>>(); }
	static jni::ref<java::time::format::FormatStyle> SHORT() { return get_static_field<"SHORT", jni::ref<java::time::format::FormatStyle>>(); }

	static jni::ref<jni::array<java::time::format::FormatStyle>> values() { return call_static_method<"values", jni::ref<jni::array<java::time::format::FormatStyle>>>(); }
	static jni::ref<java::time::format::FormatStyle> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::time::format::FormatStyle>>(name); }

protected:

	FormatStyle(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_FORMAT_FORMATSTYLE
