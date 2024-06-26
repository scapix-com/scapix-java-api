// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Comparable.h>
#include <scapix/java_api/java/lang/CharSequence.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_STRING_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_STRING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class String; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::String>
{
	static constexpr fixed_string class_name = "java/lang/String";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable, scapix::java_api::java::lang::Comparable, scapix::java_api::java::lang::CharSequence>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_STRING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_STRING)
#define SCAPIX_JAVA_API_JAVA_LANG_STRING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/java/lang/StringBuilder.h>
#include <scapix/java_api/java/nio/charset/Charset.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::String : public jni::object_base<"java/lang/String",
	java::lang::Object,
	java::io::Serializable,
	java::lang::Comparable,
	java::lang::CharSequence>
{
public:

	static jni::ref<java::util::Comparator> CASE_INSENSITIVE_ORDER() { return get_static_field<"CASE_INSENSITIVE_ORDER", jni::ref<java::util::Comparator>>(); }

	static jni::ref<java::lang::String> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> new_object(jni::ref<jni::array<jbyte>> data) { return base_::new_object(data); }
	static jni::ref<java::lang::String> new_object(jni::ref<jni::array<jbyte>> data, jint high) { return base_::new_object(data, high); }
	static jni::ref<java::lang::String> new_object(jni::ref<jni::array<jbyte>> data, jint offset, jint byteCount) { return base_::new_object(data, offset, byteCount); }
	static jni::ref<java::lang::String> new_object(jni::ref<jni::array<jbyte>> data, jint high, jint offset, jint byteCount) { return base_::new_object(data, high, offset, byteCount); }
	static jni::ref<java::lang::String> new_object(jni::ref<jni::array<jbyte>> data, jint offset, jint byteCount, jni::ref<java::lang::String> charsetName) { return base_::new_object(data, offset, byteCount, charsetName); }
	static jni::ref<java::lang::String> new_object(jni::ref<jni::array<jbyte>> data, jni::ref<java::lang::String> charsetName) { return base_::new_object(data, charsetName); }
	static jni::ref<java::lang::String> new_object(jni::ref<jni::array<jbyte>> data, jint offset, jint byteCount, jni::ref<java::nio::charset::Charset> charset) { return base_::new_object(data, offset, byteCount, charset); }
	static jni::ref<java::lang::String> new_object(jni::ref<jni::array<jbyte>> data, jni::ref<java::nio::charset::Charset> charset) { return base_::new_object(data, charset); }
	static jni::ref<java::lang::String> new_object(jni::ref<jni::array<jchar>> data) { return base_::new_object(data); }
	static jni::ref<java::lang::String> new_object(jni::ref<jni::array<jchar>> data, jint offset, jint charCount) { return base_::new_object(data, offset, charCount); }
	static jni::ref<java::lang::String> new_object(jni::ref<java::lang::String> toCopy) { return base_::new_object(toCopy); }
	static jni::ref<java::lang::String> new_object(jni::ref<java::lang::StringBuffer> stringBuffer) { return base_::new_object(stringBuffer); }
	static jni::ref<java::lang::String> new_object(jni::ref<jni::array<jint>> codePoints, jint offset, jint count) { return base_::new_object(codePoints, offset, count); }
	static jni::ref<java::lang::String> new_object(jni::ref<java::lang::StringBuilder> stringBuilder) { return base_::new_object(stringBuilder); }
	jchar charAt(jint p1) { return call_method<"charAt", jchar>(p1); }
	jint compareTo(jni::ref<java::lang::String> p1) { return call_method<"compareTo", jint>(p1); }
	jint compareToIgnoreCase(jni::ref<java::lang::String> string) { return call_method<"compareToIgnoreCase", jint>(string); }
	jni::ref<java::lang::String> concat(jni::ref<java::lang::String> p1) { return call_method<"concat", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> copyValueOf(jni::ref<jni::array<jchar>> data) { return call_static_method<"copyValueOf", jni::ref<java::lang::String>>(data); }
	static jni::ref<java::lang::String> copyValueOf(jni::ref<jni::array<jchar>> data, jint start, jint length) { return call_static_method<"copyValueOf", jni::ref<java::lang::String>>(data, start, length); }
	jboolean endsWith(jni::ref<java::lang::String> suffix) { return call_method<"endsWith", jboolean>(suffix); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jboolean equalsIgnoreCase(jni::ref<java::lang::String> string) { return call_method<"equalsIgnoreCase", jboolean>(string); }
	void getBytes(jint start, jint end, jni::ref<jni::array<jbyte>> data, jint index) { return call_method<"getBytes", void>(start, end, data, index); }
	jni::ref<jni::array<jbyte>> getBytes() { return call_method<"getBytes", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> getBytes(jni::ref<java::lang::String> charsetName) { return call_method<"getBytes", jni::ref<jni::array<jbyte>>>(charsetName); }
	jni::ref<jni::array<jbyte>> getBytes(jni::ref<java::nio::charset::Charset> charset) { return call_method<"getBytes", jni::ref<jni::array<jbyte>>>(charset); }
	void getChars(jint start, jint end, jni::ref<jni::array<jchar>> buffer, jint index) { return call_method<"getChars", void>(start, end, buffer, index); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint indexOf(jint c) { return call_method<"indexOf", jint>(c); }
	jint indexOf(jint c, jint start) { return call_method<"indexOf", jint>(c, start); }
	jint indexOf(jni::ref<java::lang::String> string) { return call_method<"indexOf", jint>(string); }
	jint indexOf(jni::ref<java::lang::String> subString, jint start) { return call_method<"indexOf", jint>(subString, start); }
	jni::ref<java::lang::String> intern() { return call_method<"intern", jni::ref<java::lang::String>>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jint lastIndexOf(jint c) { return call_method<"lastIndexOf", jint>(c); }
	jint lastIndexOf(jint c, jint start) { return call_method<"lastIndexOf", jint>(c, start); }
	jint lastIndexOf(jni::ref<java::lang::String> string) { return call_method<"lastIndexOf", jint>(string); }
	jint lastIndexOf(jni::ref<java::lang::String> subString, jint start) { return call_method<"lastIndexOf", jint>(subString, start); }
	jint length() { return call_method<"length", jint>(); }
	jboolean regionMatches(jint thisStart, jni::ref<java::lang::String> string, jint start, jint length) { return call_method<"regionMatches", jboolean>(thisStart, string, start, length); }
	jboolean regionMatches(jboolean ignoreCase, jint thisStart, jni::ref<java::lang::String> string, jint start, jint length) { return call_method<"regionMatches", jboolean>(ignoreCase, thisStart, string, start, length); }
	jni::ref<java::lang::String> replace(jchar oldChar, jchar newChar) { return call_method<"replace", jni::ref<java::lang::String>>(oldChar, newChar); }
	jni::ref<java::lang::String> replace(jni::ref<java::lang::CharSequence> target, jni::ref<java::lang::CharSequence> replacement) { return call_method<"replace", jni::ref<java::lang::String>>(target, replacement); }
	jboolean startsWith(jni::ref<java::lang::String> prefix) { return call_method<"startsWith", jboolean>(prefix); }
	jboolean startsWith(jni::ref<java::lang::String> prefix, jint start) { return call_method<"startsWith", jboolean>(prefix, start); }
	jni::ref<java::lang::String> substring(jint start) { return call_method<"substring", jni::ref<java::lang::String>>(start); }
	jni::ref<java::lang::String> substring(jint start, jint end) { return call_method<"substring", jni::ref<java::lang::String>>(start, end); }
	jni::ref<jni::array<jchar>> toCharArray() { return call_method<"toCharArray", jni::ref<jni::array<jchar>>>(); }
	jni::ref<java::lang::String> toLowerCase() { return call_method<"toLowerCase", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toLowerCase(jni::ref<java::util::Locale> locale) { return call_method<"toLowerCase", jni::ref<java::lang::String>>(locale); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toUpperCase() { return call_method<"toUpperCase", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toUpperCase(jni::ref<java::util::Locale> locale) { return call_method<"toUpperCase", jni::ref<java::lang::String>>(locale); }
	jni::ref<java::lang::String> trim() { return call_method<"trim", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> valueOf(jni::ref<jni::array<jchar>> data) { return call_static_method<"valueOf", jni::ref<java::lang::String>>(data); }
	static jni::ref<java::lang::String> valueOf(jni::ref<jni::array<jchar>> data, jint start, jint length) { return call_static_method<"valueOf", jni::ref<java::lang::String>>(data, start, length); }
	static jni::ref<java::lang::String> valueOf(jchar value) { return call_static_method<"valueOf", jni::ref<java::lang::String>>(value); }
	static jni::ref<java::lang::String> valueOf(jdouble value) { return call_static_method<"valueOf", jni::ref<java::lang::String>>(value); }
	static jni::ref<java::lang::String> valueOf(jfloat value) { return call_static_method<"valueOf", jni::ref<java::lang::String>>(value); }
	static jni::ref<java::lang::String> valueOf(jint value) { return call_static_method<"valueOf", jni::ref<java::lang::String>>(value); }
	static jni::ref<java::lang::String> valueOf(jlong value) { return call_static_method<"valueOf", jni::ref<java::lang::String>>(value); }
	static jni::ref<java::lang::String> valueOf(jni::ref<java::lang::Object> value) { return call_static_method<"valueOf", jni::ref<java::lang::String>>(value); }
	static jni::ref<java::lang::String> valueOf(jboolean value) { return call_static_method<"valueOf", jni::ref<java::lang::String>>(value); }
	jboolean contentEquals(jni::ref<java::lang::StringBuffer> sb) { return call_method<"contentEquals", jboolean>(sb); }
	jboolean contentEquals(jni::ref<java::lang::CharSequence> cs) { return call_method<"contentEquals", jboolean>(cs); }
	jboolean matches(jni::ref<java::lang::String> regularExpression) { return call_method<"matches", jboolean>(regularExpression); }
	jni::ref<java::lang::String> replaceAll(jni::ref<java::lang::String> regularExpression, jni::ref<java::lang::String> replacement) { return call_method<"replaceAll", jni::ref<java::lang::String>>(regularExpression, replacement); }
	jni::ref<java::lang::String> replaceFirst(jni::ref<java::lang::String> regularExpression, jni::ref<java::lang::String> replacement) { return call_method<"replaceFirst", jni::ref<java::lang::String>>(regularExpression, replacement); }
	jni::ref<jni::array<java::lang::String>> split(jni::ref<java::lang::String> regularExpression) { return call_method<"split", jni::ref<jni::array<java::lang::String>>>(regularExpression); }
	jni::ref<jni::array<java::lang::String>> split(jni::ref<java::lang::String> regularExpression, jint limit) { return call_method<"split", jni::ref<jni::array<java::lang::String>>>(regularExpression, limit); }
	jni::ref<java::lang::CharSequence> subSequence(jint start, jint end) { return call_method<"subSequence", jni::ref<java::lang::CharSequence>>(start, end); }
	jint codePointAt(jint index) { return call_method<"codePointAt", jint>(index); }
	jint codePointBefore(jint index) { return call_method<"codePointBefore", jint>(index); }
	jint codePointCount(jint start, jint end) { return call_method<"codePointCount", jint>(start, end); }
	jboolean contains(jni::ref<java::lang::CharSequence> cs) { return call_method<"contains", jboolean>(cs); }
	jint offsetByCodePoints(jint index, jint codePointOffset) { return call_method<"offsetByCodePoints", jint>(index, codePointOffset); }
	static jni::ref<java::lang::String> format(jni::ref<java::lang::String> format, jni::ref<jni::array<java::lang::Object>> args) { return call_static_method<"format", jni::ref<java::lang::String>>(format, args); }
	static jni::ref<java::lang::String> format(jni::ref<java::util::Locale> locale, jni::ref<java::lang::String> format, jni::ref<jni::array<java::lang::Object>> args) { return call_static_method<"format", jni::ref<java::lang::String>>(locale, format, args); }

protected:

	String(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_STRING
