// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_HEXFORMAT_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_HEXFORMAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class HexFormat; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::HexFormat>
{
	static constexpr fixed_string class_name = "java/util/HexFormat";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_HEXFORMAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_HEXFORMAT)
#define SCAPIX_JAVA_API_JAVA_UTIL_HEXFORMAT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Appendable.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::HexFormat : public jni::object_base<"java/util/HexFormat",
	java::lang::Object>
{
public:

	static jni::ref<java::util::HexFormat> of() { return call_static_method<"of", jni::ref<java::util::HexFormat>>(); }
	static jni::ref<java::util::HexFormat> ofDelimiter(jni::ref<java::lang::String> delimiter) { return call_static_method<"ofDelimiter", jni::ref<java::util::HexFormat>>(delimiter); }
	jni::ref<java::util::HexFormat> withDelimiter(jni::ref<java::lang::String> delimiter) { return call_method<"withDelimiter", jni::ref<java::util::HexFormat>>(delimiter); }
	jni::ref<java::util::HexFormat> withPrefix(jni::ref<java::lang::String> prefix) { return call_method<"withPrefix", jni::ref<java::util::HexFormat>>(prefix); }
	jni::ref<java::util::HexFormat> withSuffix(jni::ref<java::lang::String> suffix) { return call_method<"withSuffix", jni::ref<java::util::HexFormat>>(suffix); }
	jni::ref<java::util::HexFormat> withUpperCase() { return call_method<"withUpperCase", jni::ref<java::util::HexFormat>>(); }
	jni::ref<java::util::HexFormat> withLowerCase() { return call_method<"withLowerCase", jni::ref<java::util::HexFormat>>(); }
	jni::ref<java::lang::String> delimiter() { return call_method<"delimiter", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> prefix() { return call_method<"prefix", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> suffix() { return call_method<"suffix", jni::ref<java::lang::String>>(); }
	jboolean isUpperCase() { return call_method<"isUpperCase", jboolean>(); }
	jni::ref<java::lang::String> formatHex(jni::ref<jni::array<jbyte>> bytes) { return call_method<"formatHex", jni::ref<java::lang::String>>(bytes); }
	jni::ref<java::lang::String> formatHex(jni::ref<jni::array<jbyte>> bytes, jint fromIndex, jint toIndex) { return call_method<"formatHex", jni::ref<java::lang::String>>(bytes, fromIndex, toIndex); }
	jni::ref<java::lang::Appendable> formatHex(jni::ref<java::lang::Appendable> out, jni::ref<jni::array<jbyte>> bytes) { return call_method<"formatHex", jni::ref<java::lang::Appendable>>(out, bytes); }
	jni::ref<java::lang::Appendable> formatHex(jni::ref<java::lang::Appendable> out, jni::ref<jni::array<jbyte>> bytes, jint fromIndex, jint toIndex) { return call_method<"formatHex", jni::ref<java::lang::Appendable>>(out, bytes, fromIndex, toIndex); }
	jni::ref<jni::array<jbyte>> parseHex(jni::ref<java::lang::CharSequence> string) { return call_method<"parseHex", jni::ref<jni::array<jbyte>>>(string); }
	jni::ref<jni::array<jbyte>> parseHex(jni::ref<java::lang::CharSequence> string, jint fromIndex, jint toIndex) { return call_method<"parseHex", jni::ref<jni::array<jbyte>>>(string, fromIndex, toIndex); }
	jni::ref<jni::array<jbyte>> parseHex(jni::ref<jni::array<jchar>> chars, jint fromIndex, jint toIndex) { return call_method<"parseHex", jni::ref<jni::array<jbyte>>>(chars, fromIndex, toIndex); }
	jchar toLowHexDigit(jint value) { return call_method<"toLowHexDigit", jchar>(value); }
	jchar toHighHexDigit(jint value) { return call_method<"toHighHexDigit", jchar>(value); }
	jni::ref<java::lang::Appendable> toHexDigits(jni::ref<java::lang::Appendable> out, jbyte value) { return call_method<"toHexDigits", jni::ref<java::lang::Appendable>>(out, value); }
	jni::ref<java::lang::String> toHexDigits(jbyte value) { return call_method<"toHexDigits", jni::ref<java::lang::String>>(value); }
	jni::ref<java::lang::String> toHexDigits(jchar value) { return call_method<"toHexDigits", jni::ref<java::lang::String>>(value); }
	jni::ref<java::lang::String> toHexDigits(jshort value) { return call_method<"toHexDigits", jni::ref<java::lang::String>>(value); }
	jni::ref<java::lang::String> toHexDigits(jint value) { return call_method<"toHexDigits", jni::ref<java::lang::String>>(value); }
	jni::ref<java::lang::String> toHexDigits(jlong value) { return call_method<"toHexDigits", jni::ref<java::lang::String>>(value); }
	jni::ref<java::lang::String> toHexDigits(jlong value, jint p2) { return call_method<"toHexDigits", jni::ref<java::lang::String>>(value, p2); }
	static jboolean isHexDigit(jint ch) { return call_static_method<"isHexDigit", jboolean>(ch); }
	static jint fromHexDigit(jint ch) { return call_static_method<"fromHexDigit", jint>(ch); }
	static jint fromHexDigits(jni::ref<java::lang::CharSequence> string) { return call_static_method<"fromHexDigits", jint>(string); }
	static jint fromHexDigits(jni::ref<java::lang::CharSequence> string, jint fromIndex, jint toIndex) { return call_static_method<"fromHexDigits", jint>(string, fromIndex, toIndex); }
	static jlong fromHexDigitsToLong(jni::ref<java::lang::CharSequence> string) { return call_static_method<"fromHexDigitsToLong", jlong>(string); }
	static jlong fromHexDigitsToLong(jni::ref<java::lang::CharSequence> string, jint fromIndex, jint toIndex) { return call_static_method<"fromHexDigitsToLong", jlong>(string, fromIndex, toIndex); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	HexFormat(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_HEXFORMAT