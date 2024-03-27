// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_FORMAT_TEXTSTYLE_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_FORMAT_TEXTSTYLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time::format { class TextStyle; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::format::TextStyle>
{
	static constexpr fixed_string class_name = "java/time/format/TextStyle";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_FORMAT_TEXTSTYLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_FORMAT_TEXTSTYLE)
#define SCAPIX_JAVA_API_JAVA_TIME_FORMAT_TEXTSTYLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::format::TextStyle : public jni::object_base<"java/time/format/TextStyle",
	java::lang::Enum>
{
public:

	static jni::ref<java::time::format::TextStyle> FULL() { return get_static_field<"FULL", jni::ref<java::time::format::TextStyle>>(); }
	static jni::ref<java::time::format::TextStyle> FULL_STANDALONE() { return get_static_field<"FULL_STANDALONE", jni::ref<java::time::format::TextStyle>>(); }
	static jni::ref<java::time::format::TextStyle> NARROW() { return get_static_field<"NARROW", jni::ref<java::time::format::TextStyle>>(); }
	static jni::ref<java::time::format::TextStyle> NARROW_STANDALONE() { return get_static_field<"NARROW_STANDALONE", jni::ref<java::time::format::TextStyle>>(); }
	static jni::ref<java::time::format::TextStyle> SHORT() { return get_static_field<"SHORT", jni::ref<java::time::format::TextStyle>>(); }
	static jni::ref<java::time::format::TextStyle> SHORT_STANDALONE() { return get_static_field<"SHORT_STANDALONE", jni::ref<java::time::format::TextStyle>>(); }

	static jni::ref<jni::array<java::time::format::TextStyle>> values() { return call_static_method<"values", jni::ref<jni::array<java::time::format::TextStyle>>>(); }
	static jni::ref<java::time::format::TextStyle> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::time::format::TextStyle>>(name); }
	jboolean isStandalone() { return call_method<"isStandalone", jboolean>(); }
	jni::ref<java::time::format::TextStyle> asStandalone() { return call_method<"asStandalone", jni::ref<java::time::format::TextStyle>>(); }
	jni::ref<java::time::format::TextStyle> asNormal() { return call_method<"asNormal", jni::ref<java::time::format::TextStyle>>(); }

protected:

	TextStyle(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_FORMAT_TEXTSTYLE
