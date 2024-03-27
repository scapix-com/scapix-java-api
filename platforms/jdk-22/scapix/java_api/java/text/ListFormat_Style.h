// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_LISTFORMAT_STYLE_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_LISTFORMAT_STYLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class ListFormat_Style; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::ListFormat_Style>
{
	static constexpr fixed_string class_name = "java/text/ListFormat$Style";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_LISTFORMAT_STYLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_LISTFORMAT_STYLE)
#define SCAPIX_JAVA_API_JAVA_TEXT_LISTFORMAT_STYLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::text::ListFormat_Style : public jni::object_base<"java/text/ListFormat$Style",
	java::lang::Enum>
{
public:

	static jni::ref<java::text::ListFormat_Style> FULL() { return get_static_field<"FULL", jni::ref<java::text::ListFormat_Style>>(); }
	static jni::ref<java::text::ListFormat_Style> SHORT() { return get_static_field<"SHORT", jni::ref<java::text::ListFormat_Style>>(); }
	static jni::ref<java::text::ListFormat_Style> NARROW() { return get_static_field<"NARROW", jni::ref<java::text::ListFormat_Style>>(); }

	static jni::ref<jni::array<java::text::ListFormat_Style>> values() { return call_static_method<"values", jni::ref<jni::array<java::text::ListFormat_Style>>>(); }
	static jni::ref<java::text::ListFormat_Style> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::text::ListFormat_Style>>(name); }

protected:

	ListFormat_Style(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_LISTFORMAT_STYLE