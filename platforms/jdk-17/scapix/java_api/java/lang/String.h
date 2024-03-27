// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Comparable.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/constant/Constable.h>
#include <scapix/java_api/java/lang/constant/ConstantDesc.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_STRING_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_STRING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class String; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::String>
{
	static constexpr fixed_string class_name = "java/lang/String";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable, scapix::java_api::java::lang::Comparable, scapix::java_api::java::lang::CharSequence, scapix::java_api::java::lang::constant::Constable, scapix::java_api::java::lang::constant::ConstantDesc>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_STRING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_STRING)
#define SCAPIX_JAVA_API_JAVA_LANG_STRING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Iterable.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/java/lang/StringBuilder.h>
#include <scapix/java_api/java/lang/invoke/MethodHandles_Lookup.h>
#include <scapix/java_api/java/nio/charset/Charset.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/java/util/function/Function.h>
#include <scapix/java_api/java/util/stream/IntStream.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::String : public jni::object_base<"java/lang/String",
	java::lang::Object,
	java::io::Serializable,
	java::lang::Comparable,
	java::lang::CharSequence,
	java::lang::constant::Constable,
	java::lang::constant::ConstantDesc>
{
public:

	static jni::ref<java::util::Comparator> CASE_INSENSITIVE_ORDER() { return get_static_field<"CASE_INSENSITIVE_ORDER", jni::ref<java::util::Comparator>>(); }

	static jni::ref<java::lang::String> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> new_object(jni::ref<java::lang::String> original) { return base_::new_object(original); }
	static jni::ref<java::lang::String> new_object(jni::ref<jni::array<jchar>> value) { return base_::new_object(value); }
	static jni::ref<java::lang::String> new_object(jni::ref<jni::array<jchar>> value, jint offset, jint count) { return base_::new_object(value, offset, count); }
	static jni::ref<java::lang::String> new_object(jni::ref<jni::array<jint>> codePoints, jint offset, jint count) { return base_::new_object(codePoints, offset, count); }
	static jni::ref<java::lang::String> new_object(jni::ref<jni::array<jbyte>> ascii, jint hibyte, jint offset, jint count) { return base_::new_object(ascii, hibyte, offset, count); }
	static jni::ref<java::lang::String> new_object(jni::ref<jni::array<jbyte>> ascii, jint hibyte) { return base_::new_object(ascii, hibyte); }
	static jni::ref<java::lang::String> new_object(jni::ref<jni::array<jbyte>> bytes, jint offset, jint length, jni::ref<java::lang::String> charsetName) { return base_::new_object(bytes, offset, length, charsetName); }
	static jni::ref<java::lang::String> new_object(jni::ref<jni::array<jbyte>> bytes, jint offset, jint length, jni::ref<java::nio::charset::Charset> charset) { return base_::new_object(bytes, offset, length, charset); }
	static jni::ref<java::lang::String> new_object(jni::ref<jni::array<jbyte>> bytes, jni::ref<java::lang::String> charsetName) { return base_::new_object(bytes, charsetName); }
	static jni::ref<java::lang::String> new_object(jni::ref<jni::array<jbyte>> bytes, jni::ref<java::nio::charset::Charset> charset) { return base_::new_object(bytes, charset); }
	static jni::ref<java::lang::String> new_object(jni::ref<jni::array<jbyte>> bytes, jint offset, jint length) { return base_::new_object(bytes, offset, length); }
	static jni::ref<java::lang::String> new_object(jni::ref<jni::array<jbyte>> bytes) { return base_::new_object(bytes); }
	static jni::ref<java::lang::String> new_object(jni::ref<java::lang::StringBuffer> buffer) { return base_::new_object(buffer); }
	static jni::ref<java::lang::String> new_object(jni::ref<java::lang::StringBuilder> builder) { return base_::new_object(builder); }
	jint length() { return call_method<"length", jint>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jchar charAt(jint index) { return call_method<"charAt", jchar>(index); }
	jint codePointAt(jint index) { return call_method<"codePointAt", jint>(index); }
	jint codePointBefore(jint index) { return call_method<"codePointBefore", jint>(index); }
	jint codePointCount(jint beginIndex, jint endIndex) { return call_method<"codePointCount", jint>(beginIndex, endIndex); }
	jint offsetByCodePoints(jint index, jint codePointOffset) { return call_method<"offsetByCodePoints", jint>(index, codePointOffset); }
	void getChars(jint srcBegin, jint srcEnd, jni::ref<jni::array<jchar>> dst, jint dstBegin) { return call_method<"getChars", void>(srcBegin, srcEnd, dst, dstBegin); }
	void getBytes(jint srcBegin, jint srcEnd, jni::ref<jni::array<jbyte>> dst, jint dstBegin) { return call_method<"getBytes", void>(srcBegin, srcEnd, dst, dstBegin); }
	jni::ref<jni::array<jbyte>> getBytes(jni::ref<java::lang::String> charsetName) { return call_method<"getBytes", jni::ref<jni::array<jbyte>>>(charsetName); }
	jni::ref<jni::array<jbyte>> getBytes(jni::ref<java::nio::charset::Charset> charset) { return call_method<"getBytes", jni::ref<jni::array<jbyte>>>(charset); }
	jni::ref<jni::array<jbyte>> getBytes() { return call_method<"getBytes", jni::ref<jni::array<jbyte>>>(); }
	jboolean equals(jni::ref<java::lang::Object> anObject) { return call_method<"equals", jboolean>(anObject); }
	jboolean contentEquals(jni::ref<java::lang::StringBuffer> sb) { return call_method<"contentEquals", jboolean>(sb); }
	jboolean contentEquals(jni::ref<java::lang::CharSequence> cs) { return call_method<"contentEquals", jboolean>(cs); }
	jboolean equalsIgnoreCase(jni::ref<java::lang::String> anotherString) { return call_method<"equalsIgnoreCase", jboolean>(anotherString); }
	jint compareTo(jni::ref<java::lang::String> anotherString) { return call_method<"compareTo", jint>(anotherString); }
	jint compareToIgnoreCase(jni::ref<java::lang::String> str) { return call_method<"compareToIgnoreCase", jint>(str); }
	jboolean regionMatches(jint toffset, jni::ref<java::lang::String> other, jint ooffset, jint len) { return call_method<"regionMatches", jboolean>(toffset, other, ooffset, len); }
	jboolean regionMatches(jboolean ignoreCase, jint toffset, jni::ref<java::lang::String> other, jint ooffset, jint len) { return call_method<"regionMatches", jboolean>(ignoreCase, toffset, other, ooffset, len); }
	jboolean startsWith(jni::ref<java::lang::String> prefix, jint toffset) { return call_method<"startsWith", jboolean>(prefix, toffset); }
	jboolean startsWith(jni::ref<java::lang::String> prefix) { return call_method<"startsWith", jboolean>(prefix); }
	jboolean endsWith(jni::ref<java::lang::String> suffix) { return call_method<"endsWith", jboolean>(suffix); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint indexOf(jint ch) { return call_method<"indexOf", jint>(ch); }
	jint indexOf(jint ch, jint fromIndex) { return call_method<"indexOf", jint>(ch, fromIndex); }
	jint lastIndexOf(jint ch) { return call_method<"lastIndexOf", jint>(ch); }
	jint lastIndexOf(jint ch, jint fromIndex) { return call_method<"lastIndexOf", jint>(ch, fromIndex); }
	jint indexOf(jni::ref<java::lang::String> str) { return call_method<"indexOf", jint>(str); }
	jint indexOf(jni::ref<java::lang::String> str, jint fromIndex) { return call_method<"indexOf", jint>(str, fromIndex); }
	jint lastIndexOf(jni::ref<java::lang::String> str) { return call_method<"lastIndexOf", jint>(str); }
	jint lastIndexOf(jni::ref<java::lang::String> str, jint fromIndex) { return call_method<"lastIndexOf", jint>(str, fromIndex); }
	jni::ref<java::lang::String> substring(jint beginIndex) { return call_method<"substring", jni::ref<java::lang::String>>(beginIndex); }
	jni::ref<java::lang::String> substring(jint beginIndex, jint endIndex) { return call_method<"substring", jni::ref<java::lang::String>>(beginIndex, endIndex); }
	jni::ref<java::lang::CharSequence> subSequence(jint beginIndex, jint endIndex) { return call_method<"subSequence", jni::ref<java::lang::CharSequence>>(beginIndex, endIndex); }
	jni::ref<java::lang::String> concat(jni::ref<java::lang::String> str) { return call_method<"concat", jni::ref<java::lang::String>>(str); }
	jni::ref<java::lang::String> replace(jchar oldChar, jchar newChar) { return call_method<"replace", jni::ref<java::lang::String>>(oldChar, newChar); }
	jboolean matches(jni::ref<java::lang::String> regex) { return call_method<"matches", jboolean>(regex); }
	jboolean contains(jni::ref<java::lang::CharSequence> s) { return call_method<"contains", jboolean>(s); }
	jni::ref<java::lang::String> replaceFirst(jni::ref<java::lang::String> regex, jni::ref<java::lang::String> replacement) { return call_method<"replaceFirst", jni::ref<java::lang::String>>(regex, replacement); }
	jni::ref<java::lang::String> replaceAll(jni::ref<java::lang::String> regex, jni::ref<java::lang::String> replacement) { return call_method<"replaceAll", jni::ref<java::lang::String>>(regex, replacement); }
	jni::ref<java::lang::String> replace(jni::ref<java::lang::CharSequence> target, jni::ref<java::lang::CharSequence> replacement) { return call_method<"replace", jni::ref<java::lang::String>>(target, replacement); }
	jni::ref<jni::array<java::lang::String>> split(jni::ref<java::lang::String> regex, jint limit) { return call_method<"split", jni::ref<jni::array<java::lang::String>>>(regex, limit); }
	jni::ref<jni::array<java::lang::String>> split(jni::ref<java::lang::String> regex) { return call_method<"split", jni::ref<jni::array<java::lang::String>>>(regex); }
	static jni::ref<java::lang::String> join(jni::ref<java::lang::CharSequence> delimiter, jni::ref<jni::array<java::lang::CharSequence>> elements) { return call_static_method<"join", jni::ref<java::lang::String>>(delimiter, elements); }
	static jni::ref<java::lang::String> join(jni::ref<java::lang::CharSequence> delimiter, jni::ref<java::lang::Iterable> elements) { return call_static_method<"join", jni::ref<java::lang::String>>(delimiter, elements); }
	jni::ref<java::lang::String> toLowerCase(jni::ref<java::util::Locale> locale) { return call_method<"toLowerCase", jni::ref<java::lang::String>>(locale); }
	jni::ref<java::lang::String> toLowerCase() { return call_method<"toLowerCase", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toUpperCase(jni::ref<java::util::Locale> locale) { return call_method<"toUpperCase", jni::ref<java::lang::String>>(locale); }
	jni::ref<java::lang::String> toUpperCase() { return call_method<"toUpperCase", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> trim() { return call_method<"trim", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> strip() { return call_method<"strip", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> stripLeading() { return call_method<"stripLeading", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> stripTrailing() { return call_method<"stripTrailing", jni::ref<java::lang::String>>(); }
	jboolean isBlank() { return call_method<"isBlank", jboolean>(); }
	jni::ref<java::util::stream::Stream> lines() { return call_method<"lines", jni::ref<java::util::stream::Stream>>(); }
	jni::ref<java::lang::String> indent(jint n) { return call_method<"indent", jni::ref<java::lang::String>>(n); }
	jni::ref<java::lang::String> stripIndent() { return call_method<"stripIndent", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> translateEscapes() { return call_method<"translateEscapes", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> transform(jni::ref<java::util::function::Function> f) { return call_method<"transform", jni::ref<java::lang::Object>>(f); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::stream::IntStream> chars() { return call_method<"chars", jni::ref<java::util::stream::IntStream>>(); }
	jni::ref<java::util::stream::IntStream> codePoints() { return call_method<"codePoints", jni::ref<java::util::stream::IntStream>>(); }
	jni::ref<jni::array<jchar>> toCharArray() { return call_method<"toCharArray", jni::ref<jni::array<jchar>>>(); }
	static jni::ref<java::lang::String> format(jni::ref<java::lang::String> format, jni::ref<jni::array<java::lang::Object>> args) { return call_static_method<"format", jni::ref<java::lang::String>>(format, args); }
	static jni::ref<java::lang::String> format(jni::ref<java::util::Locale> l, jni::ref<java::lang::String> format, jni::ref<jni::array<java::lang::Object>> args) { return call_static_method<"format", jni::ref<java::lang::String>>(l, format, args); }
	jni::ref<java::lang::String> formatted(jni::ref<jni::array<java::lang::Object>> args) { return call_method<"formatted", jni::ref<java::lang::String>>(args); }
	static jni::ref<java::lang::String> valueOf(jni::ref<java::lang::Object> obj) { return call_static_method<"valueOf", jni::ref<java::lang::String>>(obj); }
	static jni::ref<java::lang::String> valueOf(jni::ref<jni::array<jchar>> data) { return call_static_method<"valueOf", jni::ref<java::lang::String>>(data); }
	static jni::ref<java::lang::String> valueOf(jni::ref<jni::array<jchar>> data, jint offset, jint count) { return call_static_method<"valueOf", jni::ref<java::lang::String>>(data, offset, count); }
	static jni::ref<java::lang::String> copyValueOf(jni::ref<jni::array<jchar>> data, jint offset, jint count) { return call_static_method<"copyValueOf", jni::ref<java::lang::String>>(data, offset, count); }
	static jni::ref<java::lang::String> copyValueOf(jni::ref<jni::array<jchar>> data) { return call_static_method<"copyValueOf", jni::ref<java::lang::String>>(data); }
	static jni::ref<java::lang::String> valueOf(jboolean b) { return call_static_method<"valueOf", jni::ref<java::lang::String>>(b); }
	static jni::ref<java::lang::String> valueOf(jchar c) { return call_static_method<"valueOf", jni::ref<java::lang::String>>(c); }
	static jni::ref<java::lang::String> valueOf(jint i) { return call_static_method<"valueOf", jni::ref<java::lang::String>>(i); }
	static jni::ref<java::lang::String> valueOf(jlong l) { return call_static_method<"valueOf", jni::ref<java::lang::String>>(l); }
	static jni::ref<java::lang::String> valueOf(jfloat f) { return call_static_method<"valueOf", jni::ref<java::lang::String>>(f); }
	static jni::ref<java::lang::String> valueOf(jdouble d) { return call_static_method<"valueOf", jni::ref<java::lang::String>>(d); }
	jni::ref<java::lang::String> intern() { return call_method<"intern", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> repeat(jint count) { return call_method<"repeat", jni::ref<java::lang::String>>(count); }
	jni::ref<java::util::Optional> describeConstable() { return call_method<"describeConstable", jni::ref<java::util::Optional>>(); }
	jni::ref<java::lang::String> resolveConstantDesc(jni::ref<java::lang::invoke::MethodHandles_Lookup> lookup) { return call_method<"resolveConstantDesc", jni::ref<java::lang::String>>(lookup); }

protected:

	String(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_STRING
