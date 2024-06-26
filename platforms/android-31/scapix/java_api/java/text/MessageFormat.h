// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/text/Format.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_MESSAGEFORMAT_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_MESSAGEFORMAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class MessageFormat; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::MessageFormat>
{
	static constexpr fixed_string class_name = "java/text/MessageFormat";
	using base_classes = std::tuple<scapix::java_api::java::text::Format>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_MESSAGEFORMAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_MESSAGEFORMAT)
#define SCAPIX_JAVA_API_JAVA_TEXT_MESSAGEFORMAT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/java/text/AttributedCharacterIterator.h>
#include <scapix/java_api/java/text/FieldPosition.h>
#include <scapix/java_api/java/text/ParsePosition.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/text/MessageFormat_Field.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::text::MessageFormat : public jni::object_base<"java/text/MessageFormat",
	java::text::Format>
{
public:

	using Field = MessageFormat_Field;

	static jni::ref<java::text::MessageFormat> new_object(jni::ref<java::lang::String> pattern) { return base_::new_object(pattern); }
	static jni::ref<java::text::MessageFormat> new_object(jni::ref<java::lang::String> pattern, jni::ref<java::util::Locale> locale) { return base_::new_object(pattern, locale); }
	void setLocale(jni::ref<java::util::Locale> locale) { return call_method<"setLocale", void>(locale); }
	jni::ref<java::util::Locale> getLocale() { return call_method<"getLocale", jni::ref<java::util::Locale>>(); }
	void applyPattern(jni::ref<java::lang::String> pattern) { return call_method<"applyPattern", void>(pattern); }
	jni::ref<java::lang::String> toPattern() { return call_method<"toPattern", jni::ref<java::lang::String>>(); }
	void setFormatsByArgumentIndex(jni::ref<jni::array<java::text::Format>> newFormats) { return call_method<"setFormatsByArgumentIndex", void>(newFormats); }
	void setFormats(jni::ref<jni::array<java::text::Format>> newFormats) { return call_method<"setFormats", void>(newFormats); }
	void setFormatByArgumentIndex(jint argumentIndex, jni::ref<java::text::Format> newFormat) { return call_method<"setFormatByArgumentIndex", void>(argumentIndex, newFormat); }
	void setFormat(jint formatElementIndex, jni::ref<java::text::Format> newFormat) { return call_method<"setFormat", void>(formatElementIndex, newFormat); }
	jni::ref<jni::array<java::text::Format>> getFormatsByArgumentIndex() { return call_method<"getFormatsByArgumentIndex", jni::ref<jni::array<java::text::Format>>>(); }
	jni::ref<jni::array<java::text::Format>> getFormats() { return call_method<"getFormats", jni::ref<jni::array<java::text::Format>>>(); }
	jni::ref<java::lang::StringBuffer> format(jni::ref<jni::array<java::lang::Object>> arguments, jni::ref<java::lang::StringBuffer> result, jni::ref<java::text::FieldPosition> pos) { return call_method<"format", jni::ref<java::lang::StringBuffer>>(arguments, result, pos); }
	static jni::ref<java::lang::String> format(jni::ref<java::lang::String> pattern, jni::ref<jni::array<java::lang::Object>> arguments) { return call_static_method<"format", jni::ref<java::lang::String>>(pattern, arguments); }
	jni::ref<java::lang::StringBuffer> format(jni::ref<java::lang::Object> arguments, jni::ref<java::lang::StringBuffer> result, jni::ref<java::text::FieldPosition> pos) { return call_method<"format", jni::ref<java::lang::StringBuffer>>(arguments, result, pos); }
	jni::ref<java::text::AttributedCharacterIterator> formatToCharacterIterator(jni::ref<java::lang::Object> arguments) { return call_method<"formatToCharacterIterator", jni::ref<java::text::AttributedCharacterIterator>>(arguments); }
	jni::ref<jni::array<java::lang::Object>> parse(jni::ref<java::lang::String> source, jni::ref<java::text::ParsePosition> pos) { return call_method<"parse", jni::ref<jni::array<java::lang::Object>>>(source, pos); }
	jni::ref<jni::array<java::lang::Object>> parse(jni::ref<java::lang::String> source) { return call_method<"parse", jni::ref<jni::array<java::lang::Object>>>(source); }
	jni::ref<java::lang::Object> parseObject(jni::ref<java::lang::String> source, jni::ref<java::text::ParsePosition> pos) { return call_method<"parseObject", jni::ref<java::lang::Object>>(source, pos); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	MessageFormat(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_MESSAGEFORMAT
