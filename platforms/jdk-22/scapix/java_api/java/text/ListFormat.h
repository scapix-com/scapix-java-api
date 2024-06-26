// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/text/Format.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_LISTFORMAT_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_LISTFORMAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class ListFormat; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::ListFormat>
{
	static constexpr fixed_string class_name = "java/text/ListFormat";
	using base_classes = std::tuple<scapix::java_api::java::text::Format>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_LISTFORMAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_LISTFORMAT)
#define SCAPIX_JAVA_API_JAVA_TEXT_LISTFORMAT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/java/text/AttributedCharacterIterator.h>
#include <scapix/java_api/java/text/FieldPosition.h>
#include <scapix/java_api/java/text/ListFormat_Style.h>
#include <scapix/java_api/java/text/ListFormat_Type.h>
#include <scapix/java_api/java/text/ParsePosition.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::text::ListFormat : public jni::object_base<"java/text/ListFormat",
	java::text::Format>
{
public:

	using Type = ListFormat_Type;
	using Style = ListFormat_Style;

	static jni::ref<jni::array<java::util::Locale>> getAvailableLocales() { return call_static_method<"getAvailableLocales", jni::ref<jni::array<java::util::Locale>>>(); }
	static jni::ref<java::text::ListFormat> getInstance() { return call_static_method<"getInstance", jni::ref<java::text::ListFormat>>(); }
	static jni::ref<java::text::ListFormat> getInstance(jni::ref<java::util::Locale> locale, jni::ref<java::text::ListFormat_Type> type, jni::ref<java::text::ListFormat_Style> style) { return call_static_method<"getInstance", jni::ref<java::text::ListFormat>>(locale, type, style); }
	static jni::ref<java::text::ListFormat> getInstance(jni::ref<jni::array<java::lang::String>> patterns) { return call_static_method<"getInstance", jni::ref<java::text::ListFormat>>(patterns); }
	jni::ref<java::util::Locale> getLocale() { return call_method<"getLocale", jni::ref<java::util::Locale>>(); }
	jni::ref<jni::array<java::lang::String>> getPatterns() { return call_method<"getPatterns", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<java::lang::String> format(jni::ref<java::util::List> input) { return call_method<"format", jni::ref<java::lang::String>>(input); }
	jni::ref<java::lang::StringBuffer> format(jni::ref<java::lang::Object> obj, jni::ref<java::lang::StringBuffer> toAppendTo, jni::ref<java::text::FieldPosition> pos) { return call_method<"format", jni::ref<java::lang::StringBuffer>>(obj, toAppendTo, pos); }
	jni::ref<java::util::List> parse(jni::ref<java::lang::String> source) { return call_method<"parse", jni::ref<java::util::List>>(source); }
	jni::ref<java::lang::Object> parseObject(jni::ref<java::lang::String> source, jni::ref<java::text::ParsePosition> parsePos) { return call_method<"parseObject", jni::ref<java::lang::Object>>(source, parsePos); }
	jni::ref<java::text::AttributedCharacterIterator> formatToCharacterIterator(jni::ref<java::lang::Object> arguments) { return call_method<"formatToCharacterIterator", jni::ref<java::text::AttributedCharacterIterator>>(arguments); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ListFormat(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_LISTFORMAT
